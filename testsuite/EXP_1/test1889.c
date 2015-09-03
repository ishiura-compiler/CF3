#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
static int16_t x7 = -1;
volatile int64_t x10 = -1LL;
volatile int16_t x22 = INT16_MAX;
static uint64_t x27 = UINT64_MAX;
volatile int64_t x31 = -3257096737039519LL;
int16_t x36 = INT16_MAX;
volatile uint32_t t6 = 0U;
volatile int64_t t7 = 1621LL;
static int16_t x57 = 96;
int64_t x59 = -17180049351118005LL;
int16_t x71 = INT16_MAX;
uint16_t x72 = 4U;
uint8_t x74 = 99U;
int64_t t15 = -458LL;
volatile uint64_t x86 = UINT64_MAX;
uint64_t x87 = UINT64_MAX;
uint16_t x93 = UINT16_MAX;
static volatile int64_t x94 = -1002598860534LL;
uint16_t x102 = 7U;
int8_t x106 = 1;
volatile int64_t t20 = -61814051962LL;
uint8_t x114 = 0U;
volatile int16_t x117 = INT16_MIN;
static volatile uint64_t t23 = 177101352066184159LLU;
static int32_t x126 = -4113845;
volatile int32_t t24 = 427014671;
static int32_t x133 = -213107;
static uint16_t x155 = UINT16_MAX;
static int8_t x159 = -33;
static int16_t x167 = -1;
uint64_t x187 = 261660LLU;
uint32_t x191 = 236066059U;
int8_t x195 = INT8_MAX;
static int16_t x206 = INT16_MIN;
static int64_t x208 = -1LL;
volatile int64_t t40 = 22753329911760LL;
uint16_t x215 = 12U;
uint64_t t43 = 57079648LLU;
uint32_t x229 = 347U;
static int64_t t45 = 6304688980LL;
int64_t x233 = INT64_MIN;
volatile int16_t x238 = -1;
volatile int16_t x241 = INT16_MIN;
volatile uint64_t t49 = 775064258LLU;
volatile uint32_t x254 = 1164747305U;
uint32_t x256 = 193151845U;
volatile int64_t x267 = 66LL;
int8_t x274 = 1;
int32_t t55 = -838;
uint32_t x282 = UINT32_MAX;
uint16_t x284 = 410U;
int32_t x291 = INT32_MIN;
volatile int8_t x292 = INT8_MIN;
uint64_t x294 = 126044481528234873LLU;
volatile uint64_t t58 = 12858772568163LLU;
static uint32_t x297 = 647008U;
int8_t x299 = INT8_MAX;
volatile int64_t x318 = 1LL;
static uint32_t x320 = 8420748U;
volatile int64_t t64 = -114400510323776LL;
volatile int16_t x327 = INT16_MIN;
static int64_t x333 = 902535LL;
volatile int32_t x334 = INT32_MIN;
uint64_t t66 = 3558378933534LLU;
static uint32_t x347 = 55651U;
int64_t x360 = 31LL;
int16_t x381 = -1;
uint16_t x387 = 18249U;
volatile uint16_t x396 = UINT16_MAX;
volatile int8_t x403 = INT8_MIN;
volatile int16_t x417 = INT16_MAX;
uint32_t x419 = 247753669U;
uint64_t t84 = 242593902LLU;
int8_t x425 = -3;
int16_t x427 = INT16_MIN;
static int32_t x430 = INT32_MIN;
int8_t x431 = 1;
static int64_t x433 = -1LL;
int8_t x453 = INT8_MIN;
volatile int16_t x454 = -1;
volatile int32_t t89 = -61657;
volatile uint32_t x457 = UINT32_MAX;
int16_t x465 = INT16_MAX;
int16_t x472 = INT16_MAX;
uint64_t t92 = 583349LLU;
uint8_t x475 = 1U;
volatile uint64_t x481 = 7LLU;
static int16_t x489 = INT16_MIN;
int32_t x494 = -1;
int32_t x498 = INT32_MIN;
uint16_t x501 = 425U;
int16_t x502 = INT16_MIN;


void f0(void) {
	uint32_t x1 = 57248610U;
	static volatile int16_t x3 = 5109;
	uint32_t x4 = 36U;
	volatile int64_t t0 = 36931019281LL;

	t0 = (((x1|x2)*x3)/x4);

	if (t0 != -141LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MIN;
	uint8_t x6 = UINT8_MAX;
	int16_t x8 = 39;
	int64_t t1 = 178657LL;

	t1 = (((x5|x6)*x7)/x8);

	if (t1 != 236496718893712193LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -27;
	volatile int64_t x11 = -1LL;
	uint16_t x12 = UINT16_MAX;
	int64_t t2 = 2625993LL;

	t2 = (((x9|x10)*x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -4;
	static int8_t x23 = INT8_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t3 = -148429;

	t3 = (((x21|x22)*x23)/x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 3331547688LL;
	int64_t x26 = -6400405042532091LL;
	int64_t x28 = -1LL;
	volatile uint64_t t4 = 14039633LLU;

	t4 = (((x25|x26)*x27)/x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1027090734LL;
	int16_t x30 = -3;
	int32_t x32 = INT32_MIN;
	int64_t t5 = 223615LL;

	t5 = (((x29|x30)*x31)/x32);

	if (t5 != -1516703LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -16;
	uint32_t x34 = 343588989U;
	int16_t x35 = 551;

	t6 = (((x33|x34)*x35)/x36);

	if (t6 != 131075U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x37 = UINT16_MAX;
	int64_t x38 = -1LL;
	uint8_t x39 = 11U;
	int32_t x40 = -1;

	t7 = (((x37|x38)*x39)/x40);

	if (t7 != 11LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -742699LL;
	static uint16_t x42 = 2120U;
	int32_t x43 = -456724;
	int32_t x44 = INT32_MAX;
	volatile int64_t t8 = -1LL;

	t8 = (((x41|x42)*x43)/x44);

	if (t8 != 157LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 0LL;
	uint16_t x46 = 11U;
	int32_t x47 = INT32_MIN;
	uint16_t x48 = 3560U;
	volatile int64_t t9 = 2899LL;

	t9 = (((x45|x46)*x47)/x48);

	if (t9 != -6635483LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 8U;
	int16_t x50 = INT16_MAX;
	volatile uint16_t x51 = 30125U;
	volatile int8_t x52 = -42;
	int32_t t10 = -62015;

	t10 = (((x49|x50)*x51)/x52);

	if (t10 != -23502520) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x58 = -1LL;
	static int64_t x60 = INT64_MIN;
	int64_t t11 = 1431001153LL;

	t11 = (((x57|x58)*x59)/x60);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = 7;
	uint64_t x66 = 939835406686049LLU;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MIN;
	static volatile uint64_t t12 = 1764556090253721LLU;

	t12 = (((x65|x66)*x67)/x68);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = INT16_MIN;
	uint8_t x70 = UINT8_MAX;
	int32_t t13 = 1;

	t13 = (((x69|x70)*x71)/x72);

	if (t13 != -266338367) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = -1;
	int8_t x75 = 0;
	static uint32_t x76 = 61401388U;
	volatile uint32_t t14 = 525506U;

	t14 = (((x73|x74)*x75)/x76);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x77 = INT8_MAX;
	static int64_t x78 = -1LL;
	int32_t x79 = 8881378;
	int8_t x80 = -1;

	t15 = (((x77|x78)*x79)/x80);

	if (t15 != 8881378LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = 514274LL;
	volatile uint32_t x82 = UINT32_MAX;
	volatile uint16_t x83 = UINT16_MAX;
	uint16_t x84 = UINT16_MAX;
	volatile int64_t t16 = -269236865LL;

	t16 = (((x81|x82)*x83)/x84);

	if (t16 != 4294967295LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x85 = UINT32_MAX;
	static int16_t x88 = INT16_MIN;
	uint64_t t17 = 760492382115107LLU;

	t17 = (((x85|x86)*x87)/x88);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MIN;
	volatile int64_t t18 = 1606905525944874LL;

	t18 = (((x93|x94)*x95)/x96);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x101 = INT8_MIN;
	int32_t x103 = -1;
	static int64_t x104 = INT64_MIN;
	static int64_t t19 = 61355986LL;

	t19 = (((x101|x102)*x103)/x104);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MIN;
	int8_t x107 = -1;
	static int8_t x108 = INT8_MIN;

	t20 = (((x105|x106)*x107)/x108);

	if (t20 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MAX;
	uint64_t x115 = 28967258399LLU;
	uint32_t x116 = 23899U;
	uint64_t t21 = 1245388149129381692LLU;

	t21 = (((x113|x114)*x115)/x116);

	if (t21 != 39715894219LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x118 = INT32_MAX;
	static int8_t x119 = INT8_MIN;
	static uint32_t x120 = 439907807U;
	uint32_t t22 = 777785U;

	t22 = (((x117|x118)*x119)/x120);

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = 8365550539917858LLU;
	uint64_t x124 = 886113921LLU;

	t23 = (((x121|x122)*x123)/x124);

	if (t23 != 16638034435LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x125 = -73;
	int32_t x127 = INT32_MAX;
	uint8_t x128 = 1U;

	t24 = (((x125|x126)*x127)/x128);

	if (t24 != -2147483647) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x129 = 12;
	int16_t x130 = INT16_MAX;
	volatile uint16_t x131 = 25U;
	int8_t x132 = INT8_MIN;
	int32_t t25 = -16553219;

	t25 = (((x129|x130)*x131)/x132);

	if (t25 != -6399) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MIN;
	volatile int32_t x136 = -3613705;
	static int64_t t26 = 0LL;

	t26 = (((x133|x134)*x135)/x136);

	if (t26 != -7LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = -589;
	static int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = 17U;
	int32_t x140 = INT32_MIN;
	int64_t t27 = 0LL;

	t27 = (((x137|x138)*x139)/x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x141 = 4453U;
	uint64_t x142 = 3724687750LLU;
	uint16_t x143 = UINT16_MAX;
	int32_t x144 = 1;
	uint64_t t28 = 47616806079845174LLU;

	t28 = (((x141|x142)*x143)/x144);

	if (t28 != 244097418053145LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x153 = 915009411743363609LLU;
	uint64_t x154 = 158367420968LLU;
	static uint16_t x156 = 5U;
	static uint64_t t29 = 25239LLU;

	t29 = (((x153|x154)*x155)/x156);

	if (t29 != 2644744880661224539LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x157 = -1LL;
	int8_t x158 = INT8_MIN;
	int32_t x160 = INT32_MIN;
	volatile int64_t t30 = -1611296031080536753LL;

	t30 = (((x157|x158)*x159)/x160);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x161 = UINT32_MAX;
	int8_t x162 = -1;
	volatile uint64_t x163 = UINT64_MAX;
	int16_t x164 = 1;
	uint64_t t31 = 8494074577171781LLU;

	t31 = (((x161|x162)*x163)/x164);

	if (t31 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x165 = 28LLU;
	static volatile int16_t x166 = INT16_MIN;
	int16_t x168 = -290;
	volatile uint64_t t32 = 7062501573LLU;

	t32 = (((x165|x166)*x167)/x168);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x169 = -10;
	int32_t x170 = INT32_MIN;
	volatile uint64_t x171 = 143LLU;
	int8_t x172 = INT8_MIN;
	volatile uint64_t t33 = 297377822419LLU;

	t33 = (((x169|x170)*x171)/x172);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x173 = -84592LL;
	int16_t x174 = INT16_MAX;
	int32_t x175 = 14210;
	volatile uint64_t x176 = 651055519658621523LLU;
	uint64_t t34 = 1158106LLU;

	t34 = (((x173|x174)*x175)/x176);

	if (t34 != 28LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = 28361U;
	uint64_t x182 = 7853100LLU;
	volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MIN;
	uint64_t t35 = 17629158637LLU;

	t35 = (((x181|x182)*x183)/x184);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x185 = UINT8_MAX;
	volatile int8_t x186 = 17;
	volatile int8_t x188 = INT8_MAX;
	volatile uint64_t t36 = 99537165LLU;

	t36 = (((x185|x186)*x187)/x188);

	if (t36 != 525380LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x189 = -1LL;
	int16_t x190 = 1;
	int32_t x192 = -767296529;
	static int64_t t37 = 2105LL;

	t37 = (((x189|x190)*x191)/x192);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = -1;
	int16_t x194 = INT16_MIN;
	static int8_t x196 = -55;
	volatile int32_t t38 = -213294;

	t38 = (((x193|x194)*x195)/x196);

	if (t38 != 2) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = 63;
	static uint32_t x202 = UINT32_MAX;
	volatile int8_t x203 = -2;
	int8_t x204 = 2;
	static volatile uint32_t t39 = 422U;

	t39 = (((x201|x202)*x203)/x204);

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = 622148638562584177LL;
	uint8_t x207 = 10U;

	t40 = (((x205|x206)*x207)/x208);

	if (t40 != 311190LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MIN;
	int32_t x211 = -1;
	int64_t x212 = INT64_MAX;
	int64_t t41 = -9832557858744LL;

	t41 = (((x209|x210)*x211)/x212);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = INT8_MIN;
	int64_t x214 = INT64_MIN;
	int32_t x216 = INT32_MIN;
	volatile int64_t t42 = -1098299793LL;

	t42 = (((x213|x214)*x215)/x216);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x217 = 46551562097LLU;
	volatile uint16_t x218 = 80U;
	volatile int16_t x219 = INT16_MIN;
	int8_t x220 = INT8_MIN;

	t43 = (((x217|x218)*x219)/x220);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x225 = -1;
	uint8_t x226 = 30U;
	int32_t x227 = -116009739;
	uint32_t x228 = 16640735U;
	volatile uint32_t t44 = 10U;

	t44 = (((x225|x226)*x227)/x228);

	if (t44 != 6U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x230 = 20166948U;
	volatile uint32_t x231 = 459100462U;
	int64_t x232 = 126738103094020LL;

	t45 = (((x229|x230)*x231)/x232);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = 4;
	int16_t x235 = 0;
	uint16_t x236 = 4U;
	static int64_t t46 = 1576971875LL;

	t46 = (((x233|x234)*x235)/x236);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x237 = UINT16_MAX;
	volatile int16_t x239 = INT16_MIN;
	volatile int8_t x240 = -1;
	static volatile int32_t t47 = -76;

	t47 = (((x237|x238)*x239)/x240);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x242 = 44884677LLU;
	volatile uint32_t x243 = 129275246U;
	uint8_t x244 = 1U;
	volatile uint64_t t48 = 1468LLU;

	t48 = (((x241|x242)*x243)/x244);

	if (t48 != 18446743106342885798LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x249 = 1;
	volatile uint64_t x250 = 20LLU;
	static int16_t x251 = -47;
	volatile uint16_t x252 = 7U;

	t49 = (((x249|x250)*x251)/x252);

	if (t49 != 2635249153387078661LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x253 = 2043U;
	uint8_t x255 = 0U;
	uint32_t t50 = 18U;

	t50 = (((x253|x254)*x255)/x256);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = 30;
	int16_t x258 = INT16_MIN;
	int64_t x259 = -6184909LL;
	int32_t x260 = -31159;
	static int64_t t51 = 18448568LL;

	t51 = (((x257|x258)*x259)/x260);

	if (t51 != -6498332LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x261 = 2U;
	int8_t x262 = 1;
	int16_t x263 = INT16_MIN;
	static int64_t x264 = INT64_MAX;
	volatile int64_t t52 = -5641732064850120LL;

	t52 = (((x261|x262)*x263)/x264);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = -25;
	int8_t x266 = INT8_MIN;
	static uint32_t x268 = UINT32_MAX;
	int64_t t53 = -1671226002329936523LL;

	t53 = (((x265|x266)*x267)/x268);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x273 = -1;
	uint8_t x275 = 1U;
	static volatile int8_t x276 = INT8_MIN;
	static int32_t t54 = -1858;

	t54 = (((x273|x274)*x275)/x276);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x277 = INT8_MAX;
	int16_t x278 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	int32_t x280 = 26359061;

	t55 = (((x277|x278)*x279)/x280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x281 = INT8_MIN;
	int64_t x283 = -1LL;
	static int64_t t56 = 27973LL;

	t56 = (((x281|x282)*x283)/x284);

	if (t56 != -10475529LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x289 = 24499U;
	int8_t x290 = -1;
	uint32_t t57 = 61588942U;

	t57 = (((x289|x290)*x291)/x292);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x293 = -1;
	static uint64_t x295 = 34317981LLU;
	int64_t x296 = 84843845304LL;

	t58 = (((x293|x294)*x295)/x296);

	if (t58 != 217419943LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x298 = INT16_MIN;
	uint8_t x300 = UINT8_MAX;
	volatile uint32_t t59 = 0U;

	t59 = (((x297|x298)*x299)/x300);

	if (t59 != 16838849U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x301 = 37;
	volatile uint32_t x302 = 51080147U;
	static volatile int8_t x303 = INT8_MIN;
	int64_t x304 = 93LL;
	volatile int64_t t60 = -324040LL;

	t60 = (((x301|x302)*x303)/x304);

	if (t60 != 22060980LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x305 = INT64_MIN;
	volatile int16_t x306 = INT16_MIN;
	int32_t x307 = INT32_MIN;
	int64_t x308 = INT64_MIN;
	volatile int64_t t61 = -5931LL;

	t61 = (((x305|x306)*x307)/x308);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x309 = -1;
	uint32_t x310 = 18U;
	volatile int32_t x311 = INT32_MIN;
	int64_t x312 = INT64_MIN;
	int64_t t62 = -80780676482229310LL;

	t62 = (((x309|x310)*x311)/x312);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x313 = -7;
	int16_t x314 = 9;
	uint8_t x315 = 6U;
	int16_t x316 = -388;
	volatile int32_t t63 = 1;

	t63 = (((x313|x314)*x315)/x316);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = INT8_MIN;
	volatile int8_t x319 = -9;

	t64 = (((x317|x318)*x319)/x320);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x325 = INT32_MIN;
	static int32_t x326 = -118;
	int64_t x328 = -1LL;
	volatile int64_t t65 = -74933558727LL;

	t65 = (((x325|x326)*x327)/x328);

	if (t65 != -3866624LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x335 = -1;
	uint64_t x336 = UINT64_MAX;

	t66 = (((x333|x334)*x335)/x336);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x341 = 10022U;
	volatile int16_t x342 = 155;
	int8_t x343 = INT8_MIN;
	volatile uint64_t x344 = UINT64_MAX;
	volatile uint64_t t67 = 3966026LLU;

	t67 = (((x341|x342)*x343)/x344);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x345 = -2668390289LL;
	int16_t x346 = 3117;
	static uint16_t x348 = UINT16_MAX;
	volatile int64_t t68 = -1108243LL;

	t68 = (((x345|x346)*x347)/x348);

	if (t68 != -2265942335LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x349 = 61534054577000LLU;
	static int8_t x350 = 2;
	uint64_t x351 = 24601399851873158LLU;
	volatile int64_t x352 = INT64_MIN;
	uint64_t t69 = 19940775817187LLU;

	t69 = (((x349|x350)*x351)/x352);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x353 = INT32_MAX;
	int32_t x354 = INT32_MIN;
	volatile int32_t x355 = 2967149;
	uint64_t x356 = 54846213LLU;
	static uint64_t t70 = 9174511LLU;

	t70 = (((x353|x354)*x355)/x356);

	if (t70 != 336335784454LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x357 = -1;
	int8_t x358 = INT8_MIN;
	volatile int32_t x359 = -13051;
	volatile int64_t t71 = -987987642LL;

	t71 = (((x357|x358)*x359)/x360);

	if (t71 != 421LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 3U;
	volatile int32_t x364 = -6114;
	int32_t t72 = -39;

	t72 = (((x361|x362)*x363)/x364);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x365 = -196;
	int8_t x366 = -1;
	uint8_t x367 = 9U;
	int64_t x368 = INT64_MAX;
	static volatile int64_t t73 = 3690724LL;

	t73 = (((x365|x366)*x367)/x368);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x369 = 7U;
	static int8_t x370 = INT8_MIN;
	volatile int16_t x371 = -1;
	static int64_t x372 = 1928866604LL;
	volatile int64_t t74 = -523587LL;

	t74 = (((x369|x370)*x371)/x372);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = -2496LL;
	volatile int16_t x379 = INT16_MIN;
	static int32_t x380 = INT32_MAX;
	int64_t t75 = 1938279954121861LL;

	t75 = (((x377|x378)*x379)/x380);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	int32_t x384 = -1;
	int32_t t76 = 1524;

	t76 = (((x381|x382)*x383)/x384);

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x385 = -5LL;
	volatile int64_t x386 = INT64_MAX;
	int64_t x388 = INT64_MAX;
	volatile int64_t t77 = 1LL;

	t77 = (((x385|x386)*x387)/x388);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x393 = 10164156436845LL;
	int8_t x394 = INT8_MIN;
	uint64_t x395 = 15338132473115188LLU;
	uint64_t t78 = 2328479275LLU;

	t78 = (((x393|x394)*x395)/x396);

	if (t78 != 277032418657516LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x397 = -7;
	int64_t x398 = INT64_MIN;
	int32_t x399 = INT32_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t79 = 180500LL;

	t79 = (((x397|x398)*x399)/x400);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	volatile int8_t x404 = 5;
	int32_t t80 = -872;

	t80 = (((x401|x402)*x403)/x404);

	if (t80 != 25) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = INT32_MIN;
	int64_t x411 = -1LL;
	static int16_t x412 = INT16_MAX;
	int64_t t81 = 2LL;

	t81 = (((x409|x410)*x411)/x412);

	if (t81 != 65538LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x413 = 4818;
	uint64_t x414 = 7004233029054332LLU;
	volatile uint8_t x415 = 3U;
	uint8_t x416 = UINT8_MAX;
	volatile uint64_t t82 = 901567140603454LLU;

	t82 = (((x413|x414)*x415)/x416);

	if (t82 != 82402741518335LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x418 = INT32_MIN;
	int64_t x420 = INT64_MIN;
	volatile int64_t t83 = 1078LL;

	t83 = (((x417|x418)*x419)/x420);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x421 = -55;
	int16_t x422 = 40;
	int32_t x423 = 250;
	uint64_t x424 = 1LLU;

	t84 = (((x421|x422)*x423)/x424);

	if (t84 != 18446744073709545866LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x426 = INT32_MIN;
	static int64_t x428 = 5344224184LL;
	int64_t t85 = 1981281805919693597LL;

	t85 = (((x425|x426)*x427)/x428);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x429 = INT32_MIN;
	uint16_t x432 = 10971U;
	volatile int32_t t86 = 4;

	t86 = (((x429|x430)*x431)/x432);

	if (t86 != -195741) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x434 = INT32_MIN;
	static uint8_t x435 = UINT8_MAX;
	volatile uint64_t x436 = 969166411749543504LLU;
	uint64_t t87 = 24315496LLU;

	t87 = (((x433|x434)*x435)/x436);

	if (t87 != 19LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x441 = 113U;
	uint16_t x442 = UINT16_MAX;
	static int16_t x443 = 1786;
	int32_t x444 = -1;
	static volatile int32_t t88 = 14772030;

	t88 = (((x441|x442)*x443)/x444);

	if (t88 != -117045510) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x455 = -24;
	static int8_t x456 = INT8_MIN;

	t89 = (((x453|x454)*x455)/x456);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x458 = 0;
	int8_t x459 = INT8_MIN;
	int32_t x460 = INT32_MIN;
	volatile uint32_t t90 = 725U;

	t90 = (((x457|x458)*x459)/x460);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x466 = -1;
	volatile uint8_t x467 = 7U;
	int16_t x468 = INT16_MAX;
	int32_t t91 = 1808;

	t91 = (((x465|x466)*x467)/x468);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x469 = INT16_MIN;
	volatile int16_t x470 = INT16_MIN;
	static volatile uint64_t x471 = 2770060187376LLU;

	t92 = (((x469|x470)*x471)/x472);

	if (t92 != 560196989089315LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x473 = INT32_MIN;
	static int64_t x474 = -149LL;
	int64_t x476 = INT64_MIN;
	volatile int64_t t93 = 1991LL;

	t93 = (((x473|x474)*x475)/x476);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x482 = INT8_MAX;
	int16_t x483 = INT16_MIN;
	volatile int8_t x484 = -1;
	uint64_t t94 = 3427875LLU;

	t94 = (((x481|x482)*x483)/x484);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x485 = INT16_MIN;
	static int32_t x486 = INT32_MAX;
	volatile int16_t x487 = -1;
	volatile int32_t x488 = INT32_MAX;
	static int32_t t95 = -331847;

	t95 = (((x485|x486)*x487)/x488);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x490 = UINT64_MAX;
	int64_t x491 = -101335558493LL;
	static volatile int8_t x492 = 2;
	volatile uint64_t t96 = 978168233258805653LLU;

	t96 = (((x489|x490)*x491)/x492);

	if (t96 != 50667779246LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x493 = -1;
	uint32_t x495 = 185U;
	uint64_t x496 = UINT64_MAX;
	volatile uint64_t t97 = 272256257205973LLU;

	t97 = (((x493|x494)*x495)/x496);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x497 = -1;
	uint16_t x499 = 15U;
	volatile int16_t x500 = INT16_MIN;
	int32_t t98 = 239376356;

	t98 = (((x497|x498)*x499)/x500);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x503 = 9867512LLU;
	int32_t x504 = INT32_MIN;
	uint64_t t99 = 407978372375283788LLU;

	t99 = (((x501|x502)*x503)/x504);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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


    return 0;
}

