<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,393);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",433,491);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",509,541);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",646,681);
$z[6][4]['filename']="head.htm";
$z[7]=Array("arclistsg","\r\n         <li><a href=\"[field:arcurl/]\"><img src='[field:litpic/]' width='124px' height='94px'/><span class=\"title\">[field:title/]</span></a></li>\r\n         ",882,1104);
$z[7][4]['row']="5";
$z[7][4]['orderby']="pubdate";
$z[7][4]['flag']="p";
$z[8]=Array("channelartlist","\r\n   <dl class=\"tbox\">\r\n        <dt><strong><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></strong><span class=\"more\"><a href=\"{dede:field name='typeurl'/}\">更多...</a></span></dt>\r\n        <dd>\r\n          <ul class=\"d1 ico3\">\r\n          {dede:arclistsg titlelen='60' row='8'}\r\n            <li><a href=\"[field:arcurl /]\">[field:title /]</a></li>\r\n          {/dede:arclistsg}\r\n          </ul>\r\n        </dd>\r\n    </dl>\r\n",1191,1679);
$z[9]=Array("channel","\r\n		<li><a href='[field:typeurl/]'>[field:typename/]</a></li>",1908,2087);
$z[9][4]['type']="son";
$z[9][4]['currentstyle']="<li><a href='~typelink~' class='thisclass'>~typename~</a></li>";
$z[10]=Array("infoguide","\r\n                    <form name='infoguide' method='get' action='/plus/list.php'>\r\n                    [field:nativeplace /]\r\n                    [field:infotype /]\r\n                    <input type='hidden' name='tid' value='[field:typeid /]' />\r\n                    <input type='hidden' name='channelid' value='-8' />\r\n                    <span class='infosearchtxt'>关键字：</span><span><input type='text' name='keyword' value='' class=\"ipt-txt\" /></span>\r\n                    <input type='submit' value='搜索信息' class=\"btn-2\" style='cursor:pointer' />\r\n                    &nbsp;\r\n                    <input type='button' value='发布信息' class=\"btn-2\" \r\n                    onclick=\"location='/member/archives_sg_add.php?channelid=-8';\" style='cursor:pointer' />\r\n                    </form>\r\n                ",2263,3112);
$z[11]=Array("arclistsg","\r\n          	 <li><span>[[field:typename/]]</span><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n             ",3299,3465);
$z[11][4]['titlelen']="42";
$z[11][4]['row']="12";
$z[12]=Array("myad","",3575,3606);
$z[12][4]['name']="listRtPicAD";
$z[13]=Array("arclistsg","\r\n                     <li><span>[[field:typename/]]</span><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n                    ",3766,3950);
$z[13][4]['row']="12";
$z[13][4]['orderby']="click";
$z[14]=Array("myad","",4085,4118);
$z[14][4]['name']="innerfooterAD";
$z[15]=Array("include","",4126,4163);
$z[15][4]['filename']="footer.htm";

?>