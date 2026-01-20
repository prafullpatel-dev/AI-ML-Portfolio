import streamlit as st
import pandas as pd
from extractor import extract
# ------------------ Extraction Function ------------------
def extract_financial_data(text):
    """
    This function will later call your LLM API.
    For now, it returns dummy extracted values.
    Replace the logic inside with LLM response parsing.
    """

    # ---- PLACEHOLDER (replace with LLM output) ----
    extracted_data = {
        "revenue_expected": "1200 Cr",
        "revenue_actual": "1350 Cr",
        "eps_expected": "12.5",
        "eps_actual": "14.2"
    }

    return extracted_data


# ------------------ Streamlit UI ------------------

st.title("Financial data extractor")

text = st.text_area("Enter financial paragraph:")

if st.button("Extract"):

    if text.strip() == "":
        st.warning("Please enter some text.")
    else:
        result = extract(text)

        table_data = {
            "Measure": ["Revenue", "EPS"],
            "Expected": [result["revenue_expected"], result["eps_expected"]],
            "Actual": [result["revenue_actual"], result["eps_actual"]],
        }

        df = pd.DataFrame(table_data)

        st.subheader("Extracted Financial Data")
        st.table(df)
