    /*
    Flaticon icon font: Flaticon
    Creation date: 15/04/2019 13:07
    */

    @font-face {
  font-family: "Flaticon";
  src: url("./Flaticon.eot");
  src: url("./Flaticon.eot?#iefix") format("embedded-opentype"),
       url("./Flaticon.woff2") format("woff2"),
       url("./Flaticon.woff") format("woff"),
       url("./Flaticon.ttf") format("truetype"),
       url("./Flaticon.svg#Flaticon") format("svg");
  font-weight: normal;
  font-style: normal;
}

@media screen and (-webkit-min-device-pixel-ratio:0) {
  @font-face {
    font-family: "Flaticon";
    src: url("./Flaticon.svg#Flaticon") format("svg");
  }
}

    .fi:before{
        display: inline-block;
  font-family: "Flaticon";
  font-style: normal;
  font-weight: normal;
  font-variant: normal;
  line-height: 1;
  text-decoration: inherit;
  text-rendering: optimizeLegibility;
  text-transform: none;
  -moz-osx-font-smoothing: grayscale;
  -webkit-font-smoothing: antialiased;
  font-smoothing: antialiased;
    }

    .flaticon-adoption:before { content: "\f100"; }
.flaticon-charity:before { content: "\f101"; }
.flaticon-volunteer:before { content: "\f102"; }
.flaticon-open-book:before { content: "\f103"; }
    
    $font-Flaticon-adoption: "\f100";
    $font-Flaticon-charity: "\f101";
    $font-Flaticon-volunteer: "\f102";
    $font-Flaticon-open-book: "\f103";