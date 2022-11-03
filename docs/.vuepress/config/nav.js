export default [
    { text: '首页', link: '/' },
    {
      text: 'Docs',
      //link: '/docs/', //目录页链接，此处link是vdoing主题新增的配置项，有二级导航时，可以点击一级导航跳到目录页
      items: [
        // 说明：以下所有link的值只是在相应md文件头部定义的永久链接（不是什么特殊编码）。另外，注意结尾是有斜杠的
        {
          text: '',
          items: [
            { text: 'SwiftUI', link: '/pages/011a00/' },
            { text: 'Python', link: '/pages/358811/' },

          ],
        },
      ],
    },
    {
        text: 'Wiki',
        //link: '/docs/', //目录页链接，此处link是vdoing主题新增的配置项，有二级导航时，可以点击一级导航跳到目录页
        items: [
          // 说明：以下所有link的值只是在相应md文件头部定义的永久链接（不是什么特殊编码）。另外，注意结尾是有斜杠的
          {
            text: '',
            items: [
              { text: 'VSCode', link: '/pages/b15c01/' },
              { text: 'Git', link: '/pages/169b33/' }
            ],
          },
          {
            text: '',
            items: [
              { text: 'Linux', link: '/pages/3c6974/' },
  
            ],
          },

        ],
    },
    {
      text: '音视频',
      items: [
        { text: 'FFmpeg', link: '/pages/07bf5a/' },
        { text: 'x264', link: '/pages/766f2c/' }
      ],
    },
    {
      text: 'Books',
      items: [
        { text: '《计算机组成与设计》', link: '/pages/0bb29a/' },
        { text: '《程序员的自我修养》', link: '/pages/1bb0d6/' }
      ],
    },
    {
      text: '索引',
      link: '/archives/',
      items: [
        {
          text: '',
          items: [
            { text: '归档', link: '/archives/' },
          ],
        },
        {
          text: '',
          items: [
            { text: '分类', link: '/categories/' },
          ],
        },
        {
          text: '',
          items: [
            { text: '标签', link: '/tags/' },
          ],
        }
      ],
    },
    {
      text: '导航',
      link: '/favorite/website/',
      items: [
        {
          text: '',
          items: [
            { text: '网站', link: '/favorite/website/' },
          ],
        },
        {
          text: '',
          items: [
            { text: '软件', link: '/favorite/software/' },
          ],
        },
        // {
        //   text: '',
        //   items: [
        //     { text: '学习', link: '/favorite/study/' },
        //   ],
        // },
      ],
    },
    { text: '关于', link: '/about/' },
  ]