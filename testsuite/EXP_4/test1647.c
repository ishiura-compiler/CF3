
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

volatile uint32_t x10 = UINT32_MAX;
int8_t x43 = -1;
static uint8_t x44 = UINT8_MAX;
int32_t t5 = 637;
uint16_t x71 = UINT16_MAX;
uint16_t x72 = 754U;
int32_t t8 = 1233;
int64_t x93 = INT64_MAX;
int32_t x95 = 254315527;
volatile int64_t x96 = -888551LL;
int32_t t10 = -38462855;
int16_t x169 = INT16_MAX;
int8_t x170 = 7;
volatile uint32_t x179 = UINT32_MAX;
int32_t x185 = -1;
volatile uint32_t x208 = UINT32_MAX;
volatile int32_t t22 = -13885401;
static uint64_t x209 = UINT64_MAX;
int16_t x211 = INT16_MIN;
volatile int32_t t23 = -50373;
static int16_t x216 = INT16_MIN;
int64_t x232 = INT64_MIN;
volatile int32_t t28 = -2023;
volatile uint32_t x241 = 8U;
int32_t x245 = INT32_MAX;
int8_t x253 = 1;
uint8_t x254 = 20U;
volatile int32_t t31 = 0;
static int8_t x261 = INT8_MAX;
int8_t x263 = INT8_MAX;
int64_t x268 = 36LL;
volatile int32_t t33 = 192370063;
volatile uint8_t x273 = UINT8_MAX;
volatile int32_t x285 = 1;
volatile uint8_t x286 = 13U;
volatile int32_t t36 = 47;
int32_t t37 = 4959332;
int16_t x320 = -1;
uint32_t x327 = UINT32_MAX;
int8_t x330 = 3;
static volatile int16_t x331 = 12198;
int8_t x332 = 0;
static volatile int32_t t48 = -226853277;
uint32_t x378 = 115U;
int16_t x409 = INT16_MIN;
int8_t x417 = 10;
static int16_t x420 = -1;
int8_t x457 = -1;
static uint32_t x460 = 63U;
uint32_t x463 = UINT32_MAX;
volatile int32_t t60 = -1;
static volatile int8_t x467 = INT8_MIN;
volatile int32_t t61 = -2;
uint32_t x474 = UINT32_MAX;
volatile int32_t t62 = 37398;
static int8_t x477 = INT8_MIN;
volatile int32_t x491 = INT32_MIN;
int64_t x500 = INT64_MAX;
int32_t x508 = INT32_MAX;
uint8_t x513 = 37U;
int8_t x531 = 59;
uint16_t x538 = UINT16_MAX;
uint8_t x540 = 0U;
static uint32_t x562 = UINT32_MAX;
static int16_t x563 = -4528;
int32_t t74 = 30;
volatile uint64_t x597 = 318625LLU;
uint16_t x599 = 6U;
int32_t x600 = INT32_MAX;
static int32_t x608 = 5199;
int32_t x611 = INT32_MIN;
volatile int32_t t82 = -74;
int16_t x624 = INT16_MIN;
static volatile int8_t x627 = -9;
int32_t x629 = INT32_MIN;
static int8_t x630 = INT8_MAX;
int16_t x631 = INT16_MIN;
int64_t x666 = 9086042262869399LL;
uint8_t x667 = UINT8_MAX;
static volatile int32_t x669 = INT32_MIN;
static int32_t x670 = 1;
static uint64_t x676 = UINT64_MAX;
volatile uint64_t x680 = 73470244511LLU;
volatile int32_t x684 = 200;
int32_t x689 = INT32_MIN;
uint64_t x693 = 190597223744LLU;
int64_t x703 = INT64_MIN;
int32_t t96 = 5033539;
int16_t x722 = INT16_MAX;
int8_t x733 = -5;
int32_t x743 = INT32_MIN;
uint32_t x744 = UINT32_MAX;
int16_t x753 = 0;
int16_t x756 = INT16_MIN;
volatile int32_t t102 = -120;
uint8_t x758 = 31U;
int64_t x761 = 52275056439LL;
int32_t x762 = 492973455;
static int32_t x772 = 0;
static int32_t t107 = 10;
uint32_t x785 = 353U;
static uint8_t x795 = 71U;
static uint32_t x798 = UINT32_MAX;
static int16_t x800 = INT16_MAX;
uint32_t x816 = 198U;
uint16_t x834 = UINT16_MAX;
static uint64_t x845 = 3588581589LLU;
static int16_t x863 = INT16_MAX;
static uint16_t x870 = 454U;
uint64_t x887 = 265533483999226LLU;
volatile int32_t t124 = -9338507;
int64_t x892 = 31664396360820976LL;
int64_t x895 = -1LL;
volatile uint16_t x906 = 129U;
volatile int32_t t129 = 59260859;
volatile int32_t t130 = -940314;
volatile int8_t x932 = -10;
static uint8_t x950 = 64U;
static uint16_t x951 = UINT16_MAX;
volatile int32_t t133 = -59;
int32_t x983 = -1;
volatile int32_t t139 = 0;
uint16_t x985 = 6194U;
volatile uint64_t x994 = 171871LLU;
int32_t x996 = 7577626;
static volatile int32_t t143 = -4;
int16_t x1009 = INT16_MIN;
int8_t x1010 = 1;
volatile uint8_t x1018 = UINT8_MAX;
int64_t x1025 = INT64_MIN;
int32_t x1026 = 6078;
int16_t x1043 = -4669;
volatile int16_t x1045 = INT16_MIN;
int32_t x1049 = -1;
int64_t x1051 = INT64_MIN;
volatile int32_t t149 = 0;
int32_t t150 = -1311;
volatile int8_t x1079 = INT8_MIN;
volatile int8_t x1087 = 48;
int16_t x1092 = INT16_MIN;
volatile int64_t x1099 = 192882512188251326LL;
int32_t t154 = 1977027;
uint64_t x1138 = 40709LLU;
int32_t x1141 = -207;
static uint8_t x1143 = 0U;
uint8_t x1147 = 7U;
static uint64_t x1148 = 96779LLU;
uint64_t x1154 = UINT64_MAX;
int32_t x1155 = -409106;
volatile int16_t x1166 = 7860;
int32_t x1167 = INT32_MIN;
volatile int32_t x1170 = 24125695;
volatile int8_t x1171 = 0;
int32_t t163 = 1455578;
uint32_t x1174 = UINT32_MAX;
int64_t x1176 = -10140318195LL;
volatile int32_t x1183 = -210082526;
int64_t x1209 = -8228113504774LL;
uint16_t x1217 = 872U;
static int32_t t169 = 1;
int64_t x1221 = 969LL;
int32_t x1232 = INT32_MIN;
static int32_t x1233 = 6477;
static volatile uint8_t x1235 = UINT8_MAX;
int32_t t172 = 2;
uint16_t x1255 = UINT16_MAX;
int32_t x1256 = INT32_MAX;
int16_t x1265 = INT16_MAX;
static volatile int32_t t177 = 11317787;
static uint16_t x1274 = UINT16_MAX;
uint16_t x1278 = 3078U;
uint8_t x1292 = 0U;
volatile uint64_t x1296 = UINT64_MAX;
int32_t t185 = -1314956;
int32_t x1317 = INT32_MAX;
int32_t x1320 = INT32_MIN;
volatile int32_t t187 = 50029;
uint32_t x1335 = 205351U;
uint64_t x1336 = UINT64_MAX;
int16_t x1341 = INT16_MAX;
int32_t x1351 = INT32_MAX;
volatile int32_t t191 = 2390884;
static uint8_t x1390 = UINT8_MAX;
static int32_t x1391 = -1;
int16_t x1401 = 1;
uint16_t x1406 = 11U;
int32_t x1407 = INT32_MAX;
volatile uint8_t x1420 = 123U;
volatile int32_t t197 = -224;
volatile uint16_t x1425 = UINT16_MAX;
int16_t x1447 = INT16_MAX;


void f0(void) {
    	int8_t x5 = -10;
	uint32_t x6 = 342053U;
	int8_t x7 = INT8_MAX;
	int64_t x8 = 577LL;
	int32_t t0 = 56613;

    t0 = (x5>(x6<<(x7>x8)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int32_t x9 = 0;
	static volatile int64_t x11 = INT64_MIN;
	volatile int64_t x12 = -18083185LL;
	int32_t t1 = 1;

    t1 = (x9>(x10<<(x11>x12)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x21 = -1;
	static volatile int16_t x22 = INT16_MAX;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = 2LLU;
	volatile int32_t t2 = -181312299;

    t2 = (x21>(x22<<(x23>x24)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x29 = 2LLU;
	int64_t x30 = INT64_MAX;
	int64_t x31 = -1LL;
	int32_t x32 = 10;
	int32_t t3 = -150787065;

    t3 = (x29>(x30<<(x31>x32)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int16_t x37 = -1;
	int8_t x38 = INT8_MAX;
	int32_t x39 = -1;
	int8_t x40 = 0;
	int32_t t4 = -426833;

    t4 = (x37>(x38<<(x39>x40)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int8_t x41 = INT8_MAX;
	int8_t x42 = INT8_MAX;

    t5 = (x41>(x42<<(x43>x44)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static volatile int32_t x45 = 167;
	volatile int16_t x46 = 13256;
	volatile int16_t x47 = INT16_MIN;
	int32_t x48 = 92;
	int32_t t6 = 1472038;

    t6 = (x45>(x46<<(x47>x48)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile int64_t x69 = 907549903700150755LL;
	volatile uint32_t x70 = 844U;
	int32_t t7 = -3189269;

    t7 = (x69>(x70<<(x71>x72)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x73 = INT64_MAX;
	static uint64_t x74 = 200905033609LLU;
	int32_t x75 = -655370;
	uint64_t x76 = 174513403548496LLU;

    t8 = (x73>(x74<<(x75>x76)));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x94 = UINT16_MAX;
	int32_t t9 = 374604;

    t9 = (x93>(x94<<(x95>x96)));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint8_t x97 = UINT8_MAX;
	static volatile uint32_t x98 = 1450193U;
	int8_t x99 = -8;
	static int64_t x100 = INT64_MIN;

    t10 = (x97>(x98<<(x99>x100)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x109 = -116;
	volatile uint16_t x110 = UINT16_MAX;
	uint16_t x111 = 799U;
	static uint8_t x112 = UINT8_MAX;
	static int32_t t11 = 35;

    t11 = (x109>(x110<<(x111>x112)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = 131232791;
	uint8_t x115 = UINT8_MAX;
	int32_t x116 = -1;
	volatile int32_t t12 = -66810;

    t12 = (x113>(x114<<(x115>x116)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x133 = INT8_MAX;
	uint16_t x134 = 0U;
	uint64_t x135 = UINT64_MAX;
	volatile int16_t x136 = -1;
	int32_t t13 = 169523;

    t13 = (x133>(x134<<(x135>x136)));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x137 = 4LL;
	static volatile uint64_t x138 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	int64_t x140 = 204294726205701815LL;
	static volatile int32_t t14 = 111420831;

    t14 = (x137>(x138<<(x139>x140)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x149 = -1;
	int64_t x150 = INT64_MAX;
	int8_t x151 = INT8_MIN;
	int32_t x152 = 4;
	static int32_t t15 = -16036;

    t15 = (x149>(x150<<(x151>x152)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x171 = INT32_MIN;
	static int64_t x172 = -126535LL;
	volatile int32_t t16 = 1;

    t16 = (x169>(x170<<(x171>x172)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x177 = INT8_MIN;
	uint64_t x178 = 13006621LLU;
	int32_t x180 = INT32_MIN;
	volatile int32_t t17 = 1;

    t17 = (x177>(x178<<(x179>x180)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x181 = -393;
	int8_t x182 = 1;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t x184 = -6077621;
	static int32_t t18 = 10142398;

    t18 = (x181>(x182<<(x183>x184)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x186 = 3U;
	int32_t x187 = 381;
	uint32_t x188 = 1216631385U;
	int32_t t19 = 1054292;

    t19 = (x185>(x186<<(x187>x188)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x189 = 339;
	static int64_t x190 = 28108267LL;
	uint16_t x191 = UINT16_MAX;
	int32_t x192 = INT32_MAX;
	int32_t t20 = -10512;

    t20 = (x189>(x190<<(x191>x192)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x197 = UINT32_MAX;
	int64_t x198 = 21238540536070533LL;
	volatile int8_t x199 = -35;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t21 = 1;

    t21 = (x197>(x198<<(x199>x200)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x205 = INT64_MAX;
	static uint8_t x206 = UINT8_MAX;
	int32_t x207 = INT32_MIN;

    t22 = (x205>(x206<<(x207>x208)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile uint16_t x210 = 8U;
	uint8_t x212 = UINT8_MAX;

    t23 = (x209>(x210<<(x211>x212)));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x213 = UINT64_MAX;
	uint64_t x214 = 6239157LLU;
	int32_t x215 = 1682209;
	volatile int32_t t24 = 656333;

    t24 = (x213>(x214<<(x215>x216)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x217 = 8;
	int16_t x218 = 708;
	uint32_t x219 = UINT32_MAX;
	int16_t x220 = -107;
	int32_t t25 = 13681;

    t25 = (x217>(x218<<(x219>x220)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x221 = 6192LLU;
	uint8_t x222 = 3U;
	uint32_t x223 = 227573410U;
	int8_t x224 = -1;
	int32_t t26 = 301;

    t26 = (x221>(x222<<(x223>x224)));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x229 = 4U;
	static uint64_t x230 = 7775467LLU;
	int8_t x231 = 1;
	static volatile int32_t t27 = -184067767;

    t27 = (x229>(x230<<(x231>x232)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x237 = UINT8_MAX;
	int32_t x238 = 505;
	uint8_t x239 = 1U;
	static int8_t x240 = INT8_MIN;

    t28 = (x237>(x238<<(x239>x240)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x242 = 168873595846402654LL;
	volatile int64_t x243 = INT64_MAX;
	static int16_t x244 = INT16_MAX;
	int32_t t29 = -30;

    t29 = (x241>(x242<<(x243>x244)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x246 = 14423U;
	volatile uint32_t x247 = 553U;
	volatile int8_t x248 = INT8_MIN;
	static volatile int32_t t30 = -11118;

    t30 = (x245>(x246<<(x247>x248)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x255 = 0;
	int16_t x256 = INT16_MIN;

    t31 = (x253>(x254<<(x255>x256)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x262 = 22;
	volatile int64_t x264 = -1LL;
	volatile int32_t t32 = 1280128;

    t32 = (x261>(x262<<(x263>x264)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x265 = INT32_MIN;
	int64_t x266 = 217752537768509LL;
	volatile uint16_t x267 = UINT16_MAX;

    t33 = (x265>(x266<<(x267>x268)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint64_t x269 = UINT64_MAX;
	static uint8_t x270 = UINT8_MAX;
	uint64_t x271 = UINT64_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t34 = 1253;

    t34 = (x269>(x270<<(x271>x272)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x274 = 1;
	int16_t x275 = -1;
	static int64_t x276 = -1LL;
	volatile int32_t t35 = 102;

    t35 = (x273>(x274<<(x275>x276)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x287 = UINT8_MAX;
	int64_t x288 = INT64_MAX;

    t36 = (x285>(x286<<(x287>x288)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x293 = INT16_MAX;
	uint64_t x294 = UINT64_MAX;
	uint8_t x295 = UINT8_MAX;
	static uint64_t x296 = 5LLU;

    t37 = (x293>(x294<<(x295>x296)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x301 = 75U;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = INT64_MAX;
	uint32_t x304 = 14U;
	static volatile int32_t t38 = 3;

    t38 = (x301>(x302<<(x303>x304)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x305 = -1;
	int8_t x306 = 62;
	volatile uint32_t x307 = 57249U;
	volatile int32_t x308 = INT32_MIN;
	static volatile int32_t t39 = 1004181003;

    t39 = (x305>(x306<<(x307>x308)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x309 = -11727786;
	volatile uint64_t x310 = 59253863486451575LLU;
	volatile int8_t x311 = INT8_MIN;
	int8_t x312 = INT8_MAX;
	int32_t t40 = 6731145;

    t40 = (x309>(x310<<(x311>x312)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x317 = -1;
	int32_t x318 = 9767770;
	int8_t x319 = -1;
	volatile int32_t t41 = 1;

    t41 = (x317>(x318<<(x319>x320)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x325 = 45717LL;
	uint32_t x326 = 4071832U;
	int8_t x328 = INT8_MAX;
	int32_t t42 = -12182851;

    t42 = (x325>(x326<<(x327>x328)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint32_t x329 = 7993U;
	volatile int32_t t43 = -50150;

    t43 = (x329>(x330<<(x331>x332)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MAX;
	int32_t x339 = -47868439;
	uint16_t x340 = 11U;
	volatile int32_t t44 = 24440172;

    t44 = (x337>(x338<<(x339>x340)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x341 = 0LLU;
	uint32_t x342 = UINT32_MAX;
	static int32_t x343 = INT32_MAX;
	static int16_t x344 = 413;
	int32_t t45 = 1069759941;

    t45 = (x341>(x342<<(x343>x344)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x345 = 33U;
	uint16_t x346 = UINT16_MAX;
	uint8_t x347 = UINT8_MAX;
	static int8_t x348 = INT8_MIN;
	int32_t t46 = -8795;

    t46 = (x345>(x346<<(x347>x348)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x349 = INT16_MAX;
	static volatile int16_t x350 = INT16_MAX;
	static volatile int64_t x351 = INT64_MIN;
	int16_t x352 = -1;
	volatile int32_t t47 = 308;

    t47 = (x349>(x350<<(x351>x352)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x353 = UINT8_MAX;
	uint8_t x354 = 2U;
	uint32_t x355 = 1360U;
	int16_t x356 = INT16_MAX;

    t48 = (x353>(x354<<(x355>x356)));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x377 = 14U;
	int32_t x379 = INT32_MIN;
	volatile uint16_t x380 = 8U;
	volatile int32_t t49 = 75;

    t49 = (x377>(x378<<(x379>x380)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x381 = 2U;
	volatile uint64_t x382 = 0LLU;
	uint32_t x383 = 422928498U;
	volatile int64_t x384 = -1LL;
	volatile int32_t t50 = 28;

    t50 = (x381>(x382<<(x383>x384)));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x397 = 7772717LLU;
	uint16_t x398 = UINT16_MAX;
	volatile int32_t x399 = -1;
	int16_t x400 = -10;
	int32_t t51 = -235939;

    t51 = (x397>(x398<<(x399>x400)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint64_t x410 = 54024358697176875LLU;
	static int8_t x411 = INT8_MAX;
	static int64_t x412 = -1LL;
	int32_t t52 = 14847;

    t52 = (x409>(x410<<(x411>x412)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x413 = 13U;
	uint8_t x414 = 58U;
	int8_t x415 = INT8_MIN;
	static volatile int32_t x416 = 125371;
	int32_t t53 = 486;

    t53 = (x413>(x414<<(x415>x416)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint16_t x418 = 1663U;
	uint8_t x419 = 3U;
	static int32_t t54 = 537;

    t54 = (x417>(x418<<(x419>x420)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x421 = -1;
	uint32_t x422 = 1201276U;
	int32_t x423 = -1;
	uint64_t x424 = 466317941529LLU;
	int32_t t55 = -69600259;

    t55 = (x421>(x422<<(x423>x424)));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int8_t x433 = INT8_MIN;
	int8_t x434 = 1;
	int32_t x435 = 1;
	int32_t x436 = 94324;
	volatile int32_t t56 = 10265345;

    t56 = (x433>(x434<<(x435>x436)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x441 = 2405840058905LLU;
	volatile int8_t x442 = 1;
	volatile uint16_t x443 = 512U;
	uint16_t x444 = 4U;
	volatile int32_t t57 = -140324935;

    t57 = (x441>(x442<<(x443>x444)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x449 = INT16_MAX;
	uint64_t x450 = 70957516448305LLU;
	volatile int32_t x451 = 15412;
	int64_t x452 = INT64_MIN;
	int32_t t58 = 25859029;

    t58 = (x449>(x450<<(x451>x452)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x458 = 1465U;
	int64_t x459 = -142575012979288781LL;
	int32_t t59 = 1807;

    t59 = (x457>(x458<<(x459>x460)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x461 = INT8_MAX;
	uint64_t x462 = 10218588484047332LLU;
	uint64_t x464 = 1398164822296LLU;

    t60 = (x461>(x462<<(x463>x464)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x465 = UINT16_MAX;
	static uint8_t x466 = 16U;
	int8_t x468 = 1;

    t61 = (x465>(x466<<(x467>x468)));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x473 = 1U;
	static int16_t x475 = INT16_MIN;
	static uint64_t x476 = 3738088854792357LLU;

    t62 = (x473>(x474<<(x475>x476)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x478 = 7004LL;
	int8_t x479 = INT8_MIN;
	static int8_t x480 = -1;
	int32_t t63 = -207;

    t63 = (x477>(x478<<(x479>x480)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x489 = -1;
	int8_t x490 = INT8_MAX;
	int32_t x492 = -3;
	static volatile int32_t t64 = 62707;

    t64 = (x489>(x490<<(x491>x492)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x493 = 44U;
	uint32_t x494 = 17515566U;
	uint16_t x495 = 1719U;
	volatile uint8_t x496 = UINT8_MAX;
	volatile int32_t t65 = -3;

    t65 = (x493>(x494<<(x495>x496)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static volatile int64_t x497 = INT64_MIN;
	uint32_t x498 = 5U;
	int64_t x499 = INT64_MIN;
	int32_t t66 = -27195;

    t66 = (x497>(x498<<(x499>x500)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint8_t x505 = UINT8_MAX;
	uint32_t x506 = UINT32_MAX;
	uint16_t x507 = 18062U;
	volatile int32_t t67 = 322277679;

    t67 = (x505>(x506<<(x507>x508)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x514 = INT32_MAX;
	uint16_t x515 = 15U;
	static uint8_t x516 = 103U;
	volatile int32_t t68 = 8;

    t68 = (x513>(x514<<(x515>x516)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static volatile uint16_t x517 = UINT16_MAX;
	volatile uint64_t x518 = 348098110LLU;
	static int32_t x519 = -1;
	int64_t x520 = INT64_MIN;
	int32_t t69 = -1865;

    t69 = (x517>(x518<<(x519>x520)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint64_t x529 = 0LLU;
	volatile uint32_t x530 = 1116U;
	int8_t x532 = INT8_MAX;
	volatile int32_t t70 = 39;

    t70 = (x529>(x530<<(x531>x532)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x537 = -23621586;
	int64_t x539 = 65526LL;
	int32_t t71 = 1;

    t71 = (x537>(x538<<(x539>x540)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x553 = INT32_MAX;
	volatile int16_t x554 = INT16_MAX;
	volatile int32_t x555 = -1;
	int8_t x556 = INT8_MAX;
	int32_t t72 = 1;

    t72 = (x553>(x554<<(x555>x556)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x557 = 175;
	static volatile int8_t x558 = INT8_MAX;
	int32_t x559 = INT32_MAX;
	static int16_t x560 = INT16_MAX;
	static int32_t t73 = 0;

    t73 = (x557>(x558<<(x559>x560)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x561 = INT32_MIN;
	static uint8_t x564 = 2U;

    t74 = (x561>(x562<<(x563>x564)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	static int8_t x565 = 0;
	static uint64_t x566 = UINT64_MAX;
	uint64_t x567 = UINT64_MAX;
	int16_t x568 = INT16_MIN;
	static int32_t t75 = 0;

    t75 = (x565>(x566<<(x567>x568)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x577 = 3U;
	volatile uint64_t x578 = UINT64_MAX;
	uint8_t x579 = 75U;
	int32_t x580 = -280192;
	int32_t t76 = -3160;

    t76 = (x577>(x578<<(x579>x580)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x585 = 9U;
	uint8_t x586 = 1U;
	uint32_t x587 = 106U;
	int32_t x588 = -1;
	int32_t t77 = -75;

    t77 = (x585>(x586<<(x587>x588)));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x598 = 38U;
	volatile int32_t t78 = 15856;

    t78 = (x597>(x598<<(x599>x600)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint8_t x601 = 94U;
	static volatile int8_t x602 = INT8_MAX;
	static int64_t x603 = -16485181110498LL;
	uint64_t x604 = 9246160371155948LLU;
	volatile int32_t t79 = 25887283;

    t79 = (x601>(x602<<(x603>x604)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint32_t x605 = 141735259U;
	int8_t x606 = INT8_MAX;
	int8_t x607 = -1;
	int32_t t80 = 0;

    t80 = (x605>(x606<<(x607>x608)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int64_t x609 = INT64_MIN;
	uint8_t x610 = 1U;
	volatile int16_t x612 = INT16_MIN;
	volatile int32_t t81 = 3231798;

    t81 = (x609>(x610<<(x611>x612)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int64_t x613 = INT64_MIN;
	uint64_t x614 = UINT64_MAX;
	static int32_t x615 = INT32_MIN;
	uint8_t x616 = UINT8_MAX;

    t82 = (x613>(x614<<(x615>x616)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x621 = INT8_MIN;
	uint64_t x622 = 214524276661LLU;
	uint16_t x623 = 3U;
	int32_t t83 = -161598;

    t83 = (x621>(x622<<(x623>x624)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x625 = -15178117201724LL;
	int8_t x626 = INT8_MAX;
	volatile uint8_t x628 = 55U;
	volatile int32_t t84 = 1;

    t84 = (x625>(x626<<(x627>x628)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x632 = UINT64_MAX;
	volatile int32_t t85 = -401672;

    t85 = (x629>(x630<<(x631>x632)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x633 = 6U;
	static int32_t x634 = INT32_MAX;
	static int64_t x635 = -897297684665051LL;
	volatile int16_t x636 = INT16_MIN;
	int32_t t86 = 768465377;

    t86 = (x633>(x634<<(x635>x636)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x645 = 65427LL;
	int16_t x646 = 7;
	int32_t x647 = INT32_MAX;
	static volatile uint8_t x648 = UINT8_MAX;
	volatile int32_t t87 = -47683687;

    t87 = (x645>(x646<<(x647>x648)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x665 = UINT64_MAX;
	static volatile uint16_t x668 = UINT16_MAX;
	int32_t t88 = 826950;

    t88 = (x665>(x666<<(x667>x668)));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x671 = INT16_MAX;
	static int16_t x672 = -434;
	volatile int32_t t89 = 897;

    t89 = (x669>(x670<<(x671>x672)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x673 = INT8_MIN;
	volatile int64_t x674 = INT64_MAX;
	uint32_t x675 = 59U;
	volatile int32_t t90 = 43;

    t90 = (x673>(x674<<(x675>x676)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x677 = 57U;
	uint16_t x678 = 5U;
	int16_t x679 = INT16_MIN;
	int32_t t91 = -43;

    t91 = (x677>(x678<<(x679>x680)));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x681 = 25471091U;
	uint16_t x682 = 2U;
	int64_t x683 = INT64_MIN;
	int32_t t92 = 225605893;

    t92 = (x681>(x682<<(x683>x684)));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint64_t x690 = 26839821LLU;
	int64_t x691 = -580213LL;
	uint8_t x692 = 1U;
	static int32_t t93 = 2;

    t93 = (x689>(x690<<(x691>x692)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x694 = 717;
	static volatile uint64_t x695 = UINT64_MAX;
	int32_t x696 = -1;
	int32_t t94 = 2;

    t94 = (x693>(x694<<(x695>x696)));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x701 = 2;
	int16_t x702 = INT16_MAX;
	volatile uint32_t x704 = UINT32_MAX;
	static volatile int32_t t95 = 9599;

    t95 = (x701>(x702<<(x703>x704)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x709 = INT8_MIN;
	uint64_t x710 = 206153011991658LLU;
	int32_t x711 = INT32_MAX;
	int8_t x712 = INT8_MAX;

    t96 = (x709>(x710<<(x711>x712)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x713 = INT16_MIN;
	volatile uint32_t x714 = 272009201U;
	int16_t x715 = -1;
	uint8_t x716 = UINT8_MAX;
	volatile int32_t t97 = -19879;

    t97 = (x713>(x714<<(x715>x716)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x721 = 0;
	static volatile int32_t x723 = INT32_MIN;
	int8_t x724 = -13;
	volatile int32_t t98 = 28;

    t98 = (x721>(x722<<(x723>x724)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x734 = 10U;
	int64_t x735 = INT64_MIN;
	static int32_t x736 = INT32_MIN;
	int32_t t99 = 469;

    t99 = (x733>(x734<<(x735>x736)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x741 = 3;
	volatile uint64_t x742 = 862211681980031LLU;
	int32_t t100 = 22;

    t100 = (x741>(x742<<(x743>x744)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint16_t x745 = UINT16_MAX;
	int16_t x746 = 1692;
	static volatile uint64_t x747 = 453LLU;
	volatile uint32_t x748 = 44586U;
	int32_t t101 = -5403;

    t101 = (x745>(x746<<(x747>x748)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x754 = UINT16_MAX;
	static int8_t x755 = INT8_MIN;

    t102 = (x753>(x754<<(x755>x756)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x757 = 1;
	int32_t x759 = INT32_MIN;
	static volatile int32_t x760 = -1;
	static int32_t t103 = -601441;

    t103 = (x757>(x758<<(x759>x760)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x763 = UINT16_MAX;
	volatile int16_t x764 = INT16_MIN;
	static volatile int32_t t104 = 5501241;

    t104 = (x761>(x762<<(x763>x764)));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x769 = -1;
	uint32_t x770 = 76U;
	volatile uint32_t x771 = 98899791U;
	int32_t t105 = -26;

    t105 = (x769>(x770<<(x771>x772)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x773 = INT16_MAX;
	volatile uint8_t x774 = 15U;
	int32_t x775 = INT32_MIN;
	int32_t x776 = -1;
	int32_t t106 = 186520;

    t106 = (x773>(x774<<(x775>x776)));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int32_t x777 = INT32_MIN;
	uint64_t x778 = 670539872736993953LLU;
	volatile uint32_t x779 = 84U;
	uint32_t x780 = 6790366U;

    t107 = (x777>(x778<<(x779>x780)));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x781 = 28794U;
	uint32_t x782 = 581575015U;
	static volatile int32_t x783 = 1058635080;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t108 = -429873378;

    t108 = (x781>(x782<<(x783>x784)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x786 = 36;
	uint16_t x787 = 4U;
	int16_t x788 = INT16_MIN;
	volatile int32_t t109 = 80003;

    t109 = (x785>(x786<<(x787>x788)));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x789 = INT8_MAX;
	volatile uint64_t x790 = UINT64_MAX;
	int16_t x791 = INT16_MAX;
	uint16_t x792 = UINT16_MAX;
	static int32_t t110 = -1407;

    t110 = (x789>(x790<<(x791>x792)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x793 = 60U;
	uint32_t x794 = 3503U;
	int32_t x796 = INT32_MIN;
	static volatile int32_t t111 = 1182121;

    t111 = (x793>(x794<<(x795>x796)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint64_t x797 = 1LLU;
	int64_t x799 = INT64_MAX;
	int32_t t112 = 10957895;

    t112 = (x797>(x798<<(x799>x800)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x801 = 73966695105LL;
	volatile int16_t x802 = INT16_MAX;
	static volatile int64_t x803 = -1LL;
	uint16_t x804 = UINT16_MAX;
	volatile int32_t t113 = 298726177;

    t113 = (x801>(x802<<(x803>x804)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x813 = -1;
	int32_t x814 = 34;
	int64_t x815 = 1LL;
	int32_t t114 = 242626158;

    t114 = (x813>(x814<<(x815>x816)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x821 = INT64_MAX;
	uint64_t x822 = 29627LLU;
	volatile int16_t x823 = -127;
	static volatile int16_t x824 = INT16_MAX;
	volatile int32_t t115 = 425;

    t115 = (x821>(x822<<(x823>x824)));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x825 = INT64_MIN;
	int32_t x826 = INT32_MAX;
	static int32_t x827 = INT32_MIN;
	int16_t x828 = INT16_MIN;
	volatile int32_t t116 = 10458;

    t116 = (x825>(x826<<(x827>x828)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x833 = INT32_MIN;
	int32_t x835 = INT32_MIN;
	int8_t x836 = INT8_MIN;
	static int32_t t117 = 40761261;

    t117 = (x833>(x834<<(x835>x836)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x841 = 24772U;
	uint8_t x842 = 0U;
	volatile uint8_t x843 = UINT8_MAX;
	uint32_t x844 = 193554399U;
	volatile int32_t t118 = 0;

    t118 = (x841>(x842<<(x843>x844)));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x846 = 15;
	int16_t x847 = INT16_MIN;
	static int16_t x848 = 1;
	volatile int32_t t119 = -41751545;

    t119 = (x845>(x846<<(x847>x848)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x849 = -1;
	uint16_t x850 = 10497U;
	volatile int8_t x851 = -63;
	volatile int32_t x852 = -1;
	volatile int32_t t120 = 1683590;

    t120 = (x849>(x850<<(x851>x852)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x853 = INT64_MAX;
	int32_t x854 = INT32_MAX;
	uint8_t x855 = 3U;
	uint8_t x856 = 6U;
	int32_t t121 = -6848461;

    t121 = (x853>(x854<<(x855>x856)));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x861 = -13LL;
	int64_t x862 = 247611036373589759LL;
	int8_t x864 = INT8_MIN;
	int32_t t122 = -445098183;

    t122 = (x861>(x862<<(x863>x864)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x869 = UINT16_MAX;
	int64_t x871 = 34950LL;
	int64_t x872 = INT64_MIN;
	volatile int32_t t123 = 78596214;

    t123 = (x869>(x870<<(x871>x872)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x885 = INT64_MIN;
	int8_t x886 = 10;
	static volatile uint16_t x888 = UINT16_MAX;

    t124 = (x885>(x886<<(x887>x888)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x889 = 2U;
	uint8_t x890 = 6U;
	int64_t x891 = INT64_MAX;
	volatile int32_t t125 = 131391636;

    t125 = (x889>(x890<<(x891>x892)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x893 = 213U;
	static int64_t x894 = INT64_MAX;
	volatile int32_t x896 = -1;
	int32_t t126 = -97560;

    t126 = (x893>(x894<<(x895>x896)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x897 = INT16_MIN;
	int64_t x898 = 352578714610617649LL;
	int16_t x899 = INT16_MAX;
	static volatile int8_t x900 = -1;
	volatile int32_t t127 = 384;

    t127 = (x897>(x898<<(x899>x900)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x901 = INT8_MIN;
	uint32_t x902 = 956U;
	volatile int32_t x903 = -1;
	static int64_t x904 = INT64_MIN;
	volatile int32_t t128 = 68524;

    t128 = (x901>(x902<<(x903>x904)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x905 = 2116;
	static uint16_t x907 = 20462U;
	volatile uint64_t x908 = UINT64_MAX;

    t129 = (x905>(x906<<(x907>x908)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x913 = INT8_MIN;
	uint8_t x914 = 2U;
	uint64_t x915 = 239557218LLU;
	static uint32_t x916 = 1064U;

    t130 = (x913>(x914<<(x915>x916)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x929 = 3U;
	uint64_t x930 = 0LLU;
	int16_t x931 = 2;
	int32_t t131 = 2912424;

    t131 = (x929>(x930<<(x931>x932)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x949 = INT8_MIN;
	int8_t x952 = INT8_MAX;
	volatile int32_t t132 = 399;

    t132 = (x949>(x950<<(x951>x952)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x953 = INT8_MIN;
	uint64_t x954 = UINT64_MAX;
	volatile uint16_t x955 = UINT16_MAX;
	uint8_t x956 = UINT8_MAX;

    t133 = (x953>(x954<<(x955>x956)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x957 = 76U;
	int32_t x958 = INT32_MAX;
	int16_t x959 = -29;
	int8_t x960 = -1;
	volatile int32_t t134 = -758036;

    t134 = (x957>(x958<<(x959>x960)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x965 = UINT16_MAX;
	static uint16_t x966 = UINT16_MAX;
	int8_t x967 = -12;
	int64_t x968 = INT64_MIN;
	volatile int32_t t135 = 122690;

    t135 = (x965>(x966<<(x967>x968)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int32_t x969 = INT32_MIN;
	uint64_t x970 = UINT64_MAX;
	int64_t x971 = INT64_MAX;
	int16_t x972 = INT16_MAX;
	volatile int32_t t136 = 34562;

    t136 = (x969>(x970<<(x971>x972)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x973 = INT64_MIN;
	uint16_t x974 = 1U;
	uint64_t x975 = 529LLU;
	int8_t x976 = -1;
	volatile int32_t t137 = 0;

    t137 = (x973>(x974<<(x975>x976)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x977 = INT32_MAX;
	int64_t x978 = 207951407227539568LL;
	int16_t x979 = INT16_MAX;
	int8_t x980 = INT8_MIN;
	static volatile int32_t t138 = 21269;

    t138 = (x977>(x978<<(x979>x980)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x981 = -1;
	uint32_t x982 = 1857319U;
	int32_t x984 = INT32_MAX;

    t139 = (x981>(x982<<(x983>x984)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x986 = 8211366634705LLU;
	static uint32_t x987 = 21542167U;
	uint8_t x988 = 1U;
	volatile int32_t t140 = -3938;

    t140 = (x985>(x986<<(x987>x988)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x989 = 253;
	uint64_t x990 = 1115LLU;
	int8_t x991 = -7;
	static volatile uint32_t x992 = 600822800U;
	static int32_t t141 = -212906;

    t141 = (x989>(x990<<(x991>x992)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x993 = INT16_MAX;
	static uint32_t x995 = 164U;
	static int32_t t142 = 55038533;

    t142 = (x993>(x994<<(x995>x996)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x997 = -1;
	uint32_t x998 = 2007263U;
	int64_t x999 = INT64_MAX;
	volatile uint32_t x1000 = 65371U;

    t143 = (x997>(x998<<(x999>x1000)));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x1011 = -1LL;
	static volatile int64_t x1012 = 40420659LL;
	volatile int32_t t144 = -12;

    t144 = (x1009>(x1010<<(x1011>x1012)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1017 = INT8_MIN;
	volatile int32_t x1019 = INT32_MIN;
	uint8_t x1020 = 98U;
	int32_t t145 = -322563;

    t145 = (x1017>(x1018<<(x1019>x1020)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x1027 = INT16_MIN;
	uint32_t x1028 = 14072U;
	volatile int32_t t146 = -191736945;

    t146 = (x1025>(x1026<<(x1027>x1028)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x1041 = 53U;
	uint8_t x1042 = UINT8_MAX;
	int32_t x1044 = INT32_MAX;
	static volatile int32_t t147 = -496467;

    t147 = (x1041>(x1042<<(x1043>x1044)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x1046 = 341398U;
	uint8_t x1047 = 2U;
	uint8_t x1048 = 93U;
	int32_t t148 = -15;

    t148 = (x1045>(x1046<<(x1047>x1048)));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint32_t x1050 = UINT32_MAX;
	static int32_t x1052 = INT32_MIN;

    t149 = (x1049>(x1050<<(x1051>x1052)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x1065 = INT64_MAX;
	static int16_t x1066 = 1;
	uint64_t x1067 = UINT64_MAX;
	uint32_t x1068 = 6U;

    t150 = (x1065>(x1066<<(x1067>x1068)));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x1077 = -15;
	uint64_t x1078 = 13502994703LLU;
	uint16_t x1080 = 1562U;
	static volatile int32_t t151 = -897326;

    t151 = (x1077>(x1078<<(x1079>x1080)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x1085 = -2198;
	int64_t x1086 = 162403954866881315LL;
	uint8_t x1088 = 1U;
	int32_t t152 = 6861;

    t152 = (x1085>(x1086<<(x1087>x1088)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1089 = UINT64_MAX;
	uint8_t x1090 = UINT8_MAX;
	uint16_t x1091 = 1299U;
	int32_t t153 = -1;

    t153 = (x1089>(x1090<<(x1091>x1092)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int64_t x1097 = INT64_MIN;
	uint8_t x1098 = 4U;
	uint64_t x1100 = 442318LLU;

    t154 = (x1097>(x1098<<(x1099>x1100)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x1101 = 3;
	int64_t x1102 = INT64_MAX;
	uint32_t x1103 = 1619U;
	static int32_t x1104 = -1721751;
	volatile int32_t t155 = -69099126;

    t155 = (x1101>(x1102<<(x1103>x1104)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int64_t x1121 = INT64_MIN;
	uint32_t x1122 = 0U;
	int64_t x1123 = INT64_MIN;
	int8_t x1124 = INT8_MIN;
	int32_t t156 = 263206815;

    t156 = (x1121>(x1122<<(x1123>x1124)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x1125 = INT32_MAX;
	static int64_t x1126 = INT64_MAX;
	uint64_t x1127 = UINT64_MAX;
	int8_t x1128 = -1;
	static int32_t t157 = 21620101;

    t157 = (x1125>(x1126<<(x1127>x1128)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x1137 = 8U;
	static volatile int32_t x1139 = INT32_MAX;
	volatile uint32_t x1140 = UINT32_MAX;
	int32_t t158 = 2037;

    t158 = (x1137>(x1138<<(x1139>x1140)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1142 = 534U;
	uint16_t x1144 = 7U;
	volatile int32_t t159 = -1520893;

    t159 = (x1141>(x1142<<(x1143>x1144)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1145 = INT64_MAX;
	static uint32_t x1146 = 803178008U;
	int32_t t160 = -10231;

    t160 = (x1145>(x1146<<(x1147>x1148)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x1153 = INT16_MAX;
	uint32_t x1156 = 3611U;
	volatile int32_t t161 = -1819005;

    t161 = (x1153>(x1154<<(x1155>x1156)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x1165 = INT32_MIN;
	volatile int64_t x1168 = INT64_MAX;
	volatile int32_t t162 = 362;

    t162 = (x1165>(x1166<<(x1167>x1168)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x1169 = INT8_MIN;
	int8_t x1172 = INT8_MIN;

    t163 = (x1169>(x1170<<(x1171>x1172)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1173 = INT8_MIN;
	uint16_t x1175 = UINT16_MAX;
	volatile int32_t t164 = 112;

    t164 = (x1173>(x1174<<(x1175>x1176)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1181 = INT16_MIN;
	uint16_t x1182 = 1945U;
	volatile uint64_t x1184 = 1021LLU;
	volatile int32_t t165 = -19558540;

    t165 = (x1181>(x1182<<(x1183>x1184)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x1193 = 5;
	uint16_t x1194 = 0U;
	int8_t x1195 = INT8_MIN;
	volatile int64_t x1196 = INT64_MIN;
	static volatile int32_t t166 = -11;

    t166 = (x1193>(x1194<<(x1195>x1196)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x1210 = 49U;
	uint64_t x1211 = 118348247155187LLU;
	int8_t x1212 = 0;
	int32_t t167 = -2;

    t167 = (x1209>(x1210<<(x1211>x1212)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1213 = 39745LLU;
	volatile uint64_t x1214 = UINT64_MAX;
	static int8_t x1215 = -14;
	volatile int8_t x1216 = INT8_MIN;
	volatile int32_t t168 = 1899;

    t168 = (x1213>(x1214<<(x1215>x1216)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x1218 = UINT64_MAX;
	int32_t x1219 = INT32_MIN;
	volatile int8_t x1220 = -48;

    t169 = (x1217>(x1218<<(x1219>x1220)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x1222 = 12U;
	volatile int32_t x1223 = -2;
	uint8_t x1224 = 3U;
	int32_t t170 = -396249;

    t170 = (x1221>(x1222<<(x1223>x1224)));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1229 = 1U;
	int32_t x1230 = 37;
	volatile int16_t x1231 = INT16_MAX;
	static volatile int32_t t171 = 43;

    t171 = (x1229>(x1230<<(x1231>x1232)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x1234 = 7167U;
	int8_t x1236 = INT8_MIN;

    t172 = (x1233>(x1234<<(x1235>x1236)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x1237 = 8046023099LL;
	static uint16_t x1238 = 0U;
	static uint64_t x1239 = UINT64_MAX;
	static uint32_t x1240 = 1792208452U;
	volatile int32_t t173 = 159;

    t173 = (x1237>(x1238<<(x1239>x1240)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1241 = INT64_MIN;
	volatile uint64_t x1242 = UINT64_MAX;
	int16_t x1243 = INT16_MIN;
	int16_t x1244 = INT16_MIN;
	volatile int32_t t174 = 2;

    t174 = (x1241>(x1242<<(x1243>x1244)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x1253 = -1LL;
	uint8_t x1254 = UINT8_MAX;
	static int32_t t175 = -85158;

    t175 = (x1253>(x1254<<(x1255>x1256)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x1257 = 258U;
	uint16_t x1258 = 362U;
	static int8_t x1259 = INT8_MIN;
	volatile int32_t x1260 = INT32_MIN;
	static int32_t t176 = 218;

    t176 = (x1257>(x1258<<(x1259>x1260)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1266 = UINT64_MAX;
	int16_t x1267 = -1;
	int8_t x1268 = -1;

    t177 = (x1265>(x1266<<(x1267>x1268)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x1273 = UINT32_MAX;
	int8_t x1275 = INT8_MIN;
	volatile int16_t x1276 = 1839;
	int32_t t178 = -2;

    t178 = (x1273>(x1274<<(x1275>x1276)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	static int8_t x1277 = 55;
	int32_t x1279 = -7;
	int32_t x1280 = -1;
	int32_t t179 = -125;

    t179 = (x1277>(x1278<<(x1279>x1280)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x1285 = 39247215LLU;
	uint32_t x1286 = UINT32_MAX;
	uint16_t x1287 = 89U;
	uint8_t x1288 = UINT8_MAX;
	volatile int32_t t180 = 40647090;

    t180 = (x1285>(x1286<<(x1287>x1288)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint16_t x1289 = UINT16_MAX;
	int64_t x1290 = 678132756007163295LL;
	int8_t x1291 = 43;
	static volatile int32_t t181 = 1726359;

    t181 = (x1289>(x1290<<(x1291>x1292)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int8_t x1293 = 46;
	uint8_t x1294 = UINT8_MAX;
	uint32_t x1295 = 50U;
	volatile int32_t t182 = 1;

    t182 = (x1293>(x1294<<(x1295>x1296)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1301 = INT8_MAX;
	static uint8_t x1302 = 0U;
	int8_t x1303 = INT8_MAX;
	static volatile uint16_t x1304 = 1152U;
	static volatile int32_t t183 = -779;

    t183 = (x1301>(x1302<<(x1303>x1304)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1309 = 27;
	int8_t x1310 = 6;
	uint32_t x1311 = 445243156U;
	int64_t x1312 = 5772612LL;
	static int32_t t184 = -1200495;

    t184 = (x1309>(x1310<<(x1311>x1312)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1313 = 4;
	static int32_t x1314 = 60449;
	volatile int16_t x1315 = -1;
	int64_t x1316 = -31528224804597646LL;

    t185 = (x1313>(x1314<<(x1315>x1316)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1318 = INT32_MAX;
	int64_t x1319 = INT64_MIN;
	int32_t t186 = 37960156;

    t186 = (x1317>(x1318<<(x1319>x1320)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1325 = INT16_MIN;
	uint64_t x1326 = 495259LLU;
	int64_t x1327 = INT64_MIN;
	int8_t x1328 = -1;

    t187 = (x1325>(x1326<<(x1327>x1328)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x1333 = 0U;
	int16_t x1334 = 7;
	volatile int32_t t188 = -34964189;

    t188 = (x1333>(x1334<<(x1335>x1336)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x1342 = INT32_MAX;
	uint16_t x1343 = 24644U;
	uint64_t x1344 = 56748500263LLU;
	int32_t t189 = 5;

    t189 = (x1341>(x1342<<(x1343>x1344)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x1349 = 30410LLU;
	int16_t x1350 = 189;
	volatile int64_t x1352 = INT64_MIN;
	int32_t t190 = -819089924;

    t190 = (x1349>(x1350<<(x1351>x1352)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1357 = INT8_MIN;
	static uint32_t x1358 = UINT32_MAX;
	uint32_t x1359 = 1037U;
	volatile int8_t x1360 = 0;

    t191 = (x1357>(x1358<<(x1359>x1360)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static volatile uint8_t x1377 = 5U;
	int8_t x1378 = 3;
	volatile int64_t x1379 = 985293305699LL;
	static int8_t x1380 = -1;
	volatile int32_t t192 = -24;

    t192 = (x1377>(x1378<<(x1379>x1380)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1381 = INT32_MIN;
	volatile uint32_t x1382 = 3U;
	static int64_t x1383 = -1LL;
	volatile int32_t x1384 = 12653;
	volatile int32_t t193 = -18;

    t193 = (x1381>(x1382<<(x1383>x1384)));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x1389 = 9989984U;
	int64_t x1392 = 6088LL;
	int32_t t194 = -8843115;

    t194 = (x1389>(x1390<<(x1391>x1392)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x1402 = UINT32_MAX;
	uint32_t x1403 = 59932639U;
	static volatile uint16_t x1404 = UINT16_MAX;
	volatile int32_t t195 = 6206649;

    t195 = (x1401>(x1402<<(x1403>x1404)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1405 = 0;
	int64_t x1408 = -13895813483590LL;
	volatile int32_t t196 = -9254352;

    t196 = (x1405>(x1406<<(x1407>x1408)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint8_t x1417 = 11U;
	volatile int16_t x1418 = INT16_MAX;
	uint64_t x1419 = 383591916754484732LLU;

    t197 = (x1417>(x1418<<(x1419>x1420)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x1426 = 478847473517454LL;
	static int64_t x1427 = -1LL;
	static int64_t x1428 = INT64_MAX;
	int32_t t198 = 24;

    t198 = (x1425>(x1426<<(x1427>x1428)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x1445 = -1LL;
	volatile uint64_t x1446 = 976681461565363LLU;
	volatile uint64_t x1448 = UINT64_MAX;
	static int32_t t199 = 122090;

    t199 = (x1445>(x1446<<(x1447>x1448)));

    if (t199 != 1) { NG(); } else { ; }
	
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

