
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

static int16_t x4 = INT16_MIN;
int64_t x11 = INT64_MIN;
int16_t x25 = 133;
static int16_t x28 = -2;
int64_t t4 = -51408527795745580LL;
int64_t x35 = 0LL;
uint8_t x36 = 6U;
static uint64_t t6 = 273341520927465751LLU;
int64_t t7 = -1021235LL;
volatile int64_t x52 = 100LL;
static volatile int32_t t9 = 1200;
int32_t x65 = -1;
static int32_t x67 = INT32_MIN;
volatile int32_t x69 = INT32_MIN;
int32_t x71 = INT32_MIN;
int16_t x91 = 722;
volatile int16_t x105 = INT16_MIN;
int8_t x108 = 61;
uint64_t x114 = 3279722LLU;
uint16_t x122 = 87U;
static int16_t x123 = INT16_MAX;
static int8_t x125 = -1;
volatile uint8_t x128 = 4U;
int64_t t22 = -9LL;
volatile int16_t x132 = INT16_MIN;
volatile uint32_t x142 = 1034722U;
int64_t t24 = 15575LL;
uint8_t x156 = 2U;
volatile uint64_t t25 = 6652167LLU;
int64_t x157 = -1LL;
int64_t x165 = -1LL;
int32_t x166 = INT32_MIN;
int64_t t27 = -1LL;
volatile int32_t x172 = -1;
static int32_t x184 = INT32_MAX;
uint8_t x215 = 2U;
uint8_t x216 = 0U;
static int64_t t36 = 2890391434LL;
uint8_t x233 = 15U;
static int64_t x235 = 2247544049964867LL;
uint8_t x244 = 61U;
int16_t x246 = INT16_MIN;
int32_t x247 = INT32_MIN;
int32_t x251 = -1;
int16_t x252 = -44;
uint8_t x253 = 1U;
int32_t x255 = -1;
int64_t x257 = 494LL;
uint8_t x261 = 0U;
int16_t x264 = -1;
uint64_t x268 = 1510536211LLU;
int8_t x274 = INT8_MIN;
volatile uint64_t t46 = 64386LLU;
volatile uint32_t x278 = UINT32_MAX;
uint8_t x279 = 5U;
uint64_t t48 = 14490484630990LLU;
uint8_t x296 = 0U;
static volatile uint64_t t50 = 24LLU;
int16_t x301 = -24;
volatile int32_t t51 = -144378;
uint8_t x308 = UINT8_MAX;
static int32_t t52 = -211815210;
int16_t x309 = INT16_MAX;
volatile int32_t x316 = 3724;
volatile uint32_t t54 = 22186076U;
int8_t x321 = -1;
volatile uint16_t x338 = 1U;
volatile uint64_t t61 = 2LLU;
int16_t x404 = INT16_MAX;
int8_t x406 = -1;
int64_t x413 = -308713LL;
int16_t x414 = INT16_MAX;
volatile uint16_t x416 = 2306U;
int64_t x419 = -261433547LL;
uint16_t x420 = 751U;
uint8_t x431 = 116U;
int64_t x440 = -192682553LL;
volatile int64_t t68 = -186716915LL;
int8_t x443 = INT8_MAX;
static uint32_t x452 = UINT32_MAX;
uint8_t x459 = 23U;
int16_t x461 = 7;
int32_t x469 = -1;
int32_t x471 = INT32_MIN;
int64_t x472 = INT64_MAX;
int64_t t74 = INT64_MAX;
int64_t x486 = INT64_MAX;
static int16_t x501 = INT16_MIN;
static uint16_t x502 = 1U;
int16_t x503 = INT16_MIN;
int32_t x507 = -1;
int8_t x509 = -1;
int16_t x510 = INT16_MIN;
uint32_t x513 = 12625U;
volatile int32_t t82 = 1034293860;
int16_t x543 = INT16_MIN;
static volatile int16_t x550 = -3;
int16_t x551 = 0;
static uint32_t x557 = UINT32_MAX;
static int16_t x563 = -7766;
static volatile uint32_t x579 = UINT32_MAX;
static volatile int64_t x584 = INT64_MIN;
int16_t x585 = INT16_MIN;
int32_t x586 = 30027;
uint32_t x591 = 166726U;
volatile uint64_t x613 = UINT64_MAX;
uint8_t x622 = 1U;
static volatile uint32_t t95 = 190164U;
uint16_t x639 = 7U;
int8_t x649 = -48;
int16_t x669 = INT16_MAX;
uint64_t x703 = 301300LLU;
int32_t x708 = -2783180;
static volatile int16_t x711 = 0;
static int32_t x715 = INT32_MIN;
uint64_t x723 = 4LLU;
int16_t x728 = INT16_MIN;
volatile int32_t t110 = -1;
int16_t x744 = -1;
int8_t x756 = INT8_MIN;
static uint32_t x783 = UINT32_MAX;
int64_t t116 = -568086321LL;
int8_t x796 = -1;
int32_t x807 = -1;
int32_t t121 = -78421573;
uint64_t t122 = 711907442LLU;
uint32_t x818 = 33287752U;
uint32_t x819 = 143U;
volatile int16_t x842 = INT16_MIN;
int16_t x848 = INT16_MAX;
int32_t x853 = -1;
static uint8_t x877 = UINT8_MAX;
uint64_t x878 = 53017803946LLU;
static volatile int32_t x879 = INT32_MAX;
static int32_t x898 = INT32_MAX;
volatile uint64_t t133 = 2299591428LLU;
int16_t x919 = INT16_MIN;
uint64_t x929 = 12375552510190LLU;
int64_t x930 = INT64_MIN;
int32_t x931 = INT32_MAX;
int32_t x932 = 10;
volatile uint32_t x967 = 58370U;
int16_t x968 = -1;
uint64_t x981 = 50513672485123229LLU;
uint16_t x988 = 4U;
static uint8_t x998 = 27U;
uint16_t x1009 = 9U;
uint32_t x1018 = UINT32_MAX;
uint16_t x1022 = 176U;
int8_t x1044 = -1;
int32_t x1048 = 12735858;
uint64_t t152 = 137111197LLU;
int8_t x1061 = INT8_MAX;
volatile uint32_t x1074 = 107653U;
uint64_t x1081 = 1011LLU;
int32_t x1087 = -1;
uint32_t x1104 = UINT32_MAX;
int64_t t157 = 1LL;
static uint16_t x1113 = UINT16_MAX;
int8_t x1114 = -1;
int16_t x1123 = -1;
uint64_t t161 = 4578126145661907132LLU;
int8_t x1128 = -3;
volatile int64_t t162 = 11860LL;
uint64_t x1133 = UINT64_MAX;
uint16_t x1137 = UINT16_MAX;
volatile int16_t x1138 = 2;
static volatile uint64_t x1148 = 195272LLU;
volatile uint64_t t165 = 260080762LLU;
int16_t x1150 = INT16_MAX;
int32_t t166 = -9761;
int8_t x1153 = 2;
static uint32_t x1156 = 43U;
int16_t x1163 = INT16_MAX;
int32_t t174 = 64228;
int16_t x1227 = INT16_MAX;
int16_t x1228 = INT16_MIN;
volatile int32_t t175 = -1662;
uint64_t x1244 = 160LLU;
int64_t t179 = 207066528674LL;
uint64_t x1250 = 673740898733LLU;
volatile uint64_t t180 = 127984510923868007LLU;
volatile int32_t x1256 = 4116;
int64_t x1260 = 505817643531391284LL;
int16_t x1263 = INT16_MIN;
static int32_t t183 = -89;
static uint16_t x1270 = 13539U;
uint32_t t184 = 1474644267U;
uint64_t t185 = 378LLU;
uint32_t x1314 = UINT32_MAX;
uint8_t x1326 = 99U;
uint8_t x1338 = UINT8_MAX;
volatile int32_t t194 = 105435363;
volatile int32_t x1353 = 4;
int8_t x1362 = -1;


void f0(void) {
    	static uint64_t x1 = 1840566678LLU;
	int16_t x2 = INT16_MIN;
	int8_t x3 = -10;
	static volatile uint64_t t0 = 624819272075636LLU;

    t0 = (((x1*x2)-x3)*x4);

    if (t0 != 1976293422029012992LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x9 = 13907LLU;
	uint64_t x10 = UINT64_MAX;
	int32_t x12 = -163124;
	uint64_t t1 = 16683095312LLU;

    t1 = (((x9*x10)-x11)*x12);

    if (t1 != 2268565468LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 111665LLU;
	int32_t x16 = INT32_MAX;
	volatile uint64_t t2 = 7LLU;

    t2 = (((x13*x14)-x15)*x16);

    if (t2 != 18446504002217686192LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = 62LLU;
	static volatile int8_t x19 = 9;
	int8_t x20 = INT8_MIN;
	uint64_t t3 = 897066LLU;

    t3 = (((x17*x18)-x19)*x20);

    if (t3 != 1152LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x26 = -921310169LL;
	int8_t x27 = 2;

    t4 = (((x25*x26)-x27)*x28);

    if (t4 != 245068504958LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MAX;
	uint8_t x34 = UINT8_MAX;
	static volatile int64_t t5 = -41978476LL;

    t5 = (((x33*x34)-x35)*x36);

    if (t5 != 50133510LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x37 = -236;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = 0;
	volatile int16_t x40 = INT16_MIN;

    t6 = (((x37*x38)-x39)*x40);

    if (t6 != 18446744073701818368LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x41 = UINT16_MAX;
	int64_t x42 = 13772LL;
	uint8_t x43 = UINT8_MAX;
	volatile int8_t x44 = 48;

    t7 = (((x41*x42)-x43)*x44);

    if (t7 != 43322292720LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x49 = INT16_MAX;
	uint8_t x50 = UINT8_MAX;
	static volatile int32_t x51 = INT32_MAX;
	static volatile int64_t t8 = 96629641LL;

    t8 = (((x49*x50)-x51)*x52);

    if (t8 != -213912806200LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x53 = -2;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = -15;
	static uint8_t x56 = 43U;

    t9 = (((x53*x54)-x55)*x56);

    if (t9 != -21285) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	uint32_t x59 = 28946U;
	static int8_t x60 = 1;
	static uint32_t t10 = 222190U;

    t10 = (((x57*x58)-x59)*x60);

    if (t10 != 4294938351U) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x61 = UINT32_MAX;
	uint8_t x62 = 102U;
	static uint8_t x63 = 6U;
	int16_t x64 = INT16_MAX;
	uint32_t t11 = 1977942988U;

    t11 = (((x61*x62)-x63)*x64);

    if (t11 != 4291428460U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x66 = 12373U;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t12 = 397442081277256LLU;

    t12 = (((x65*x66)-x67)*x68);

    if (t12 != 18446744071562080341LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x70 = UINT32_MAX;
	static int64_t x72 = 845270409224LL;
	volatile int64_t t13 = 228403LL;

    t13 = (((x69*x70)-x71)*x72);

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x77 = 180LLU;
	uint8_t x78 = 7U;
	static int16_t x79 = INT16_MIN;
	volatile uint8_t x80 = 0U;
	volatile uint64_t t14 = 8867669423140719746LLU;

    t14 = (((x77*x78)-x79)*x80);

    if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int8_t x89 = -1;
	uint16_t x90 = 2764U;
	uint32_t x92 = 4044U;
	volatile uint32_t t15 = 710592U;

    t15 = (((x89*x90)-x91)*x92);

    if (t15 != 4280869912U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x101 = -224;
	uint64_t x102 = UINT64_MAX;
	int16_t x103 = -25;
	uint8_t x104 = 3U;
	volatile uint64_t t16 = 3264394652070593LLU;

    t16 = (((x101*x102)-x103)*x104);

    if (t16 != 747LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x106 = 727965837U;
	uint64_t x107 = 14393241158026360LLU;
	uint64_t t17 = 901LLU;

    t17 = (((x105*x106)-x107)*x108);

    if (t17 != 17568756379162668904LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x109 = INT8_MIN;
	static volatile int8_t x110 = -6;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 8550U;
	static volatile int32_t t18 = 946;

    t18 = (((x109*x110)-x111)*x112);

    if (t18 != 7660800) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x113 = INT32_MIN;
	int64_t x115 = INT64_MIN;
	volatile int32_t x116 = -375125662;
	static uint64_t t19 = 1665LLU;

    t19 = (((x113*x114)-x115)*x116);

    if (t19 != 12701404074612883456LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x117 = 1U;
	static uint64_t x118 = 107642138LLU;
	int8_t x119 = -1;
	uint16_t x120 = 0U;
	volatile uint64_t t20 = 112867514198602433LLU;

    t20 = (((x117*x118)-x119)*x120);

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x121 = 1449146U;
	int32_t x124 = -214;
	static uint32_t t21 = 3U;

    t21 = (((x121*x122)-x123)*x124);

    if (t21 != 3091582982U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x126 = 1025291682;
	volatile int64_t x127 = 8203446048LL;

    t22 = (((x125*x126)-x127)*x128);

    if (t22 != -36914950920LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x129 = -1;
	uint32_t x130 = 6147421U;
	int16_t x131 = 212;
	volatile uint32_t t23 = 118415U;

    t23 = (((x129*x130)-x131)*x132);

    if (t23 != 3877142528U) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x141 = 389;
	int8_t x143 = INT8_MIN;
	int64_t x144 = -1LL;

    t24 = (((x141*x142)-x143)*x144);

    if (t24 != -402506986LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x153 = 5;
	static int8_t x154 = -1;
	uint64_t x155 = 2858LLU;

    t25 = (((x153*x154)-x155)*x156);

    if (t25 != 18446744073709545890LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x158 = INT8_MIN;
	int16_t x159 = -1;
	uint32_t x160 = UINT32_MAX;
	volatile int64_t t26 = -220141LL;

    t26 = (((x157*x158)-x159)*x160);

    if (t26 != 554050781055LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x167 = INT8_MIN;
	static volatile int32_t x168 = INT32_MIN;

    t27 = (((x165*x166)-x167)*x168);

    if (t27 != -4611686293305294848LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x169 = 677850LLU;
	static int8_t x170 = 1;
	int64_t x171 = -1LL;
	uint64_t t28 = 2782803709198665342LLU;

    t28 = (((x169*x170)-x171)*x172);

    if (t28 != 18446744073708873765LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint16_t x177 = 29U;
	volatile int16_t x178 = -548;
	static uint64_t x179 = 1616911698LLU;
	static volatile uint8_t x180 = 86U;
	volatile uint64_t t29 = 26640LLU;

    t29 = (((x177*x178)-x179)*x180);

    if (t29 != 18446743934653778876LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x181 = 445096U;
	static int8_t x182 = 11;
	uint16_t x183 = 24U;
	static volatile uint32_t t30 = 39526U;

    t30 = (((x181*x182)-x183)*x184);

    if (t30 != 4290071264U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x185 = INT8_MIN;
	uint16_t x186 = 1U;
	volatile uint8_t x187 = 7U;
	uint32_t x188 = 217U;
	uint32_t t31 = 7656788U;

    t31 = (((x185*x186)-x187)*x188);

    if (t31 != 4294938001U) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x189 = 354328726LL;
	int32_t x190 = 76;
	static int32_t x191 = INT32_MIN;
	uint32_t x192 = 56637U;
	int64_t t32 = 3008000941021LL;

    t32 = (((x189*x190)-x191)*x192);

    if (t32 != 1646803851510888LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x213 = 7U;
	int32_t x214 = -1;
	int32_t t33 = 153;

    t33 = (((x213*x214)-x215)*x216);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x217 = 451U;
	uint32_t x218 = 92U;
	static int32_t x219 = INT32_MIN;
	volatile int8_t x220 = INT8_MAX;
	uint32_t t34 = 77493182U;

    t34 = (((x217*x218)-x219)*x220);

    if (t34 != 2152753132U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x221 = -1;
	int16_t x222 = -289;
	int16_t x223 = -2076;
	int64_t x224 = -1LL;
	volatile int64_t t35 = 5568849502LL;

    t35 = (((x221*x222)-x223)*x224);

    if (t35 != -2365LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x225 = 15485;
	int64_t x226 = -1LL;
	int8_t x227 = 0;
	volatile uint16_t x228 = 113U;

    t36 = (((x225*x226)-x227)*x228);

    if (t36 != -1749805LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x229 = INT8_MAX;
	uint16_t x230 = 47U;
	int64_t x231 = -1LL;
	int32_t x232 = INT32_MAX;
	int64_t t37 = 525989072962011560LL;

    t37 = (((x229*x230)-x231)*x232);

    if (t37 != 12820477372590LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x234 = 46U;
	uint64_t x236 = 5LLU;
	volatile uint64_t t38 = 48359144942LLU;

    t38 = (((x233*x234)-x235)*x236);

    if (t38 != 18435506353459730731LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x241 = INT32_MIN;
	volatile uint32_t x242 = UINT32_MAX;
	static int32_t x243 = -1;
	uint32_t t39 = 105150U;

    t39 = (((x241*x242)-x243)*x244);

    if (t39 != 2147483709U) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x245 = 110936350LL;
	int8_t x248 = INT8_MAX;
	static volatile int64_t t40 = -208363798155LL;

    t40 = (((x245*x246)-x247)*x248);

    if (t40 != -461392883810304LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x249 = UINT32_MAX;
	uint8_t x250 = 13U;
	uint32_t t41 = 585082199U;

    t41 = (((x249*x250)-x251)*x252);

    if (t41 != 528U) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x254 = -121LL;
	static int8_t x256 = INT8_MAX;
	static int64_t t42 = 119148278286612LL;

    t42 = (((x253*x254)-x255)*x256);

    if (t42 != -15240LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x258 = -1;
	volatile int64_t x259 = INT64_MIN;
	static int8_t x260 = -1;
	volatile int64_t t43 = -28852890LL;

    t43 = (((x257*x258)-x259)*x260);

    if (t43 != -9223372036854775314LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x262 = UINT16_MAX;
	static int16_t x263 = -1;
	static int32_t t44 = -1;

    t44 = (((x261*x262)-x263)*x264);

    if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x265 = -1;
	int64_t x266 = -15255517532LL;
	uint8_t x267 = 51U;
	static volatile uint64_t t45 = 1039LLU;

    t45 = (((x265*x266)-x267)*x268);

    if (t45 != 4597267498884452875LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x273 = 4501495005203078LL;
	static volatile int64_t x275 = 1757894112618073588LL;
	uint64_t x276 = UINT64_MAX;

    t46 = (((x273*x274)-x275)*x276);

    if (t46 != 2334085473284067572LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x277 = 122U;
	int16_t x280 = -94;
	volatile uint32_t t47 = 295U;

    t47 = (((x277*x278)-x279)*x280);

    if (t47 != 11938U) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint64_t x281 = 3409735833LLU;
	static volatile int16_t x282 = INT16_MAX;
	static int64_t x283 = -448024633165219338LL;
	uint8_t x284 = 1U;

    t48 = (((x281*x282)-x283)*x284);

    if (t48 != 448136359979259249LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint32_t x293 = UINT32_MAX;
	int16_t x294 = INT16_MAX;
	uint32_t x295 = 0U;
	volatile uint32_t t49 = 351U;

    t49 = (((x293*x294)-x295)*x296);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x297 = 882;
	static uint64_t x298 = 9771817LLU;
	int32_t x299 = INT32_MAX;
	uint16_t x300 = UINT16_MAX;

    t50 = (((x297*x298)-x299)*x300);

    if (t50 != 424093955091645LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x302 = 441U;
	int8_t x303 = 13;
	uint8_t x304 = 117U;

    t51 = (((x301*x302)-x303)*x304);

    if (t51 != -1239849) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x305 = 1;
	int16_t x306 = INT16_MAX;
	uint8_t x307 = UINT8_MAX;

    t52 = (((x305*x306)-x307)*x308);

    if (t52 != 8290560) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x310 = 28469066U;
	int16_t x311 = INT16_MAX;
	int32_t x312 = -1;
	uint32_t t53 = 14U;

    t53 = (((x309*x310)-x311)*x312);

    if (t53 != 3457017673U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x313 = -20;
	static volatile uint32_t x314 = UINT32_MAX;
	static uint16_t x315 = 883U;

    t54 = (((x313*x314)-x315)*x316);

    if (t54 != 4291753484U) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x322 = -1;
	static uint64_t x323 = UINT64_MAX;
	int64_t x324 = 79640124446168LL;
	uint64_t t55 = 7LLU;

    t55 = (((x321*x322)-x323)*x324);

    if (t55 != 159280248892336LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint32_t x337 = UINT32_MAX;
	volatile uint32_t x339 = UINT32_MAX;
	uint32_t x340 = UINT32_MAX;
	uint32_t t56 = 8U;

    t56 = (((x337*x338)-x339)*x340);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x341 = 17U;
	int64_t x342 = -1LL;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = INT32_MAX;
	static volatile uint64_t t57 = 21LLU;

    t57 = (((x341*x342)-x343)*x344);

    if (t57 != 18446744039349813264LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x353 = 650402LLU;
	volatile int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MIN;
	static uint8_t x356 = 4U;
	uint64_t t58 = 51LLU;

    t58 = (((x353*x354)-x355)*x356);

    if (t58 != 8256928768LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x357 = 4;
	volatile uint64_t x358 = 1619402419664677LLU;
	uint16_t x359 = 1530U;
	int8_t x360 = -1;
	volatile uint64_t t59 = 1513113LLU;

    t59 = (((x357*x358)-x359)*x360);

    if (t59 != 18440266464030894438LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x381 = INT8_MAX;
	int8_t x382 = 15;
	int8_t x383 = INT8_MIN;
	volatile int8_t x384 = 7;
	int32_t t60 = -2;

    t60 = (((x381*x382)-x383)*x384);

    if (t60 != 14231) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x385 = -1;
	static uint64_t x386 = 21673LLU;
	volatile int32_t x387 = INT32_MIN;
	static volatile int16_t x388 = -1;

    t61 = (((x385*x386)-x387)*x388);

    if (t61 != 18446744071562089641LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x401 = 12880703961866LLU;
	volatile int64_t x402 = -1LL;
	int32_t x403 = INT32_MIN;
	uint64_t t62 = 35143519423565359LLU;

    t62 = (((x401*x402)-x403)*x404);

    if (t62 != 18024752413587782410LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x405 = -1;
	uint16_t x407 = 0U;
	uint32_t x408 = 457U;
	volatile uint32_t t63 = 5960U;

    t63 = (((x405*x406)-x407)*x408);

    if (t63 != 457U) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x415 = 0;
	int64_t t64 = -135LL;

    t64 = (((x413*x414)-x415)*x416);

    if (t64 != -23326570996526LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x417 = INT64_MIN;
	uint64_t x418 = 78362682739LLU;
	uint64_t t65 = 94015LLU;

    t65 = (((x417*x418)-x419)*x420);

    if (t65 != 9223372233191369605LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile uint32_t x429 = 897301926U;
	uint32_t x430 = 42U;
	int32_t x432 = INT32_MIN;
	volatile uint32_t t66 = 2U;

    t66 = (((x429*x430)-x431)*x432);

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x433 = -1LL;
	int16_t x434 = INT16_MIN;
	int8_t x435 = 28;
	int16_t x436 = INT16_MIN;
	volatile int64_t t67 = 2208102604408133LL;

    t67 = (((x433*x434)-x435)*x436);

    if (t67 != -1072824320LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x437 = 62844;
	volatile int16_t x438 = -1;
	uint8_t x439 = 0U;

    t68 = (((x437*x438)-x439)*x440);

    if (t68 != 12108942360732LL) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint64_t x441 = UINT64_MAX;
	volatile int64_t x442 = -209364923762960675LL;
	int32_t x444 = -1;
	volatile uint64_t t69 = 69275021478LLU;

    t69 = (((x441*x442)-x443)*x444);

    if (t69 != 18237379149946591068LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x445 = 26U;
	int32_t x446 = -418235;
	int8_t x447 = 12;
	int8_t x448 = INT8_MAX;
	uint32_t t70 = 5779708U;

    t70 = (((x445*x446)-x447)*x448);

    if (t70 != 2913953802U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x449 = 109527360U;
	int32_t x450 = 130;
	uint64_t x451 = 878983670LLU;
	uint64_t t71 = 20828959991LLU;

    t71 = (((x449*x450)-x451)*x452);

    if (t71 != 2038697460267030390LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x457 = -1;
	volatile int8_t x458 = INT8_MIN;
	static int16_t x460 = 2;
	static volatile int32_t t72 = 14;

    t72 = (((x457*x458)-x459)*x460);

    if (t72 != 210) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x462 = 16U;
	static volatile int16_t x463 = INT16_MIN;
	static uint32_t x464 = 936U;
	static uint32_t t73 = 4002U;

    t73 = (((x461*x462)-x463)*x464);

    if (t73 != 30775680U) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x470 = INT32_MAX;

    t74 = (((x469*x470)-x471)*x472);

    if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x485 = 856LLU;
	int8_t x487 = -18;
	volatile int8_t x488 = 13;
	volatile uint64_t t75 = 3667263264LLU;

    t75 = (((x485*x486)-x487)*x488);

    if (t75 != 18446744073709540722LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint32_t x497 = UINT32_MAX;
	volatile int64_t x498 = 5451331LL;
	int16_t x499 = -1;
	volatile int32_t x500 = 0;
	static volatile int64_t t76 = 337LL;

    t76 = (((x497*x498)-x499)*x500);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x504 = UINT16_MAX;
	int32_t t77 = 1;

    t77 = (((x501*x502)-x503)*x504);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x505 = 120066049056577LLU;
	int64_t x506 = -1LL;
	static int8_t x508 = INT8_MIN;
	uint64_t t78 = 96718088222888LLU;

    t78 = (((x505*x506)-x507)*x508);

    if (t78 != 15368454279241728LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x511 = 0;
	static uint32_t x512 = 3U;
	static uint32_t t79 = 18U;

    t79 = (((x509*x510)-x511)*x512);

    if (t79 != 98304U) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x514 = UINT32_MAX;
	uint32_t x515 = 308U;
	int16_t x516 = -1;
	uint32_t t80 = 420618U;

    t80 = (((x513*x514)-x515)*x516);

    if (t80 != 12933U) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x517 = 8578LLU;
	uint32_t x518 = UINT32_MAX;
	volatile uint64_t x519 = UINT64_MAX;
	int16_t x520 = -1;
	uint64_t t81 = 5835LLU;

    t81 = (((x517*x518)-x519)*x520);

    if (t81 != 18446707231480095105LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int16_t x529 = 414;
	static int16_t x530 = INT16_MIN;
	volatile int32_t x531 = 26066608;
	int32_t x532 = -1;

    t82 = (((x529*x530)-x531)*x532);

    if (t82 != 39632560) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x541 = UINT64_MAX;
	uint8_t x542 = 0U;
	int64_t x544 = -229233688095LL;
	uint64_t t83 = 234026045331119LLU;

    t83 = (((x541*x542)-x543)*x544);

    if (t83 != 18439232544218054656LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x545 = 340332131072173430LLU;
	int32_t x546 = 106943;
	int64_t x547 = INT64_MIN;
	int16_t x548 = INT16_MIN;
	static volatile uint64_t t84 = 51046351366LLU;

    t84 = (((x545*x546)-x547)*x548);

    if (t84 != 7266909782546251776LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x549 = -1;
	volatile int8_t x552 = -1;
	int32_t t85 = 2;

    t85 = (((x549*x550)-x551)*x552);

    if (t85 != -3) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x558 = 2566054LL;
	static uint64_t x559 = 74305LLU;
	volatile int16_t x560 = 14389;
	volatile uint64_t t86 = 188LLU;

    t86 = (((x557*x558)-x559)*x560);

    if (t86 != 11008914414911761197LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x561 = 464U;
	volatile int16_t x562 = -1;
	uint32_t x564 = 190U;
	static uint32_t t87 = 502752U;

    t87 = (((x561*x562)-x563)*x564);

    if (t87 != 1387380U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x573 = 9LLU;
	volatile uint32_t x574 = 14624674U;
	volatile int16_t x575 = -1;
	int8_t x576 = -1;
	volatile uint64_t t88 = 23LLU;

    t88 = (((x573*x574)-x575)*x576);

    if (t88 != 18446744073577929549LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x577 = INT8_MAX;
	uint32_t x578 = 393190429U;
	static int32_t x580 = -1;
	uint32_t t89 = 6044U;

    t89 = (((x577*x578)-x579)*x580);

    if (t89 != 1604423068U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint16_t x581 = 0U;
	volatile int8_t x582 = INT8_MAX;
	int16_t x583 = -1;
	int64_t t90 = INT64_MIN;

    t90 = (((x581*x582)-x583)*x584);

    if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint64_t x587 = 278702523037501666LLU;
	volatile uint16_t x588 = UINT16_MAX;
	static uint64_t t91 = 1234795224498467LLU;

    t91 = (((x585*x586)-x587)*x588);

    if (t91 != 15953465301986396386LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x589 = 0LLU;
	int16_t x590 = INT16_MIN;
	uint64_t x592 = UINT64_MAX;
	volatile uint64_t t92 = 132969496LLU;

    t92 = (((x589*x590)-x591)*x592);

    if (t92 != 166726LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x614 = 956;
	static int32_t x615 = -21764476;
	uint8_t x616 = UINT8_MAX;
	volatile uint64_t t93 = 1774789581LLU;

    t93 = (((x613*x614)-x615)*x616);

    if (t93 != 5549697600LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x621 = INT8_MIN;
	volatile int8_t x623 = INT8_MIN;
	volatile uint64_t x624 = 6343821391535894LLU;
	volatile uint64_t t94 = 666LLU;

    t94 = (((x621*x622)-x623)*x624);

    if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x629 = 2428;
	static uint16_t x630 = UINT16_MAX;
	uint32_t x631 = 152U;
	int8_t x632 = INT8_MIN;

    t95 = (((x629*x630)-x631)*x632);

    if (t95 != 1107626496U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x637 = 3U;
	int16_t x638 = -1;
	static uint32_t x640 = 185618U;
	uint32_t t96 = 2212043U;

    t96 = (((x637*x638)-x639)*x640);

    if (t96 != 4293111116U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x645 = UINT32_MAX;
	int8_t x646 = 4;
	uint16_t x647 = UINT16_MAX;
	int32_t x648 = INT32_MAX;
	uint32_t t97 = 31103U;

    t97 = (((x645*x646)-x647)*x648);

    if (t97 != 2147549187U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x650 = INT16_MAX;
	uint16_t x651 = 14U;
	int8_t x652 = INT8_MAX;
	int32_t t98 = -3;

    t98 = (((x649*x650)-x651)*x652);

    if (t98 != -199749410) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x657 = UINT32_MAX;
	int16_t x658 = -1;
	static uint64_t x659 = UINT64_MAX;
	volatile int64_t x660 = -1LL;
	volatile uint64_t t99 = 85280446LLU;

    t99 = (((x657*x658)-x659)*x660);

    if (t99 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x661 = 4;
	volatile uint64_t x662 = 977454314640691LLU;
	int16_t x663 = -117;
	volatile int32_t x664 = INT32_MIN;
	uint64_t t100 = 1612274LLU;

    t100 = (((x661*x662)-x663)*x664);

    if (t100 != 6743389885714923520LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x665 = UINT8_MAX;
	int64_t x666 = -1LL;
	uint8_t x667 = 40U;
	volatile uint8_t x668 = UINT8_MAX;
	volatile int64_t t101 = 117011125209088LL;

    t101 = (((x665*x666)-x667)*x668);

    if (t101 != -75225LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int32_t x670 = -1;
	uint16_t x671 = UINT16_MAX;
	static int8_t x672 = INT8_MAX;
	int32_t t102 = -6426630;

    t102 = (((x669*x670)-x671)*x672);

    if (t102 != -12484354) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint32_t x673 = UINT32_MAX;
	int64_t x674 = -194LL;
	volatile uint64_t x675 = UINT64_MAX;
	uint64_t x676 = 30922LLU;
	static volatile uint64_t t103 = 16225039287511232LLU;

    t103 = (((x673*x674)-x675)*x676);

    if (t103 != 18420979131842560478LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x701 = 12661U;
	volatile int64_t x702 = -1LL;
	uint64_t x704 = 139108114051LLU;
	volatile uint64_t t104 = 6431046739475176587LLU;

    t104 = (((x701*x702)-x703)*x704);

    if (t104 != 18403069551113985605LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x705 = INT8_MAX;
	static uint64_t x706 = 4011364LLU;
	uint32_t x707 = UINT32_MAX;
	uint64_t t105 = 29059901467116LLU;

    t105 = (((x705*x706)-x707)*x708);

    if (t105 != 10535794872793060LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x709 = 1;
	static int8_t x710 = -49;
	volatile uint16_t x712 = UINT16_MAX;
	volatile int32_t t106 = -455;

    t106 = (((x709*x710)-x711)*x712);

    if (t106 != -3211215) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x713 = UINT16_MAX;
	int16_t x714 = -536;
	int64_t x716 = -1085025LL;
	static volatile int64_t t107 = 2LL;

    t107 = (((x713*x714)-x715)*x716);

    if (t107 != -2291960032402200LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x721 = 0;
	uint8_t x722 = UINT8_MAX;
	uint32_t x724 = 11787743U;
	static volatile uint64_t t108 = 74961949033822LLU;

    t108 = (((x721*x722)-x723)*x724);

    if (t108 != 18446744073662400644LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x725 = INT8_MIN;
	static int8_t x726 = INT8_MIN;
	uint64_t x727 = 422168LLU;
	volatile uint64_t t109 = 228152124LLU;

    t109 = (((x725*x726)-x727)*x728);

    if (t109 != 13296730112LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x729 = 0;
	uint8_t x730 = 31U;
	static int32_t x731 = 375;
	int8_t x732 = INT8_MAX;

    t110 = (((x729*x730)-x731)*x732);

    if (t110 != -47625) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x733 = 6;
	volatile int32_t x734 = -1;
	volatile int8_t x735 = 24;
	uint8_t x736 = 14U;
	int32_t t111 = -4;

    t111 = (((x733*x734)-x735)*x736);

    if (t111 != -420) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x741 = -1;
	int16_t x742 = INT16_MIN;
	static uint64_t x743 = 24049348063075LLU;
	uint64_t t112 = 231338LLU;

    t112 = (((x741*x742)-x743)*x744);

    if (t112 != 24049348030307LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x753 = -14;
	uint8_t x754 = 2U;
	volatile int16_t x755 = -1;
	static int32_t t113 = -3249;

    t113 = (((x753*x754)-x755)*x756);

    if (t113 != 3456) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x757 = -1;
	int64_t x758 = 60LL;
	int8_t x759 = -1;
	static uint64_t x760 = UINT64_MAX;
	volatile uint64_t t114 = 5LLU;

    t114 = (((x757*x758)-x759)*x760);

    if (t114 != 59LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x765 = 62534373392LLU;
	volatile int8_t x766 = 0;
	int8_t x767 = INT8_MIN;
	int16_t x768 = 10401;
	volatile uint64_t t115 = 6036130747972429LLU;

    t115 = (((x765*x766)-x767)*x768);

    if (t115 != 1331328LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = 2U;
	static int64_t x784 = -1LL;

    t116 = (((x781*x782)-x783)*x784);

    if (t116 != -4294967041LL) { NG(); } else { ; }
	
}

void f117(void) {
    	static int64_t x789 = -21431LL;
	int8_t x790 = INT8_MAX;
	volatile int32_t x791 = 1951;
	uint32_t x792 = UINT32_MAX;
	static volatile int64_t t117 = -22563298163027LL;

    t117 = (((x789*x790)-x791)*x792);

    if (t117 != -11698150881783960LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x793 = -43;
	uint32_t x794 = 683082260U;
	int16_t x795 = INT16_MIN;
	static uint32_t t118 = 51281U;

    t118 = (((x793*x794)-x795)*x796);

    if (t118 != 3602700636U) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x797 = -1487;
	static uint32_t x798 = 26116U;
	static int8_t x799 = -17;
	uint16_t x800 = 2807U;
	uint32_t t119 = 2533614U;

    t119 = (((x797*x798)-x799)*x800);

    if (t119 != 2660778371U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x801 = UINT64_MAX;
	static int8_t x802 = INT8_MAX;
	int8_t x803 = 20;
	int16_t x804 = -1;
	static uint64_t t120 = 49683829LLU;

    t120 = (((x801*x802)-x803)*x804);

    if (t120 != 147LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x805 = 110U;
	volatile int16_t x806 = -4;
	int32_t x808 = -2;

    t121 = (((x805*x806)-x807)*x808);

    if (t121 != 878) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x809 = UINT8_MAX;
	volatile uint16_t x810 = 28U;
	uint64_t x811 = UINT64_MAX;
	uint8_t x812 = 0U;

    t122 = (((x809*x810)-x811)*x812);

    if (t122 != 0LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x817 = -1LL;
	int32_t x820 = 338;
	volatile int64_t t123 = -6132LL;

    t123 = (((x817*x818)-x819)*x820);

    if (t123 != -11251308510LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x829 = INT8_MIN;
	int16_t x830 = -1;
	volatile int8_t x831 = -1;
	int16_t x832 = 4;
	int32_t t124 = -3369748;

    t124 = (((x829*x830)-x831)*x832);

    if (t124 != 516) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x841 = -9846LL;
	volatile int64_t x843 = -556177064206297791LL;
	static int16_t x844 = 3;
	static volatile int64_t t125 = -497632125201LL;

    t125 = (((x841*x842)-x843)*x844);

    if (t125 != 1668531193586794557LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x845 = 0;
	static int64_t x846 = INT64_MAX;
	int8_t x847 = 0;
	volatile int64_t t126 = -166958837LL;

    t126 = (((x845*x846)-x847)*x848);

    if (t126 != 0LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x849 = 544802071;
	int64_t x850 = -6532LL;
	uint8_t x851 = 18U;
	static volatile int64_t x852 = -1520626LL;
	volatile int64_t t127 = -210593857LL;

    t127 = (((x849*x850)-x851)*x852);

    if (t127 != 5411371347342796540LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int16_t x854 = -1;
	volatile int8_t x855 = INT8_MIN;
	uint32_t x856 = 977340U;
	volatile uint32_t t128 = 101599270U;

    t128 = (((x853*x854)-x855)*x856);

    if (t128 != 126076860U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int16_t x865 = INT16_MIN;
	static uint8_t x866 = 2U;
	volatile int64_t x867 = 9LL;
	volatile int8_t x868 = INT8_MAX;
	static int64_t t129 = -183LL;

    t129 = (((x865*x866)-x867)*x868);

    if (t129 != -8324215LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x873 = -1;
	volatile int64_t x874 = 38LL;
	volatile int8_t x875 = INT8_MAX;
	int8_t x876 = INT8_MIN;
	static int64_t t130 = -144LL;

    t130 = (((x873*x874)-x875)*x876);

    if (t130 != 21120LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x880 = 10U;
	uint64_t t131 = 1802358359164LLU;

    t131 = (((x877*x878)-x879)*x880);

    if (t131 != 135173925225830LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint32_t x893 = UINT32_MAX;
	uint16_t x894 = 2628U;
	int32_t x895 = -1;
	int16_t x896 = -3;
	volatile uint32_t t132 = 2677U;

    t132 = (((x893*x894)-x895)*x896);

    if (t132 != 7881U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x897 = UINT64_MAX;
	static int8_t x899 = INT8_MAX;
	uint64_t x900 = 2LLU;

    t133 = (((x897*x898)-x899)*x900);

    if (t133 != 18446744069414584068LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x913 = 1089995326946078732LL;
	uint32_t x914 = 1U;
	uint64_t x915 = 6LLU;
	int32_t x916 = INT32_MAX;
	static uint64_t t134 = 675142681110LLU;

    t134 = (((x913*x914)-x915)*x916);

    if (t134 != 13229894592512069626LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x917 = INT16_MIN;
	static int8_t x918 = INT8_MAX;
	int16_t x920 = -30;
	int32_t t135 = -30462;

    t135 = (((x917*x918)-x919)*x920);

    if (t135 != 123863040) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x921 = -35;
	uint8_t x922 = 1U;
	volatile uint16_t x923 = 60U;
	int16_t x924 = 177;
	volatile int32_t t136 = 1043715828;

    t136 = (((x921*x922)-x923)*x924);

    if (t136 != -16815) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t t137 = 132387895083436LLU;

    t137 = (((x929*x930)-x931)*x932);

    if (t137 != 18446744052234715146LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint32_t x941 = 61254U;
	uint64_t x942 = 185749069368431LLU;
	int16_t x943 = INT16_MIN;
	static int32_t x944 = 13128174;
	volatile uint64_t t138 = 2550860486865LLU;

    t138 = (((x941*x942)-x943)*x944);

    if (t138 != 637637063681986476LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x945 = 140688986881665753LLU;
	uint16_t x946 = 311U;
	uint8_t x947 = 47U;
	volatile int32_t x948 = -1;
	uint64_t t139 = 43821174LLU;

    t139 = (((x945*x946)-x947)*x948);

    if (t139 != 11585957300930605712LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x957 = INT32_MIN;
	volatile uint32_t x958 = UINT32_MAX;
	int32_t x959 = INT32_MIN;
	volatile int32_t x960 = 1;
	volatile uint32_t t140 = 2U;

    t140 = (((x957*x958)-x959)*x960);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x965 = 119;
	int16_t x966 = -1;
	volatile uint32_t t141 = 15140580U;

    t141 = (((x965*x966)-x967)*x968);

    if (t141 != 58489U) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x973 = 1;
	uint64_t x974 = 38368980LLU;
	int8_t x975 = -1;
	uint16_t x976 = 969U;
	static volatile uint64_t t142 = 1962476682LLU;

    t142 = (((x973*x974)-x975)*x976);

    if (t142 != 37179542589LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x982 = 13;
	int32_t x983 = -20045409;
	uint32_t x984 = 0U;
	static volatile uint64_t t143 = 29611LLU;

    t143 = (((x981*x982)-x983)*x984);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x985 = INT64_MIN;
	uint64_t x986 = UINT64_MAX;
	static uint8_t x987 = 91U;
	volatile uint64_t t144 = 797480935248539LLU;

    t144 = (((x985*x986)-x987)*x988);

    if (t144 != 18446744073709551252LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x993 = 6U;
	uint8_t x994 = 1U;
	int64_t x995 = INT64_MAX;
	int8_t x996 = -1;
	int64_t t145 = -9297LL;

    t145 = (((x993*x994)-x995)*x996);

    if (t145 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile int64_t x997 = 477653LL;
	static int64_t x999 = -3195585LL;
	int64_t x1000 = -1LL;
	static volatile int64_t t146 = -72510213910993529LL;

    t146 = (((x997*x998)-x999)*x1000);

    if (t146 != -16092216LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x1010 = UINT64_MAX;
	int32_t x1011 = INT32_MAX;
	static int32_t x1012 = -1;
	volatile uint64_t t147 = 78980306876842LLU;

    t147 = (((x1009*x1010)-x1011)*x1012);

    if (t147 != 2147483656LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x1017 = 0;
	int8_t x1019 = INT8_MAX;
	uint32_t x1020 = 451U;
	uint32_t t148 = 3394344U;

    t148 = (((x1017*x1018)-x1019)*x1020);

    if (t148 != 4294910019U) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x1021 = INT8_MIN;
	int16_t x1023 = INT16_MAX;
	uint32_t x1024 = 163034U;
	static volatile uint32_t t149 = 526299504U;

    t149 = (((x1021*x1022)-x1023)*x1024);

    if (t149 != 3869936858U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x1041 = 57U;
	int64_t x1042 = -361596533LL;
	int16_t x1043 = INT16_MIN;
	int64_t t150 = 1950685669LL;

    t150 = (((x1041*x1042)-x1043)*x1044);

    if (t150 != 20610969613LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x1045 = INT8_MAX;
	int16_t x1046 = -1;
	int8_t x1047 = -1;
	volatile int32_t t151 = -10;

    t151 = (((x1045*x1046)-x1047)*x1048);

    if (t151 != -1604718108) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1057 = -1;
	volatile int16_t x1058 = INT16_MAX;
	static uint8_t x1059 = UINT8_MAX;
	uint64_t x1060 = 397LLU;

    t152 = (((x1057*x1058)-x1059)*x1060);

    if (t152 != 18446744073696441882LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x1062 = 1;
	int8_t x1063 = -6;
	uint16_t x1064 = 2112U;
	int32_t t153 = -54;

    t153 = (((x1061*x1062)-x1063)*x1064);

    if (t153 != 280896) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x1073 = UINT64_MAX;
	static volatile int32_t x1075 = -1;
	int8_t x1076 = INT8_MIN;
	volatile uint64_t t154 = 40443410101LLU;

    t154 = (((x1073*x1074)-x1075)*x1076);

    if (t154 != 13779456LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1082 = 69U;
	uint16_t x1083 = UINT16_MAX;
	int8_t x1084 = INT8_MAX;
	uint64_t t155 = 632LLU;

    t155 = (((x1081*x1082)-x1083)*x1084);

    if (t155 != 536448LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x1085 = 178857U;
	static int8_t x1086 = INT8_MIN;
	uint16_t x1088 = UINT16_MAX;
	uint32_t t156 = 294100112U;

    t156 = (((x1085*x1086)-x1087)*x1088);

    if (t156 != 2900251775U) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x1101 = INT16_MAX;
	static int8_t x1102 = 0;
	int64_t x1103 = -1LL;

    t157 = (((x1101*x1102)-x1103)*x1104);

    if (t157 != 4294967295LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x1109 = UINT32_MAX;
	uint32_t x1110 = 516U;
	uint64_t x1111 = 3LLU;
	int64_t x1112 = -1LL;
	volatile uint64_t t158 = 357596584779553117LLU;

    t158 = (((x1109*x1110)-x1111)*x1112);

    if (t158 != 18446744069414584839LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x1115 = INT8_MIN;
	int8_t x1116 = INT8_MAX;
	volatile int32_t t159 = 61551;

    t159 = (((x1113*x1114)-x1115)*x1116);

    if (t159 != -8306689) { NG(); } else { ; }
	
}

void f160(void) {
    	static int32_t x1117 = 16814;
	volatile int16_t x1118 = -1108;
	uint64_t x1119 = UINT64_MAX;
	int32_t x1120 = 56733;
	uint64_t t160 = 2268153505502623LLU;

    t160 = (((x1117*x1118)-x1119)*x1120);

    if (t160 != 18446743016778810853LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x1121 = 1U;
	uint64_t x1122 = UINT64_MAX;
	static int64_t x1124 = INT64_MIN;

    t161 = (((x1121*x1122)-x1123)*x1124);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1125 = 3;
	uint8_t x1126 = UINT8_MAX;
	static int64_t x1127 = -15824961065LL;

    t162 = (((x1125*x1126)-x1127)*x1128);

    if (t162 != -47474885490LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1134 = -338302579;
	int8_t x1135 = INT8_MAX;
	int8_t x1136 = INT8_MAX;
	static uint64_t t163 = 45838LLU;

    t163 = (((x1133*x1134)-x1135)*x1136);

    if (t163 != 42964411404LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint8_t x1139 = 11U;
	int8_t x1140 = INT8_MAX;
	static volatile int32_t t164 = 117660;

    t164 = (((x1137*x1138)-x1139)*x1140);

    if (t164 != 16644493) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x1145 = INT8_MIN;
	uint32_t x1146 = 10450U;
	uint64_t x1147 = 307LLU;

    t165 = (((x1145*x1146)-x1147)*x1148);

    if (t165 != 838425598048808LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x1149 = 2;
	int32_t x1151 = -10;
	static int32_t x1152 = -1;

    t166 = (((x1149*x1150)-x1151)*x1152);

    if (t166 != -65544) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1154 = UINT32_MAX;
	static volatile int8_t x1155 = INT8_MIN;
	volatile uint32_t t167 = 6744U;

    t167 = (((x1153*x1154)-x1155)*x1156);

    if (t167 != 5418U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1161 = 3U;
	static uint32_t x1162 = 3U;
	volatile int64_t x1164 = -1LL;
	int64_t t168 = -10634200231347LL;

    t168 = (((x1161*x1162)-x1163)*x1164);

    if (t168 != -4294934538LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x1169 = 67U;
	uint64_t x1170 = 46835LLU;
	uint8_t x1171 = 2U;
	int64_t x1172 = INT64_MIN;
	volatile uint64_t t169 = 759LLU;

    t169 = (((x1169*x1170)-x1171)*x1172);

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int64_t x1181 = -1LL;
	uint64_t x1182 = 853LLU;
	int32_t x1183 = -1;
	int64_t x1184 = INT64_MAX;
	static uint64_t t170 = 35085LLU;

    t170 = (((x1181*x1182)-x1183)*x1184);

    if (t170 != 852LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x1189 = 0U;
	uint8_t x1190 = UINT8_MAX;
	volatile int16_t x1191 = INT16_MIN;
	int16_t x1192 = INT16_MIN;
	int32_t t171 = -213588;

    t171 = (((x1189*x1190)-x1191)*x1192);

    if (t171 != -1073741824) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x1193 = 88985955LLU;
	int64_t x1194 = -1LL;
	volatile uint64_t x1195 = 4712321928888045906LLU;
	static volatile int32_t x1196 = INT32_MAX;
	static uint64_t t172 = 798380870LLU;

    t172 = (((x1193*x1194)-x1195)*x1196);

    if (t172 != 6299047661046964917LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1197 = INT8_MIN;
	uint64_t x1198 = 485806932LLU;
	static int8_t x1199 = 16;
	static int8_t x1200 = -1;
	volatile uint64_t t173 = 42335885LLU;

    t173 = (((x1197*x1198)-x1199)*x1200);

    if (t173 != 62183287312LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x1205 = 56;
	int32_t x1206 = -10;
	uint16_t x1207 = 225U;
	int16_t x1208 = INT16_MAX;

    t174 = (((x1205*x1206)-x1207)*x1208);

    if (t174 != -25722095) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x1225 = INT8_MAX;
	int8_t x1226 = INT8_MIN;

    t175 = (((x1225*x1226)-x1227)*x1228);

    if (t175 != 1606385664) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1229 = UINT16_MAX;
	uint32_t x1230 = UINT32_MAX;
	int64_t x1231 = -239323135578107LL;
	int64_t x1232 = -1LL;
	volatile int64_t t176 = -5636177LL;

    t176 = (((x1229*x1230)-x1231)*x1232);

    if (t176 != -239327430479868LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x1233 = 23426717U;
	static volatile int32_t x1234 = 170;
	static int8_t x1235 = -20;
	volatile int16_t x1236 = INT16_MIN;
	uint32_t t177 = 2U;

    t177 = (((x1233*x1234)-x1235)*x1236);

    if (t177 != 2647982080U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x1241 = INT16_MIN;
	uint8_t x1242 = UINT8_MAX;
	volatile int16_t x1243 = -1;
	uint64_t t178 = 2249767736LLU;

    t178 = (((x1241*x1242)-x1243)*x1244);

    if (t178 != 18446744072372617376LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1245 = 1U;
	int64_t x1246 = -1LL;
	int16_t x1247 = -1;
	int32_t x1248 = INT32_MIN;

    t179 = (((x1245*x1246)-x1247)*x1248);

    if (t179 != 0LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1249 = 42;
	int16_t x1251 = INT16_MIN;
	volatile uint16_t x1252 = 0U;

    t180 = (((x1249*x1250)-x1251)*x1252);

    if (t180 != 0LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x1253 = 51748U;
	int16_t x1254 = INT16_MIN;
	int16_t x1255 = INT16_MIN;
	volatile uint32_t t181 = 109682U;

    t181 = (((x1253*x1254)-x1255)*x1256);

    if (t181 != 44171264U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1257 = UINT64_MAX;
	int16_t x1258 = 0;
	int8_t x1259 = INT8_MIN;
	volatile uint64_t t182 = 11294155733LLU;

    t182 = (((x1257*x1258)-x1259)*x1260);

    if (t182 != 9404426150889429504LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x1261 = 1U;
	uint8_t x1262 = 6U;
	static int8_t x1264 = INT8_MIN;

    t183 = (((x1261*x1262)-x1263)*x1264);

    if (t183 != -4195072) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1269 = 954736120U;
	int32_t x1271 = -42;
	int32_t x1272 = -42820;

    t184 = (((x1269*x1270)-x1271)*x1272);

    if (t184 != 2676928824U) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1277 = 2;
	uint64_t x1278 = 2580863LLU;
	int64_t x1279 = INT64_MIN;
	static int32_t x1280 = 22;

    t185 = (((x1277*x1278)-x1279)*x1280);

    if (t185 != 113557972LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int16_t x1281 = -3924;
	uint8_t x1282 = UINT8_MAX;
	volatile uint16_t x1283 = 3945U;
	static uint64_t x1284 = UINT64_MAX;
	volatile uint64_t t186 = 112414010821721LLU;

    t186 = (((x1281*x1282)-x1283)*x1284);

    if (t186 != 1004565LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1285 = -1;
	static volatile int16_t x1286 = INT16_MAX;
	int64_t x1287 = INT64_MIN;
	int16_t x1288 = -1;
	volatile int64_t t187 = 241064LL;

    t187 = (((x1285*x1286)-x1287)*x1288);

    if (t187 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x1289 = -1;
	volatile uint64_t x1290 = 118227700665LLU;
	static int64_t x1291 = INT64_MAX;
	int8_t x1292 = -1;
	volatile uint64_t t188 = 1434901012196665LLU;

    t188 = (((x1289*x1290)-x1291)*x1292);

    if (t188 != 9223372155082476472LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x1297 = INT8_MIN;
	static uint16_t x1298 = 1012U;
	uint8_t x1299 = 26U;
	uint16_t x1300 = 1148U;
	static volatile int32_t t189 = 38548209;

    t189 = (((x1297*x1298)-x1299)*x1300);

    if (t189 != -148737176) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1301 = UINT64_MAX;
	uint64_t x1302 = UINT64_MAX;
	uint8_t x1303 = UINT8_MAX;
	uint32_t x1304 = 18405629U;
	uint64_t t190 = 428322637030400895LLU;

    t190 = (((x1301*x1302)-x1303)*x1304);

    if (t190 != 18446744069034521850LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1313 = UINT16_MAX;
	int8_t x1315 = INT8_MIN;
	int8_t x1316 = INT8_MIN;
	volatile uint32_t t191 = 94185322U;

    t191 = (((x1313*x1314)-x1315)*x1316);

    if (t191 != 8372096U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1321 = 6567066;
	uint64_t x1322 = 1011990953308LLU;
	uint16_t x1323 = UINT16_MAX;
	int32_t x1324 = 1221;
	static uint64_t t192 = 156LLU;

    t192 = (((x1321*x1322)-x1323)*x1324);

    if (t192 != 16415048790599656829LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1325 = -34;
	static int8_t x1327 = INT8_MIN;
	uint64_t x1328 = 550927563423563419LLU;
	uint64_t t193 = 84108653598058LLU;

    t193 = (((x1325*x1326)-x1327)*x1328);

    if (t193 != 5430724784328156030LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x1337 = 33;
	int16_t x1339 = -1;
	int16_t x1340 = INT16_MIN;

    t194 = (((x1337*x1338)-x1339)*x1340);

    if (t194 != -275775488) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint64_t x1341 = 15397702400LLU;
	int32_t x1342 = INT32_MIN;
	static int64_t x1343 = -572184258766839458LL;
	static volatile int32_t x1344 = INT32_MAX;
	static uint64_t t195 = 3LLU;

    t195 = (((x1341*x1342)-x1343)*x1344);

    if (t195 != 7197146120653496670LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1349 = 0;
	static int8_t x1350 = -1;
	int8_t x1351 = INT8_MAX;
	static uint32_t x1352 = UINT32_MAX;
	uint32_t t196 = 32U;

    t196 = (((x1349*x1350)-x1351)*x1352);

    if (t196 != 127U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x1354 = 2U;
	int64_t x1355 = 15756014LL;
	uint8_t x1356 = UINT8_MAX;
	volatile int64_t t197 = -6LL;

    t197 = (((x1353*x1354)-x1355)*x1356);

    if (t197 != -4017781530LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1361 = -1;
	volatile int8_t x1363 = 53;
	volatile uint16_t x1364 = 1124U;
	volatile int32_t t198 = -2;

    t198 = (((x1361*x1362)-x1363)*x1364);

    if (t198 != -58448) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1365 = 740303664235204LLU;
	int8_t x1366 = -1;
	static uint64_t x1367 = 3860755459305LLU;
	int32_t x1368 = INT32_MAX;
	volatile uint64_t t199 = 307426134LLU;

    t199 = (((x1365*x1366)-x1367)*x1368);

    if (t199 != 15857364476771954605LLU) { NG(); } else { ; }
	
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

