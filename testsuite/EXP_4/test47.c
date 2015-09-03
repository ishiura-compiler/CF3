#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = UINT32_MAX;
int8_t x6 = 0;
int8_t x8 = -1;
volatile int8_t x13 = -22;
volatile int16_t x19 = INT16_MAX;
int8_t x24 = INT8_MAX;
int16_t x26 = INT16_MIN;
int32_t x31 = INT32_MAX;
int32_t t7 = -113042981;
static uint32_t x35 = UINT32_MAX;
int16_t x36 = -14733;
static int32_t t8 = 137308296;
uint64_t x39 = UINT64_MAX;
int64_t x41 = -1LL;
uint32_t x42 = UINT32_MAX;
uint64_t x70 = 5462987639LLU;
int32_t x72 = 96849198;
static uint8_t x74 = UINT8_MAX;
uint64_t x76 = UINT64_MAX;
int16_t x77 = 39;
int64_t x79 = -76908915197745LL;
int16_t x89 = INT16_MIN;
static int16_t x91 = INT16_MIN;
int32_t t21 = 366;
int16_t x98 = -13;
int16_t x100 = INT16_MAX;
static uint8_t x103 = UINT8_MAX;
int32_t x105 = -1;
int8_t x109 = -6;
volatile int32_t t26 = -1701;
static int32_t x114 = -9153040;
int8_t x130 = -3;
static volatile uint8_t x134 = 11U;
int16_t x139 = -372;
int8_t x144 = INT8_MIN;
static uint16_t x145 = 12U;
int64_t x149 = INT64_MAX;
volatile uint8_t x153 = 42U;
int16_t x155 = INT16_MIN;
volatile int16_t x168 = -2630;
int8_t x171 = INT8_MAX;
static int16_t x172 = -615;
int8_t x176 = INT8_MIN;
volatile int32_t t40 = 54970844;
int32_t x184 = INT32_MAX;
volatile int32_t x189 = INT32_MAX;
volatile int8_t x190 = INT8_MIN;
volatile int32_t x191 = INT32_MIN;
volatile int32_t x192 = INT32_MAX;
int32_t x194 = INT32_MIN;
int64_t x197 = INT64_MIN;
int32_t x202 = INT32_MAX;
int8_t x211 = INT8_MIN;
int32_t t49 = -45;
uint64_t x215 = UINT64_MAX;
int64_t x219 = -1485395092201LL;
int8_t x224 = -1;
int32_t t52 = 1224029;
static uint32_t x226 = UINT32_MAX;
int32_t t53 = -29004;
int32_t x229 = INT32_MIN;
int8_t x237 = INT8_MIN;
int32_t x238 = 745324622;
uint64_t x243 = 44LLU;
int32_t x249 = -1;
int32_t x255 = -1;
volatile uint8_t x258 = 20U;
static int8_t x264 = INT8_MIN;
volatile int32_t t62 = 11769410;
int64_t x276 = -1LL;
int16_t x282 = -1;
int32_t t66 = 1;
int32_t t68 = -1755072;
int32_t x294 = INT32_MIN;
int64_t x296 = -51830327LL;
uint16_t x299 = 1U;
volatile uint32_t x302 = UINT32_MAX;
int8_t x309 = INT8_MAX;
volatile uint64_t x310 = UINT64_MAX;
uint32_t x314 = 56226010U;
static int8_t x316 = INT8_MIN;
int8_t x321 = 3;
int16_t x323 = INT16_MIN;
uint8_t x324 = UINT8_MAX;
uint16_t x327 = UINT16_MAX;
static volatile int64_t x328 = -6440786102LL;
uint32_t x335 = 243691535U;
static int16_t x338 = INT16_MIN;
volatile int32_t x341 = INT32_MAX;
int8_t x343 = INT8_MIN;
static int8_t x344 = INT8_MIN;
int64_t x345 = INT64_MIN;
volatile int8_t x348 = 35;
static int32_t x351 = -1;
int32_t t81 = -1;
int16_t x354 = -1;
uint16_t x355 = 3087U;
int32_t t82 = 210647;
static int32_t x370 = 252;
static int32_t x373 = INT32_MIN;
uint16_t x378 = 39U;
int64_t x380 = INT64_MAX;
int64_t x381 = INT64_MIN;
int32_t t88 = 7117088;
volatile uint32_t x402 = UINT32_MAX;
volatile uint32_t x407 = 420U;
uint32_t x412 = UINT32_MAX;
int16_t x416 = 1422;
uint16_t x428 = UINT16_MAX;
int32_t x432 = -1;
uint32_t x437 = UINT32_MAX;


void f0(void) {
	volatile uint32_t x1 = 2473U;
	uint32_t x3 = 1422143375U;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = -723023;

	t0 = (x1==(x2/(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1739;
	volatile int16_t x7 = 158;
	volatile int32_t t1 = 1;

	t1 = (x5==(x6/(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 1;
	uint32_t x10 = 29162U;
	static uint64_t x11 = 29854236005864LLU;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 20;

	t2 = (x9==(x10/(x11+x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x14 = UINT64_MAX;
	static int64_t x15 = INT64_MIN;
	int8_t x16 = 1;
	volatile int32_t t3 = 35;

	t3 = (x13==(x14/(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	volatile int32_t x18 = -1;
	static int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -625;

	t4 = (x17==(x18/(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 65971LL;
	volatile int16_t x22 = INT16_MIN;
	static int16_t x23 = 5;
	int32_t t5 = -214043;

	t5 = (x21==(x22/(x23+x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = INT16_MAX;
	int32_t x27 = -43523;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = -2;

	t6 = (x25==(x26/(x27+x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	static int32_t x30 = -64393;
	int64_t x32 = INT64_MIN;

	t7 = (x29==(x30/(x31+x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int8_t x34 = -1;

	t8 = (x33==(x34/(x35+x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1;
	uint8_t x38 = 121U;
	static volatile int32_t x40 = 59273;
	volatile int32_t t9 = 46581644;

	t9 = (x37==(x38/(x39+x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x43 = -36617728;
	static uint16_t x44 = 7385U;
	volatile int32_t t10 = -6860455;

	t10 = (x41==(x42/(x43+x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 3524750U;
	int32_t x46 = -1;
	volatile int8_t x47 = INT8_MIN;
	uint32_t x48 = 1828U;
	volatile int32_t t11 = 12796357;

	t11 = (x45==(x46/(x47+x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 21221283U;
	static int8_t x50 = -1;
	int64_t x51 = -5LL;
	uint64_t x52 = 3072320326156LLU;
	static int32_t t12 = -337752999;

	t12 = (x49==(x50/(x51+x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 117470538897452LLU;
	uint16_t x54 = UINT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int8_t x56 = -1;
	volatile int32_t t13 = 244158;

	t13 = (x53==(x54/(x55+x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = UINT8_MAX;
	uint8_t x58 = UINT8_MAX;
	int32_t x59 = INT32_MIN;
	uint8_t x60 = 57U;
	int32_t t14 = -689;

	t14 = (x57==(x58/(x59+x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = 394;
	int8_t x66 = INT8_MIN;
	uint16_t x67 = 112U;
	int32_t x68 = 36839724;
	volatile int32_t t15 = 90;

	t15 = (x65==(x66/(x67+x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	uint8_t x71 = 7U;
	int32_t t16 = -198326428;

	t16 = (x69==(x70/(x71+x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = 782;
	int16_t x75 = INT16_MIN;
	int32_t t17 = 1400859;

	t17 = (x73==(x74/(x75+x76)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = -1;
	int16_t x80 = 944;
	static volatile int32_t t18 = 466815313;

	t18 = (x77==(x78/(x79+x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = -63;
	volatile int32_t x83 = INT32_MIN;
	uint64_t x84 = UINT64_MAX;
	int32_t t19 = -18716;

	t19 = (x81==(x82/(x83+x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -2530823866717977LL;
	int64_t x86 = -12623042LL;
	int8_t x87 = 28;
	int16_t x88 = -26;
	volatile int32_t t20 = -8;

	t20 = (x85==(x86/(x87+x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x90 = -1LL;
	uint32_t x92 = 26933U;

	t21 = (x89==(x90/(x91+x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = 62190;
	int64_t x95 = INT64_MAX;
	int64_t x96 = INT64_MIN;
	int32_t t22 = -46212;

	t22 = (x93==(x94/(x95+x96)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 55U;
	uint64_t x99 = UINT64_MAX;
	int32_t t23 = 5;

	t23 = (x97==(x98/(x99+x100)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	uint32_t x104 = 366U;
	volatile int32_t t24 = 51204399;

	t24 = (x101==(x102/(x103+x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x106 = UINT8_MAX;
	static volatile int8_t x107 = -1;
	static volatile uint64_t x108 = 1953132LLU;
	int32_t t25 = 1026447351;

	t25 = (x105==(x106/(x107+x108)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x110 = UINT16_MAX;
	int16_t x111 = INT16_MIN;
	static volatile int32_t x112 = -1;

	t26 = (x109==(x110/(x111+x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MAX;
	int16_t x115 = INT16_MIN;
	int8_t x116 = 0;
	volatile int32_t t27 = 286493081;

	t27 = (x113==(x114/(x115+x116)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MAX;
	uint16_t x118 = 3278U;
	static volatile uint32_t x119 = UINT32_MAX;
	volatile int16_t x120 = -1;
	volatile int32_t t28 = 0;

	t28 = (x117==(x118/(x119+x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = 14;
	volatile int64_t x131 = -4588585968891927834LL;
	uint16_t x132 = 5U;
	int32_t t29 = 2264620;

	t29 = (x129==(x130/(x131+x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	static int32_t x135 = -1;
	volatile int64_t x136 = INT64_MAX;
	volatile int32_t t30 = 307372781;

	t30 = (x133==(x134/(x135+x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 0U;
	int16_t x138 = -1;
	int16_t x140 = INT16_MAX;
	static int32_t t31 = -2604;

	t31 = (x137==(x138/(x139+x140)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x141 = INT16_MIN;
	uint32_t x142 = 6848397U;
	volatile int16_t x143 = INT16_MIN;
	int32_t t32 = 18816;

	t32 = (x141==(x142/(x143+x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MAX;
	int64_t x148 = INT64_MIN;
	static volatile int32_t t33 = 5;

	t33 = (x145==(x146/(x147+x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	volatile int32_t t34 = 600038;

	t34 = (x149==(x150/(x151+x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x154 = 1;
	int8_t x156 = -1;
	volatile int32_t t35 = -14;

	t35 = (x153==(x154/(x155+x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x157 = UINT64_MAX;
	volatile int8_t x158 = INT8_MAX;
	uint16_t x159 = 32U;
	uint16_t x160 = 4949U;
	static volatile int32_t t36 = 157379;

	t36 = (x157==(x158/(x159+x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	int64_t x162 = -1LL;
	uint32_t x163 = UINT32_MAX;
	int32_t x164 = 6374;
	volatile int32_t t37 = 5232;

	t37 = (x161==(x162/(x163+x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x165 = 32621U;
	volatile uint64_t x166 = 85424693033458LLU;
	uint32_t x167 = UINT32_MAX;
	int32_t t38 = 42937;

	t38 = (x165==(x166/(x167+x168)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = -1;
	int8_t x170 = INT8_MIN;
	int32_t t39 = 1;

	t39 = (x169==(x170/(x171+x172)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = 31;
	volatile uint32_t x174 = 107U;
	uint16_t x175 = UINT16_MAX;

	t40 = (x173==(x174/(x175+x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = -1LL;
	static uint8_t x178 = 4U;
	uint16_t x179 = 235U;
	int64_t x180 = -12LL;
	int32_t t41 = -9160319;

	t41 = (x177==(x178/(x179+x180)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x181 = 172456406LLU;
	int32_t x182 = INT32_MAX;
	int64_t x183 = -1LL;
	volatile int32_t t42 = 2614;

	t42 = (x181==(x182/(x183+x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x185 = INT8_MAX;
	uint32_t x186 = 2U;
	int16_t x187 = INT16_MIN;
	volatile uint16_t x188 = 226U;
	int32_t t43 = 1268;

	t43 = (x185==(x186/(x187+x188)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t t44 = -91;

	t44 = (x189==(x190/(x191+x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = -1366239LL;
	int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t45 = 1133;

	t45 = (x193==(x194/(x195+x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x198 = -62161686387LL;
	static uint8_t x199 = 3U;
	volatile int32_t x200 = 419;
	volatile int32_t t46 = -1415;

	t46 = (x197==(x198/(x199+x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x201 = INT64_MIN;
	volatile uint8_t x203 = UINT8_MAX;
	int8_t x204 = 24;
	static int32_t t47 = -2354937;

	t47 = (x201==(x202/(x203+x204)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int8_t x206 = INT8_MIN;
	volatile int64_t x207 = 247116643LL;
	volatile uint16_t x208 = UINT16_MAX;
	int32_t t48 = -1;

	t48 = (x205==(x206/(x207+x208)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x209 = INT32_MIN;
	int16_t x210 = INT16_MIN;
	int32_t x212 = -371969;

	t49 = (x209==(x210/(x211+x212)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	static volatile int16_t x214 = INT16_MIN;
	static int64_t x216 = 15LL;
	volatile int32_t t50 = -310;

	t50 = (x213==(x214/(x215+x216)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	volatile int8_t x220 = -1;
	static volatile int32_t t51 = 3813652;

	t51 = (x217==(x218/(x219+x220)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x221 = -1;
	volatile uint8_t x222 = UINT8_MAX;
	uint16_t x223 = 16U;

	t52 = (x221==(x222/(x223+x224)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x225 = INT16_MIN;
	int16_t x227 = INT16_MIN;
	static int32_t x228 = -1;

	t53 = (x225==(x226/(x227+x228)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = -1LL;
	uint64_t x231 = UINT64_MAX;
	static uint64_t x232 = 133LLU;
	int32_t t54 = -976882;

	t54 = (x229==(x230/(x231+x232)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x239 = INT64_MAX;
	int64_t x240 = -1LL;
	volatile int32_t t55 = -3;

	t55 = (x237==(x238/(x239+x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x241 = -2;
	volatile int32_t x242 = -125;
	int8_t x244 = -1;
	static volatile int32_t t56 = -34;

	t56 = (x241==(x242/(x243+x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = UINT16_MAX;
	int8_t x246 = INT8_MIN;
	volatile int8_t x247 = -1;
	int8_t x248 = INT8_MIN;
	int32_t t57 = 17043;

	t57 = (x245==(x246/(x247+x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x250 = UINT8_MAX;
	int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t58 = 4;

	t58 = (x249==(x250/(x251+x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	volatile int64_t x254 = 843333411338891LL;
	static int8_t x256 = -1;
	int32_t t59 = 0;

	t59 = (x253==(x254/(x255+x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = 863;
	volatile uint16_t x259 = UINT16_MAX;
	int8_t x260 = INT8_MIN;
	static int32_t t60 = 1679810;

	t60 = (x257==(x258/(x259+x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x261 = 505U;
	int8_t x262 = INT8_MIN;
	static uint8_t x263 = UINT8_MAX;
	volatile int32_t t61 = -93276430;

	t61 = (x261==(x262/(x263+x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x265 = 0U;
	int32_t x266 = -1;
	int32_t x267 = -1;
	volatile int64_t x268 = INT64_MAX;

	t62 = (x265==(x266/(x267+x268)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = 3U;
	int16_t x270 = INT16_MIN;
	int32_t x271 = 2027;
	uint8_t x272 = 1U;
	volatile int32_t t63 = 61;

	t63 = (x269==(x270/(x271+x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = -1;
	volatile uint64_t x274 = UINT64_MAX;
	uint64_t x275 = 582394LLU;
	volatile int32_t t64 = 63;

	t64 = (x273==(x274/(x275+x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -1LL;
	int8_t x278 = -1;
	int8_t x279 = -22;
	volatile uint16_t x280 = UINT16_MAX;
	int32_t t65 = 1;

	t65 = (x277==(x278/(x279+x280)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = INT32_MIN;
	int16_t x283 = INT16_MAX;
	static int8_t x284 = INT8_MIN;

	t66 = (x281==(x282/(x283+x284)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x285 = 1707U;
	int64_t x286 = 10328LL;
	int16_t x287 = INT16_MAX;
	uint64_t x288 = 1461LLU;
	int32_t t67 = 660255587;

	t67 = (x285==(x286/(x287+x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	int16_t x291 = 4419;
	volatile int8_t x292 = INT8_MIN;

	t68 = (x289==(x290/(x291+x292)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	int32_t x295 = -121283606;
	volatile int32_t t69 = -45037128;

	t69 = (x293==(x294/(x295+x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = UINT64_MAX;
	uint32_t x298 = 36719U;
	uint8_t x300 = UINT8_MAX;
	volatile int32_t t70 = 1680;

	t70 = (x297==(x298/(x299+x300)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x301 = 1U;
	int8_t x303 = 14;
	int32_t x304 = 123618216;
	int32_t t71 = -3;

	t71 = (x301==(x302/(x303+x304)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x305 = -58;
	int16_t x306 = INT16_MIN;
	volatile int32_t x307 = INT32_MIN;
	int64_t x308 = -1LL;
	int32_t t72 = -2;

	t72 = (x305==(x306/(x307+x308)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x311 = -25515;
	int64_t x312 = 0LL;
	volatile int32_t t73 = -1215;

	t73 = (x309==(x310/(x311+x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	int32_t t74 = -3;

	t74 = (x313==(x314/(x315+x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x322 = 689003LLU;
	static volatile int32_t t75 = 323509706;

	t75 = (x321==(x322/(x323+x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MIN;
	volatile int32_t t76 = -1;

	t76 = (x325==(x326/(x327+x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = INT64_MAX;
	volatile int32_t x334 = INT32_MIN;
	uint16_t x336 = 9U;
	volatile int32_t t77 = 3;

	t77 = (x333==(x334/(x335+x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	int32_t x339 = 13;
	int64_t x340 = -1LL;
	int32_t t78 = 249846241;

	t78 = (x337==(x338/(x339+x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x342 = -1LL;
	volatile int32_t t79 = -38873012;

	t79 = (x341==(x342/(x343+x344)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x346 = -5561;
	int16_t x347 = -295;
	static int32_t t80 = -3097;

	t80 = (x345==(x346/(x347+x348)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = 6;
	uint8_t x350 = UINT8_MAX;
	int32_t x352 = 13;

	t81 = (x349==(x350/(x351+x352)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x353 = INT8_MIN;
	int64_t x356 = INT64_MIN;

	t82 = (x353==(x354/(x355+x356)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x357 = -383;
	int32_t x358 = 4768;
	static int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t83 = 4;

	t83 = (x357==(x358/(x359+x360)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MIN;
	int16_t x366 = 7;
	volatile int16_t x367 = INT16_MIN;
	int8_t x368 = INT8_MAX;
	int32_t t84 = -92;

	t84 = (x365==(x366/(x367+x368)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = -1;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = 2;
	volatile int32_t t85 = -1148691;

	t85 = (x369==(x370/(x371+x372)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x374 = INT32_MAX;
	int8_t x375 = INT8_MIN;
	volatile int8_t x376 = INT8_MIN;
	volatile int32_t t86 = 226;

	t86 = (x373==(x374/(x375+x376)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x377 = 193697298334727LL;
	int8_t x379 = -2;
	volatile int32_t t87 = -27974;

	t87 = (x377==(x378/(x379+x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x382 = 128949642;
	int8_t x383 = -46;
	int16_t x384 = -1;

	t88 = (x381==(x382/(x383+x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = 1394648696LL;
	volatile int8_t x390 = INT8_MIN;
	volatile int8_t x391 = 3;
	uint64_t x392 = 0LLU;
	int32_t t89 = 28846296;

	t89 = (x389==(x390/(x391+x392)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 44U;
	uint64_t x394 = 505124098LLU;
	volatile uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MAX;
	int32_t t90 = -701;

	t90 = (x393==(x394/(x395+x396)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = INT16_MIN;
	static int8_t x403 = -1;
	int8_t x404 = -31;
	volatile int32_t t91 = -1;

	t91 = (x401==(x402/(x403+x404)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = INT16_MAX;
	static int32_t x406 = INT32_MIN;
	volatile int64_t x408 = INT64_MIN;
	int32_t t92 = -2;

	t92 = (x405==(x406/(x407+x408)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = -452;
	static uint16_t x410 = UINT16_MAX;
	uint32_t x411 = 323003012U;
	volatile int32_t t93 = -5;

	t93 = (x409==(x410/(x411+x412)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x413 = INT64_MIN;
	int8_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	int32_t t94 = -22;

	t94 = (x413==(x414/(x415+x416)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x417 = 771U;
	int16_t x418 = INT16_MIN;
	static int8_t x419 = 0;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t95 = 0;

	t95 = (x417==(x418/(x419+x420)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x425 = INT16_MIN;
	volatile int8_t x426 = 2;
	int64_t x427 = -2623250717470181888LL;
	volatile int32_t t96 = -25;

	t96 = (x425==(x426/(x427+x428)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x429 = INT32_MIN;
	int32_t x430 = INT32_MAX;
	int16_t x431 = INT16_MAX;
	volatile int32_t t97 = 23151;

	t97 = (x429==(x430/(x431+x432)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x438 = -1;
	int16_t x439 = -6;
	int8_t x440 = INT8_MAX;
	int32_t t98 = -1038;

	t98 = (x437==(x438/(x439+x440)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint64_t x441 = UINT64_MAX;
	static int64_t x442 = INT64_MIN;
	int8_t x443 = 3;
	int32_t x444 = INT32_MIN;
	volatile int32_t t99 = -4332;

	t99 = (x441==(x442/(x443+x444)));

	if (t99 != 0) { NG(); } else { ; }
	
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

