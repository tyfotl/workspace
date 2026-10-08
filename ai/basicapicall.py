import os

from openai import OpenAI

client = OpenAI(
    base_url="https://openrouter.ai/api/v1",
    api_key=os.environ.get("OPENROUTER_API_KEY")
)

response = client.chat.completions.create(
    model="openrouter/free",
    messages=[
        {"role": "user", "content": "Hello! Give me a one-sentence test response."},
        {"role": "system", "instruction": "Reply like a cat"}
    ]
)

print(response.choices[0].message.content)
