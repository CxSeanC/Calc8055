FROM ubuntu:22.04
RUN apt update && apt install -y build-essential
WORKDIR /app
COPY . .
CMD ["./vulncalc"]