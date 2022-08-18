备份


// 主题调色板

// 原主题预设变量
// 颜色
// $accentColor = #3eaf7c
// $textColor = #2c3e50
// $borderColor = #eaecef
// $codeBgColor = #282c34
// $arrowBgColor = #ccc
// $badgeTipColor = #42b983
// $badgeWarningColor = darken(#ffe564, 35%)
// $badgeErrorColor = #DA5961
// 布局
// $navbarHeight = 3.6rem
// $sidebarWidth = 20rem
// $contentWidth = 740px
// $homePageWidth = 960px
// 代码块
// $lineNumbersWrapperWidth = 3.5rem


@require './code-theme'

//***vdoing主题-变量***//

// 颜色

$bannerTextColor = #fff // 首页banner区(博客标题)文本颜色
$accentColor = #11A8CD
$activeColor = #ff5722
$arrowBgColor = #ccc
// 放弃使用
// $badgeTipColor = #42b983
// $badgeWarningColor = darken(#ffe564, 35%)
// $badgeErrorColor = #DA5961

// 布局
$navbarHeight = 3.6rem
$sidebarWidth = 18rem
$contentWidth = 860px
$homePageWidth = 1100px
$rightMenuWidth = 230px // 右侧菜单

// 代码块
$lineNumbersWrapperWidth = 2.5rem

// 浅色模式
.theme-mode-light
  --bodyBg: #858585
  --mainBg: #ffffff8f
  --sidebarBg: rgba(255,255,255,.8)
  --blurBg: rgba(255,255,255,.9)
  --customBlockBg: #f1f1f1
  --textColor: #00323c
  --textLightenColor: #0085AD
  --borderColor: rgba(0,0,0,.12)
  --codeBg: #f6f6f6
  --codeColor: #525252
  --linkColor: #ffffff
  codeThemeLight()

// 深色模式
.theme-mode-dark
  --bodyBg: rgb(39,39,43)
  --mainBg: #1e1e22bd
  --sidebarBg: rgba(30,30,34,.8)
  --blurBg: rgba(30,30,34,.8)
  --customBlockBg: rgb(39,39,43)
  --textColor: rgb(198 198 198)
  --textLightenColor: #00a4d6
  // --borderColor: #2C2C3A
  --borderColor: #30363d
  --codeBg: #252526
  --codeColor: #fff
  --linkColor: #1e1e22
  codeThemeDark()

// 阅读模式
.theme-mode-read
  --bodyBg: rgb(236,236,204)
  --mainBg: rgba(245,245,213,1)
  --sidebarBg: rgba(245,245,213,.8)
  --blurBg: rgba(245,245,213,.9)
  --customBlockBg: rgb(236,236,204)
  --textColor: #704214
  --textLightenColor: #996633
  --borderColor: rgba(0,0,0,.15)
  --codeBg: #282c34
  --codeColor: #fff
  codeThemeDark()

// 背景色整体一致
.theme-style-line.theme-mode-light
  --bodyBg: rgba(255,255,255,1)
.theme-style-line.theme-mode-dark
  --bodyBg: rgba(30,30,34,1)
.theme-style-line.theme-mode-read
  --bodyBg: rgba(245,245,213,1)
