#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 8050486LLU;
static int32_t x4 = -1;
static int32_t t0 = 451;
uint8_t x9 = 18U;
int16_t x10 = -11290;
uint16_t x13 = UINT16_MAX;
static int64_t x15 = INT64_MIN;
static int64_t x16 = INT64_MIN;
int16_t x19 = -1;
uint64_t x27 = 1237LLU;
volatile int64_t x32 = INT64_MIN;
volatile uint8_t x40 = UINT8_MAX;
uint32_t x42 = 95879829U;
int8_t x43 = -1;
int16_t x49 = INT16_MIN;
int16_t x50 = 1;
uint32_t x54 = 482420U;
static int32_t t13 = -54;
uint64_t x62 = 9LLU;
int16_t x74 = 684;
volatile int8_t x77 = INT8_MAX;
int8_t x78 = INT8_MIN;
int16_t x80 = INT16_MIN;
int32_t x81 = 0;
volatile int32_t t22 = 2720;
int32_t x95 = INT32_MIN;
int16_t x111 = -1;
int32_t x113 = INT32_MAX;
int16_t x121 = INT16_MAX;
uint8_t x125 = UINT8_MAX;
int64_t x127 = INT64_MIN;
int32_t x133 = INT32_MAX;
int16_t x135 = INT16_MAX;
volatile int32_t t33 = -12;
int64_t x140 = INT64_MIN;
int16_t x142 = -461;
static int32_t x144 = INT32_MIN;
int32_t t36 = -1;
uint8_t x149 = UINT8_MAX;
int16_t x158 = INT16_MIN;
int32_t t40 = -233;
volatile int32_t t41 = 575;
int16_t x169 = 190;
int8_t x170 = INT8_MIN;
int16_t x173 = INT16_MAX;
int8_t x175 = -38;
int32_t x186 = INT32_MAX;
int8_t x189 = INT8_MIN;
volatile int16_t x201 = INT16_MIN;
int64_t x205 = INT64_MAX;
volatile int32_t t51 = -2073900;
static int16_t x209 = -12521;
uint32_t x212 = UINT32_MAX;
uint8_t x214 = UINT8_MAX;
int64_t x217 = 226024937LL;
int32_t t54 = 1218;
uint16_t x225 = 30397U;
int16_t x228 = INT16_MIN;
static uint16_t x229 = UINT16_MAX;
volatile int32_t t58 = -4307365;
int64_t x250 = 4549LL;
volatile int32_t t62 = -391;
int16_t x258 = -1;
static uint16_t x259 = 3U;
int16_t x271 = INT16_MIN;
int32_t x274 = 12530551;
uint32_t x279 = 1285U;
uint8_t x280 = UINT8_MAX;
int16_t x283 = -7524;
uint64_t x284 = 1LLU;
static volatile int32_t t70 = -466789;
int16_t x285 = 24;
int32_t t71 = -63184;
uint8_t x291 = UINT8_MAX;
volatile int64_t x295 = INT64_MIN;
volatile int32_t t73 = -448;
volatile int16_t x304 = 365;
static volatile int32_t t76 = 1;
int16_t x311 = INT16_MAX;
int16_t x320 = 14712;
volatile int32_t t80 = 4;
volatile uint32_t x327 = 2U;
static volatile int32_t t82 = -491890620;
volatile uint16_t x335 = 18U;
static int8_t x337 = INT8_MIN;
static uint64_t x344 = 755104261LLU;
int64_t x348 = INT64_MIN;
static uint16_t x354 = 17U;
uint32_t x366 = 5670599U;
static int64_t x367 = -3924296478055444408LL;
int8_t x368 = INT8_MIN;
uint32_t x369 = 53064U;
int8_t x374 = -22;
volatile int32_t t93 = 1153;
int16_t x378 = INT16_MIN;
int8_t x379 = 31;
static int16_t x383 = INT16_MIN;
int32_t t96 = 4;
uint64_t x391 = UINT64_MAX;
volatile int32_t x394 = INT32_MAX;
static uint16_t x395 = 84U;
int8_t x396 = INT8_MAX;
static int16_t x398 = 123;
volatile int32_t t99 = 1472753;


void f0(void) {
	uint64_t x2 = 2433129LLU;
	volatile int8_t x3 = INT8_MAX;

	t0 = ((x1<=(x2|x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	int64_t x6 = 5674532269355977LL;
	static volatile uint8_t x7 = UINT8_MAX;
	int8_t x8 = -1;
	volatile int32_t t1 = 7;

	t1 = ((x5<=(x6|x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x11 = 58U;
	int8_t x12 = INT8_MIN;
	static volatile int32_t t2 = 2837198;

	t2 = ((x9<=(x10|x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MAX;
	int32_t t3 = -206170153;

	t3 = ((x13<=(x14|x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int32_t x18 = INT32_MIN;
	static volatile int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = -848505232;

	t4 = ((x17<=(x18|x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	uint8_t x22 = 121U;
	volatile int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MAX;
	volatile int32_t t5 = -18840;

	t5 = ((x21<=(x22|x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	uint16_t x26 = UINT16_MAX;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -5567340;

	t6 = ((x25<=(x26|x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int16_t x30 = INT16_MIN;
	volatile int16_t x31 = -1;
	int32_t t7 = 173;

	t7 = ((x29<=(x30|x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int64_t x34 = INT64_MIN;
	volatile uint32_t x35 = 2U;
	static int64_t x36 = -1LL;
	volatile int32_t t8 = 40303098;

	t8 = ((x33<=(x34|x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = 1;
	volatile uint16_t x39 = 14U;
	int32_t t9 = -2;

	t9 = ((x37<=(x38|x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int32_t x44 = INT32_MAX;
	int32_t t10 = -10908;

	t10 = ((x41<=(x42|x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = INT8_MIN;
	static int32_t x46 = INT32_MAX;
	static uint8_t x47 = UINT8_MAX;
	uint32_t x48 = UINT32_MAX;
	volatile int32_t t11 = 26589;

	t11 = ((x45<=(x46|x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x51 = 16U;
	int64_t x52 = -160527737862139543LL;
	int32_t t12 = -46998;

	t12 = ((x49<=(x50|x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int32_t x55 = -8398961;
	int32_t x56 = INT32_MIN;

	t13 = ((x53<=(x54|x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 0;
	volatile int16_t x58 = INT16_MIN;
	static volatile int16_t x59 = INT16_MAX;
	int64_t x60 = -486520104785876801LL;
	static int32_t t14 = 233675;

	t14 = ((x57<=(x58|x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 27748013173040025LLU;
	int64_t x63 = 1101966292138LL;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 1;

	t15 = ((x61<=(x62|x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = INT32_MIN;
	int8_t x66 = INT8_MAX;
	int64_t x67 = INT64_MIN;
	static volatile int16_t x68 = INT16_MIN;
	int32_t t16 = 353959;

	t16 = ((x65<=(x66|x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MIN;
	int32_t x70 = 305;
	volatile int16_t x71 = -1;
	static volatile uint64_t x72 = 37087134202005LLU;
	int32_t t17 = -22063;

	t17 = ((x69<=(x70|x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 149U;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = INT16_MIN;
	static volatile int32_t t18 = -46027;

	t18 = ((x73<=(x74|x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x79 = -1;
	volatile int32_t t19 = 0;

	t19 = ((x77<=(x78|x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = INT64_MIN;
	static int64_t x83 = 14101624934409805LL;
	int64_t x84 = -1LL;
	int32_t t20 = 1;

	t20 = ((x81<=(x82|x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x85 = 646U;
	volatile int16_t x86 = -1;
	uint32_t x87 = 2597526U;
	static uint32_t x88 = 250020U;
	int32_t t21 = 243203244;

	t21 = ((x85<=(x86|x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 120684118U;
	volatile uint8_t x90 = 1U;
	int32_t x91 = 9477;
	volatile int64_t x92 = INT64_MAX;

	t22 = ((x89<=(x90|x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MAX;
	uint16_t x96 = 356U;
	int32_t t23 = 16808;

	t23 = ((x93<=(x94|x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 0;
	uint8_t x98 = 2U;
	int64_t x99 = 1011112LL;
	static int8_t x100 = INT8_MAX;
	int32_t t24 = -40;

	t24 = ((x97<=(x98|x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	volatile uint64_t x102 = 265586105965LLU;
	int16_t x103 = INT16_MAX;
	volatile uint8_t x104 = UINT8_MAX;
	int32_t t25 = -208691178;

	t25 = ((x101<=(x102|x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = 9U;
	volatile int8_t x107 = -1;
	int64_t x108 = INT64_MIN;
	int32_t t26 = 967592057;

	t26 = ((x105<=(x106|x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MAX;
	int64_t x110 = 2191LL;
	int16_t x112 = INT16_MAX;
	int32_t t27 = -29;

	t27 = ((x109<=(x110|x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x114 = 12408LLU;
	static volatile int32_t x115 = INT32_MAX;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -57161348;

	t28 = ((x113<=(x114|x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 3U;
	volatile uint32_t x118 = UINT32_MAX;
	uint16_t x119 = 7U;
	static uint32_t x120 = UINT32_MAX;
	int32_t t29 = -26;

	t29 = ((x117<=(x118|x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = 2U;
	volatile int32_t x123 = INT32_MIN;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t30 = -342718409;

	t30 = ((x121<=(x122|x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x126 = UINT16_MAX;
	int16_t x128 = -533;
	int32_t t31 = -152;

	t31 = ((x125<=(x126|x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 378889325483LL;
	int64_t x130 = -849425002865344656LL;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	int32_t t32 = -4784763;

	t32 = ((x129<=(x130|x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 5;
	static int64_t x136 = INT64_MAX;

	t33 = ((x133<=(x134|x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	static int16_t x138 = -2;
	int32_t x139 = INT32_MIN;
	volatile int32_t t34 = 1;

	t34 = ((x137<=(x138|x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 5488U;
	static uint16_t x143 = 1U;
	static volatile int32_t t35 = -1519;

	t35 = ((x141<=(x142|x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MAX;
	static int64_t x146 = INT64_MIN;
	volatile int32_t x147 = -1;
	static int64_t x148 = INT64_MIN;

	t36 = ((x145<=(x146|x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = INT64_MIN;
	uint16_t x151 = UINT16_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -9535619;

	t37 = ((x149<=(x150|x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 733LL;
	int32_t x154 = INT32_MIN;
	volatile uint16_t x155 = UINT16_MAX;
	static volatile uint32_t x156 = 2566033U;
	int32_t t38 = 930719509;

	t38 = ((x153<=(x154|x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int64_t x159 = -1LL;
	static uint64_t x160 = 1608836290093LLU;
	int32_t t39 = -1487;

	t39 = ((x157<=(x158|x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MIN;
	int16_t x164 = 4;

	t40 = ((x161<=(x162|x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = 6086;
	static int32_t x167 = -31239971;
	static uint32_t x168 = UINT32_MAX;

	t41 = ((x165<=(x166|x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x171 = -1;
	int64_t x172 = -5483LL;
	volatile int32_t t42 = -3;

	t42 = ((x169<=(x170|x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x174 = INT64_MIN;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t43 = 168422182;

	t43 = ((x173<=(x174|x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = -1LL;
	uint16_t x178 = 1U;
	int64_t x179 = INT64_MIN;
	static int8_t x180 = INT8_MAX;
	int32_t t44 = 0;

	t44 = ((x177<=(x178|x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 1785374U;
	volatile uint64_t x182 = UINT64_MAX;
	int8_t x183 = -24;
	int16_t x184 = INT16_MIN;
	volatile int32_t t45 = -26189357;

	t45 = ((x181<=(x182|x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	static int8_t x187 = INT8_MIN;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = 15;

	t46 = ((x185<=(x186|x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = 2;
	int64_t x191 = -1LL;
	static int8_t x192 = -1;
	volatile int32_t t47 = 0;

	t47 = ((x189<=(x190|x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = 47848402797799165LL;
	static int32_t x194 = -1;
	int32_t x195 = INT32_MIN;
	int32_t x196 = INT32_MAX;
	int32_t t48 = 94;

	t48 = ((x193<=(x194|x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = -3273;
	volatile int8_t x198 = -1;
	int64_t x199 = -444LL;
	int32_t x200 = -1;
	volatile int32_t t49 = 1;

	t49 = ((x197<=(x198|x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x202 = -219;
	uint64_t x203 = 12LLU;
	static volatile uint32_t x204 = 3387U;
	volatile int32_t t50 = 2706;

	t50 = ((x201<=(x202|x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	static uint8_t x207 = UINT8_MAX;
	static int16_t x208 = -1;

	t51 = ((x205<=(x206|x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x210 = 24U;
	uint16_t x211 = 0U;
	int32_t t52 = -1;

	t52 = ((x209<=(x210|x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	static uint32_t x215 = 274749299U;
	volatile int64_t x216 = INT64_MAX;
	volatile int32_t t53 = -12966009;

	t53 = ((x213<=(x214|x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x218 = INT64_MIN;
	static volatile int16_t x219 = INT16_MAX;
	int16_t x220 = -1;

	t54 = ((x217<=(x218|x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	int64_t x222 = INT64_MIN;
	int32_t x223 = 73058457;
	static int16_t x224 = INT16_MAX;
	static int32_t t55 = 733;

	t55 = ((x221<=(x222|x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = 79087U;
	uint16_t x227 = UINT16_MAX;
	int32_t t56 = -9350;

	t56 = ((x225<=(x226|x227))<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x230 = INT16_MIN;
	uint8_t x231 = 85U;
	int64_t x232 = INT64_MAX;
	static int32_t t57 = -390831546;

	t57 = ((x229<=(x230|x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MAX;
	static int8_t x234 = 1;
	int16_t x235 = INT16_MIN;
	int64_t x236 = INT64_MAX;

	t58 = ((x233<=(x234|x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x237 = INT8_MIN;
	volatile int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	static int8_t x240 = INT8_MIN;
	int32_t t59 = -519761898;

	t59 = ((x237<=(x238|x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	uint32_t x242 = 20U;
	static int32_t x243 = INT32_MIN;
	int32_t x244 = INT32_MAX;
	static int32_t t60 = -2275;

	t60 = ((x241<=(x242|x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 23U;
	int64_t x246 = INT64_MIN;
	static uint8_t x247 = 1U;
	static int16_t x248 = INT16_MIN;
	volatile int32_t t61 = 57235573;

	t61 = ((x245<=(x246|x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = INT16_MIN;
	int64_t x251 = -1LL;
	int32_t x252 = -25;

	t62 = ((x249<=(x250|x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x253 = UINT8_MAX;
	static int32_t x254 = -1;
	uint8_t x255 = 3U;
	int16_t x256 = INT16_MIN;
	volatile int32_t t63 = -20663300;

	t63 = ((x253<=(x254|x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 851;
	int16_t x260 = -1;
	volatile int32_t t64 = -1;

	t64 = ((x257<=(x258|x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 30;
	int32_t x262 = INT32_MIN;
	uint64_t x263 = 374780104813768LLU;
	static uint64_t x264 = 66231916756LLU;
	static volatile int32_t t65 = 205932212;

	t65 = ((x261<=(x262|x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	volatile int64_t x266 = INT64_MIN;
	int32_t x267 = -1;
	volatile int16_t x268 = -1;
	volatile int32_t t66 = 113897;

	t66 = ((x265<=(x266|x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 12;
	uint8_t x270 = UINT8_MAX;
	static int32_t x272 = -1;
	volatile int32_t t67 = -55651875;

	t67 = ((x269<=(x270|x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static volatile int64_t x275 = 234568LL;
	int32_t x276 = 105651;
	int32_t t68 = -24100;

	t68 = ((x273<=(x274|x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x277 = UINT8_MAX;
	static int16_t x278 = -1;
	volatile int32_t t69 = 6;

	t69 = ((x277<=(x278|x279))<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 466381110U;
	int8_t x282 = 36;

	t70 = ((x281<=(x282|x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x286 = 0;
	static volatile int64_t x287 = 760607327858198392LL;
	static int8_t x288 = INT8_MIN;

	t71 = ((x285<=(x286|x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 2518868813LLU;
	static volatile int32_t x290 = INT32_MIN;
	static int32_t x292 = INT32_MAX;
	static int32_t t72 = -10;

	t72 = ((x289<=(x290|x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	int64_t x294 = INT64_MIN;
	uint64_t x296 = UINT64_MAX;

	t73 = ((x293<=(x294|x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x297 = 1614754046LLU;
	int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MAX;
	int8_t x300 = 9;
	volatile int32_t t74 = 1135;

	t74 = ((x297<=(x298|x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	volatile int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	static int32_t t75 = 117282789;

	t75 = ((x301<=(x302|x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 5111588217LLU;
	int16_t x306 = INT16_MAX;
	int8_t x307 = -1;
	static uint32_t x308 = 9785U;

	t76 = ((x305<=(x306|x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	int64_t x310 = INT64_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -674565;

	t77 = ((x309<=(x310|x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = INT16_MAX;
	uint16_t x314 = 257U;
	int32_t x315 = -60017;
	int64_t x316 = 3859986502202LL;
	int32_t t78 = 1722;

	t78 = ((x313<=(x314|x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MAX;
	static uint64_t x319 = 63LLU;
	int32_t t79 = -3357;

	t79 = ((x317<=(x318|x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint16_t x322 = 9267U;
	int16_t x323 = INT16_MIN;
	int64_t x324 = INT64_MIN;

	t80 = ((x321<=(x322|x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 39U;
	int8_t x326 = 0;
	uint16_t x328 = 0U;
	int32_t t81 = -334;

	t81 = ((x325<=(x326|x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = 961365;
	int64_t x330 = INT64_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	static volatile int8_t x332 = -1;

	t82 = ((x329<=(x330|x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = UINT8_MAX;
	static int8_t x334 = 19;
	uint32_t x336 = UINT32_MAX;
	static int32_t t83 = -354005;

	t83 = ((x333<=(x334|x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x338 = INT16_MAX;
	static int16_t x339 = 3;
	int16_t x340 = 352;
	volatile int32_t t84 = 3993;

	t84 = ((x337<=(x338|x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	static int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	volatile int32_t t85 = -966727;

	t85 = ((x341<=(x342|x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -104406399;
	volatile uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 5801081U;
	int32_t t86 = 0;

	t86 = ((x345<=(x346|x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static int16_t x350 = -1;
	int32_t x351 = 23471;
	int64_t x352 = -4866558957709972LL;
	int32_t t87 = 412;

	t87 = ((x349<=(x350|x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -1;
	int8_t x355 = -1;
	int8_t x356 = INT8_MIN;
	int32_t t88 = -1026501;

	t88 = ((x353<=(x354|x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MAX;
	int8_t x358 = -1;
	static int8_t x359 = INT8_MIN;
	static int32_t x360 = INT32_MIN;
	int32_t t89 = -253991243;

	t89 = ((x357<=(x358|x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 0;
	static int8_t x362 = -1;
	int64_t x363 = INT64_MIN;
	int64_t x364 = 48203649LL;
	volatile int32_t t90 = -8177339;

	t90 = ((x361<=(x362|x363))<x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x365 = UINT8_MAX;
	int32_t t91 = -5805163;

	t91 = ((x365<=(x366|x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x370 = UINT64_MAX;
	int32_t x371 = -1;
	int64_t x372 = INT64_MAX;
	volatile int32_t t92 = 0;

	t92 = ((x369<=(x370|x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 8U;
	volatile int64_t x375 = INT64_MAX;
	int16_t x376 = 31;

	t93 = ((x373<=(x374|x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	int64_t x380 = INT64_MIN;
	int32_t t94 = 34077;

	t94 = ((x377<=(x378|x379))<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 6U;
	int32_t x382 = -872705635;
	static volatile int16_t x384 = INT16_MIN;
	int32_t t95 = 70716881;

	t95 = ((x381<=(x382|x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 1;
	int16_t x386 = -380;
	static int32_t x387 = 70;
	static int16_t x388 = INT16_MIN;

	t96 = ((x385<=(x386|x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = INT64_MIN;
	int64_t x390 = INT64_MIN;
	uint8_t x392 = 114U;
	int32_t t97 = -3756085;

	t97 = ((x389<=(x390|x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	volatile int32_t t98 = -60;

	t98 = ((x393<=(x394|x395))<x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 222U;
	int64_t x399 = INT64_MAX;
	int8_t x400 = 5;

	t99 = ((x397<=(x398|x399))<x400);

	if (t99 != 1) { NG(); } else { ; }
	
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

