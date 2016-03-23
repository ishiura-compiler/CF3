
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

static volatile int16_t x2 = -1;
uint8_t x3 = 90U;
int32_t x13 = INT32_MAX;
volatile int32_t x16 = 2;
uint32_t x31 = UINT32_MAX;
uint64_t x32 = 2LLU;
static uint16_t x43 = UINT16_MAX;
int16_t x57 = INT16_MIN;
volatile uint64_t x59 = 707505603308LLU;
uint16_t x60 = UINT16_MAX;
uint64_t t6 = 91909076148045LLU;
int8_t x91 = INT8_MAX;
int8_t x102 = 0;
static int8_t x117 = 0;
uint8_t x118 = 0U;
uint32_t t13 = 420U;
int32_t x131 = 30;
volatile int32_t t15 = 2706;
volatile uint64_t x133 = 17342440771637196LLU;
volatile int32_t x136 = INT32_MAX;
uint32_t x142 = UINT32_MAX;
volatile int16_t x160 = -67;
static uint8_t x163 = 9U;
uint8_t x189 = 2U;
static uint64_t t22 = 7421LLU;
volatile uint8_t x211 = 21U;
uint8_t x212 = 1U;
int64_t x214 = INT64_MAX;
static int64_t x218 = INT64_MIN;
int32_t x239 = INT32_MAX;
volatile int64_t t26 = 2871598LL;
int64_t t27 = -737941856220236849LL;
static int16_t x245 = INT16_MIN;
volatile int32_t t29 = 957;
int16_t x271 = INT16_MIN;
volatile int16_t x272 = -1;
static int64_t x285 = INT64_MAX;
int32_t x308 = -18596129;
int8_t x313 = -1;
int16_t x314 = INT16_MIN;
volatile uint64_t t34 = 255LLU;
int64_t x345 = INT64_MAX;
uint8_t x349 = UINT8_MAX;
static volatile uint16_t x357 = 455U;
int8_t x360 = INT8_MIN;
int64_t t41 = 257LL;
uint8_t x382 = 1U;
volatile uint32_t x386 = 3U;
uint64_t x393 = 13896183LLU;
int64_t x396 = 155193LL;
volatile uint64_t t44 = 26919LLU;
uint16_t x413 = 3U;
static uint16_t x416 = 13578U;
static volatile int8_t x431 = INT8_MAX;
uint32_t x455 = 1713U;
static uint8_t x456 = UINT8_MAX;
uint64_t x471 = UINT64_MAX;
uint64_t t57 = 477LLU;
int64_t x505 = INT64_MIN;
uint8_t x533 = UINT8_MAX;
uint8_t x536 = UINT8_MAX;
static int16_t x553 = INT16_MIN;
static int32_t x555 = INT32_MIN;
int32_t x556 = 265;
int32_t t65 = 6713;
volatile int64_t t66 = -780291620398988LL;
int32_t t67 = 675;
uint64_t x572 = 62778040490947471LLU;
int32_t x574 = INT32_MIN;
uint64_t x575 = UINT64_MAX;
volatile uint64_t x578 = UINT64_MAX;
static volatile uint16_t x590 = 38U;
int32_t x591 = INT32_MIN;
uint64_t x592 = 129752LLU;
volatile int8_t x619 = INT8_MIN;
int32_t t76 = INT32_MIN;
volatile int64_t t77 = -115565955692919LL;
int32_t x629 = -7;
int64_t x635 = INT64_MIN;
static uint32_t x637 = 16101U;
static int32_t x651 = INT32_MIN;
uint32_t x670 = 2731761U;
int64_t x671 = -686004235094043LL;
int64_t t82 = -1858LL;
uint32_t t83 = 172U;
volatile int16_t x707 = 215;
int64_t x708 = 2LL;
static volatile int8_t x712 = -3;
int16_t x736 = -1;
volatile uint64_t t90 = 633353446316512232LLU;
uint8_t x744 = 2U;
uint64_t x752 = 126123350804385387LLU;
int16_t x753 = INT16_MIN;
int32_t t93 = 738875462;
int16_t x760 = 19;
int64_t x766 = 2845LL;
int64_t t96 = 127560615874708693LL;
static int32_t x787 = 125674;
int64_t x794 = INT64_MAX;
int64_t t100 = INT64_MAX;
volatile int16_t x811 = INT16_MIN;
int8_t x818 = INT8_MAX;
int8_t x836 = INT8_MAX;
static int64_t t104 = 939LL;
int32_t x875 = -1;
static int32_t x903 = INT32_MIN;
int64_t t112 = INT64_MIN;
uint64_t x936 = 771028420074LLU;
static volatile uint64_t t114 = 1773898046LLU;
int32_t x942 = INT32_MAX;
int32_t x959 = INT32_MAX;
volatile int32_t t118 = 15738017;
uint64_t x973 = UINT64_MAX;
volatile uint64_t t121 = 15910863LLU;
volatile int8_t x991 = INT8_MIN;
uint8_t x993 = UINT8_MAX;
int64_t x995 = 1787518392LL;
int32_t x1009 = -1;
volatile uint32_t x1010 = 170U;
int16_t x1018 = 0;
volatile uint64_t x1024 = UINT64_MAX;
volatile uint64_t t128 = 818498359995071777LLU;
int64_t x1031 = -68785856LL;
volatile int16_t x1037 = 477;
uint16_t x1053 = UINT16_MAX;
volatile int64_t x1056 = 45LL;
static int16_t x1060 = -83;
volatile int16_t x1066 = INT16_MAX;
uint8_t x1074 = 0U;
uint8_t x1079 = UINT8_MAX;
int32_t x1095 = INT32_MAX;
static uint32_t x1096 = 4920724U;
int8_t x1097 = INT8_MIN;
int32_t x1099 = INT32_MIN;
uint16_t x1132 = 9628U;
volatile int64_t x1134 = INT64_MIN;
int64_t x1138 = INT64_MAX;
static int8_t x1144 = INT8_MAX;
volatile int64_t t145 = 48LL;
int32_t x1149 = 5873;
int8_t x1157 = INT8_MAX;
int32_t x1161 = 1067207673;
int32_t x1163 = INT32_MIN;
volatile int64_t x1164 = -2548LL;
static volatile int64_t t148 = 118971578991LL;
uint8_t x1165 = UINT8_MAX;
static int16_t x1181 = -1;
static volatile uint8_t x1184 = UINT8_MAX;
int64_t t151 = 357637278LL;
volatile int32_t t152 = -2144;
uint16_t x1197 = UINT16_MAX;
static int32_t x1205 = -1;
uint16_t x1223 = 27399U;
static volatile int64_t x1224 = -1LL;
int16_t x1225 = -146;
volatile uint64_t t159 = 2LLU;
int32_t x1230 = INT32_MIN;
static uint8_t x1231 = UINT8_MAX;
int8_t x1232 = -4;
int64_t t161 = -18LL;
static int64_t x1261 = 1705544492LL;
uint16_t x1264 = 11U;
int64_t t162 = 8151384459709LL;
int8_t x1265 = INT8_MAX;
int64_t x1311 = INT64_MAX;
int64_t x1317 = INT64_MIN;
uint32_t x1320 = 13759936U;
int64_t x1329 = -1LL;
int64_t t167 = 805388883705LL;
static uint32_t t168 = UINT32_MAX;
volatile uint64_t x1351 = UINT64_MAX;
int16_t x1360 = INT16_MIN;
static uint64_t x1377 = 4878740036126884LLU;
uint64_t x1380 = 278166432LLU;
static int32_t x1439 = -714116;
static volatile int32_t x1442 = INT32_MAX;
int32_t x1450 = -1344;
static volatile int8_t x1453 = -1;
uint8_t x1456 = 8U;
int32_t x1458 = INT32_MAX;
volatile int64_t x1468 = -1LL;
volatile int16_t x1474 = INT16_MIN;
int8_t x1475 = -1;
uint16_t x1491 = 228U;
int8_t x1498 = -27;
int16_t x1505 = -3;
int32_t x1513 = -1;
volatile int8_t x1533 = INT8_MAX;
int64_t x1539 = INT64_MIN;
int32_t x1543 = INT32_MIN;
uint32_t x1545 = 3583U;
int8_t x1548 = INT8_MIN;
int32_t x1565 = INT32_MIN;
uint8_t x1566 = 2U;
int32_t x1568 = -617982516;
int32_t x1571 = INT32_MIN;
int64_t x1579 = INT64_MAX;
uint64_t x1580 = 4166716879030LLU;
int8_t x1585 = INT8_MIN;
static uint16_t x1602 = 2575U;
static int32_t x1604 = -1;


void f0(void) {
    	volatile int32_t x1 = 31;
	int8_t x4 = 7;
	int32_t t0 = 9162;

    t0 = (x1-(x2%(x3/x4)));

    if (t0 != 32) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x5 = 67419122669LL;
	static int16_t x6 = -1;
	uint16_t x7 = UINT16_MAX;
	volatile uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = 223328LL;

    t1 = (x5-(x6%(x7/x8)));

    if (t1 != 67419122669LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x9 = UINT8_MAX;
	int64_t x10 = 680482820LL;
	uint8_t x11 = 80U;
	int32_t x12 = -1;
	int64_t t2 = -1LL;

    t2 = (x9-(x10%(x11/x12)));

    if (t2 != 235LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x14 = INT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	volatile int64_t t3 = 277826452762LL;

    t3 = (x13-(x14%(x15/x16)));

    if (t3 != 2147483584LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x29 = -1;
	static int32_t x30 = -12373;
	static volatile uint64_t t4 = 1562378141LLU;

    t4 = (x29-(x30%(x31/x32)));

    if (t4 != 18446744071562080337LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x41 = 1775;
	int32_t x42 = INT32_MIN;
	static uint8_t x44 = 58U;
	int32_t t5 = -503732;

    t5 = (x41-(x42%(x43/x44)));

    if (t5 != 2104) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x58 = INT8_MIN;

    t6 = (x57-(x58%(x59/x60)));

    if (t6 != 18446744073709494780LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x65 = -1;
	int16_t x66 = -11960;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = INT8_MAX;
	static int32_t t7 = -11286;

    t7 = (x65-(x66%(x67/x68)));

    if (t7 != 11959) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x73 = INT16_MIN;
	uint8_t x74 = 80U;
	int64_t x75 = INT64_MIN;
	volatile int32_t x76 = INT32_MAX;
	int64_t t8 = -888614254379524429LL;

    t8 = (x73-(x74%(x75/x76)));

    if (t8 != -32848LL) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int8_t x85 = INT8_MIN;
	int16_t x86 = 0;
	static volatile int8_t x87 = -1;
	uint64_t x88 = 353LLU;
	static volatile uint64_t t9 = 34212367218LLU;

    t9 = (x85-(x86%(x87/x88)));

    if (t9 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x89 = 0U;
	static int64_t x90 = 12486800227632331LL;
	static volatile uint64_t x92 = 2LLU;
	volatile uint64_t t10 = 279127213707228LLU;

    t10 = (x89-(x90%(x91/x92)));

    if (t10 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int8_t x101 = INT8_MAX;
	uint64_t x103 = UINT64_MAX;
	int8_t x104 = -1;
	volatile uint64_t t11 = 26661LLU;

    t11 = (x101-(x102%(x103/x104)));

    if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x119 = INT8_MIN;
	int8_t x120 = -7;
	int32_t t12 = -1357;

    t12 = (x117-(x118%(x119/x120)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile uint8_t x121 = UINT8_MAX;
	uint32_t x122 = 125U;
	int32_t x123 = 101453;
	volatile int16_t x124 = INT16_MIN;

    t13 = (x121-(x122%(x123/x124)));

    if (t13 != 130U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x125 = -8;
	int32_t x126 = -1;
	int16_t x127 = INT16_MAX;
	static int16_t x128 = 4;
	volatile int32_t t14 = 1;

    t14 = (x125-(x126%(x127/x128)));

    if (t14 != -7) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x129 = INT16_MAX;
	volatile int8_t x130 = -15;
	uint8_t x132 = 8U;

    t15 = (x129-(x130%(x131/x132)));

    if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x134 = 11966367372040340LLU;
	uint32_t x135 = UINT32_MAX;
	static volatile uint64_t t16 = 6LLU;

    t16 = (x133-(x134%(x135/x136)));

    if (t16 != 17342440771637196LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x141 = 92558U;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MIN;
	volatile uint32_t t17 = 103012U;

    t17 = (x141-(x142%(x143/x144)));

    if (t17 != 92303U) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x157 = INT8_MIN;
	uint8_t x158 = 1U;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t t18 = 29322;

    t18 = (x157-(x158%(x159/x160)));

    if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x161 = 172641LLU;
	volatile int8_t x162 = INT8_MIN;
	int64_t x164 = -1LL;
	volatile uint64_t t19 = 513025542084087LLU;

    t19 = (x161-(x162%(x163/x164)));

    if (t19 != 172643LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x165 = INT8_MIN;
	int8_t x166 = -52;
	int64_t x167 = -1LL;
	static uint64_t x168 = 261278641186LLU;
	static uint64_t t20 = 6LLU;

    t20 = (x165-(x166%(x167/x168)));

    if (t20 != 18446744073642678256LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	volatile uint8_t x192 = UINT8_MAX;
	volatile int64_t t21 = -26233599LL;

    t21 = (x189-(x190%(x191/x192)));

    if (t21 != 32770LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x201 = 8938775520349072LLU;
	int16_t x202 = 0;
	uint64_t x203 = 7637727215592LLU;
	int16_t x204 = INT16_MAX;

    t22 = (x201-(x202%(x203/x204)));

    if (t22 != 8938775520349072LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x209 = 339304068U;
	uint16_t x210 = 837U;
	static uint32_t t23 = 104653466U;

    t23 = (x209-(x210%(x211/x212)));

    if (t23 != 339304050U) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x213 = -16;
	uint32_t x215 = UINT32_MAX;
	int32_t x216 = INT32_MIN;
	int64_t t24 = -254954LL;

    t24 = (x213-(x214%(x215/x216)));

    if (t24 != -16LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x217 = 123;
	int32_t x219 = INT32_MIN;
	uint32_t x220 = 1U;
	volatile int64_t t25 = -10308601LL;

    t25 = (x217-(x218%(x219/x220)));

    if (t25 != 123LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x237 = 418U;
	int64_t x238 = INT64_MIN;
	int8_t x240 = INT8_MAX;

    t26 = (x237-(x238%(x239/x240)));

    if (t26 != 546LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x241 = INT32_MAX;
	static int16_t x242 = 20;
	static int64_t x243 = INT64_MIN;
	static int32_t x244 = INT32_MIN;

    t27 = (x241-(x242%(x243/x244)));

    if (t27 != 2147483627LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x246 = 0U;
	static volatile uint16_t x247 = 113U;
	int64_t x248 = -1LL;
	volatile int64_t t28 = -7362014553219LL;

    t28 = (x245-(x246%(x247/x248)));

    if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x261 = 75U;
	uint16_t x262 = UINT16_MAX;
	int8_t x263 = INT8_MIN;
	volatile int8_t x264 = -1;

    t29 = (x261-(x262%(x263/x264)));

    if (t29 != -52) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x269 = 1702U;
	uint16_t x270 = UINT16_MAX;
	volatile uint32_t t30 = 1436U;

    t30 = (x269-(x270%(x271/x272)));

    if (t30 != 4294936231U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x281 = INT8_MAX;
	uint16_t x282 = 395U;
	int64_t x283 = -136830962951LL;
	int32_t x284 = -1;
	int64_t t31 = -112438408322925LL;

    t31 = (x281-(x282%(x283/x284)));

    if (t31 != -268LL) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint32_t x286 = 2146610853U;
	static uint16_t x287 = 701U;
	volatile int16_t x288 = -1;
	int64_t t32 = -361244LL;

    t32 = (x285-(x286%(x287/x288)));

    if (t32 != 9223372034708164954LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x305 = 36222298316LL;
	uint64_t x306 = 1655798140449LLU;
	volatile int32_t x307 = INT32_MIN;
	volatile uint64_t t33 = 0LLU;

    t33 = (x305-(x306%(x307/x308)));

    if (t33 != 36222298252LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x315 = 4049858LLU;
	int8_t x316 = 25;

    t34 = (x313-(x314%(x315/x316)));

    if (t34 != 18446744073709513135LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x317 = -1;
	int8_t x318 = INT8_MIN;
	int32_t x319 = INT32_MAX;
	int8_t x320 = INT8_MIN;
	volatile int32_t t35 = -18138822;

    t35 = (x317-(x318%(x319/x320)));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x346 = 1;
	volatile uint32_t x347 = UINT32_MAX;
	static volatile int16_t x348 = INT16_MIN;
	int64_t t36 = INT64_MAX;

    t36 = (x345-(x346%(x347/x348)));

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x350 = INT16_MIN;
	int32_t x351 = -325968371;
	uint8_t x352 = 12U;
	volatile int32_t t37 = 235663;

    t37 = (x349-(x350%(x351/x352)));

    if (t37 != 33023) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x353 = UINT8_MAX;
	int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MIN;
	static int64_t x356 = -1LL;
	int64_t t38 = -5LL;

    t38 = (x353-(x354%(x355/x356)));

    if (t38 != 255LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x358 = -1467LL;
	static int32_t x359 = INT32_MIN;
	int64_t t39 = -99160743038890LL;

    t39 = (x357-(x358%(x359/x360)));

    if (t39 != 1922LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x361 = INT64_MAX;
	int16_t x362 = 3;
	int16_t x363 = -45;
	volatile int8_t x364 = -1;
	static volatile int64_t t40 = 21013LL;

    t40 = (x361-(x362%(x363/x364)));

    if (t40 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x365 = 6U;
	int32_t x366 = 46;
	int64_t x367 = -2261840554785617LL;
	volatile uint32_t x368 = 1U;

    t41 = (x365-(x366%(x367/x368)));

    if (t41 != -40LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x381 = INT8_MAX;
	int32_t x383 = INT32_MIN;
	static int8_t x384 = INT8_MIN;
	int32_t t42 = 0;

    t42 = (x381-(x382%(x383/x384)));

    if (t42 != 126) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint8_t x385 = 8U;
	volatile int16_t x387 = INT16_MIN;
	int8_t x388 = -9;
	static uint32_t t43 = 3U;

    t43 = (x385-(x386%(x387/x388)));

    if (t43 != 5U) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int16_t x394 = INT16_MAX;
	static int32_t x395 = INT32_MIN;

    t44 = (x393-(x394%(x395/x396)));

    if (t44 != 13891090LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	static int32_t x401 = 2282486;
	int64_t x402 = 2458466207760109713LL;
	int64_t x403 = INT64_MAX;
	static volatile int32_t x404 = INT32_MAX;
	volatile int64_t t45 = 1046640LL;

    t45 = (x401-(x402%(x403/x404)));

    if (t45 != -1232636065LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x405 = UINT16_MAX;
	uint64_t x406 = 59483226LLU;
	int8_t x407 = INT8_MIN;
	int8_t x408 = -45;
	uint64_t t46 = 2639437565652291409LLU;

    t46 = (x405-(x406%(x407/x408)));

    if (t46 != 65535LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile uint64_t x414 = 263100971022690LLU;
	uint64_t x415 = 4799763110797LLU;
	volatile uint64_t t47 = 1908866384LLU;

    t47 = (x413-(x414%(x415/x416)));

    if (t47 != 18446744073495996616LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x421 = -1;
	static uint64_t x422 = UINT64_MAX;
	volatile uint8_t x423 = UINT8_MAX;
	int16_t x424 = 1;
	uint64_t t48 = UINT64_MAX;

    t48 = (x421-(x422%(x423/x424)));

    if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x429 = INT64_MIN;
	static int8_t x430 = -1;
	int8_t x432 = INT8_MAX;
	int64_t t49 = INT64_MIN;

    t49 = (x429-(x430%(x431/x432)));

    if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x433 = -70473816551403LL;
	static uint8_t x434 = 95U;
	int8_t x435 = INT8_MIN;
	int16_t x436 = 33;
	volatile int64_t t50 = -2191645165269LL;

    t50 = (x433-(x434%(x435/x436)));

    if (t50 != -70473816551405LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint64_t x437 = 33446666433456LLU;
	int8_t x438 = INT8_MIN;
	volatile int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MIN;
	static volatile uint64_t t51 = 58663LLU;

    t51 = (x437-(x438%(x439/x440)));

    if (t51 != 33446666433456LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x445 = -2393;
	int16_t x446 = INT16_MIN;
	uint32_t x447 = UINT32_MAX;
	volatile int16_t x448 = -1;
	static volatile uint32_t t52 = 2U;

    t52 = (x445-(x446%(x447/x448)));

    if (t52 != 4294964903U) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int16_t x453 = -1;
	int16_t x454 = INT16_MIN;
	uint32_t t53 = 26186035U;

    t53 = (x453-(x454%(x455/x456)));

    if (t53 != 4294967293U) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x457 = 90U;
	static volatile int16_t x458 = INT16_MIN;
	uint8_t x459 = 34U;
	int64_t x460 = -1LL;
	volatile int64_t t54 = 1LL;

    t54 = (x457-(x458%(x459/x460)));

    if (t54 != 116LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MAX;
	static int16_t x463 = 1161;
	static uint8_t x464 = UINT8_MAX;
	static volatile int32_t t55 = -291;

    t55 = (x461-(x462%(x463/x464)));

    if (t55 != -131) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint8_t x465 = UINT8_MAX;
	volatile int64_t x466 = INT64_MIN;
	uint8_t x467 = UINT8_MAX;
	int8_t x468 = -2;
	int64_t t56 = -2171002436032645LL;

    t56 = (x465-(x466%(x467/x468)));

    if (t56 != 256LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x469 = INT32_MAX;
	int32_t x470 = 0;
	uint16_t x472 = 116U;

    t57 = (x469-(x470%(x471/x472)));

    if (t57 != 2147483647LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x477 = 455178U;
	int64_t x478 = INT64_MIN;
	uint16_t x479 = 3882U;
	int8_t x480 = INT8_MIN;
	static int64_t t58 = -338798LL;

    t58 = (x477-(x478%(x479/x480)));

    if (t58 != 455186LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x506 = INT64_MIN;
	volatile int32_t x507 = 399197883;
	uint32_t x508 = 9337U;
	static volatile int64_t t59 = -3LL;

    t59 = (x505-(x506%(x507/x508)));

    if (t59 != -9223372036854733622LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x529 = INT16_MIN;
	uint16_t x530 = 17323U;
	volatile int32_t x531 = INT32_MAX;
	int8_t x532 = INT8_MIN;
	int32_t t60 = 365440908;

    t60 = (x529-(x530%(x531/x532)));

    if (t60 != -50091) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x534 = UINT8_MAX;
	int64_t x535 = INT64_MAX;
	volatile int64_t t61 = 0LL;

    t61 = (x533-(x534%(x535/x536)));

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x541 = 112606;
	uint8_t x542 = 5U;
	volatile int16_t x543 = -1;
	uint64_t x544 = 221177072752090LLU;
	volatile uint64_t t62 = 50602LLU;

    t62 = (x541-(x542%(x543/x544)));

    if (t62 != 112601LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x545 = 15;
	int64_t x546 = 179981LL;
	static uint16_t x547 = UINT16_MAX;
	int16_t x548 = INT16_MIN;
	volatile int64_t t63 = -10566LL;

    t63 = (x545-(x546%(x547/x548)));

    if (t63 != 15LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x549 = -1;
	uint8_t x550 = 28U;
	int16_t x551 = INT16_MIN;
	static uint16_t x552 = 2869U;
	volatile int32_t t64 = -46679;

    t64 = (x549-(x550%(x551/x552)));

    if (t64 != -7) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x554 = INT8_MAX;

    t65 = (x553-(x554%(x555/x556)));

    if (t65 != -32895) { NG(); } else { ; }
	
}

void f66(void) {
    	static int32_t x557 = INT32_MAX;
	static uint16_t x558 = 115U;
	int8_t x559 = INT8_MIN;
	int64_t x560 = -1LL;

    t66 = (x557-(x558%(x559/x560)));

    if (t66 != 2147483532LL) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x565 = UINT16_MAX;
	uint16_t x566 = 202U;
	int32_t x567 = INT32_MAX;
	uint8_t x568 = 1U;

    t67 = (x565-(x566%(x567/x568)));

    if (t67 != 65333) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x569 = 532LL;
	static int8_t x570 = INT8_MIN;
	int8_t x571 = INT8_MIN;
	uint64_t t68 = 9622433629026828LLU;

    t68 = (x569-(x570%(x571/x572)));

    if (t68 != 258LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x573 = 0;
	int32_t x576 = INT32_MAX;
	volatile uint64_t t69 = 3589683657LLU;

    t69 = (x573-(x574%(x575/x576)));

    if (t69 != 18446744067267100664LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x577 = INT32_MAX;
	static int32_t x579 = -25899389;
	volatile int16_t x580 = 105;
	static volatile uint64_t t70 = 3658567459LLU;

    t70 = (x577-(x578%(x579/x580)));

    if (t70 != 2147236988LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x581 = INT32_MIN;
	int64_t x582 = 70134LL;
	static int64_t x583 = INT64_MAX;
	int32_t x584 = 21282515;
	volatile int64_t t71 = -144110582914785008LL;

    t71 = (x581-(x582%(x583/x584)));

    if (t71 != -2147553782LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x589 = UINT64_MAX;
	volatile uint64_t t72 = 8279985924405495688LLU;

    t72 = (x589-(x590%(x591/x592)));

    if (t72 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x605 = INT16_MIN;
	static int64_t x606 = INT64_MAX;
	int8_t x607 = INT8_MAX;
	static int16_t x608 = -1;
	volatile int64_t t73 = 1005LL;

    t73 = (x605-(x606%(x607/x608)));

    if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x609 = -900;
	static uint64_t x610 = 2901537083LLU;
	int8_t x611 = -1;
	static volatile uint64_t x612 = 96341849927LLU;
	static uint64_t t74 = 6283016164577392603LLU;

    t74 = (x609-(x610%(x611/x612)));

    if (t74 != 18446744073680090108LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x613 = INT8_MIN;
	int32_t x614 = -64039;
	int64_t x615 = INT64_MIN;
	uint64_t x616 = 11195LLU;
	volatile uint64_t t75 = 3684679168123LLU;

    t75 = (x613-(x614%(x615/x616)));

    if (t75 != 18445920190544180858LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x617 = INT32_MIN;
	static int8_t x618 = 41;
	int8_t x620 = INT8_MIN;

    t76 = (x617-(x618%(x619/x620)));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x621 = 3301;
	int8_t x622 = INT8_MIN;
	int8_t x623 = -1;
	int64_t x624 = -1LL;

    t77 = (x621-(x622%(x623/x624)));

    if (t77 != 3301LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x630 = INT16_MIN;
	int32_t x631 = INT32_MIN;
	int32_t x632 = INT32_MIN;
	int32_t t78 = -69786;

    t78 = (x629-(x630%(x631/x632)));

    if (t78 != -7) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x633 = -1;
	uint64_t x634 = 175019603275132069LLU;
	int16_t x636 = INT16_MAX;
	uint64_t t79 = 49733038200LLU;

    t79 = (x633-(x634%(x635/x636)));

    if (t79 != 18271724470434419546LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x638 = -3;
	int64_t x639 = INT64_MIN;
	int8_t x640 = INT8_MAX;
	int64_t t80 = -2902210802658LL;

    t80 = (x637-(x638%(x639/x640)));

    if (t80 != 16104LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x649 = INT64_MIN;
	int16_t x650 = INT16_MIN;
	int8_t x652 = INT8_MIN;
	int64_t t81 = -141685259829293364LL;

    t81 = (x649-(x650%(x651/x652)));

    if (t81 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x669 = INT16_MIN;
	int8_t x672 = INT8_MIN;

    t82 = (x669-(x670%(x671/x672)));

    if (t82 != -2764529LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x673 = -1;
	int32_t x674 = INT32_MAX;
	uint32_t x675 = UINT32_MAX;
	int16_t x676 = INT16_MAX;

    t83 = (x673-(x674%(x675/x676)));

    if (t83 != 4294901756U) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x677 = 332500665249728LL;
	int16_t x678 = INT16_MIN;
	int16_t x679 = 1;
	int64_t x680 = -1LL;
	int64_t t84 = 406639LL;

    t84 = (x677-(x678%(x679/x680)));

    if (t84 != 332500665249728LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint8_t x681 = 0U;
	uint32_t x682 = 184055U;
	int64_t x683 = INT64_MAX;
	volatile int16_t x684 = 264;
	volatile int64_t t85 = 29075329LL;

    t85 = (x681-(x682%(x683/x684)));

    if (t85 != -184055LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x705 = 1777LLU;
	int32_t x706 = INT32_MIN;
	uint64_t t86 = 138LLU;

    t86 = (x705-(x706%(x707/x708)));

    if (t86 != 1845LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int8_t x709 = INT8_MIN;
	volatile int16_t x710 = 0;
	int64_t x711 = 106484041058965LL;
	volatile int64_t t87 = -33955567612LL;

    t87 = (x709-(x710%(x711/x712)));

    if (t87 != -128LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x713 = -3;
	uint16_t x714 = UINT16_MAX;
	static uint16_t x715 = UINT16_MAX;
	int16_t x716 = INT16_MIN;
	volatile int32_t t88 = -634554106;

    t88 = (x713-(x714%(x715/x716)));

    if (t88 != -3) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x733 = INT8_MAX;
	uint32_t x734 = 24822U;
	volatile int8_t x735 = INT8_MIN;
	static volatile uint32_t t89 = 691596U;

    t89 = (x733-(x734%(x735/x736)));

    if (t89 != 9U) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x737 = -113;
	uint16_t x738 = 31U;
	uint32_t x739 = UINT32_MAX;
	uint64_t x740 = 44006LLU;

    t90 = (x737-(x738%(x739/x740)));

    if (t90 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x741 = 142570544LLU;
	int32_t x742 = INT32_MAX;
	int64_t x743 = INT64_MIN;
	volatile uint64_t t91 = 25870736LLU;

    t91 = (x741-(x742%(x743/x744)));

    if (t91 != 18446744071704638513LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x749 = -1;
	int32_t x750 = INT32_MIN;
	int8_t x751 = INT8_MIN;
	volatile uint64_t t92 = 5846LLU;

    t92 = (x749-(x750%(x751/x752)));

    if (t92 != 18446744073709551483LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x754 = INT32_MAX;
	uint16_t x755 = 6U;
	int8_t x756 = -1;

    t93 = (x753-(x754%(x755/x756)));

    if (t93 != -32769) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x757 = INT64_MIN;
	int8_t x758 = INT8_MIN;
	int32_t x759 = INT32_MIN;
	int64_t t94 = 11LL;

    t94 = (x757-(x758%(x759/x760)));

    if (t94 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x765 = -1;
	uint16_t x767 = UINT16_MAX;
	int8_t x768 = INT8_MIN;
	volatile int64_t t95 = 85675341120925981LL;

    t95 = (x765-(x766%(x767/x768)));

    if (t95 != -291LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x769 = UINT8_MAX;
	uint8_t x770 = UINT8_MAX;
	int64_t x771 = INT64_MIN;
	volatile uint16_t x772 = 336U;

    t96 = (x769-(x770%(x771/x772)));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x785 = 6537055516764192LL;
	int16_t x786 = INT16_MAX;
	int16_t x788 = 5935;
	volatile int64_t t97 = 7LL;

    t97 = (x785-(x786%(x787/x788)));

    if (t97 != 6537055516764185LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x789 = INT16_MIN;
	volatile int8_t x790 = 1;
	int16_t x791 = INT16_MAX;
	uint8_t x792 = UINT8_MAX;
	volatile int32_t t98 = 1;

    t98 = (x789-(x790%(x791/x792)));

    if (t98 != -32769) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x793 = -1;
	int8_t x795 = 56;
	static volatile uint32_t x796 = 30U;
	volatile int64_t t99 = -62474LL;

    t99 = (x793-(x794%(x795/x796)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x797 = INT64_MAX;
	int32_t x798 = INT32_MIN;
	int32_t x799 = INT32_MAX;
	uint32_t x800 = 1365455480U;

    t100 = (x797-(x798%(x799/x800)));

    if (t100 != INT64_MAX) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x809 = UINT64_MAX;
	static volatile int8_t x810 = INT8_MAX;
	int8_t x812 = INT8_MAX;
	uint64_t t101 = 184682609806LLU;

    t101 = (x809-(x810%(x811/x812)));

    if (t101 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x817 = UINT16_MAX;
	static int16_t x819 = INT16_MAX;
	int8_t x820 = 2;
	int32_t t102 = 0;

    t102 = (x817-(x818%(x819/x820)));

    if (t102 != 65408) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x821 = 280953954161LLU;
	volatile int8_t x822 = INT8_MIN;
	uint32_t x823 = 1046537631U;
	uint16_t x824 = UINT16_MAX;
	uint64_t t103 = 225181730885425LLU;

    t103 = (x821-(x822%(x823/x824)));

    if (t103 != 280953945357LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x833 = 10762221;
	int64_t x834 = INT64_MAX;
	int32_t x835 = INT32_MIN;

    t104 = (x833-(x834%(x835/x836)));

    if (t104 != 10762094LL) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int8_t x869 = -30;
	volatile int64_t x870 = 3178691609374LL;
	int8_t x871 = -1;
	uint32_t x872 = 10673487U;
	int64_t t105 = -21925340436683791LL;

    t105 = (x869-(x870%(x871/x872)));

    if (t105 != -88LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x873 = INT16_MAX;
	uint8_t x874 = UINT8_MAX;
	static uint64_t x876 = 33755940LLU;
	volatile uint64_t t106 = 16388459LLU;

    t106 = (x873-(x874%(x875/x876)));

    if (t106 != 32512LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x885 = INT8_MIN;
	static int8_t x886 = 21;
	int64_t x887 = INT64_MAX;
	int32_t x888 = INT32_MIN;
	int64_t t107 = 104009894LL;

    t107 = (x885-(x886%(x887/x888)));

    if (t107 != -149LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int64_t x897 = -1LL;
	volatile int64_t x898 = -1LL;
	int16_t x899 = INT16_MAX;
	volatile int8_t x900 = INT8_MIN;
	volatile int64_t t108 = 520363805773334LL;

    t108 = (x897-(x898%(x899/x900)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint64_t x901 = 222679833044LLU;
	int64_t x902 = -3LL;
	int8_t x904 = -28;
	volatile uint64_t t109 = 22LLU;

    t109 = (x901-(x902%(x903/x904)));

    if (t109 != 222679833047LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x913 = 0;
	uint64_t x914 = UINT64_MAX;
	uint64_t x915 = 13804882776812671LLU;
	volatile uint32_t x916 = 1828405037U;
	uint64_t t110 = 3915076LLU;

    t110 = (x913-(x914%(x915/x916)));

    if (t110 != 18446744073706140073LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x917 = INT8_MIN;
	int16_t x918 = INT16_MIN;
	int64_t x919 = INT64_MAX;
	int16_t x920 = 8279;
	int64_t t111 = -7156378064LL;

    t111 = (x917-(x918%(x919/x920)));

    if (t111 != 32640LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int64_t x925 = INT64_MIN;
	int8_t x926 = -1;
	static int8_t x927 = INT8_MIN;
	int8_t x928 = INT8_MAX;

    t112 = (x925-(x926%(x927/x928)));

    if (t112 != INT64_MIN) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x929 = INT8_MIN;
	int32_t x930 = 12423;
	uint16_t x931 = UINT16_MAX;
	int8_t x932 = INT8_MAX;
	int32_t t113 = 2122;

    t113 = (x929-(x930%(x931/x932)));

    if (t113 != -167) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x933 = INT8_MIN;
	uint64_t x934 = UINT64_MAX;
	int8_t x935 = -1;

    t114 = (x933-(x934%(x935/x936)));

    if (t114 != 18446744073694072265LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint32_t x937 = UINT32_MAX;
	int8_t x938 = 1;
	volatile int64_t x939 = 1665644841LL;
	uint8_t x940 = UINT8_MAX;
	volatile int64_t t115 = 10922154080LL;

    t115 = (x937-(x938%(x939/x940)));

    if (t115 != 4294967294LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x941 = INT16_MIN;
	volatile int16_t x943 = -10;
	static volatile uint8_t x944 = 2U;
	int32_t t116 = 9816720;

    t116 = (x941-(x942%(x943/x944)));

    if (t116 != -32770) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x949 = INT32_MAX;
	uint64_t x950 = 3811506139LLU;
	int8_t x951 = INT8_MIN;
	volatile uint8_t x952 = 95U;
	static uint64_t t117 = 45989991134091LLU;

    t117 = (x949-(x950%(x951/x952)));

    if (t117 != 18446744072045529124LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x957 = -1;
	int32_t x958 = INT32_MAX;
	volatile int32_t x960 = -1;

    t118 = (x957-(x958%(x959/x960)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x961 = 3034U;
	int8_t x962 = -1;
	int16_t x963 = INT16_MIN;
	uint32_t x964 = 125231650U;
	uint32_t t119 = 792972238U;

    t119 = (x961-(x962%(x963/x964)));

    if (t119 != 3017U) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint16_t x965 = 1008U;
	uint32_t x966 = UINT32_MAX;
	uint64_t x967 = 33207167091LLU;
	volatile int8_t x968 = 11;
	volatile uint64_t t120 = 365716426955801902LLU;

    t120 = (x965-(x966%(x967/x968)));

    if (t120 != 18446744072433418700LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x974 = INT8_MAX;
	int64_t x975 = -59472844605LL;
	int32_t x976 = 302519;

    t121 = (x973-(x974%(x975/x976)));

    if (t121 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x989 = -1;
	static int8_t x990 = INT8_MIN;
	volatile int16_t x992 = -1;
	int32_t t122 = -1219336;

    t122 = (x989-(x990%(x991/x992)));

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x994 = 673U;
	static uint16_t x996 = UINT16_MAX;
	volatile int64_t t123 = 61428164615433LL;

    t123 = (x993-(x994%(x995/x996)));

    if (t123 != -418LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x997 = INT16_MIN;
	int16_t x998 = 114;
	uint8_t x999 = 95U;
	int16_t x1000 = -1;
	int32_t t124 = 197;

    t124 = (x997-(x998%(x999/x1000)));

    if (t124 != -32787) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x1001 = INT64_MIN;
	int8_t x1002 = -1;
	int32_t x1003 = INT32_MIN;
	int8_t x1004 = INT8_MIN;
	int64_t t125 = -15734409LL;

    t125 = (x1001-(x1002%(x1003/x1004)));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x1011 = 821532102LLU;
	int16_t x1012 = 17;
	volatile uint64_t t126 = 6173948LLU;

    t126 = (x1009-(x1010%(x1011/x1012)));

    if (t126 != 18446744073709551445LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x1017 = -1;
	int64_t x1019 = INT64_MAX;
	static uint16_t x1020 = 2784U;
	int64_t t127 = -103042LL;

    t127 = (x1017-(x1018%(x1019/x1020)));

    if (t127 != -1LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x1021 = 8U;
	static int32_t x1022 = -1;
	int8_t x1023 = -1;

    t128 = (x1021-(x1022%(x1023/x1024)));

    if (t128 != 8LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1029 = INT8_MIN;
	static int32_t x1030 = 0;
	int8_t x1032 = 1;
	int64_t t129 = -485012089585LL;

    t129 = (x1029-(x1030%(x1031/x1032)));

    if (t129 != -128LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1038 = -5708952;
	int8_t x1039 = INT8_MIN;
	uint32_t x1040 = 531501U;
	volatile uint32_t t130 = 47918411U;

    t130 = (x1037-(x1038%(x1039/x1040)));

    if (t130 != 4294961269U) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int32_t x1054 = 412259;
	uint8_t x1055 = UINT8_MAX;
	int64_t t131 = 118285LL;

    t131 = (x1053-(x1054%(x1055/x1056)));

    if (t131 != 65531LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x1057 = 0U;
	volatile int32_t x1058 = INT32_MAX;
	static volatile int16_t x1059 = -3970;
	int32_t t132 = 1544;

    t132 = (x1057-(x1058%(x1059/x1060)));

    if (t132 != -20) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x1065 = UINT16_MAX;
	volatile int16_t x1067 = INT16_MIN;
	int16_t x1068 = -5505;
	volatile int32_t t133 = -3;

    t133 = (x1065-(x1066%(x1067/x1068)));

    if (t133 != 65533) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x1069 = UINT32_MAX;
	int64_t x1070 = -1LL;
	int64_t x1071 = 1084343626423LL;
	uint8_t x1072 = UINT8_MAX;
	static volatile int64_t t134 = -111200LL;

    t134 = (x1069-(x1070%(x1071/x1072)));

    if (t134 != 4294967296LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x1073 = 2319LLU;
	uint8_t x1075 = 79U;
	int16_t x1076 = 20;
	volatile uint64_t t135 = 748418838LLU;

    t135 = (x1073-(x1074%(x1075/x1076)));

    if (t135 != 2319LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x1077 = 6591U;
	volatile uint64_t x1078 = 1002LLU;
	int8_t x1080 = -1;
	volatile uint64_t t136 = 1373907LLU;

    t136 = (x1077-(x1078%(x1079/x1080)));

    if (t136 != 5589LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x1081 = -1LL;
	static int64_t x1082 = -926257478570868240LL;
	int64_t x1083 = INT64_MAX;
	static uint8_t x1084 = 1U;
	int64_t t137 = 3640636232726033861LL;

    t137 = (x1081-(x1082%(x1083/x1084)));

    if (t137 != 926257478570868239LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint16_t x1089 = 3U;
	static volatile uint32_t x1090 = UINT32_MAX;
	int16_t x1091 = INT16_MIN;
	uint64_t x1092 = 43630630358759LLU;
	uint64_t t138 = 26LLU;

    t138 = (x1089-(x1090%(x1091/x1092)));

    if (t138 != 18446744073709315618LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x1093 = INT16_MIN;
	uint16_t x1094 = 6U;
	static uint32_t t139 = 564833U;

    t139 = (x1093-(x1094%(x1095/x1096)));

    if (t139 != 4294934522U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x1098 = 3U;
	int32_t x1100 = 8990;
	volatile int32_t t140 = 113;

    t140 = (x1097-(x1098%(x1099/x1100)));

    if (t140 != -131) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x1109 = INT16_MIN;
	uint64_t x1110 = 16567469LLU;
	uint8_t x1111 = UINT8_MAX;
	int16_t x1112 = -8;
	uint64_t t141 = 11LLU;

    t141 = (x1109-(x1110%(x1111/x1112)));

    if (t141 != 18446744073692951379LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x1129 = -1LL;
	uint32_t x1130 = UINT32_MAX;
	int64_t x1131 = INT64_MAX;
	volatile int64_t t142 = -13234LL;

    t142 = (x1129-(x1130%(x1131/x1132)));

    if (t142 != -4294967296LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x1133 = INT64_MIN;
	int8_t x1135 = INT8_MIN;
	uint32_t x1136 = 28528972U;
	int64_t t143 = -128313LL;

    t143 = (x1133-(x1134%(x1135/x1136)));

    if (t143 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x1137 = 120U;
	int32_t x1139 = -15448;
	uint8_t x1140 = UINT8_MAX;
	volatile int64_t t144 = -13820073445459LL;

    t144 = (x1137-(x1138%(x1139/x1140)));

    if (t144 != 113LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x1141 = INT32_MAX;
	int32_t x1142 = -1;
	static int64_t x1143 = INT64_MIN;

    t145 = (x1141-(x1142%(x1143/x1144)));

    if (t145 != 2147483648LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1150 = INT8_MAX;
	int16_t x1151 = INT16_MAX;
	int8_t x1152 = INT8_MIN;
	volatile int32_t t146 = 13123;

    t146 = (x1149-(x1150%(x1151/x1152)));

    if (t146 != 5746) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x1158 = UINT32_MAX;
	volatile uint32_t x1159 = UINT32_MAX;
	int8_t x1160 = INT8_MIN;
	volatile uint32_t t147 = 1U;

    t147 = (x1157-(x1158%(x1159/x1160)));

    if (t147 != 127U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x1162 = UINT32_MAX;

    t148 = (x1161-(x1162%(x1163/x1164)));

    if (t148 != 1067205234LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x1166 = INT64_MAX;
	int64_t x1167 = INT64_MIN;
	int64_t x1168 = INT64_MAX;
	volatile int64_t t149 = 3169029153923077332LL;

    t149 = (x1165-(x1166%(x1167/x1168)));

    if (t149 != 255LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x1169 = 7050671797987LLU;
	static uint32_t x1170 = 15551U;
	static int8_t x1171 = 15;
	int8_t x1172 = -3;
	uint64_t t150 = 1103474001152LLU;

    t150 = (x1169-(x1170%(x1171/x1172)));

    if (t150 != 7050671782436LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x1182 = UINT32_MAX;
	int64_t x1183 = 1706LL;

    t151 = (x1181-(x1182%(x1183/x1184)));

    if (t151 != -4LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x1189 = INT8_MAX;
	volatile int16_t x1190 = -1;
	uint16_t x1191 = 9754U;
	int16_t x1192 = -1;

    t152 = (x1189-(x1190%(x1191/x1192)));

    if (t152 != 128) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x1193 = INT32_MIN;
	uint32_t x1194 = 217895697U;
	int64_t x1195 = 7780903707LL;
	int32_t x1196 = INT32_MIN;
	volatile int64_t t153 = 0LL;

    t153 = (x1193-(x1194%(x1195/x1196)));

    if (t153 != -2147483648LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x1198 = INT64_MIN;
	static int16_t x1199 = INT16_MAX;
	static int16_t x1200 = -1;
	int64_t t154 = -10666LL;

    t154 = (x1197-(x1198%(x1199/x1200)));

    if (t154 != 65543LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1201 = INT8_MIN;
	int32_t x1202 = -1;
	volatile int32_t x1203 = 159631;
	uint16_t x1204 = 147U;
	volatile int32_t t155 = -785860;

    t155 = (x1201-(x1202%(x1203/x1204)));

    if (t155 != -127) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x1206 = INT8_MAX;
	int64_t x1207 = INT64_MAX;
	int8_t x1208 = INT8_MAX;
	volatile int64_t t156 = -27465201216LL;

    t156 = (x1205-(x1206%(x1207/x1208)));

    if (t156 != -128LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x1217 = 0LL;
	int8_t x1218 = INT8_MIN;
	static uint8_t x1219 = UINT8_MAX;
	static volatile int8_t x1220 = INT8_MIN;
	int64_t t157 = 4315LL;

    t157 = (x1217-(x1218%(x1219/x1220)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x1221 = UINT64_MAX;
	uint8_t x1222 = UINT8_MAX;
	volatile uint64_t t158 = 444706LLU;

    t158 = (x1221-(x1222%(x1223/x1224)));

    if (t158 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x1226 = 28U;
	uint64_t x1227 = UINT64_MAX;
	static int16_t x1228 = INT16_MIN;

    t159 = (x1225-(x1226%(x1227/x1228)));

    if (t159 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1229 = INT8_MIN;
	int32_t t160 = 24;

    t160 = (x1229-(x1230%(x1231/x1232)));

    if (t160 != -126) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x1249 = 566032431366868LL;
	volatile int16_t x1250 = INT16_MAX;
	int64_t x1251 = -6255969013932835LL;
	int16_t x1252 = -1;

    t161 = (x1249-(x1250%(x1251/x1252)));

    if (t161 != 566032431334101LL) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x1262 = INT32_MIN;
	static int8_t x1263 = INT8_MIN;

    t162 = (x1261-(x1262%(x1263/x1264)));

    if (t162 != 1705544494LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x1266 = 27LLU;
	volatile uint32_t x1267 = 5555217U;
	int8_t x1268 = 14;
	volatile uint64_t t163 = 11400LLU;

    t163 = (x1265-(x1266%(x1267/x1268)));

    if (t163 != 100LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x1289 = INT8_MIN;
	uint32_t x1290 = 3508554U;
	int64_t x1291 = INT64_MAX;
	volatile int64_t x1292 = 18097606732LL;
	int64_t t164 = -2082222LL;

    t164 = (x1289-(x1290%(x1291/x1292)));

    if (t164 != -3508682LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x1309 = 19U;
	int8_t x1310 = 5;
	uint32_t x1312 = UINT32_MAX;
	int64_t t165 = -4146523758434LL;

    t165 = (x1309-(x1310%(x1311/x1312)));

    if (t165 != 14LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x1318 = 4;
	uint64_t x1319 = 1852418127LLU;
	volatile uint64_t t166 = 1LLU;

    t166 = (x1317-(x1318%(x1319/x1320)));

    if (t166 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x1330 = INT32_MIN;
	int64_t x1331 = 1045989032430LL;
	static int8_t x1332 = -1;

    t167 = (x1329-(x1330%(x1331/x1332)));

    if (t167 != 2147483647LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint32_t x1333 = UINT32_MAX;
	int32_t x1334 = 0;
	volatile uint32_t x1335 = 4024U;
	uint16_t x1336 = 25U;

    t168 = (x1333-(x1334%(x1335/x1336)));

    if (t168 != UINT32_MAX) { NG(); } else { ; }
	
}

void f169(void) {
    	static int16_t x1349 = INT16_MIN;
	static int32_t x1350 = INT32_MIN;
	static uint16_t x1352 = UINT16_MAX;
	volatile uint64_t t169 = 1145LLU;

    t169 = (x1349-(x1350%(x1351/x1352)));

    if (t169 != 18446462596585259006LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1357 = INT32_MIN;
	uint32_t x1358 = UINT32_MAX;
	static int16_t x1359 = INT16_MIN;
	static uint32_t t170 = 2U;

    t170 = (x1357-(x1358%(x1359/x1360)));

    if (t170 != 2147483648U) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int32_t x1369 = -30467308;
	int64_t x1370 = INT64_MAX;
	int8_t x1371 = INT8_MIN;
	int64_t x1372 = -1LL;
	volatile int64_t t171 = 10675757599511217LL;

    t171 = (x1369-(x1370%(x1371/x1372)));

    if (t171 != -30467435LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x1378 = INT16_MIN;
	static int64_t x1379 = -488280814243LL;
	volatile uint64_t t172 = 67835LLU;

    t172 = (x1377-(x1378%(x1379/x1380)));

    if (t172 != 4878715927601713LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x1389 = 123036U;
	static volatile int64_t x1390 = -1LL;
	int64_t x1391 = INT64_MIN;
	static int8_t x1392 = INT8_MAX;
	volatile int64_t t173 = -4585LL;

    t173 = (x1389-(x1390%(x1391/x1392)));

    if (t173 != 123037LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x1413 = 0LLU;
	int8_t x1414 = INT8_MIN;
	int64_t x1415 = INT64_MIN;
	uint32_t x1416 = 1211U;
	static uint64_t t174 = 38LLU;

    t174 = (x1413-(x1414%(x1415/x1416)));

    if (t174 != 128LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x1421 = 14556944618732237LL;
	uint32_t x1422 = UINT32_MAX;
	static int16_t x1423 = INT16_MIN;
	int16_t x1424 = INT16_MAX;
	volatile int64_t t175 = 4571599165444965LL;

    t175 = (x1421-(x1422%(x1423/x1424)));

    if (t175 != 14556944618732237LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x1437 = UINT8_MAX;
	uint64_t x1438 = 1277263005187LLU;
	static uint8_t x1440 = 3U;
	static uint64_t t176 = 5LLU;

    t176 = (x1437-(x1438%(x1439/x1440)));

    if (t176 != 18446742796446546684LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x1441 = INT64_MAX;
	static int8_t x1443 = INT8_MIN;
	uint64_t x1444 = 367LLU;
	uint64_t t177 = 5819710274483142LLU;

    t177 = (x1441-(x1442%(x1443/x1444)));

    if (t177 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1449 = -302LL;
	volatile uint32_t x1451 = 72341U;
	uint16_t x1452 = UINT16_MAX;
	static volatile int64_t t178 = -2577564613381LL;

    t178 = (x1449-(x1450%(x1451/x1452)));

    if (t178 != -302LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x1454 = 0;
	uint32_t x1455 = UINT32_MAX;
	static uint32_t t179 = UINT32_MAX;

    t179 = (x1453-(x1454%(x1455/x1456)));

    if (t179 != UINT32_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int64_t x1457 = -1LL;
	volatile int64_t x1459 = INT64_MIN;
	volatile int8_t x1460 = INT8_MIN;
	static int64_t t180 = -143770868959041LL;

    t180 = (x1457-(x1458%(x1459/x1460)));

    if (t180 != -2147483648LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x1465 = INT16_MIN;
	int8_t x1466 = INT8_MAX;
	static uint32_t x1467 = 1219U;
	static volatile int64_t t181 = 3056546385038334108LL;

    t181 = (x1465-(x1466%(x1467/x1468)));

    if (t181 != -32895LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x1473 = INT8_MIN;
	static uint8_t x1476 = 1U;
	static int32_t t182 = -217001694;

    t182 = (x1473-(x1474%(x1475/x1476)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1489 = -176252LL;
	int32_t x1490 = -1;
	int8_t x1492 = INT8_MIN;
	volatile int64_t t183 = -48LL;

    t183 = (x1489-(x1490%(x1491/x1492)));

    if (t183 != -176252LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x1497 = -1;
	int32_t x1499 = INT32_MIN;
	volatile int32_t x1500 = 2291;
	static volatile int32_t t184 = -5347448;

    t184 = (x1497-(x1498%(x1499/x1500)));

    if (t184 != 26) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1501 = 39U;
	static int8_t x1502 = INT8_MIN;
	volatile uint32_t x1503 = UINT32_MAX;
	int32_t x1504 = INT32_MIN;
	uint32_t t185 = 3350680U;

    t185 = (x1501-(x1502%(x1503/x1504)));

    if (t185 != 39U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1506 = -1;
	int64_t x1507 = INT64_MIN;
	int32_t x1508 = INT32_MAX;
	volatile int64_t t186 = 35378LL;

    t186 = (x1505-(x1506%(x1507/x1508)));

    if (t186 != -2LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1514 = INT16_MIN;
	volatile int8_t x1515 = 6;
	volatile int8_t x1516 = -1;
	static int32_t t187 = 30;

    t187 = (x1513-(x1514%(x1515/x1516)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint16_t x1521 = UINT16_MAX;
	int16_t x1522 = INT16_MAX;
	int64_t x1523 = 1252502899906501924LL;
	int8_t x1524 = INT8_MIN;
	int64_t t188 = -8056637550935645LL;

    t188 = (x1521-(x1522%(x1523/x1524)));

    if (t188 != 32768LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int32_t x1534 = -418810;
	int64_t x1535 = -1LL;
	int64_t x1536 = 1LL;
	volatile int64_t t189 = 2862998468257413641LL;

    t189 = (x1533-(x1534%(x1535/x1536)));

    if (t189 != 127LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1537 = 26;
	uint8_t x1538 = UINT8_MAX;
	uint8_t x1540 = 4U;
	volatile int64_t t190 = -43326023LL;

    t190 = (x1537-(x1538%(x1539/x1540)));

    if (t190 != -229LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1541 = 1471155609LLU;
	int32_t x1542 = INT32_MIN;
	static volatile uint16_t x1544 = 1U;
	static volatile uint64_t t191 = 421515790967165LLU;

    t191 = (x1541-(x1542%(x1543/x1544)));

    if (t191 != 1471155609LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1546 = 11792U;
	int32_t x1547 = -132411929;
	static volatile uint32_t t192 = 8170187U;

    t192 = (x1545-(x1546%(x1547/x1548)));

    if (t192 != 4294959087U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1567 = 273255575423LL;
	int64_t t193 = 125011113665LL;

    t193 = (x1565-(x1566%(x1567/x1568)));

    if (t193 != -2147483650LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1569 = INT8_MIN;
	uint32_t x1570 = 86404870U;
	int64_t x1572 = -1LL;
	int64_t t194 = 1318097LL;

    t194 = (x1569-(x1570%(x1571/x1572)));

    if (t194 != -86404998LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint16_t x1577 = 65U;
	static int16_t x1578 = -1;
	uint64_t t195 = 5995024308315700835LLU;

    t195 = (x1577-(x1578%(x1579/x1580)));

    if (t195 != 18446744073708956400LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x1586 = -1LL;
	int32_t x1587 = 1065786;
	volatile int16_t x1588 = INT16_MAX;
	volatile int64_t t196 = -1370296835LL;

    t196 = (x1585-(x1586%(x1587/x1588)));

    if (t196 != -127LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x1601 = UINT16_MAX;
	int8_t x1603 = INT8_MIN;
	int32_t t197 = 821;

    t197 = (x1601-(x1602%(x1603/x1604)));

    if (t197 != 65520) { NG(); } else { ; }
	
}

void f198(void) {
    	static int8_t x1637 = 0;
	uint32_t x1638 = 1U;
	int32_t x1639 = -52813653;
	uint32_t x1640 = 181U;
	static uint32_t t198 = UINT32_MAX;

    t198 = (x1637-(x1638%(x1639/x1640)));

    if (t198 != UINT32_MAX) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1641 = UINT8_MAX;
	static uint16_t x1642 = 9U;
	uint16_t x1643 = 18609U;
	volatile int8_t x1644 = -30;
	static int32_t t199 = -115872957;

    t199 = (x1641-(x1642%(x1643/x1644)));

    if (t199 != 246) { NG(); } else { ; }
	
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

