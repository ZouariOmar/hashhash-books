# Install "llama bin" for linux V:b4404
wget https://github.com/ggerganov/llama.cpp/releases/download/b4404/llama-b4404-bin-ubuntu-x64.zip

# Qwen1.5-4B-Chat-GGUF Models
firefox https://huggingface.co/Qwen/Qwen1.5-4B-Chat-GGUF/tree/main

# Install "qwen1_5-4b-chat-q2_k.gguf" model (1.6G)
wget https://huggingface.co/Qwen/Qwen1.5-4B-Chat-GGUF/resolve/main/qwen1_5-4b-chat-q2_k.gguf?download=true

# Install "gemma-1.1-7b-it.Q4_K_M.gguf" model (Recommended to use it with llama.cpp cli) 
wget https://huggingface.co/ggml-org/gemma-1.1-7b-it-Q4_K_M-GGUF/resolve/main/gemma-1.1-7b-it.Q4_K_M.gguf?download=true
