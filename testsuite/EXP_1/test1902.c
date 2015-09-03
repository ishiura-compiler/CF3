#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MIN;
uint8_t x7 = UINT8_MAX;
static uint8_t x8 = UINT8_MAX;
uint16_t x12 = 6U;
static int32_t x25 = 188331875;
static volatile int8_t x26 = 7;
uint8_t x38 = 3U;
uint8_t x53 = UINT8_MAX;
static int8_t x58 = INT8_MAX;
int64_t x62 = INT64_MIN;
volatile uint64_t t15 = 292104149271LLU;
static volatile uint64_t x70 = 107329207897979552LLU;
static uint8_t x72 = UINT8_MAX;
int8_t x74 = 5;
int8_t x77 = INT8_MAX;
int16_t x78 = INT16_MAX;
int16_t x81 = INT16_MAX;
volatile uint8_t x83 = UINT8_MAX;
static volatile int32_t x92 = 2;
int32_t x94 = -1;
int32_t x95 = -3;
int8_t x102 = INT8_MIN;
uint64_t x104 = UINT64_MAX;
int8_t x108 = INT8_MIN;
int64_t x111 = INT64_MIN;
static volatile int64_t t26 = -47256672042530617LL;
uint32_t x120 = 664U;
int16_t x121 = 15;
int16_t x139 = -1;
uint64_t t33 = 53185LLU;
int8_t x147 = -1;
static int32_t x150 = -1;
volatile int64_t x152 = 409366931165LL;
uint64_t t36 = 14919388477857357LLU;
volatile int64_t x160 = INT64_MIN;
uint64_t x162 = 107219008LLU;
int64_t x171 = -12886971LL;
volatile int8_t x172 = INT8_MAX;
volatile int8_t x180 = INT8_MAX;
static uint32_t t42 = 242514U;
static int16_t x192 = INT16_MIN;
int64_t t45 = -243681138134020LL;
volatile uint32_t x193 = 53U;
volatile int32_t x199 = INT32_MIN;
static int64_t t47 = -802626258076LL;
uint16_t x203 = UINT16_MAX;
volatile int8_t x207 = INT8_MIN;
int8_t x212 = INT8_MIN;
volatile uint32_t t50 = 29072U;
int64_t x218 = -1LL;
static volatile int32_t x219 = INT32_MAX;
int32_t t53 = -9080817;
uint16_t x230 = UINT16_MAX;
int64_t t56 = -1561120866288LL;
volatile int32_t x240 = INT32_MIN;
int32_t x241 = -1;
int16_t x242 = -1662;
static int64_t t58 = 265310122435LL;
int8_t x246 = INT8_MIN;
volatile int16_t x247 = INT16_MAX;
int64_t x251 = INT64_MIN;
int16_t x252 = -9;
uint64_t t60 = 49LLU;
int64_t x257 = INT64_MIN;
uint8_t x260 = UINT8_MAX;
int8_t x266 = INT8_MIN;
static int32_t t62 = 29639;
uint32_t x269 = 324668U;
int8_t x270 = INT8_MAX;
volatile uint32_t t63 = 174468558U;
uint8_t x274 = UINT8_MAX;
static volatile int32_t x277 = 302;
static int32_t x291 = 5869291;
volatile int32_t t69 = -100928404;
int64_t x299 = -1LL;
volatile int64_t t70 = -152173101LL;
volatile int32_t t71 = 113040;
uint8_t x305 = 1U;
int8_t x307 = INT8_MIN;
volatile uint32_t t72 = 53082U;
static int8_t x309 = 1;
volatile int16_t x310 = INT16_MIN;
int64_t t75 = -44506479LL;
uint16_t x324 = UINT16_MAX;
int16_t x333 = -55;
static volatile int16_t x334 = -1;
uint8_t x341 = UINT8_MAX;
int32_t x345 = INT32_MIN;
uint64_t x346 = 260157855LLU;
static uint64_t t82 = 312495504678599LLU;
int64_t t83 = -13LL;
int16_t x360 = INT16_MAX;
int8_t x367 = -1;
int16_t x368 = -1;
volatile uint8_t x372 = 1U;
uint64_t t87 = 1934578LLU;
static int64_t t88 = -195389193082757LL;
volatile int64_t x378 = INT64_MIN;
volatile uint64_t t89 = 155LLU;
int64_t t90 = 130863138930461308LL;
volatile uint16_t x388 = 26U;
uint8_t x391 = UINT8_MAX;
volatile int64_t t94 = 11276053231024LL;
uint16_t x406 = 757U;
volatile uint32_t t96 = 23489U;
int32_t x410 = INT32_MIN;
volatile int32_t x411 = INT32_MIN;
uint64_t t98 = 459956964810593743LLU;
volatile uint16_t x419 = 29U;
static int32_t t99 = -13674;


void f0(void) {
	static volatile int16_t x1 = INT16_MAX;
	int64_t x2 = 33LL;
	uint64_t x3 = 1066491416712243601LLU;
	volatile int64_t x4 = -1LL;
	uint64_t t0 = 7283253306040LLU;

	t0 = (((x1|x2)/x3)/x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 119892967527502LLU;
	volatile uint64_t t1 = 89401044207LLU;

	t1 = (((x5|x6)/x7)/x8);

	if (t1 != 283686952290119LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static volatile int64_t x10 = -1LL;
	uint8_t x11 = 52U;
	volatile int64_t t2 = -71547489LL;

	t2 = (((x9|x10)/x11)/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = -47;
	int8_t x15 = INT8_MIN;
	static uint8_t x16 = 19U;
	volatile int32_t t3 = -1;

	t3 = (((x13|x14)/x15)/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	uint16_t x19 = 1984U;
	static uint8_t x20 = 1U;
	int32_t t4 = -1313080;

	t4 = (((x17|x18)/x19)/x20);

	if (t4 != -16) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	uint16_t x22 = 9066U;
	int16_t x23 = -1;
	static int64_t x24 = -33046966504LL;
	int64_t t5 = 104664LL;

	t5 = (((x21|x22)/x23)/x24);

	if (t5 != 279098901LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = -1;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -6;

	t6 = (((x25|x26)/x27)/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x30 = INT64_MIN;
	volatile int32_t x31 = 44443553;
	uint16_t x32 = UINT16_MAX;
	volatile int64_t t7 = 539LL;

	t7 = (((x29|x30)/x31)/x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int32_t x34 = INT32_MIN;
	static volatile int8_t x35 = INT8_MAX;
	int16_t x36 = INT16_MIN;
	static volatile uint64_t t8 = 8458805747710LLU;

	t8 = (((x33|x34)/x35)/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 478460U;
	static int32_t x39 = INT32_MIN;
	static volatile int16_t x40 = -1;
	volatile uint32_t t9 = 48534U;

	t9 = (((x37|x38)/x39)/x40);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -453;
	volatile uint8_t x42 = 2U;
	int16_t x43 = INT16_MIN;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = -14340;

	t10 = (((x41|x42)/x43)/x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -2;
	int8_t x50 = -1;
	uint32_t x51 = 28U;
	int16_t x52 = INT16_MAX;
	volatile uint32_t t11 = 914306U;

	t11 = (((x49|x50)/x51)/x52);

	if (t11 != 4681U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	int64_t x56 = INT64_MAX;
	int64_t t12 = 16093LL;

	t12 = (((x53|x54)/x55)/x56);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = -2;
	int16_t x59 = -1;
	int8_t x60 = -1;
	int32_t t13 = -13284;

	t13 = (((x57|x58)/x59)/x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 5814067;
	static uint64_t x63 = 457465LLU;
	uint16_t x64 = 29U;
	volatile uint64_t t14 = 0LLU;

	t14 = (((x61|x62)/x63)/x64);

	if (t14 != 695238568231LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1204515793LL;
	static uint16_t x66 = 23U;
	int8_t x67 = -29;
	uint64_t x68 = UINT64_MAX;

	t15 = (((x65|x66)/x67)/x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -6376618923LL;
	uint16_t x71 = 20862U;
	volatile uint64_t t16 = 99046432561LLU;

	t16 = (((x69|x70)/x71)/x72);

	if (t16 != 3467556936720LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 10;
	int32_t x75 = INT32_MIN;
	int8_t x76 = 39;
	volatile int32_t t17 = -63;

	t17 = (((x73|x74)/x75)/x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x79 = INT64_MIN;
	uint64_t x80 = 560LLU;
	uint64_t t18 = 6LLU;

	t18 = (((x77|x78)/x79)/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x82 = 1;
	int16_t x84 = INT16_MAX;
	volatile int32_t t19 = 116;

	t19 = (((x81|x82)/x83)/x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -1LL;
	static int32_t x90 = INT32_MIN;
	static int16_t x91 = INT16_MIN;
	volatile int64_t t20 = 358LL;

	t20 = (((x89|x90)/x91)/x92);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MAX;
	volatile int8_t x96 = 6;
	volatile int32_t t21 = -1273927;

	t21 = (((x93|x94)/x95)/x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	uint32_t x98 = UINT32_MAX;
	int64_t x99 = INT64_MIN;
	uint64_t x100 = 57100124118LLU;
	volatile uint64_t t22 = 2959138204779746LLU;

	t22 = (((x97|x98)/x99)/x100);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x101 = INT32_MAX;
	volatile uint16_t x103 = 15U;
	volatile uint64_t t23 = 16590451LLU;

	t23 = (((x101|x102)/x103)/x104);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = UINT16_MAX;
	int16_t x106 = INT16_MIN;
	int64_t x107 = 442001LL;
	volatile int64_t t24 = -29048739525046513LL;

	t24 = (((x105|x106)/x107)/x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = INT64_MIN;
	int32_t x110 = INT32_MIN;
	static int8_t x112 = 14;
	static int64_t t25 = 229635LL;

	t25 = (((x109|x110)/x111)/x112);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 920U;
	int64_t x114 = INT64_MAX;
	int16_t x115 = 4412;
	volatile int32_t x116 = INT32_MAX;

	t26 = (((x113|x114)/x115)/x116);

	if (t26 != 973474LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = INT32_MIN;
	int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MAX;
	volatile int64_t t27 = 849LL;

	t27 = (((x117|x118)/x119)/x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	volatile int32_t x124 = 451;
	int64_t t28 = 245394565713669LL;

	t28 = (((x121|x122)/x123)/x124);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x125 = INT32_MIN;
	uint32_t x126 = 533523693U;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = -1;
	volatile uint32_t t29 = 6608U;

	t29 = (((x125|x126)/x127)/x128);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x129 = 1U;
	int8_t x130 = -1;
	static uint64_t x131 = UINT64_MAX;
	static uint16_t x132 = 603U;
	static uint64_t t30 = 2260299LLU;

	t30 = (((x129|x130)/x131)/x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x133 = INT64_MIN;
	int16_t x134 = INT16_MIN;
	static uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = -1;
	static uint64_t t31 = 36803603244973109LLU;

	t31 = (((x133|x134)/x135)/x136);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MAX;
	uint64_t x138 = 364687LLU;
	static uint64_t x140 = 15037730LLU;
	uint64_t t32 = 9605863991868208LLU;

	t32 = (((x137|x138)/x139)/x140);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 6U;
	static uint64_t x142 = 686LLU;
	int8_t x143 = -1;
	uint16_t x144 = 1219U;

	t33 = (((x141|x142)/x143)/x144);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 1705963962400313LLU;
	volatile uint32_t x146 = UINT32_MAX;
	static int32_t x148 = INT32_MAX;
	volatile uint64_t t34 = 68352206068217LLU;

	t34 = (((x145|x146)/x147)/x148);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x149 = UINT32_MAX;
	int32_t x151 = INT32_MAX;
	static volatile int64_t t35 = 124136435LL;

	t35 = (((x149|x150)/x151)/x152);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int8_t x154 = -11;
	uint16_t x155 = UINT16_MAX;
	uint64_t x156 = 281814239398002972LLU;

	t36 = (((x153|x154)/x155)/x156);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 6U;
	static uint32_t x158 = 1788U;
	int32_t x159 = -1;
	static int64_t t37 = -1LL;

	t37 = (((x157|x158)/x159)/x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x161 = 125780226292LL;
	int8_t x163 = INT8_MIN;
	uint8_t x164 = 2U;
	uint64_t t38 = 0LLU;

	t38 = (((x161|x162)/x163)/x164);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	uint16_t x167 = 57U;
	volatile int32_t x168 = -1246;
	volatile int64_t t39 = -780280183917923483LL;

	t39 = (((x165|x166)/x167)/x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 3215U;
	static int64_t x170 = INT64_MIN;
	int64_t t40 = -2255384145414307261LL;

	t40 = (((x169|x170)/x171)/x172);

	if (t40 != 5635535042LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x173 = UINT32_MAX;
	static volatile int8_t x174 = -5;
	int8_t x175 = -30;
	int64_t x176 = INT64_MAX;
	static volatile int64_t t41 = -1414180LL;

	t41 = (((x173|x174)/x175)/x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 27795620U;
	static int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;

	t42 = (((x177|x178)/x179)/x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x181 = 7401LLU;
	int64_t x182 = -1LL;
	uint32_t x183 = UINT32_MAX;
	volatile int64_t x184 = INT64_MIN;
	static uint64_t t43 = 8185334169LLU;

	t43 = (((x181|x182)/x183)/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = -1LL;
	int64_t x186 = INT64_MIN;
	uint8_t x187 = UINT8_MAX;
	uint64_t x188 = 9LLU;
	volatile uint64_t t44 = 87526256149LLU;

	t44 = (((x185|x186)/x187)/x188);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	int32_t x190 = INT32_MIN;
	static int8_t x191 = 6;

	t45 = (((x189|x190)/x191)/x192);

	if (t45 != 10922LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x194 = -1;
	int16_t x195 = 14;
	int8_t x196 = INT8_MAX;
	volatile uint32_t t46 = 2068U;

	t46 = (((x193|x194)/x195)/x196);

	if (t46 != 2415617U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	static int32_t x198 = INT32_MAX;
	int64_t x200 = -1LL;

	t47 = (((x197|x198)/x199)/x200);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x201 = 9U;
	int32_t x202 = 2039;
	volatile int32_t x204 = INT32_MIN;
	uint32_t t48 = 0U;

	t48 = (((x201|x202)/x203)/x204);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint32_t x205 = 1U;
	static int64_t x206 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	int64_t t49 = -32LL;

	t49 = (((x205|x206)/x207)/x208);

	if (t49 != -33554431LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MIN;

	t50 = (((x209|x210)/x211)/x212);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x213 = -89388;
	uint64_t x214 = 542059294LLU;
	int64_t x215 = -14813035LL;
	int16_t x216 = 1;
	static volatile uint64_t t51 = 1819082804529LLU;

	t51 = (((x213|x214)/x215)/x216);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = INT16_MIN;
	static volatile int8_t x220 = -1;
	int64_t t52 = 43077559862LL;

	t52 = (((x217|x218)/x219)/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = INT16_MAX;
	volatile uint16_t x222 = 76U;
	static int32_t x223 = INT32_MIN;
	volatile int16_t x224 = INT16_MIN;

	t53 = (((x221|x222)/x223)/x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x225 = INT8_MAX;
	static int64_t x226 = INT64_MIN;
	int64_t x227 = -922516679881LL;
	static uint64_t x228 = 654503068181613LLU;
	volatile uint64_t t54 = 3864265824721LLU;

	t54 = (((x225|x226)/x227)/x228);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x229 = INT16_MAX;
	int8_t x231 = INT8_MAX;
	volatile uint16_t x232 = 23U;
	volatile int32_t t55 = 30;

	t55 = (((x229|x230)/x231)/x232);

	if (t55 != 22) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x233 = INT64_MAX;
	static int8_t x234 = INT8_MIN;
	uint32_t x235 = 33148U;
	int64_t x236 = INT64_MIN;

	t56 = (((x233|x234)/x235)/x236);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = 26;
	static int64_t x238 = INT64_MIN;
	int8_t x239 = INT8_MIN;
	static int64_t t57 = -444453085576704932LL;

	t57 = (((x237|x238)/x239)/x240);

	if (t57 != -33554431LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x243 = INT8_MAX;
	int64_t x244 = 5365LL;

	t58 = (((x241|x242)/x243)/x244);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = 225349LL;
	int16_t x248 = INT16_MAX;
	int64_t t59 = 0LL;

	t59 = (((x245|x246)/x247)/x248);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x249 = 1963431U;
	volatile uint64_t x250 = UINT64_MAX;

	t60 = (((x249|x250)/x251)/x252);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x258 = 0U;
	int16_t x259 = INT16_MIN;
	volatile int64_t t61 = -149686884LL;

	t61 = (((x257|x258)/x259)/x260);

	if (t61 != 1103823438081LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int32_t x265 = INT32_MIN;
	int16_t x267 = -1;
	static int8_t x268 = -1;

	t62 = (((x265|x266)/x267)/x268);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;

	t63 = (((x269|x270)/x271)/x272);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = INT16_MIN;
	volatile int32_t x275 = -43591;
	uint8_t x276 = UINT8_MAX;
	int32_t t64 = 0;

	t64 = (((x273|x274)/x275)/x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = -14;
	static int64_t x280 = 62LL;
	int64_t t65 = -32559737715LL;

	t65 = (((x277|x278)/x279)/x280);

	if (t65 != 10626004650754349LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = 46;
	static uint64_t x282 = UINT64_MAX;
	int8_t x283 = INT8_MAX;
	uint32_t x284 = 17987U;
	volatile uint64_t t66 = 3465123690160099551LLU;

	t66 = (((x281|x282)/x283)/x284);

	if (t66 != 8075273994345LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x285 = 8411;
	int8_t x286 = -3;
	static int64_t x287 = -2803446433883917339LL;
	volatile uint16_t x288 = 62U;
	int64_t t67 = -5600LL;

	t67 = (((x285|x286)/x287)/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x289 = 0U;
	int64_t x290 = -961097726061782196LL;
	static int64_t x292 = INT64_MIN;
	static volatile int64_t t68 = 417101758157882LL;

	t68 = (((x289|x290)/x291)/x292);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x293 = 11138U;
	int16_t x294 = INT16_MAX;
	static volatile uint16_t x295 = UINT16_MAX;
	uint8_t x296 = 2U;

	t69 = (((x293|x294)/x295)/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x297 = 1;
	int8_t x298 = -1;
	uint16_t x300 = UINT16_MAX;

	t70 = (((x297|x298)/x299)/x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x301 = -22;
	volatile int16_t x302 = INT16_MAX;
	int32_t x303 = INT32_MIN;
	static int16_t x304 = -10;

	t71 = (((x301|x302)/x303)/x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x306 = UINT32_MAX;
	int32_t x308 = INT32_MAX;

	t72 = (((x305|x306)/x307)/x308);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x311 = 5981042;
	int64_t x312 = -7894271984LL;
	volatile int64_t t73 = 1040LL;

	t73 = (((x309|x310)/x311)/x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x313 = -1;
	static int32_t x314 = INT32_MIN;
	int32_t x315 = -10;
	int32_t x316 = -1;
	int32_t t74 = 1;

	t74 = (((x313|x314)/x315)/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = 16736U;
	int16_t x319 = INT16_MIN;
	int64_t x320 = -13LL;

	t75 = (((x317|x318)/x319)/x320);

	if (t75 != -21651921285435LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x321 = -4;
	int8_t x322 = INT8_MIN;
	int16_t x323 = -1;
	int32_t t76 = -14281981;

	t76 = (((x321|x322)/x323)/x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	int8_t x327 = -1;
	uint32_t x328 = 138U;
	volatile uint32_t t77 = 14U;

	t77 = (((x325|x326)/x327)/x328);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x329 = INT64_MIN;
	int16_t x330 = -301;
	volatile int8_t x331 = INT8_MIN;
	int32_t x332 = 106748459;
	volatile int64_t t78 = 286227461186290LL;

	t78 = (((x329|x330)/x331)/x332);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x335 = 4U;
	uint64_t x336 = UINT64_MAX;
	uint64_t t79 = 2672531212319749091LLU;

	t79 = (((x333|x334)/x335)/x336);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = INT32_MIN;
	volatile int64_t x338 = INT64_MAX;
	static int32_t x339 = 593;
	int8_t x340 = INT8_MIN;
	static volatile int64_t t80 = 1967515798LL;

	t80 = (((x337|x338)/x339)/x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x342 = 6209089LLU;
	volatile uint64_t x343 = UINT64_MAX;
	static uint32_t x344 = UINT32_MAX;
	uint64_t t81 = 7272LLU;

	t81 = (((x341|x342)/x343)/x344);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x347 = 52LL;
	static volatile int8_t x348 = 20;

	t82 = (((x345|x346)/x347)/x348);

	if (t82 != 17737253915213678LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 35U;
	int64_t x350 = -2022LL;
	uint32_t x351 = 202275U;
	static int64_t x352 = 85032LL;

	t83 = (((x349|x350)/x351)/x352);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = 582667;
	uint32_t x355 = UINT32_MAX;
	int8_t x356 = -1;
	volatile uint32_t t84 = 25195U;

	t84 = (((x353|x354)/x355)/x356);

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint8_t x357 = 2U;
	static int64_t x358 = -3133591312814172943LL;
	int8_t x359 = INT8_MAX;
	volatile int64_t t85 = 26016512LL;

	t85 = (((x357|x358)/x359)/x360);

	if (t85 != -753012095858LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x365 = -1;
	uint16_t x366 = 2018U;
	int32_t t86 = 2527494;

	t86 = (((x365|x366)/x367)/x368);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x369 = -1;
	int64_t x370 = -1LL;
	volatile uint64_t x371 = 268266767826663452LLU;

	t87 = (((x369|x370)/x371)/x372);

	if (t87 != 68LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MAX;
	int64_t x374 = -1LL;
	int64_t x375 = INT64_MIN;
	int32_t x376 = -13;

	t88 = (((x373|x374)/x375)/x376);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x377 = 179368LLU;
	static uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;

	t89 = (((x377|x378)/x379)/x380);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x381 = INT32_MIN;
	int64_t x382 = INT64_MIN;
	static volatile int16_t x383 = 5658;
	int32_t x384 = INT32_MIN;

	t90 = (((x381|x382)/x383)/x384);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 770548956753632550LLU;
	static int8_t x386 = INT8_MIN;
	int32_t x387 = INT32_MAX;
	uint64_t t91 = 465LLU;

	t91 = (((x385|x386)/x387)/x388);

	if (t91 != 330382099LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = INT64_MIN;
	static uint16_t x390 = 12U;
	uint8_t x392 = 46U;
	volatile int64_t t92 = 449LL;

	t92 = (((x389|x390)/x391)/x392);

	if (t92 != -786306226500833LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = UINT8_MAX;
	volatile int32_t x396 = INT32_MAX;
	volatile int64_t t93 = 2069388LL;

	t93 = (((x393|x394)/x395)/x396);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x397 = -1;
	volatile uint32_t x398 = 2002U;
	volatile int16_t x399 = INT16_MIN;
	static int64_t x400 = -5789248LL;

	t94 = (((x397|x398)/x399)/x400);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x401 = -2875500095915LL;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = 13U;
	uint8_t x404 = UINT8_MAX;
	int64_t t95 = -42303LL;

	t95 = (((x401|x402)/x403)/x404);

	if (t95 != -8LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x405 = UINT32_MAX;
	static int8_t x407 = INT8_MAX;
	uint32_t x408 = UINT32_MAX;

	t96 = (((x405|x406)/x407)/x408);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = -1210407702808LL;
	uint32_t x412 = UINT32_MAX;
	static volatile int64_t t97 = -31088135605LL;

	t97 = (((x409|x410)/x411)/x412);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = INT16_MIN;
	static int64_t x414 = -6538294285LL;
	uint64_t x415 = 319583988426434LLU;
	int64_t x416 = INT64_MAX;

	t98 = (((x413|x414)/x415)/x416);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x417 = 5;
	volatile uint8_t x418 = 0U;
	static int16_t x420 = -1;

	t99 = (((x417|x418)/x419)/x420);

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

