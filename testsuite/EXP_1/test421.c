
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x11 = INT16_MIN;
int64_t x32 = -6433728668LL;
int8_t x41 = INT8_MIN;
int8_t x44 = INT8_MIN;
int32_t x45 = -1;
int8_t x48 = 15;
uint32_t x53 = 705105U;
int16_t x54 = -14776;
uint8_t x67 = 49U;
uint32_t x68 = UINT32_MAX;
uint32_t x70 = 19U;
volatile uint32_t t9 = 494855589U;
int32_t t10 = 1;
uint32_t x80 = 223U;
int64_t x84 = 174413920LL;
static int64_t t12 = 0LL;
uint64_t x117 = 665804645138724LLU;
int32_t x127 = -1;
uint32_t t18 = 13552269U;
int16_t x129 = -1;
volatile int8_t x132 = -1;
volatile int32_t t19 = 194736425;
int16_t x136 = INT16_MIN;
static volatile uint32_t x144 = 259199U;
volatile uint32_t t21 = 0U;
int32_t x145 = 54;
static uint8_t x171 = 5U;
volatile int16_t x180 = -1;
uint16_t x224 = UINT16_MAX;
int64_t x234 = 791242431995383LL;
int16_t x239 = -1;
int64_t x261 = -1LL;
uint64_t t34 = 123566292418141642LLU;
uint64_t x267 = 160331489008751LLU;
int32_t x268 = 33;
uint16_t x270 = 31U;
static volatile int8_t x271 = -1;
int8_t x272 = 2;
static int8_t x288 = -2;
int8_t x293 = -1;
int8_t x294 = -1;
volatile uint64_t t39 = 444LLU;
volatile uint64_t t40 = 21LLU;
int16_t x317 = 3;
static int64_t x329 = -1923798125LL;
volatile int16_t x330 = -278;
uint16_t x332 = UINT16_MAX;
int32_t x333 = 7;
int16_t x338 = -1;
uint8_t x340 = 7U;
uint8_t x341 = 3U;
volatile int32_t x342 = -516842;
volatile int8_t x343 = INT8_MIN;
uint8_t x348 = 98U;
static uint64_t t47 = 827773366277507LLU;
uint16_t x353 = 751U;
int16_t x354 = -1;
uint8_t x356 = 63U;
volatile int64_t x359 = 485239629192LL;
volatile uint64_t x367 = 260LLU;
uint8_t x371 = 0U;
volatile int32_t t51 = -5;
volatile uint64_t x378 = UINT64_MAX;
static uint64_t x380 = 250832LLU;
int64_t x387 = INT64_MAX;
uint16_t x393 = UINT16_MAX;
volatile int8_t x396 = -14;
volatile uint16_t x398 = 8064U;
static uint32_t x408 = 1439913751U;
int8_t x418 = 0;
static int16_t x421 = -1;
static int8_t x422 = 0;
int32_t x437 = INT32_MIN;
int32_t x440 = INT32_MIN;
int8_t x467 = 1;
static int16_t x477 = INT16_MIN;
int64_t x489 = -1LL;
static int32_t x505 = 10374;
int16_t x507 = -72;
static volatile uint32_t t71 = 0U;
static volatile int32_t x530 = -5;
volatile uint64_t x537 = 4LLU;
uint64_t t76 = 693LLU;
int8_t x542 = INT8_MIN;
volatile int64_t t77 = 1320831584260417245LL;
uint16_t x550 = 0U;
uint32_t x573 = 2051884U;
int64_t x575 = INT64_MAX;
volatile uint64_t t86 = 2LLU;
static int16_t x622 = -1;
int16_t x623 = INT16_MAX;
uint16_t x649 = UINT16_MAX;
uint64_t t91 = 36560LLU;
volatile int32_t x661 = INT32_MIN;
uint64_t x663 = UINT64_MAX;
volatile uint8_t x666 = 1U;
int32_t x668 = INT32_MAX;
uint8_t x670 = UINT8_MAX;
volatile int8_t x678 = 18;
static int32_t t97 = 6118;
int64_t t98 = 8334923646875662LL;
static uint8_t x697 = 1U;
int64_t t99 = -249420655098039LL;
uint32_t x705 = 1U;
volatile int16_t x706 = INT16_MAX;
uint32_t x717 = UINT32_MAX;
uint32_t x725 = 281U;
int32_t x727 = INT32_MIN;
volatile uint32_t t104 = 3U;
uint8_t x732 = UINT8_MAX;
int64_t x733 = 808585LL;
int8_t x743 = INT8_MIN;
volatile int32_t t109 = 11;
uint8_t x760 = 21U;
uint64_t x762 = 702LLU;
int16_t x764 = INT16_MIN;
uint8_t x767 = 1U;
uint8_t x773 = UINT8_MAX;
static int8_t x781 = 0;
static int32_t x784 = INT32_MIN;
static volatile uint64_t t114 = 375963LLU;
static int32_t x801 = INT32_MIN;
uint16_t x808 = 2952U;
uint32_t x809 = 1U;
static uint16_t x812 = 15168U;
uint16_t x816 = 209U;
volatile int32_t x831 = INT32_MAX;
uint64_t x832 = 23LLU;
uint64_t t121 = 50944879729215104LLU;
volatile int8_t x836 = INT8_MAX;
static volatile uint16_t x837 = 6U;
volatile int32_t x845 = -1;
volatile uint32_t t125 = 271U;
volatile uint32_t x863 = 13U;
volatile int8_t x867 = INT8_MAX;
uint32_t x882 = UINT32_MAX;
static uint8_t x896 = 109U;
volatile uint64_t t133 = 14364LLU;
static int16_t x915 = -44;
uint32_t x924 = UINT32_MAX;
uint64_t x926 = 1621653052063LLU;
volatile uint64_t t136 = 2884942930330LLU;
int8_t x946 = 1;
uint16_t x951 = 1013U;
uint64_t t140 = 2LLU;
uint16_t x957 = 1239U;
volatile uint16_t x976 = 7114U;
uint64_t t143 = 193499LLU;
static volatile int64_t x978 = -412LL;
static int8_t x986 = -1;
uint32_t t147 = UINT32_MAX;
int16_t x1019 = -1;
int8_t x1020 = INT8_MIN;
uint8_t x1038 = 0U;
volatile uint64_t t154 = 58804851403521LLU;
uint32_t x1053 = 25681911U;
int8_t x1054 = INT8_MAX;
static volatile uint64_t x1064 = 975503082LLU;
volatile uint64_t t156 = 25LLU;
uint8_t x1067 = 40U;
uint8_t x1072 = 47U;
uint64_t t158 = 5502826562964347LLU;
static uint8_t x1083 = 58U;
uint16_t x1102 = UINT16_MAX;
int32_t x1105 = INT32_MAX;
int32_t x1109 = -1;
int16_t x1115 = 44;
volatile int64_t t168 = 1372782069LL;
uint32_t x1124 = 105837252U;
uint64_t x1130 = 682LLU;
uint16_t x1134 = 16834U;
uint16_t x1139 = 8428U;
int16_t x1140 = INT16_MIN;
int16_t x1141 = 18;
int16_t x1143 = 0;
int32_t x1145 = INT32_MAX;
uint8_t x1155 = 2U;
uint64_t x1164 = 788LLU;
volatile int8_t x1166 = INT8_MIN;
uint8_t x1178 = 0U;
int16_t x1180 = 914;
volatile int8_t x1181 = INT8_MAX;
static volatile int16_t x1208 = INT16_MIN;
volatile int8_t x1218 = -1;
int8_t x1234 = -29;
static uint8_t x1235 = 31U;
static volatile int32_t t187 = -444;
volatile int8_t x1245 = -1;
int16_t x1246 = -1;
static int32_t t189 = -8198;
int16_t x1255 = -1820;
int64_t x1267 = -1LL;
uint16_t x1272 = 382U;
volatile uint32_t x1276 = 566326268U;
static int8_t x1282 = -2;


void f0(void) {
    	uint64_t x1 = UINT64_MAX;
	static uint16_t x2 = UINT16_MAX;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = INT8_MIN;
	volatile uint64_t t0 = 4886LLU;

    t0 = (((x1*x2)*x3)+x4);

    if (t0 != 18446744069414715263LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 1430054783LLU;
	volatile int64_t x10 = -1LL;
	static uint64_t x12 = UINT64_MAX;
	uint64_t t1 = 23755179689087LLU;

    t1 = (((x9*x10)*x11)+x12);

    if (t1 != 46860035129343LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = -1;
	int32_t x18 = -1;
	volatile uint64_t x19 = UINT64_MAX;
	uint64_t x20 = UINT64_MAX;
	uint64_t t2 = 9795985LLU;

    t2 = (((x17*x18)*x19)+x20);

    if (t2 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x29 = 19U;
	uint64_t x30 = 533450383074LLU;
	volatile int32_t x31 = 49;
	static volatile uint64_t t3 = 93556148896101LLU;

    t3 = (((x29*x30)*x31)+x32);

    if (t3 != 496635872913226LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x37 = INT16_MIN;
	uint32_t x38 = UINT32_MAX;
	static uint64_t x39 = 95616648463352LLU;
	uint16_t x40 = UINT16_MAX;
	static uint64_t t4 = 2984LLU;

    t4 = (((x37*x38)*x39)+x40);

    if (t4 != 3133166336847183871LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x42 = -125578214614LL;
	volatile int8_t x43 = -15;
	volatile int64_t t5 = 16358198733786517LL;

    t5 = (((x41*x42)*x43)+x44);

    if (t5 != -241110172059008LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x46 = INT16_MIN;
	int16_t x47 = INT16_MIN;
	int32_t t6 = 40557;

    t6 = (((x45*x46)*x47)+x48);

    if (t6 != -1073741809) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int32_t x55 = INT32_MIN;
	uint32_t x56 = 521990968U;
	volatile uint32_t t7 = 14902U;

    t7 = (((x53*x54)*x55)+x56);

    if (t7 != 521990968U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x65 = 0;
	int16_t x66 = INT16_MIN;
	volatile uint32_t t8 = UINT32_MAX;

    t8 = (((x65*x66)*x67)+x68);

    if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x69 = -130550;
	int32_t x71 = -1;
	uint8_t x72 = UINT8_MAX;

    t9 = (((x69*x70)*x71)+x72);

    if (t9 != 2480705U) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x73 = -7;
	int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MIN;

    t10 = (((x73*x74)*x75)+x76);

    if (t10 != 29326464) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint32_t x77 = 39U;
	int32_t x78 = -286;
	uint32_t x79 = UINT32_MAX;
	uint32_t t11 = 7574U;

    t11 = (((x77*x78)*x79)+x80);

    if (t11 != 11377U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x81 = 50U;
	int8_t x82 = -1;
	uint8_t x83 = 4U;

    t12 = (((x81*x82)*x83)+x84);

    if (t12 != 4469381016LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x85 = INT8_MIN;
	uint32_t x86 = 71458U;
	uint32_t x87 = UINT32_MAX;
	int64_t x88 = -457LL;
	volatile int64_t t13 = -1427292746LL;

    t13 = (((x85*x86)*x87)+x88);

    if (t13 != 9146167LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x89 = INT8_MAX;
	int8_t x90 = INT8_MIN;
	volatile uint32_t x91 = 5254U;
	int16_t x92 = -14;
	volatile uint32_t t14 = 128840171U;

    t14 = (((x89*x90)*x91)+x92);

    if (t14 != 4209558258U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint8_t x105 = UINT8_MAX;
	volatile uint16_t x106 = UINT16_MAX;
	int8_t x107 = 1;
	int8_t x108 = -50;
	volatile int32_t t15 = -249;

    t15 = (((x105*x106)*x107)+x108);

    if (t15 != 16711375) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint64_t x118 = UINT64_MAX;
	static uint8_t x119 = UINT8_MAX;
	uint16_t x120 = 13141U;
	uint64_t t16 = 5262065LLU;

    t16 = (((x117*x118)*x119)+x120);

    if (t16 != 18276963889199190137LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile uint8_t x121 = UINT8_MAX;
	int8_t x122 = INT8_MAX;
	static volatile int32_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	int32_t t17 = -708;

    t17 = (((x121*x122)*x123)+x124);

    if (t17 != -32513) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	uint32_t x128 = 158179828U;

    t18 = (((x125*x126)*x127)+x128);

    if (t18 != 158147060U) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x130 = -1;
	int8_t x131 = INT8_MIN;

    t19 = (((x129*x130)*x131)+x132);

    if (t19 != -129) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x133 = 1908U;
	volatile int32_t x134 = -1;
	int32_t x135 = INT32_MIN;
	uint32_t t20 = 1U;

    t20 = (((x133*x134)*x135)+x136);

    if (t20 != 4294934528U) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x141 = UINT8_MAX;
	static int8_t x142 = INT8_MIN;
	uint32_t x143 = 0U;

    t21 = (((x141*x142)*x143)+x144);

    if (t21 != 259199U) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x146 = UINT64_MAX;
	uint8_t x147 = UINT8_MAX;
	int64_t x148 = INT64_MIN;
	static uint64_t t22 = 6609936649303LLU;

    t22 = (((x145*x146)*x147)+x148);

    if (t22 != 9223372036854762038LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x149 = -1;
	uint64_t x150 = 1036200719908790LLU;
	volatile uint8_t x151 = UINT8_MAX;
	uint16_t x152 = 5U;
	volatile uint64_t t23 = 320171934LLU;

    t23 = (((x149*x150)*x151)+x152);

    if (t23 != 18182512890132810171LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint32_t x165 = UINT32_MAX;
	static volatile int8_t x166 = INT8_MIN;
	uint16_t x167 = 1699U;
	int16_t x168 = INT16_MAX;
	uint32_t t24 = 82478076U;

    t24 = (((x165*x166)*x167)+x168);

    if (t24 != 250239U) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x169 = 395;
	static int8_t x170 = INT8_MIN;
	int64_t x172 = -635766344784101LL;
	int64_t t25 = -2250490558308871LL;

    t25 = (((x169*x170)*x171)+x172);

    if (t25 != -635766345036901LL) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x173 = -1LL;
	uint16_t x174 = UINT16_MAX;
	static int32_t x175 = 109311760;
	int8_t x176 = -1;
	int64_t t26 = 2031662238895886607LL;

    t26 = (((x173*x174)*x175)+x176);

    if (t26 != -7163746191601LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x177 = -1;
	int16_t x178 = INT16_MAX;
	static uint32_t x179 = 7U;
	volatile uint32_t t27 = 52417U;

    t27 = (((x177*x178)*x179)+x180);

    if (t27 != 4294737926U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x181 = 13U;
	static volatile int64_t x182 = 796879LL;
	int8_t x183 = 2;
	volatile int32_t x184 = INT32_MAX;
	volatile int64_t t28 = -75212874LL;

    t28 = (((x181*x182)*x183)+x184);

    if (t28 != 2168202501LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x189 = UINT16_MAX;
	int64_t x190 = -3922626605331LL;
	uint32_t x191 = 0U;
	int32_t x192 = -5;
	volatile int64_t t29 = -10120338002572LL;

    t29 = (((x189*x190)*x191)+x192);

    if (t29 != -5LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x221 = UINT16_MAX;
	int8_t x222 = -48;
	int8_t x223 = 12;
	volatile int32_t t30 = -15273;

    t30 = (((x221*x222)*x223)+x224);

    if (t30 != -37682625) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x233 = 10U;
	int32_t x235 = -1;
	volatile int64_t x236 = -1LL;
	volatile int64_t t31 = -70724607893776707LL;

    t31 = (((x233*x234)*x235)+x236);

    if (t31 != -7912424319953831LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x237 = INT16_MAX;
	int16_t x238 = 48;
	uint16_t x240 = 11717U;
	static volatile int32_t t32 = -31248667;

    t32 = (((x237*x238)*x239)+x240);

    if (t32 != -1561099) { NG(); } else { ; }
	
}

void f33(void) {
    	static int64_t x245 = -2501LL;
	volatile int32_t x246 = -1;
	int8_t x247 = -11;
	uint8_t x248 = UINT8_MAX;
	static int64_t t33 = 11LL;

    t33 = (((x245*x246)*x247)+x248);

    if (t33 != -27256LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x262 = -7481;
	int64_t x263 = -180794258LL;
	uint64_t x264 = 183LLU;

    t34 = (((x261*x262)*x263)+x264);

    if (t34 != 18446742721187707701LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int64_t x265 = INT64_MAX;
	int8_t x266 = 1;
	static volatile uint64_t t35 = 25389890918359549LLU;

    t35 = (((x265*x266)*x267)+x268);

    if (t35 != 9223211705365767090LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int64_t x269 = 11670704816419779LL;
	volatile int64_t t36 = 4LL;

    t36 = (((x269*x270)*x271)+x272);

    if (t36 != -361791849309013147LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x277 = -1;
	uint8_t x278 = UINT8_MAX;
	int8_t x279 = -14;
	volatile uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t37 = 3636478U;

    t37 = (((x277*x278)*x279)+x280);

    if (t37 != 3569U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x285 = 3U;
	uint32_t x286 = UINT32_MAX;
	uint32_t x287 = 71537200U;
	uint32_t t38 = 1938066405U;

    t38 = (((x285*x286)*x287)+x288);

    if (t38 != 4080355694U) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;

    t39 = (((x293*x294)*x295)+x296);

    if (t39 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x297 = INT32_MAX;
	int8_t x298 = -1;
	static volatile uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MIN;

    t40 = (((x297*x298)*x299)+x300);

    if (t40 != 2147450879LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x301 = 5U;
	volatile uint32_t x302 = UINT32_MAX;
	uint32_t x303 = 1139481U;
	uint16_t x304 = UINT16_MAX;
	volatile uint32_t t41 = 20274U;

    t41 = (((x301*x302)*x303)+x304);

    if (t41 != 4289335426U) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x318 = INT8_MAX;
	volatile uint16_t x319 = 1U;
	uint32_t x320 = 75U;
	uint32_t t42 = 5218U;

    t42 = (((x317*x318)*x319)+x320);

    if (t42 != 456U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x331 = INT16_MIN;
	static int64_t t43 = 11590366048041LL;

    t43 = (((x329*x330)*x331)+x332);

    if (t43 != -17524846714814465LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x334 = UINT32_MAX;
	uint32_t x335 = 33708U;
	uint16_t x336 = 448U;
	volatile uint32_t t44 = 126116U;

    t44 = (((x333*x334)*x335)+x336);

    if (t44 != 4294731788U) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint32_t x337 = UINT32_MAX;
	uint64_t x339 = UINT64_MAX;
	uint64_t t45 = 2LLU;

    t45 = (((x337*x338)*x339)+x340);

    if (t45 != 6LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x344 = 18U;
	static int32_t t46 = 136012228;

    t46 = (((x341*x342)*x343)+x344);

    if (t46 != 198467346) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x345 = INT16_MIN;
	uint64_t x346 = 12377LLU;
	int64_t x347 = 60832079LL;

    t47 = (((x345*x346)*x347)+x348);

    if (t47 != 18422072435655606370LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x355 = -14059;
	static int32_t t48 = 916275362;

    t48 = (((x353*x354)*x355)+x356);

    if (t48 != 10558372) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x357 = -51;
	static uint8_t x358 = 0U;
	uint64_t x360 = 178LLU;
	static volatile uint64_t t49 = 26052LLU;

    t49 = (((x357*x358)*x359)+x360);

    if (t49 != 178LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x365 = INT16_MAX;
	uint8_t x366 = 0U;
	int8_t x368 = 36;
	uint64_t t50 = 703179436171562345LLU;

    t50 = (((x365*x366)*x367)+x368);

    if (t50 != 36LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	static int32_t x372 = -561312;

    t51 = (((x369*x370)*x371)+x372);

    if (t51 != -561312) { NG(); } else { ; }
	
}

void f52(void) {
    	static int8_t x377 = INT8_MAX;
	int8_t x379 = 0;
	uint64_t t52 = 5100LLU;

    t52 = (((x377*x378)*x379)+x380);

    if (t52 != 250832LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x385 = 0;
	uint8_t x386 = UINT8_MAX;
	uint8_t x388 = 7U;
	int64_t t53 = -132603288559LL;

    t53 = (((x385*x386)*x387)+x388);

    if (t53 != 7LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x394 = 108460579856061LLU;
	uint32_t x395 = 220759194U;
	static uint64_t t54 = 323LLU;

    t54 = (((x393*x394)*x395)+x396);

    if (t54 != 11345052640679497280LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int8_t x397 = INT8_MIN;
	int8_t x399 = INT8_MIN;
	static uint32_t x400 = UINT32_MAX;
	uint32_t t55 = 184875U;

    t55 = (((x397*x398)*x399)+x400);

    if (t55 != 132120575U) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x405 = -1;
	static uint64_t x406 = 1LLU;
	int8_t x407 = INT8_MIN;
	volatile uint64_t t56 = 5070090065685425LLU;

    t56 = (((x405*x406)*x407)+x408);

    if (t56 != 1439913879LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x413 = UINT32_MAX;
	int32_t x414 = -134866;
	uint64_t x415 = 36637527073462LLU;
	volatile uint8_t x416 = 0U;
	uint64_t t57 = 718LLU;

    t57 = (((x413*x414)*x415)+x416);

    if (t57 != 4941156726289526092LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x417 = UINT16_MAX;
	volatile int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MAX;
	static int64_t t58 = INT64_MAX;

    t58 = (((x417*x418)*x419)+x420);

    if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x423 = INT32_MAX;
	static int64_t x424 = INT64_MIN;
	volatile int64_t t59 = INT64_MIN;

    t59 = (((x421*x422)*x423)+x424);

    if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x429 = -3463129123LL;
	uint32_t x430 = 11U;
	volatile int32_t x431 = -1;
	int16_t x432 = INT16_MAX;
	volatile int64_t t60 = 1907LL;

    t60 = (((x429*x430)*x431)+x432);

    if (t60 != 38094453120LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x438 = -19LL;
	int32_t x439 = -1;
	int64_t t61 = 1LL;

    t61 = (((x437*x438)*x439)+x440);

    if (t61 != -42949672960LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x441 = INT16_MAX;
	uint64_t x442 = UINT64_MAX;
	uint8_t x443 = 16U;
	uint32_t x444 = 763553417U;
	uint64_t t62 = 587418317LLU;

    t62 = (((x441*x442)*x443)+x444);

    if (t62 != 763029145LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x445 = 0;
	volatile int16_t x446 = 90;
	static int64_t x447 = INT64_MAX;
	uint64_t x448 = UINT64_MAX;
	uint64_t t63 = UINT64_MAX;

    t63 = (((x445*x446)*x447)+x448);

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x453 = -1;
	int8_t x454 = INT8_MAX;
	int32_t x455 = -1;
	volatile int16_t x456 = -1;
	int32_t t64 = 6;

    t64 = (((x453*x454)*x455)+x456);

    if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x461 = -1;
	static int8_t x462 = 0;
	uint32_t x463 = 8360U;
	volatile uint64_t x464 = 7151796LLU;
	uint64_t t65 = 7004142606913230LLU;

    t65 = (((x461*x462)*x463)+x464);

    if (t65 != 7151796LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x465 = 34;
	int8_t x466 = INT8_MAX;
	uint64_t x468 = 1256LLU;
	uint64_t t66 = 153LLU;

    t66 = (((x465*x466)*x467)+x468);

    if (t66 != 5574LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint32_t x478 = 8983U;
	volatile uint64_t x479 = 67902866105584LLU;
	volatile int32_t x480 = INT32_MIN;
	uint64_t t67 = 198800971473049LLU;

    t67 = (((x477*x478)*x479)+x480);

    if (t67 != 6291648752481992704LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x485 = 1LL;
	int32_t x486 = 122;
	int8_t x487 = -1;
	int32_t x488 = -2448;
	int64_t t68 = -60403LL;

    t68 = (((x485*x486)*x487)+x488);

    if (t68 != -2570LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x490 = 4U;
	static uint16_t x491 = 31U;
	int8_t x492 = INT8_MIN;
	int64_t t69 = 6334577158394723LL;

    t69 = (((x489*x490)*x491)+x492);

    if (t69 != -252LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x506 = -1LL;
	uint64_t x508 = 33211196889972LLU;
	static volatile uint64_t t70 = 6LLU;

    t70 = (((x505*x506)*x507)+x508);

    if (t70 != 33211197636900LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x509 = INT8_MIN;
	static uint32_t x510 = 6556297U;
	int8_t x511 = 34;
	static uint16_t x512 = 23U;

    t71 = (((x509*x510)*x511)+x512);

    if (t71 != 1531766551U) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x513 = INT32_MIN;
	uint32_t x514 = 1578000U;
	int16_t x515 = INT16_MIN;
	int64_t x516 = -1LL;
	int64_t t72 = 458460496296494203LL;

    t72 = (((x513*x514)*x515)+x516);

    if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x525 = -1LL;
	static uint8_t x526 = 9U;
	int32_t x527 = 1136590;
	int8_t x528 = INT8_MIN;
	volatile int64_t t73 = -107321313622708501LL;

    t73 = (((x525*x526)*x527)+x528);

    if (t73 != -10229438LL) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x529 = INT16_MAX;
	int16_t x531 = -3;
	int64_t x532 = INT64_MIN;
	static int64_t t74 = 26982LL;

    t74 = (((x529*x530)*x531)+x532);

    if (t74 != -9223372036854284303LL) { NG(); } else { ; }
	
}

void f75(void) {
    	uint8_t x533 = 120U;
	int8_t x534 = -52;
	int16_t x535 = 4085;
	int8_t x536 = INT8_MIN;
	static volatile int32_t t75 = -1;

    t75 = (((x533*x534)*x535)+x536);

    if (t75 != -25490528) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x538 = INT8_MIN;
	uint32_t x539 = 512777193U;
	volatile uint16_t x540 = UINT16_MAX;

    t76 = (((x537*x538)*x539)+x540);

    if (t76 != 18446743811167694335LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x541 = -16432122759LL;
	int8_t x543 = INT8_MAX;
	static int32_t x544 = 1655;

    t77 = (((x541*x542)*x543)+x544);

    if (t77 != 267120587571959LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x545 = 71U;
	int16_t x546 = 0;
	static int32_t x547 = INT32_MIN;
	static int32_t x548 = INT32_MAX;
	static volatile int32_t t78 = INT32_MAX;

    t78 = (((x545*x546)*x547)+x548);

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint32_t x549 = 58U;
	static uint8_t x551 = UINT8_MAX;
	int32_t x552 = INT32_MAX;
	volatile uint32_t t79 = 788852U;

    t79 = (((x549*x550)*x551)+x552);

    if (t79 != 2147483647U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x553 = 50;
	volatile int32_t x554 = 23664;
	static int16_t x555 = -1;
	static uint8_t x556 = 0U;
	int32_t t80 = -1;

    t80 = (((x553*x554)*x555)+x556);

    if (t80 != -1183200) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x557 = 2119414057LLU;
	static volatile int32_t x558 = INT32_MIN;
	int32_t x559 = INT32_MIN;
	int32_t x560 = -16174948;
	uint64_t t81 = 10222739348LLU;

    t81 = (((x557*x558)*x559)+x560);

    if (t81 != 4611686018411212956LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x561 = INT16_MIN;
	int8_t x562 = -8;
	int8_t x563 = -1;
	static int16_t x564 = INT16_MIN;
	int32_t t82 = 466818346;

    t82 = (((x561*x562)*x563)+x564);

    if (t82 != -294912) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x565 = 38;
	uint32_t x566 = 966622U;
	int8_t x567 = 1;
	int8_t x568 = INT8_MIN;
	static uint32_t t83 = 837996529U;

    t83 = (((x565*x566)*x567)+x568);

    if (t83 != 36731508U) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x574 = UINT64_MAX;
	int16_t x576 = -11062;
	volatile uint64_t t84 = 282847403317092LLU;

    t84 = (((x573*x574)*x575)+x576);

    if (t84 != 2040822LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x605 = 88643368358146998LLU;
	int64_t x606 = -1LL;
	uint16_t x607 = UINT16_MAX;
	int8_t x608 = INT8_MAX;
	uint64_t t85 = 4663925093734LLU;

    t85 = (((x605*x606)*x607)+x608);

    if (t85 != 1481237867345245237LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x609 = INT16_MIN;
	static uint64_t x610 = 3694981380014182LLU;
	uint64_t x611 = UINT64_MAX;
	uint8_t x612 = UINT8_MAX;

    t86 = (((x609*x610)*x611)+x612);

    if (t86 != 10396685418047406335LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint8_t x613 = 9U;
	uint32_t x614 = 2051759252U;
	static uint32_t x615 = 45910U;
	static int32_t x616 = -23;
	uint32_t t87 = 506859U;

    t87 = (((x613*x614)*x615)+x616);

    if (t87 != 4285612897U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x621 = -1;
	int16_t x624 = INT16_MIN;
	int32_t t88 = 178;

    t88 = (((x621*x622)*x623)+x624);

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x629 = INT16_MIN;
	static uint32_t x630 = 40U;
	int8_t x631 = -9;
	uint32_t x632 = 37U;
	volatile uint32_t t89 = 155364474U;

    t89 = (((x629*x630)*x631)+x632);

    if (t89 != 11796517U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int64_t x633 = -1LL;
	volatile int64_t x634 = 45541LL;
	volatile int16_t x635 = INT16_MIN;
	static uint8_t x636 = UINT8_MAX;
	static volatile int64_t t90 = -257916904LL;

    t90 = (((x633*x634)*x635)+x636);

    if (t90 != 1492287743LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x650 = 628U;
	uint64_t x651 = UINT64_MAX;
	static int64_t x652 = INT64_MAX;

    t91 = (((x649*x650)*x651)+x652);

    if (t91 != 9223372036813619827LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x653 = INT8_MAX;
	int64_t x654 = -6867486LL;
	int16_t x655 = INT16_MIN;
	static int8_t x656 = INT8_MIN;
	int64_t t92 = -31019767074322835LL;

    t92 = (((x653*x654)*x655)+x656);

    if (t92 != 28579290218368LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int64_t x662 = 746LL;
	uint64_t x664 = UINT64_MAX;
	uint64_t t93 = 236009241490LLU;

    t93 = (((x661*x662)*x663)+x664);

    if (t93 != 1602022801407LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x665 = INT32_MIN;
	static int64_t x667 = -29LL;
	volatile int64_t t94 = -1LL;

    t94 = (((x665*x666)*x667)+x668);

    if (t94 != 64424509439LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint64_t x669 = 0LLU;
	volatile int16_t x671 = INT16_MIN;
	volatile int32_t x672 = INT32_MIN;
	volatile uint64_t t95 = 2871188380008LLU;

    t95 = (((x669*x670)*x671)+x672);

    if (t95 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x677 = 31;
	uint32_t x679 = 21016U;
	int8_t x680 = -60;
	uint32_t t96 = 29505877U;

    t96 = (((x677*x678)*x679)+x680);

    if (t96 != 11726868U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x685 = INT32_MAX;
	volatile int8_t x686 = 0;
	int8_t x687 = INT8_MIN;
	volatile int8_t x688 = -1;

    t97 = (((x685*x686)*x687)+x688);

    if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x689 = -1;
	int32_t x690 = -1;
	static volatile int64_t x691 = -1LL;
	volatile uint16_t x692 = 1U;

    t98 = (((x689*x690)*x691)+x692);

    if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x698 = INT8_MIN;
	volatile int16_t x699 = -117;
	static int64_t x700 = 15545771LL;

    t99 = (((x697*x698)*x699)+x700);

    if (t99 != 15560747LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x707 = INT8_MIN;
	int64_t x708 = -1LL;
	int64_t t100 = 3369052541089595LL;

    t100 = (((x705*x706)*x707)+x708);

    if (t100 != 4290773119LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x713 = 2658LL;
	int16_t x714 = INT16_MAX;
	uint8_t x715 = UINT8_MAX;
	static volatile int16_t x716 = INT16_MIN;
	volatile int64_t t101 = 2122179041949818LL;

    t101 = (((x713*x714)*x715)+x716);

    if (t101 != 22209112162LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x718 = UINT16_MAX;
	int8_t x719 = INT8_MIN;
	int64_t x720 = 181810392138735LL;
	int64_t t102 = 354015417LL;

    t102 = (((x717*x718)*x719)+x720);

    if (t102 != 181810400527215LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x721 = -1;
	static volatile int16_t x722 = 0;
	int16_t x723 = 0;
	static volatile int64_t x724 = INT64_MAX;
	volatile int64_t t103 = INT64_MAX;

    t103 = (((x721*x722)*x723)+x724);

    if (t103 != INT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x726 = 7130;
	int8_t x728 = INT8_MIN;

    t104 = (((x725*x726)*x727)+x728);

    if (t104 != 4294967168U) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x729 = -1;
	volatile uint16_t x730 = 2U;
	volatile int32_t x731 = -1;
	volatile int32_t t105 = 1529;

    t105 = (((x729*x730)*x731)+x732);

    if (t105 != 257) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x734 = -21;
	static int8_t x735 = INT8_MIN;
	volatile uint32_t x736 = 5657893U;
	static volatile int64_t t106 = 83LL;

    t106 = (((x733*x734)*x735)+x736);

    if (t106 != 2179134373LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x737 = 8845U;
	int16_t x738 = -1;
	int64_t x739 = -1LL;
	volatile int32_t x740 = -1;
	int64_t t107 = -16058585LL;

    t107 = (((x737*x738)*x739)+x740);

    if (t107 != 8844LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x741 = UINT8_MAX;
	static int64_t x742 = -1LL;
	static int16_t x744 = INT16_MIN;
	volatile int64_t t108 = 50176154LL;

    t108 = (((x741*x742)*x743)+x744);

    if (t108 != -128LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x749 = -8;
	int8_t x750 = -18;
	volatile int16_t x751 = INT16_MIN;
	int8_t x752 = INT8_MAX;

    t109 = (((x749*x750)*x751)+x752);

    if (t109 != -4718465) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint64_t x757 = 57420814706936471LLU;
	volatile int32_t x758 = -36;
	uint32_t x759 = 122250266U;
	uint64_t t110 = 4LLU;

    t110 = (((x757*x758)*x759)+x760);

    if (t110 != 10184100547137755133LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x761 = 24;
	int16_t x763 = INT16_MIN;
	uint64_t t111 = 1454747287921LLU;

    t111 = (((x761*x762)*x763)+x764);

    if (t111 != 18446744073157443584LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x765 = 512164694838598LLU;
	volatile int8_t x766 = INT8_MIN;
	int32_t x768 = INT32_MIN;
	volatile uint64_t t112 = 58LLU;

    t112 = (((x765*x766)*x767)+x768);

    if (t112 != 18381186990622727424LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x774 = -2201264114661014LL;
	int8_t x775 = -3;
	int8_t x776 = 18;
	volatile int64_t t113 = -21619356337631573LL;

    t113 = (((x773*x774)*x775)+x776);

    if (t113 != 1683967047715675728LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x782 = -1901;
	static uint64_t x783 = UINT64_MAX;

    t114 = (((x781*x782)*x783)+x784);

    if (t114 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x785 = 6959U;
	uint8_t x786 = 50U;
	uint32_t x787 = UINT32_MAX;
	static uint64_t x788 = UINT64_MAX;
	uint64_t t115 = 28589598LLU;

    t115 = (((x785*x786)*x787)+x788);

    if (t115 != 4294619345LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x802 = 0;
	static uint64_t x803 = 1705035LLU;
	volatile int64_t x804 = 7420LL;
	uint64_t t116 = 16LLU;

    t116 = (((x801*x802)*x803)+x804);

    if (t116 != 7420LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x805 = 1;
	static volatile int8_t x806 = -1;
	static int8_t x807 = 25;
	int32_t t117 = -902079;

    t117 = (((x805*x806)*x807)+x808);

    if (t117 != 2927) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x810 = INT8_MIN;
	static int32_t x811 = 17220;
	static volatile uint32_t t118 = 10905U;

    t118 = (((x809*x810)*x811)+x812);

    if (t118 != 4292778304U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x813 = -1LL;
	static int64_t x814 = -1LL;
	int32_t x815 = INT32_MAX;
	static int64_t t119 = -1693605119264491362LL;

    t119 = (((x813*x814)*x815)+x816);

    if (t119 != 2147483856LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint64_t x821 = 613029117030566486LLU;
	int32_t x822 = INT32_MAX;
	int64_t x823 = -1LL;
	static int64_t x824 = INT64_MAX;
	volatile uint64_t t120 = 638959179485980LLU;

    t120 = (((x821*x822)*x823)+x824);

    if (t120 != 10788343842879048277LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x829 = INT16_MIN;
	int64_t x830 = -1LL;

    t121 = (((x829*x830)*x831)+x832);

    if (t121 != 70368744144919LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x833 = 6U;
	int8_t x834 = -26;
	static int8_t x835 = INT8_MAX;
	static int32_t t122 = -1035866;

    t122 = (((x833*x834)*x835)+x836);

    if (t122 != -19685) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x838 = 3917688973312759744LLU;
	uint16_t x839 = 51U;
	static uint16_t x840 = 1325U;
	uint64_t t123 = 186837803084LLU;

    t123 = (((x837*x838)*x839)+x840);

    if (t123 != 18221205116293179565LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x841 = 1387147U;
	int32_t x842 = -227613;
	static uint32_t x843 = 3U;
	uint16_t x844 = 7U;
	volatile uint32_t t124 = 222070548U;

    t124 = (((x841*x842)*x843)+x844);

    if (t124 != 1989702090U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint32_t x846 = UINT32_MAX;
	int32_t x847 = INT32_MIN;
	volatile int16_t x848 = 53;

    t125 = (((x845*x846)*x847)+x848);

    if (t125 != 2147483701U) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x849 = INT8_MIN;
	uint64_t x850 = 118685LLU;
	int8_t x851 = INT8_MIN;
	int16_t x852 = 11;
	uint64_t t126 = 22009452374476LLU;

    t126 = (((x849*x850)*x851)+x852);

    if (t126 != 1944535051LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x857 = -15;
	static uint16_t x858 = 175U;
	uint16_t x859 = 350U;
	int16_t x860 = -1;
	static int32_t t127 = -1;

    t127 = (((x857*x858)*x859)+x860);

    if (t127 != -918751) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x861 = -1;
	static uint16_t x862 = 5382U;
	int64_t x864 = -4279688LL;
	volatile int64_t t128 = -32LL;

    t128 = (((x861*x862)*x863)+x864);

    if (t128 != 4290617642LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x865 = 14LLU;
	int64_t x866 = INT64_MAX;
	int32_t x868 = INT32_MAX;
	volatile uint64_t t129 = 2093LLU;

    t129 = (((x865*x866)*x867)+x868);

    if (t129 != 2147481869LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x877 = INT64_MIN;
	volatile uint64_t x878 = UINT64_MAX;
	int32_t x879 = INT32_MAX;
	static int16_t x880 = 2461;
	static uint64_t t130 = 2113858096479715LLU;

    t130 = (((x877*x878)*x879)+x880);

    if (t130 != 9223372036854778269LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x881 = INT8_MIN;
	uint16_t x883 = 23U;
	uint16_t x884 = 232U;
	uint32_t t131 = 3762090U;

    t131 = (((x881*x882)*x883)+x884);

    if (t131 != 3176U) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x893 = 3088U;
	uint64_t x894 = 222830208LLU;
	int8_t x895 = INT8_MIN;
	uint64_t t132 = 10285787599983LLU;

    t132 = (((x893*x894)*x895)+x896);

    if (t132 != 18446655996950216813LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x897 = INT64_MIN;
	uint64_t x898 = 4046406LLU;
	static volatile int16_t x899 = INT16_MIN;
	int64_t x900 = INT64_MAX;

    t133 = (((x897*x898)*x899)+x900);

    if (t133 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x913 = INT8_MIN;
	int8_t x914 = INT8_MIN;
	volatile uint16_t x916 = 2U;
	volatile int32_t t134 = 0;

    t134 = (((x913*x914)*x915)+x916);

    if (t134 != -720894) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x921 = -1;
	int32_t x922 = 511;
	int8_t x923 = -4;
	uint32_t t135 = 1U;

    t135 = (((x921*x922)*x923)+x924);

    if (t135 != 2043U) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x925 = -1LL;
	static int64_t x927 = INT64_MAX;
	volatile int64_t x928 = 1024568823LL;

    t136 = (((x925*x926)*x927)+x928);

    if (t136 != 9223373659532396694LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x937 = 1U;
	int16_t x938 = 1;
	int16_t x939 = INT16_MAX;
	int16_t x940 = -1;
	volatile int32_t t137 = 195348;

    t137 = (((x937*x938)*x939)+x940);

    if (t137 != 32766) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int32_t x945 = -1158368;
	uint8_t x947 = 0U;
	static int8_t x948 = INT8_MIN;
	int32_t t138 = -1354;

    t138 = (((x945*x946)*x947)+x948);

    if (t138 != -128) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x949 = 1440294U;
	int8_t x950 = INT8_MIN;
	int64_t x952 = 473293069472LL;
	volatile int64_t t139 = 63816LL;

    t139 = (((x949*x950)*x951)+x952);

    if (t139 != 475517349280LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x953 = UINT64_MAX;
	volatile uint16_t x954 = UINT16_MAX;
	static uint8_t x955 = 1U;
	int32_t x956 = INT32_MAX;

    t140 = (((x953*x954)*x955)+x956);

    if (t140 != 2147418112LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x958 = 46U;
	volatile uint8_t x959 = 30U;
	int32_t x960 = INT32_MIN;
	int32_t t141 = -2035112;

    t141 = (((x957*x958)*x959)+x960);

    if (t141 != -2145773828) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x965 = 1781200870U;
	uint32_t x966 = UINT32_MAX;
	int32_t x967 = INT32_MAX;
	uint64_t x968 = 1LLU;
	volatile uint64_t t142 = 72017787LLU;

    t142 = (((x965*x966)*x967)+x968);

    if (t142 != 1781200871LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x973 = INT8_MAX;
	uint8_t x974 = UINT8_MAX;
	uint64_t x975 = 2076420921883LLU;

    t143 = (((x973*x974)*x975)+x976);

    if (t143 != 67244891555188069LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x977 = -1LL;
	uint8_t x979 = 30U;
	volatile int8_t x980 = -1;
	volatile int64_t t144 = 2345093799LL;

    t144 = (((x977*x978)*x979)+x980);

    if (t144 != 12359LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x985 = -1;
	volatile int32_t x987 = -1;
	volatile uint16_t x988 = UINT16_MAX;
	int32_t t145 = -2289067;

    t145 = (((x985*x986)*x987)+x988);

    if (t145 != 65534) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x993 = INT16_MIN;
	int64_t x994 = -1LL;
	int8_t x995 = -19;
	static int8_t x996 = INT8_MIN;
	int64_t t146 = -364362LL;

    t146 = (((x993*x994)*x995)+x996);

    if (t146 != -622720LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x1001 = INT32_MIN;
	static uint32_t x1002 = UINT32_MAX;
	int32_t x1003 = 450524;
	int16_t x1004 = -1;

    t147 = (((x1001*x1002)*x1003)+x1004);

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x1005 = -1;
	volatile uint8_t x1006 = UINT8_MAX;
	int64_t x1007 = 11279LL;
	int64_t x1008 = -48834LL;
	volatile int64_t t148 = 33300485LL;

    t148 = (((x1005*x1006)*x1007)+x1008);

    if (t148 != -2924979LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x1013 = UINT64_MAX;
	int8_t x1014 = INT8_MIN;
	int16_t x1015 = INT16_MIN;
	static int16_t x1016 = INT16_MAX;
	static volatile uint64_t t149 = 29224223395LLU;

    t149 = (((x1013*x1014)*x1015)+x1016);

    if (t149 != 18446744073705390079LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x1017 = UINT16_MAX;
	int32_t x1018 = -17408;
	int32_t t150 = -755;

    t150 = (((x1017*x1018)*x1019)+x1020);

    if (t150 != 1140833152) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x1025 = 1LLU;
	int64_t x1026 = -1LL;
	int8_t x1027 = INT8_MIN;
	uint16_t x1028 = 808U;
	uint64_t t151 = 8064221312119475LLU;

    t151 = (((x1025*x1026)*x1027)+x1028);

    if (t151 != 936LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1033 = 9344155559178651LLU;
	int8_t x1034 = 3;
	static int64_t x1035 = -1LL;
	uint16_t x1036 = 466U;
	uint64_t t152 = 6161LLU;

    t152 = (((x1033*x1034)*x1035)+x1036);

    if (t152 != 18418711607032016129LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x1037 = 60451988581LLU;
	uint64_t x1039 = UINT64_MAX;
	int16_t x1040 = INT16_MIN;
	volatile uint64_t t153 = 11486199319705LLU;

    t153 = (((x1037*x1038)*x1039)+x1040);

    if (t153 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1041 = 24;
	static uint8_t x1042 = 21U;
	int8_t x1043 = -1;
	uint64_t x1044 = UINT64_MAX;

    t154 = (((x1041*x1042)*x1043)+x1044);

    if (t154 != 18446744073709551111LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x1055 = -1LL;
	volatile int64_t x1056 = 7446353732LL;
	static int64_t t155 = 1711393212880LL;

    t155 = (((x1053*x1054)*x1055)+x1056);

    if (t155 != 4184751035LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x1061 = -1LL;
	int8_t x1062 = INT8_MAX;
	static volatile int64_t x1063 = -1LL;

    t156 = (((x1061*x1062)*x1063)+x1064);

    if (t156 != 975503209LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1065 = 11831U;
	uint8_t x1066 = 9U;
	static int64_t x1068 = INT64_MIN;
	volatile int64_t t157 = 14474LL;

    t157 = (((x1065*x1066)*x1067)+x1068);

    if (t157 != -9223372036850516648LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x1069 = 9159777069498786480LLU;
	int32_t x1070 = -7240;
	volatile uint32_t x1071 = 388286167U;

    t158 = (((x1069*x1070)*x1071)+x1072);

    if (t158 != 1558843718168264111LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x1073 = 3;
	int64_t x1074 = -1LL;
	int32_t x1075 = -59208;
	int16_t x1076 = -14;
	volatile int64_t t159 = 946LL;

    t159 = (((x1073*x1074)*x1075)+x1076);

    if (t159 != 177610LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x1077 = -1;
	static uint16_t x1078 = 1U;
	uint32_t x1079 = 36458745U;
	int16_t x1080 = 6806;
	uint32_t t160 = 591991892U;

    t160 = (((x1077*x1078)*x1079)+x1080);

    if (t160 != 4258515357U) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint64_t x1081 = 1118317471681900211LLU;
	uint8_t x1082 = 1U;
	static volatile int32_t x1084 = -1618;
	volatile uint64_t t161 = 50323327LLU;

    t161 = (((x1081*x1082)*x1083)+x1084);

    if (t161 != 9522181136421555772LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x1085 = -1;
	volatile uint8_t x1086 = UINT8_MAX;
	int32_t x1087 = 96914;
	int64_t x1088 = -1LL;
	int64_t t162 = -1LL;

    t162 = (((x1085*x1086)*x1087)+x1088);

    if (t162 != -24713071LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1093 = 31593LLU;
	volatile int8_t x1094 = INT8_MIN;
	int32_t x1095 = INT32_MIN;
	uint64_t x1096 = UINT64_MAX;
	uint64_t t163 = 198019415004LLU;

    t163 = (((x1093*x1094)*x1095)+x1096);

    if (t163 != 8684217714081791LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1101 = 53735654LLU;
	volatile uint8_t x1103 = 15U;
	int64_t x1104 = -2961994822792162565LL;
	uint64_t t164 = 3LLU;

    t164 = (((x1101*x1102)*x1103)+x1104);

    if (t164 != 15484802074408662401LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint64_t x1106 = 63409034334LLU;
	static int16_t x1107 = -1;
	int64_t x1108 = INT64_MIN;
	static volatile uint64_t t165 = 5LLU;

    t165 = (((x1105*x1106)*x1107)+x1108);

    if (t165 != 2180716248495101022LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x1110 = 2774128U;
	int32_t x1111 = 539;
	uint32_t x1112 = UINT32_MAX;
	uint32_t t166 = 9501242U;

    t166 = (((x1109*x1110)*x1111)+x1112);

    if (t166 != 2799712303U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x1113 = 17856532920300669LLU;
	int16_t x1114 = INT16_MIN;
	int64_t x1116 = INT64_MAX;
	static uint64_t t167 = 3LLU;

    t167 = (((x1113*x1114)*x1115)+x1116);

    if (t167 != 15471786709246672895LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x1117 = -1LL;
	int16_t x1118 = 9204;
	volatile int32_t x1119 = INT32_MIN;
	int16_t x1120 = 10;

    t168 = (((x1117*x1118)*x1119)+x1120);

    if (t168 != 19765439496202LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x1121 = 2U;
	static uint32_t x1122 = 1556825U;
	int16_t x1123 = INT16_MAX;
	uint32_t t169 = 2094702U;

    t169 = (((x1121*x1122)*x1123)+x1124);

    if (t169 != 3346558994U) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1129 = 205LL;
	int16_t x1131 = 1;
	static int16_t x1132 = INT16_MIN;
	static uint64_t t170 = 100658LLU;

    t170 = (((x1129*x1130)*x1131)+x1132);

    if (t170 != 107042LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1133 = INT8_MIN;
	int8_t x1135 = INT8_MAX;
	static int8_t x1136 = 52;
	volatile int32_t t171 = -3753;

    t171 = (((x1133*x1134)*x1135)+x1136);

    if (t171 != -273653452) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1137 = 38757;
	uint32_t x1138 = UINT32_MAX;
	volatile uint32_t t172 = 23249018U;

    t172 = (((x1137*x1138)*x1139)+x1140);

    if (t172 != 3968290532U) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x1142 = 22U;
	volatile uint16_t x1144 = 7696U;
	int32_t t173 = 6430;

    t173 = (((x1141*x1142)*x1143)+x1144);

    if (t173 != 7696) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1146 = 1U;
	static int32_t x1147 = 0;
	int16_t x1148 = -20;
	static volatile int32_t t174 = 83358;

    t174 = (((x1145*x1146)*x1147)+x1148);

    if (t174 != -20) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1153 = 5LLU;
	int64_t x1154 = -5LL;
	volatile uint64_t x1156 = 48046308LLU;
	static volatile uint64_t t175 = 15852862287504481LLU;

    t175 = (((x1153*x1154)*x1155)+x1156);

    if (t175 != 48046258LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x1161 = UINT16_MAX;
	static int16_t x1162 = -10;
	volatile int64_t x1163 = -388719994332LL;
	static uint64_t t176 = 4131952668487LLU;

    t176 = (((x1161*x1162)*x1163)+x1164);

    if (t176 != 254747648285476988LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x1165 = -110;
	volatile uint8_t x1167 = UINT8_MAX;
	volatile int16_t x1168 = INT16_MIN;
	volatile int32_t t177 = -23601955;

    t177 = (((x1165*x1166)*x1167)+x1168);

    if (t177 != 3557632) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x1177 = INT64_MAX;
	static int16_t x1179 = -1;
	volatile int64_t t178 = 295457033761734590LL;

    t178 = (((x1177*x1178)*x1179)+x1180);

    if (t178 != 914LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int64_t x1182 = -6LL;
	int8_t x1183 = INT8_MIN;
	static int32_t x1184 = INT32_MAX;
	int64_t t179 = -125750LL;

    t179 = (((x1181*x1182)*x1183)+x1184);

    if (t179 != 2147581183LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x1185 = 1;
	int64_t x1186 = 16LL;
	volatile int32_t x1187 = -1397;
	uint8_t x1188 = 17U;
	int64_t t180 = 16216161693LL;

    t180 = (((x1185*x1186)*x1187)+x1188);

    if (t180 != -22335LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint32_t x1189 = 7089562U;
	uint8_t x1190 = 33U;
	uint8_t x1191 = UINT8_MAX;
	static uint32_t x1192 = UINT32_MAX;
	volatile uint32_t t181 = 24U;

    t181 = (((x1189*x1190)*x1191)+x1192);

    if (t181 != 3824089381U) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1197 = -14752;
	uint32_t x1198 = UINT32_MAX;
	int16_t x1199 = -3;
	static int8_t x1200 = -1;
	uint32_t t182 = 14188U;

    t182 = (((x1197*x1198)*x1199)+x1200);

    if (t182 != 4294923039U) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1205 = INT64_MIN;
	uint64_t x1206 = UINT64_MAX;
	int32_t x1207 = INT32_MIN;
	uint64_t t183 = 577LLU;

    t183 = (((x1205*x1206)*x1207)+x1208);

    if (t183 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x1213 = 11LL;
	int8_t x1214 = -2;
	uint8_t x1215 = 0U;
	static int64_t x1216 = -1892051328514012LL;
	volatile int64_t t184 = -133254484582111LL;

    t184 = (((x1213*x1214)*x1215)+x1216);

    if (t184 != -1892051328514012LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int16_t x1217 = -1;
	uint16_t x1219 = UINT16_MAX;
	uint64_t x1220 = 3022256429271LLU;
	static volatile uint64_t t185 = 53LLU;

    t185 = (((x1217*x1218)*x1219)+x1220);

    if (t185 != 3022256494806LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1221 = 1237U;
	int8_t x1222 = -5;
	static uint32_t x1223 = 1285U;
	static int64_t x1224 = INT64_MIN;
	static volatile int64_t t186 = 6481334LL;

    t186 = (((x1221*x1222)*x1223)+x1224);

    if (t186 != -9223372032567756237LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1233 = UINT16_MAX;
	static uint16_t x1236 = 207U;

    t187 = (((x1233*x1234)*x1235)+x1236);

    if (t187 != -58915758) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1241 = INT32_MAX;
	uint64_t x1242 = UINT64_MAX;
	uint16_t x1243 = 2205U;
	uint16_t x1244 = 3705U;
	volatile uint64_t t188 = 19170310439816LLU;

    t188 = (((x1241*x1242)*x1243)+x1244);

    if (t188 != 18446739338508113686LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1247 = INT16_MIN;
	int16_t x1248 = INT16_MIN;

    t189 = (((x1245*x1246)*x1247)+x1248);

    if (t189 != -65536) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1253 = UINT16_MAX;
	volatile uint32_t x1254 = 1587243U;
	uint8_t x1256 = UINT8_MAX;
	static uint32_t t190 = 932514237U;

    t190 = (((x1253*x1254)*x1255)+x1256);

    if (t190 != 1518031539U) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1257 = -203;
	volatile uint16_t x1258 = 19504U;
	int8_t x1259 = INT8_MIN;
	volatile int64_t x1260 = INT64_MIN;
	volatile int64_t t191 = 15906278301619LL;

    t191 = (((x1257*x1258)*x1259)+x1260);

    if (t191 != -9223372036347983872LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1265 = 14U;
	int16_t x1266 = INT16_MAX;
	uint8_t x1268 = UINT8_MAX;
	static int64_t t192 = -286465295388LL;

    t192 = (((x1265*x1266)*x1267)+x1268);

    if (t192 != -458483LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1269 = -165100944123LL;
	int8_t x1270 = INT8_MIN;
	uint64_t x1271 = 20355491562LLU;
	volatile uint64_t t193 = 6LLU;

    t193 = (((x1269*x1270)*x1271)+x1272);

    if (t193 != 11366941833844603006LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x1273 = 8268139593512414LLU;
	int64_t x1274 = INT64_MAX;
	static int16_t x1275 = 7065;
	uint64_t t194 = 29695LLU;

    t194 = (((x1273*x1274)*x1275)+x1276);

    if (t194 != 15372570067239327822LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x1277 = UINT64_MAX;
	uint64_t x1278 = UINT64_MAX;
	static uint16_t x1279 = UINT16_MAX;
	int8_t x1280 = INT8_MIN;
	volatile uint64_t t195 = 603LLU;

    t195 = (((x1277*x1278)*x1279)+x1280);

    if (t195 != 65407LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x1281 = 72589811218LLU;
	uint8_t x1283 = 3U;
	uint16_t x1284 = 174U;
	uint64_t t196 = 371LLU;

    t196 = (((x1281*x1282)*x1283)+x1284);

    if (t196 != 18446743638170684482LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x1285 = -1;
	int8_t x1286 = INT8_MAX;
	int16_t x1287 = 2;
	uint64_t x1288 = 31005804738122LLU;
	uint64_t t197 = 138053602302526LLU;

    t197 = (((x1285*x1286)*x1287)+x1288);

    if (t197 != 31005804737868LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x1289 = 1U;
	int8_t x1290 = INT8_MAX;
	int64_t x1291 = -34460604483674LL;
	volatile int32_t x1292 = INT32_MIN;
	static int64_t t198 = 4402LL;

    t198 = (((x1289*x1290)*x1291)+x1292);

    if (t198 != -4376498916910246LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x1309 = 0U;
	static int16_t x1310 = INT16_MIN;
	int8_t x1311 = INT8_MIN;
	uint32_t x1312 = UINT32_MAX;
	volatile uint32_t t199 = UINT32_MAX;

    t199 = (((x1309*x1310)*x1311)+x1312);

    if (t199 != UINT32_MAX) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

