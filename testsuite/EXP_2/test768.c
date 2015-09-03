#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = -1;
int64_t x12 = INT64_MIN;
int64_t x15 = INT64_MIN;
uint32_t x22 = 6192879U;
volatile uint64_t t5 = 88LLU;
uint64_t x27 = 607406443LLU;
uint32_t x28 = UINT32_MAX;
volatile uint16_t x34 = 6865U;
static int32_t x45 = INT32_MAX;
volatile int64_t t11 = 111571209074420176LL;
int16_t x61 = INT16_MAX;
int32_t x65 = -92575122;
uint64_t t15 = 627550008215777815LLU;
int8_t x75 = INT8_MAX;
volatile int8_t x85 = -1;
static volatile int16_t x86 = INT16_MIN;
int64_t x87 = INT64_MIN;
int32_t x98 = -43796;
int16_t x101 = -1;
int32_t x104 = INT32_MIN;
static uint8_t x105 = UINT8_MAX;
static int16_t x108 = INT16_MIN;
uint64_t x115 = 2088423383733128855LLU;
int32_t x119 = INT32_MIN;
uint16_t x122 = 471U;
int16_t x128 = 53;
static int32_t x137 = 406;
uint64_t x139 = 2352389452LLU;
uint16_t x140 = UINT16_MAX;
int8_t x142 = -8;
int32_t x148 = -1;
uint32_t x151 = 406835173U;
uint64_t x162 = UINT64_MAX;
int32_t x166 = INT32_MIN;
int16_t x169 = INT16_MIN;
int8_t x171 = -47;
uint16_t x177 = UINT16_MAX;
static int64_t x179 = INT64_MIN;
int32_t x183 = INT32_MAX;
uint32_t t42 = 494U;
volatile int32_t t43 = 1027111914;
uint16_t x189 = UINT16_MAX;
int16_t x192 = INT16_MAX;
static int8_t x197 = INT8_MAX;
volatile uint64_t t46 = 225LLU;
static int32_t x210 = INT32_MIN;
volatile int16_t x212 = INT16_MAX;
int32_t x218 = INT32_MIN;
int64_t x223 = INT64_MIN;
int32_t x231 = INT32_MAX;
volatile int32_t x236 = -1;
int32_t x245 = INT32_MIN;
uint8_t x256 = 10U;
int64_t x258 = INT64_MIN;
uint8_t x263 = 51U;
int32_t x264 = INT32_MIN;
int8_t x267 = -51;
int32_t x271 = INT32_MIN;
volatile int32_t t65 = -345;
uint8_t x277 = UINT8_MAX;
uint16_t x278 = UINT16_MAX;
int8_t x280 = INT8_MIN;
int16_t x282 = INT16_MIN;
uint64_t x284 = 109LLU;
uint32_t x295 = UINT32_MAX;
volatile uint8_t x296 = UINT8_MAX;
int8_t x302 = INT8_MIN;
int8_t x303 = -1;
static int8_t x305 = 1;
static int32_t x308 = -1;
int16_t x309 = -188;
static int32_t t74 = INT32_MIN;
uint8_t x315 = UINT8_MAX;
int8_t x318 = INT8_MIN;
volatile uint16_t x322 = 32621U;
uint64_t x324 = UINT64_MAX;
uint64_t x327 = 5314474769038037807LLU;
volatile int32_t x334 = INT32_MIN;
static uint8_t x336 = 0U;
int32_t t82 = INT32_MAX;
int64_t x348 = INT64_MAX;
uint16_t x350 = 91U;
uint32_t x355 = UINT32_MAX;
uint16_t x356 = UINT16_MAX;
int32_t t85 = 81;
volatile uint64_t t88 = 10785LLU;
int16_t x370 = INT16_MIN;
int16_t x380 = -1;
int32_t t91 = 234309;
volatile int32_t t92 = -347525;
static uint64_t x392 = 2105249631380LLU;
volatile int32_t t95 = -32289;
static int32_t x397 = INT32_MIN;
static uint64_t x403 = 58554711570848LLU;
uint8_t x404 = 93U;
volatile int32_t t97 = -3598;
volatile uint32_t x408 = 92U;
static volatile uint32_t t98 = 292382U;


void f0(void) {
	uint16_t x1 = 11744U;
	static int16_t x2 = 119;
	int32_t x3 = 836576;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 65008;

	t0 = ((x1==(x2%x3))+x4);

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MIN;
	static uint64_t x7 = 1556026872408003LLU;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 1;

	t1 = ((x5==(x6%x7))+x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	int64_t x10 = INT64_MAX;
	uint32_t x11 = 55939305U;
	volatile int64_t t2 = INT64_MIN;

	t2 = ((x9==(x10%x11))+x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = UINT8_MAX;
	int64_t x14 = -3481572LL;
	static volatile int64_t x16 = INT64_MAX;
	volatile int64_t t3 = INT64_MAX;

	t3 = ((x13==(x14%x15))+x16);

	if (t3 != INT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -10;
	volatile int32_t x18 = 0;
	static uint16_t x19 = UINT16_MAX;
	volatile int8_t x20 = 4;
	volatile int32_t t4 = -174604746;

	t4 = ((x17==(x18%x19))+x20);

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = 115149353090LLU;

	t5 = ((x21==(x22%x23))+x24);

	if (t5 != 115149353090LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -97;
	int16_t x26 = INT16_MIN;
	static uint32_t t6 = UINT32_MAX;

	t6 = ((x25==(x26%x27))+x28);

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint64_t x29 = 1913584469509LLU;
	static int16_t x30 = INT16_MIN;
	int64_t x31 = INT64_MIN;
	volatile uint64_t x32 = 237334955255402484LLU;
	uint64_t t7 = 11496278LLU;

	t7 = ((x29==(x30%x31))+x32);

	if (t7 != 237334955255402484LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	static uint64_t x35 = 264884797LLU;
	static volatile int16_t x36 = INT16_MAX;
	int32_t t8 = -10779;

	t8 = ((x33==(x34%x35))+x36);

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1;
	static uint64_t x38 = 1720177201427LLU;
	int32_t x39 = 28;
	uint64_t x40 = 6027604323932389LLU;
	uint64_t t9 = 21994LLU;

	t9 = ((x37==(x38%x39))+x40);

	if (t9 != 6027604323932389LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = 26891008;
	int64_t x47 = -4576948461194773LL;
	static int32_t x48 = -1;
	int32_t t10 = 639519;

	t10 = ((x45==(x46%x47))+x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	uint32_t x50 = UINT32_MAX;
	int16_t x51 = -1;
	static int64_t x52 = 6772739LL;

	t11 = ((x49==(x50%x51))+x52);

	if (t11 != 6772739LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 34U;
	int8_t x58 = -3;
	volatile int32_t x59 = INT32_MIN;
	int32_t x60 = -1;
	int32_t t12 = 124;

	t12 = ((x57==(x58%x59))+x60);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = INT8_MIN;
	int16_t x63 = 4;
	static volatile int8_t x64 = INT8_MAX;
	int32_t t13 = -10681;

	t13 = ((x61==(x62%x63))+x64);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = -2551183507LL;
	int8_t x67 = -1;
	uint64_t x68 = UINT64_MAX;
	uint64_t t14 = UINT64_MAX;

	t14 = ((x65==(x66%x67))+x68);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x69 = INT64_MIN;
	static uint8_t x70 = 2U;
	int8_t x71 = INT8_MIN;
	uint64_t x72 = 6429132LLU;

	t15 = ((x69==(x70%x71))+x72);

	if (t15 != 6429132LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 5U;
	int16_t x74 = INT16_MIN;
	int32_t x76 = INT32_MIN;
	static int32_t t16 = INT32_MIN;

	t16 = ((x73==(x74%x75))+x76);

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x77 = UINT64_MAX;
	volatile int64_t x78 = INT64_MIN;
	int64_t x79 = -241LL;
	int32_t x80 = -3538549;
	int32_t t17 = 23;

	t17 = ((x77==(x78%x79))+x80);

	if (t17 != -3538549) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	volatile int8_t x82 = INT8_MIN;
	uint16_t x83 = 2786U;
	int32_t x84 = -1;
	volatile int32_t t18 = -1;

	t18 = ((x81==(x82%x83))+x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x88 = 510942291LLU;
	static uint64_t t19 = 63646828522365LLU;

	t19 = ((x85==(x86%x87))+x88);

	if (t19 != 510942291LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x89 = INT64_MIN;
	uint64_t x90 = 904159LLU;
	int64_t x91 = INT64_MIN;
	int32_t x92 = -62475846;
	int32_t t20 = 9;

	t20 = ((x89==(x90%x91))+x92);

	if (t20 != -62475846) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = -1;
	int32_t x95 = 301145882;
	int32_t x96 = INT32_MIN;
	volatile int32_t t21 = INT32_MIN;

	t21 = ((x93==(x94%x95))+x96);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 22;
	volatile uint32_t x99 = UINT32_MAX;
	volatile uint8_t x100 = 9U;
	int32_t t22 = -1481;

	t22 = ((x97==(x98%x99))+x100);

	if (t22 != 9) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x102 = 11709U;
	static int32_t x103 = -1;
	int32_t t23 = INT32_MIN;

	t23 = ((x101==(x102%x103))+x104);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = -1;
	int16_t x107 = -1;
	volatile int32_t t24 = 16184;

	t24 = ((x105==(x106%x107))+x108);

	if (t24 != -32768) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x109 = 168U;
	static uint16_t x110 = 3886U;
	uint32_t x111 = UINT32_MAX;
	volatile uint64_t x112 = 5360529336833801LLU;
	volatile uint64_t t25 = 1547680187956961325LLU;

	t25 = ((x109==(x110%x111))+x112);

	if (t25 != 5360529336833801LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x113 = 238U;
	int32_t x114 = INT32_MIN;
	int8_t x116 = INT8_MIN;
	volatile int32_t t26 = -6481;

	t26 = ((x113==(x114%x115))+x116);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = INT8_MAX;
	static int32_t x118 = INT32_MIN;
	int8_t x120 = INT8_MIN;
	int32_t t27 = 243008;

	t27 = ((x117==(x118%x119))+x120);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = 253781965088401832LLU;
	volatile int64_t x123 = -1LL;
	uint8_t x124 = 0U;
	static volatile int32_t t28 = 7;

	t28 = ((x121==(x122%x123))+x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	uint16_t x126 = 0U;
	static uint32_t x127 = UINT32_MAX;
	volatile int32_t t29 = -18940580;

	t29 = ((x125==(x126%x127))+x128);

	if (t29 != 53) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x133 = -1;
	static int16_t x134 = INT16_MIN;
	int32_t x135 = INT32_MIN;
	volatile int64_t x136 = -1LL;
	static volatile int64_t t30 = 82157106407LL;

	t30 = ((x133==(x134%x135))+x136);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x138 = 964823;
	int32_t t31 = -6;

	t31 = ((x137==(x138%x139))+x140);

	if (t31 != 65535) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = 3U;
	static uint64_t x143 = UINT64_MAX;
	int64_t x144 = INT64_MIN;
	static int64_t t32 = INT64_MIN;

	t32 = ((x141==(x142%x143))+x144);

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -3391;
	int32_t x146 = -55930;
	int32_t x147 = -1;
	int32_t t33 = -2609;

	t33 = ((x145==(x146%x147))+x148);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = 479868771427LL;
	static volatile int8_t x152 = INT8_MAX;
	static int32_t t34 = -20;

	t34 = ((x149==(x150%x151))+x152);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = 1;
	int16_t x154 = INT16_MIN;
	static int8_t x155 = -1;
	volatile int32_t x156 = INT32_MAX;
	volatile int32_t t35 = INT32_MAX;

	t35 = ((x153==(x154%x155))+x156);

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 1LL;
	volatile int8_t x158 = -43;
	volatile int8_t x159 = 6;
	int32_t x160 = -1;
	volatile int32_t t36 = 3;

	t36 = ((x157==(x158%x159))+x160);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x161 = -34;
	uint8_t x163 = 1U;
	int8_t x164 = 0;
	volatile int32_t t37 = -14482959;

	t37 = ((x161==(x162%x163))+x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x165 = INT8_MIN;
	int64_t x167 = INT64_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t38 = 23762674;

	t38 = ((x165==(x166%x167))+x168);

	if (t38 != 65535) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x170 = 1015;
	uint16_t x172 = UINT16_MAX;
	int32_t t39 = 92;

	t39 = ((x169==(x170%x171))+x172);

	if (t39 != 65535) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x173 = 13572085966LLU;
	int16_t x174 = -1;
	uint64_t x175 = 953918781LLU;
	int8_t x176 = INT8_MIN;
	volatile int32_t t40 = 3587;

	t40 = ((x173==(x174%x175))+x176);

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = 433881862064023LL;
	static int16_t x180 = -1003;
	static int32_t t41 = 589;

	t41 = ((x177==(x178%x179))+x180);

	if (t41 != -1003) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = INT16_MIN;
	uint32_t x184 = 326309181U;

	t42 = ((x181==(x182%x183))+x184);

	if (t42 != 326309181U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = 0;
	int32_t x186 = -1;
	volatile int16_t x187 = -1902;
	volatile int16_t x188 = -1;

	t43 = ((x185==(x186%x187))+x188);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x190 = INT32_MIN;
	volatile int64_t x191 = INT64_MAX;
	volatile int32_t t44 = -57667;

	t44 = ((x189==(x190%x191))+x192);

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x193 = UINT8_MAX;
	uint64_t x194 = 2626582137981622LLU;
	static int32_t x195 = INT32_MAX;
	static int64_t x196 = INT64_MAX;
	volatile int64_t t45 = INT64_MAX;

	t45 = ((x193==(x194%x195))+x196);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x198 = -1;
	volatile int32_t x199 = -1;
	static uint64_t x200 = 852115187340202LLU;

	t46 = ((x197==(x198%x199))+x200);

	if (t46 != 852115187340202LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x201 = -1;
	uint16_t x202 = 68U;
	int16_t x203 = -1;
	int8_t x204 = -1;
	static int32_t t47 = -221;

	t47 = ((x201==(x202%x203))+x204);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = 522303076441057LL;
	int8_t x206 = -19;
	int32_t x207 = -1;
	int64_t x208 = -1LL;
	static volatile int64_t t48 = 11578221LL;

	t48 = ((x205==(x206%x207))+x208);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 37296U;
	int64_t x211 = INT64_MAX;
	int32_t t49 = -538382776;

	t49 = ((x209==(x210%x211))+x212);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x213 = INT32_MAX;
	static volatile uint32_t x214 = 298156U;
	volatile uint16_t x215 = 25305U;
	int64_t x216 = -4772146LL;
	volatile int64_t t50 = 3LL;

	t50 = ((x213==(x214%x215))+x216);

	if (t50 != -4772146LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	int32_t x220 = -1;
	volatile int32_t t51 = -16330;

	t51 = ((x217==(x218%x219))+x220);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = UINT16_MAX;
	static uint8_t x222 = 83U;
	volatile int64_t x224 = INT64_MIN;
	int64_t t52 = INT64_MIN;

	t52 = ((x221==(x222%x223))+x224);

	if (t52 != INT64_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x225 = UINT8_MAX;
	volatile uint8_t x226 = 10U;
	volatile int32_t x227 = 26975540;
	int16_t x228 = INT16_MAX;
	int32_t t53 = 94830742;

	t53 = ((x225==(x226%x227))+x228);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x229 = 1181U;
	uint32_t x230 = UINT32_MAX;
	int32_t x232 = -378;
	int32_t t54 = 36761;

	t54 = ((x229==(x230%x231))+x232);

	if (t54 != -378) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x233 = 15255U;
	static volatile int32_t x234 = 0;
	static int64_t x235 = INT64_MIN;
	volatile int32_t t55 = -2610541;

	t55 = ((x233==(x234%x235))+x236);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x237 = INT32_MIN;
	int16_t x238 = 714;
	volatile uint32_t x239 = 63U;
	volatile int64_t x240 = INT64_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x237==(x238%x239))+x240);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x241 = 16126854642975LLU;
	int16_t x242 = -11375;
	int64_t x243 = INT64_MIN;
	static uint32_t x244 = 1032004U;
	uint32_t t57 = 9U;

	t57 = ((x241==(x242%x243))+x244);

	if (t57 != 1032004U) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x246 = -1;
	static volatile uint8_t x247 = 1U;
	int32_t x248 = -1;
	int32_t t58 = -14009543;

	t58 = ((x245==(x246%x247))+x248);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	int64_t x252 = -1LL;
	volatile int64_t t59 = 20853886222LL;

	t59 = ((x249==(x250%x251))+x252);

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x253 = -18;
	int16_t x254 = INT16_MIN;
	volatile int64_t x255 = INT64_MIN;
	int32_t t60 = -154377700;

	t60 = ((x253==(x254%x255))+x256);

	if (t60 != 10) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = 0;
	int64_t x259 = 3228311263LL;
	int8_t x260 = INT8_MIN;
	int32_t t61 = -39;

	t61 = ((x257==(x258%x259))+x260);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x262 = 906585150U;
	int32_t t62 = INT32_MIN;

	t62 = ((x261==(x262%x263))+x264);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = -8590;
	uint32_t x266 = UINT32_MAX;
	uint64_t x268 = UINT64_MAX;
	static uint64_t t63 = UINT64_MAX;

	t63 = ((x265==(x266%x267))+x268);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -12LL;
	int32_t x270 = 1887179;
	int64_t x272 = -1LL;
	int64_t t64 = -7544830LL;

	t64 = ((x269==(x270%x271))+x272);

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x273 = 241U;
	uint8_t x274 = 117U;
	volatile uint64_t x275 = 9166734368223892366LLU;
	uint8_t x276 = UINT8_MAX;

	t65 = ((x273==(x274%x275))+x276);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x279 = -30;
	volatile int32_t t66 = 1225032;

	t66 = ((x277==(x278%x279))+x280);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	int64_t x283 = 21010366206809LL;
	uint64_t t67 = 1406492488003075135LLU;

	t67 = ((x281==(x282%x283))+x284);

	if (t67 != 109LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = 1949;
	static int64_t x286 = INT64_MIN;
	volatile int8_t x287 = INT8_MIN;
	static uint8_t x288 = UINT8_MAX;
	volatile int32_t t68 = -574211681;

	t68 = ((x285==(x286%x287))+x288);

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x289 = UINT64_MAX;
	static uint16_t x290 = 784U;
	uint8_t x291 = UINT8_MAX;
	static int32_t x292 = 11861;
	volatile int32_t t69 = 401855247;

	t69 = ((x289==(x290%x291))+x292);

	if (t69 != 11861) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	volatile uint16_t x294 = 4066U;
	int32_t t70 = 18520564;

	t70 = ((x293==(x294%x295))+x296);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	int64_t x298 = -225353239056220415LL;
	int16_t x299 = INT16_MIN;
	int64_t x300 = INT64_MIN;
	volatile int64_t t71 = INT64_MIN;

	t71 = ((x297==(x298%x299))+x300);

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	static int8_t x304 = INT8_MAX;
	int32_t t72 = -240;

	t72 = ((x301==(x302%x303))+x304);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x306 = INT16_MIN;
	static int64_t x307 = -12368178185570LL;
	int32_t t73 = 13872607;

	t73 = ((x305==(x306%x307))+x308);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x310 = INT8_MIN;
	int32_t x311 = INT32_MIN;
	int32_t x312 = INT32_MIN;

	t74 = ((x309==(x310%x311))+x312);

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = -70427847429LL;
	static uint32_t x314 = 7751U;
	int32_t x316 = INT32_MIN;
	int32_t t75 = INT32_MIN;

	t75 = ((x313==(x314%x315))+x316);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 25635U;
	static int16_t x319 = INT16_MIN;
	int32_t x320 = 122263;
	volatile int32_t t76 = 3933;

	t76 = ((x317==(x318%x319))+x320);

	if (t76 != 122263) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x321 = -226;
	static uint64_t x323 = UINT64_MAX;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x321==(x322%x323))+x324);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x325 = 39138053630LLU;
	int8_t x326 = INT8_MAX;
	static int32_t x328 = INT32_MIN;
	volatile int32_t t78 = INT32_MIN;

	t78 = ((x325==(x326%x327))+x328);

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = UINT32_MAX;
	uint32_t x330 = 454U;
	int64_t x331 = INT64_MIN;
	static uint16_t x332 = 836U;
	volatile int32_t t79 = -9694547;

	t79 = ((x329==(x330%x331))+x332);

	if (t79 != 836) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x335 = UINT64_MAX;
	int32_t t80 = -404976096;

	t80 = ((x333==(x334%x335))+x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x337 = 16054164979387LLU;
	int16_t x338 = 12;
	int16_t x339 = -3466;
	int64_t x340 = -1LL;
	volatile int64_t t81 = -2525966615826160LL;

	t81 = ((x337==(x338%x339))+x340);

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x341 = 97191524LLU;
	int16_t x342 = -94;
	volatile int8_t x343 = -1;
	int32_t x344 = INT32_MAX;

	t82 = ((x341==(x342%x343))+x344);

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	int16_t x346 = INT16_MIN;
	int16_t x347 = -1;
	volatile int64_t t83 = INT64_MAX;

	t83 = ((x345==(x346%x347))+x348);

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x349 = 72U;
	int64_t x351 = INT64_MIN;
	static int32_t x352 = INT32_MIN;
	int32_t t84 = INT32_MIN;

	t84 = ((x349==(x350%x351))+x352);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 14U;
	int64_t x354 = 32294003570LL;

	t85 = ((x353==(x354%x355))+x356);

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 7700U;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	volatile uint32_t x360 = UINT32_MAX;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = ((x357==(x358%x359))+x360);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x361 = -1;
	int32_t x362 = INT32_MAX;
	volatile int8_t x363 = -1;
	int8_t x364 = 14;
	static int32_t t87 = 165949904;

	t87 = ((x361==(x362%x363))+x364);

	if (t87 != 14) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x365 = 61U;
	int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	volatile uint64_t x368 = 23607LLU;

	t88 = ((x365==(x366%x367))+x368);

	if (t88 != 23607LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x369 = 1984168712174329006LLU;
	uint32_t x371 = 1723U;
	int8_t x372 = INT8_MAX;
	volatile int32_t t89 = -8343950;

	t89 = ((x369==(x370%x371))+x372);

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -1LL;
	int32_t x374 = -1;
	volatile uint64_t x375 = 7LLU;
	volatile uint16_t x376 = UINT16_MAX;
	int32_t t90 = 3;

	t90 = ((x373==(x374%x375))+x376);

	if (t90 != 65535) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = 3;
	static volatile uint8_t x378 = 1U;
	int32_t x379 = -906215;

	t91 = ((x377==(x378%x379))+x380);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x381 = 7803LLU;
	int8_t x382 = INT8_MIN;
	int8_t x383 = 34;
	int8_t x384 = INT8_MIN;

	t92 = ((x381==(x382%x383))+x384);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 1U;
	int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	volatile int64_t t93 = INT64_MIN;

	t93 = ((x385==(x386%x387))+x388);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -83390;
	volatile int64_t x390 = 165LL;
	int64_t x391 = INT64_MIN;
	uint64_t t94 = 35LLU;

	t94 = ((x389==(x390%x391))+x392);

	if (t94 != 2105249631380LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x393 = -1LL;
	uint8_t x394 = 2U;
	static int8_t x395 = 2;
	volatile int16_t x396 = -1;

	t95 = ((x393==(x394%x395))+x396);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x398 = 2216739790355LLU;
	int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MAX;
	int32_t t96 = 121647;

	t96 = ((x397==(x398%x399))+x400);

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 3840LLU;
	static uint64_t x402 = 1929113256613557LLU;

	t97 = ((x401==(x402%x403))+x404);

	if (t97 != 93) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = 0;
	int32_t x406 = INT32_MAX;
	static volatile int8_t x407 = -1;

	t98 = ((x405==(x406%x407))+x408);

	if (t98 != 93U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x409 = INT32_MIN;
	volatile int8_t x410 = -1;
	int32_t x411 = -42623;
	int64_t x412 = -1LL;
	int64_t t99 = 0LL;

	t99 = ((x409==(x410%x411))+x412);

	if (t99 != -1LL) { NG(); } else { ; }
	
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

