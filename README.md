# Guess Number 猜數字遊戲系統

![version](https://img.shields.io/badge/version-v1.0-blue)
![language](https://img.shields.io/badge/language-C-lightgrey)
![status](https://img.shields.io/badge/status-stable-green)

版本：v1.0

這是一個使用 C 語言開發的 CLI（終端機）互動小遊戲，  
玩家需要在 1 到 100 之間猜出正確的隨機數字，系統會提供「太大 / 太小 / 很接近」等提示。

---

## 功能特色
- 整數輸入防呆（非整數輸入會提示並重新輸入）
- 提示機制（太大、太小、非常接近）
- 遊戲循環（猜對後可選擇繼續或結束）
- 猜測次數統計
- 模組化架構：分離 `.h / .c` 檔案
- 使用 `enum` 管理回傳碼與選單狀態
- 跨平台支援清除畫面功能（Windows / Linux）

---

## 使用方式

1. 編譯程式（以 GCC 為例）：
   ```bash
   gcc main.c guess_game.c -o guessgame
   ```

2. 執行程式：
   ```bash
   ./guessgame
   ```

---

## 版本紀錄

### v1.0 初版
- 建立基本猜數字邏輯流程
- 使用亂數產生器產生答案
- 判斷玩家輸入是否猜中，並提示太大 / 太小
- 加入錯誤防呆：非整數輸入不會使程式當機
- 使用 `enum` 管理選單與回傳碼
- 模組化拆分程式為 `main.c / guess_game.c / guess_game.h`
- 加入跨平台 `clear()` 與 `pause()` 控制互動流暢度

---

## 開發者筆記

本專案以模組化設計為核心，提升可讀性與擴充性。主流程簡潔、細節由獨立函式模組實作。

### 函式一覽：
- `get_random_number_time()`：取得 1~100 隨機整數
- `input_number()`：讀取使用者輸入並防呆處理
- `determine_input_number()`：判斷猜測結果與回傳狀態
- `show_choose()`：結束 / 繼續選單控制模組
- `pause()` / `clear()`：終端畫面控制
- `enum Menu` / `enum ErrorCode`：定義狀態回傳代碼，提高可讀性

---

## 作者

李承恩 / Alan Lee  
學號：1113415026  
班級：電信一甲

---

> 📦 專案檔案結構：

```
GuessGameProject/
├── main.c            → 主控制流程
├── guess_game.c      → 邏輯模組
├── guess_game.h      → 函式與 enum 宣告
├── README.md         → 本說明文件
```
