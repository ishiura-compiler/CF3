#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 7U;
volatile int32_t t0 = -29138772;
int16_t x14 = 1534;
static volatile int64_t x15 = -1LL;
int32_t t3 = 18;
int16_t x19 = INT16_MIN;
volatile int32_t t5 = -9508554;
static uint32_t x25 = UINT32_MAX;
static int64_t x28 = INT64_MIN;
static int64_t x29 = INT64_MIN;
static int8_t x30 = -1;
static int8_t x32 = 3;
int32_t t7 = 1027642;
static uint8_t x34 = 5U;
int32_t t8 = 76;
static int8_t x39 = -28;
volatile int32_t x40 = INT32_MAX;
uint32_t x42 = 218790U;
uint8_t x50 = UINT8_MAX;
int64_t x54 = INT64_MIN;
volatile uint16_t x64 = 0U;
volatile uint64_t x66 = 2LLU;
int32_t x67 = INT32_MIN;
uint8_t x77 = 59U;
static uint32_t x87 = 451U;
int32_t x90 = 16015;
uint64_t x91 = 17264LLU;
int8_t x100 = INT8_MAX;
int16_t x106 = INT16_MAX;
volatile uint8_t x111 = 31U;
int32_t t26 = -5;
int64_t x117 = -2622779203948720LL;
int32_t t29 = -29;
volatile int64_t x126 = INT64_MAX;
volatile int32_t t30 = 3578;
uint16_t x135 = 63U;
int16_t x136 = INT16_MIN;
int32_t x137 = 41;
int16_t x148 = INT16_MIN;
static volatile int32_t t34 = 1012536787;
uint8_t x155 = UINT8_MAX;
int64_t x158 = -1LL;
int8_t x159 = 15;
static int16_t x161 = INT16_MIN;
volatile int32_t x162 = 3814;
uint32_t x164 = 52U;
volatile int32_t x167 = 2613384;
volatile int64_t x175 = INT64_MIN;
uint8_t x182 = UINT8_MAX;
uint8_t x183 = 3U;
uint8_t x186 = 77U;
volatile int64_t x188 = INT64_MIN;
uint8_t x190 = UINT8_MAX;
volatile int32_t t45 = 16786868;
static volatile int32_t t46 = -3158471;
int32_t x204 = 2055;
int32_t x207 = INT32_MIN;
int8_t x208 = 0;
volatile int64_t x209 = INT64_MIN;
volatile int64_t x213 = 165440097302422LL;
uint32_t x223 = 761930301U;
static int32_t x224 = INT32_MIN;
int8_t x225 = INT8_MAX;
int8_t x230 = INT8_MIN;
uint32_t x233 = 129U;
static int8_t x236 = INT8_MIN;
int8_t x237 = INT8_MIN;
volatile uint16_t x238 = UINT16_MAX;
int8_t x244 = -1;
uint64_t x245 = 12143061484319LLU;
uint32_t x253 = 133595182U;
int16_t x255 = -21;
static int32_t x257 = INT32_MIN;
static volatile int64_t x259 = -1LL;
static volatile uint8_t x260 = 65U;
static volatile uint16_t x261 = 0U;
int32_t x263 = -382148235;
int8_t x264 = INT8_MIN;
volatile int32_t t62 = 6182904;
volatile int32_t x273 = -18;
int32_t x274 = INT32_MIN;
volatile int32_t t66 = -17347;
int64_t x283 = -1LL;
volatile int32_t t67 = -22176315;
volatile int32_t t68 = -161;
static int32_t x292 = INT32_MAX;
int8_t x295 = INT8_MAX;
static volatile int16_t x299 = INT16_MIN;
uint16_t x302 = 1U;
volatile int32_t x305 = INT32_MIN;
uint16_t x311 = UINT16_MAX;
volatile uint64_t x312 = 85770306472LLU;
static int8_t x315 = -8;
uint8_t x316 = UINT8_MAX;
uint64_t x317 = 132444910992361569LLU;
static volatile uint8_t x320 = 16U;
volatile int16_t x324 = -1;
int8_t x329 = INT8_MIN;
volatile int32_t t79 = 5408;
int16_t x334 = INT16_MAX;
volatile int32_t t80 = -1;
int8_t x340 = INT8_MIN;
static volatile int32_t t81 = -273640742;
int16_t x341 = INT16_MIN;
volatile uint32_t x343 = UINT32_MAX;
static int32_t t82 = 10413488;
int64_t x350 = 18291LL;
volatile int64_t x352 = -1LL;
int64_t x356 = -2162351274LL;
static int32_t x364 = INT32_MIN;
volatile int32_t x376 = -2979;
static int32_t x381 = 3137312;
static int16_t x384 = -3187;
static uint8_t x400 = 47U;
uint16_t x413 = UINT16_MAX;


void f0(void) {
	int32_t x2 = 1061329079;
	int16_t x3 = INT16_MIN;
	static int64_t x4 = -7231129LL;

	t0 = (((x1&x2)/x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	static int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MAX;
	volatile int32_t x8 = INT32_MIN;
	int32_t t1 = -7;

	t1 = (((x5&x6)/x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint8_t x10 = 1U;
	static int8_t x11 = -27;
	static int16_t x12 = 12;
	static volatile int32_t t2 = 5714;

	t2 = (((x9&x10)/x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile uint32_t x16 = 7714899U;

	t3 = (((x13&x14)/x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint64_t x17 = 0LLU;
	int16_t x18 = INT16_MIN;
	int8_t x20 = INT8_MIN;
	static int32_t t4 = -1042617;

	t4 = (((x17&x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 152954LLU;
	int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MIN;
	uint16_t x24 = 4U;

	t5 = (((x21&x22)/x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 24U;
	uint16_t x27 = 19720U;
	static int32_t t6 = 5485005;

	t6 = (((x25&x26)/x27)<=x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x31 = INT32_MAX;

	t7 = (((x29&x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 773U;
	static uint32_t x35 = 22228525U;
	uint16_t x36 = 133U;

	t8 = (((x33&x34)/x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	uint32_t x38 = 77691U;
	static int32_t t9 = -689408980;

	t9 = (((x37&x38)/x39)<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 174U;
	int64_t x43 = INT64_MIN;
	static volatile int8_t x44 = 3;
	volatile int32_t t10 = 196290637;

	t10 = (((x41&x42)/x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	static int32_t x46 = INT32_MAX;
	int64_t x47 = -2181153144687LL;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -54910798;

	t11 = (((x45&x46)/x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 13U;
	int32_t x51 = -1;
	int64_t x52 = 24972432572124LL;
	int32_t t12 = 14;

	t12 = (((x49&x50)/x51)<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int64_t x55 = INT64_MIN;
	int16_t x56 = -1;
	volatile int32_t t13 = -764620612;

	t13 = (((x53&x54)/x55)<=x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 7U;
	int64_t x58 = -1LL;
	int8_t x59 = -3;
	int64_t x60 = INT64_MAX;
	static volatile int32_t t14 = 11418176;

	t14 = (((x57&x58)/x59)<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 2U;
	int16_t x62 = -1;
	int32_t x63 = INT32_MAX;
	int32_t t15 = 242471766;

	t15 = (((x61&x62)/x63)<=x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint64_t x68 = 74631LLU;
	static volatile int32_t t16 = 0;

	t16 = (((x65&x66)/x67)<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -60;
	uint16_t x70 = UINT16_MAX;
	uint64_t x71 = 24561LLU;
	volatile int64_t x72 = INT64_MIN;
	int32_t t17 = 874;

	t17 = (((x69&x70)/x71)<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = -789;
	volatile uint8_t x79 = UINT8_MAX;
	static volatile int16_t x80 = INT16_MIN;
	volatile int32_t t18 = -8;

	t18 = (((x77&x78)/x79)<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 345U;
	static int16_t x82 = INT16_MIN;
	static int32_t x83 = INT32_MIN;
	volatile int32_t x84 = INT32_MAX;
	volatile int32_t t19 = -5704208;

	t19 = (((x81&x82)/x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MAX;
	uint32_t x86 = 29666U;
	static uint8_t x88 = 28U;
	volatile int32_t t20 = 1;

	t20 = (((x85&x86)/x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 35706LLU;
	uint64_t x92 = 811205451984386869LLU;
	volatile int32_t t21 = 2;

	t21 = (((x89&x90)/x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 1631507U;
	static int64_t x94 = INT64_MIN;
	int8_t x95 = 7;
	int64_t x96 = INT64_MIN;
	int32_t t22 = 15;

	t22 = (((x93&x94)/x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MIN;
	int16_t x98 = 204;
	int16_t x99 = INT16_MIN;
	volatile int32_t t23 = -103592;

	t23 = (((x97&x98)/x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x101 = 30432683287451145LLU;
	volatile uint16_t x102 = 3891U;
	uint32_t x103 = UINT32_MAX;
	volatile uint32_t x104 = 1823U;
	int32_t t24 = -292532439;

	t24 = (((x101&x102)/x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = UINT64_MAX;
	int8_t x107 = -1;
	uint8_t x108 = 4U;
	static int32_t t25 = 33125960;

	t25 = (((x105&x106)/x107)<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = 0;
	static uint16_t x110 = 8753U;
	int64_t x112 = -1557551493907642130LL;

	t26 = (((x109&x110)/x111)<=x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x113 = -14;
	volatile int16_t x114 = -12068;
	int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int32_t t27 = 3;

	t27 = (((x113&x114)/x115)<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x118 = 10775U;
	uint32_t x119 = 773U;
	int8_t x120 = INT8_MAX;
	volatile int32_t t28 = 1244054;

	t28 = (((x117&x118)/x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -1LL;
	int64_t x122 = INT64_MAX;
	int64_t x123 = -82189867LL;
	static volatile int8_t x124 = 56;

	t29 = (((x121&x122)/x123)<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MAX;
	volatile int8_t x127 = INT8_MIN;
	volatile uint32_t x128 = 129873U;

	t30 = (((x125&x126)/x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = UINT32_MAX;
	static volatile int8_t x134 = INT8_MIN;
	volatile int32_t t31 = -1;

	t31 = (((x133&x134)/x135)<=x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x138 = 22U;
	uint8_t x139 = 3U;
	volatile int16_t x140 = -1;
	int32_t t32 = -186779;

	t32 = (((x137&x138)/x139)<=x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = INT16_MIN;
	int8_t x142 = -53;
	static int64_t x143 = INT64_MAX;
	int64_t x144 = INT64_MIN;
	static int32_t t33 = 1180;

	t33 = (((x141&x142)/x143)<=x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	int16_t x146 = INT16_MIN;
	volatile int16_t x147 = -1;

	t34 = (((x145&x146)/x147)<=x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = INT16_MIN;
	int64_t x150 = -25727LL;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	volatile int32_t t35 = -1871;

	t35 = (((x149&x150)/x151)<=x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -1;
	int32_t x154 = 1;
	uint16_t x156 = 2U;
	static volatile int32_t t36 = 1;

	t36 = (((x153&x154)/x155)<=x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x157 = 30U;
	uint32_t x160 = 490816U;
	volatile int32_t t37 = -3505;

	t37 = (((x157&x158)/x159)<=x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x163 = INT64_MIN;
	int32_t t38 = -18704820;

	t38 = (((x161&x162)/x163)<=x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = 214;
	int32_t x166 = INT32_MAX;
	uint16_t x168 = 498U;
	int32_t t39 = -1018685644;

	t39 = (((x165&x166)/x167)<=x168);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x169 = INT16_MIN;
	static uint64_t x170 = 748236800402130LLU;
	int8_t x171 = INT8_MIN;
	volatile uint64_t x172 = 7344101707861LLU;
	volatile int32_t t40 = -27237959;

	t40 = (((x169&x170)/x171)<=x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x173 = -2;
	int64_t x174 = INT64_MAX;
	uint32_t x176 = UINT32_MAX;
	static int32_t t41 = 3445111;

	t41 = (((x173&x174)/x175)<=x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x177 = 91U;
	uint16_t x178 = 748U;
	int16_t x179 = INT16_MIN;
	int64_t x180 = INT64_MIN;
	int32_t t42 = 67;

	t42 = (((x177&x178)/x179)<=x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x181 = UINT32_MAX;
	static int16_t x184 = INT16_MAX;
	int32_t t43 = -46278389;

	t43 = (((x181&x182)/x183)<=x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	int16_t x187 = 3;
	volatile int32_t t44 = 873;

	t44 = (((x185&x186)/x187)<=x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1;
	static int64_t x191 = INT64_MAX;
	volatile int32_t x192 = INT32_MAX;

	t45 = (((x189&x190)/x191)<=x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	int32_t x200 = -1;

	t46 = (((x197&x198)/x199)<=x200);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 0U;
	static volatile int32_t x202 = -7;
	volatile uint64_t x203 = UINT64_MAX;
	int32_t t47 = 563780;

	t47 = (((x201&x202)/x203)<=x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x205 = -1LL;
	int8_t x206 = 2;
	int32_t t48 = 2;

	t48 = (((x205&x206)/x207)<=x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x210 = -12604;
	static uint32_t x211 = UINT32_MAX;
	uint32_t x212 = UINT32_MAX;
	static volatile int32_t t49 = 3620217;

	t49 = (((x209&x210)/x211)<=x212);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = INT32_MIN;
	uint8_t x216 = 30U;
	volatile int32_t t50 = 61;

	t50 = (((x213&x214)/x215)<=x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = -1;
	int64_t x218 = -49835926LL;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = INT16_MIN;
	int32_t t51 = -377950;

	t51 = (((x217&x218)/x219)<=x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = INT32_MIN;
	uint8_t x222 = 112U;
	volatile int32_t t52 = -7860;

	t52 = (((x221&x222)/x223)<=x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x226 = 6510U;
	int16_t x227 = INT16_MIN;
	int32_t x228 = 21;
	volatile int32_t t53 = 2077584;

	t53 = (((x225&x226)/x227)<=x228);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	int64_t x231 = 953LL;
	int8_t x232 = INT8_MAX;
	static int32_t t54 = -2;

	t54 = (((x229&x230)/x231)<=x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x234 = 435619LL;
	volatile uint64_t x235 = 8364314355LLU;
	int32_t t55 = -946954;

	t55 = (((x233&x234)/x235)<=x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x239 = 23479493U;
	int32_t x240 = INT32_MAX;
	volatile int32_t t56 = -33;

	t56 = (((x237&x238)/x239)<=x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = UINT64_MAX;
	int64_t x242 = -14424068LL;
	int64_t x243 = INT64_MIN;
	int32_t t57 = 63502364;

	t57 = (((x241&x242)/x243)<=x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x246 = 1LL;
	int64_t x247 = INT64_MIN;
	static int8_t x248 = 6;
	int32_t t58 = 739;

	t58 = (((x245&x246)/x247)<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = -1LL;
	int8_t x250 = INT8_MIN;
	uint16_t x251 = 13232U;
	static uint8_t x252 = UINT8_MAX;
	static volatile int32_t t59 = 55270;

	t59 = (((x249&x250)/x251)<=x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x254 = 56;
	uint64_t x256 = 189LLU;
	int32_t t60 = 3535866;

	t60 = (((x253&x254)/x255)<=x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x258 = 1;
	static volatile int32_t t61 = -7435;

	t61 = (((x257&x258)/x259)<=x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x262 = INT16_MIN;

	t62 = (((x261&x262)/x263)<=x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = 93LL;
	volatile int16_t x267 = 1021;
	volatile uint64_t x268 = 70262LLU;
	int32_t t63 = -47;

	t63 = (((x265&x266)/x267)<=x268);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	volatile int64_t x270 = 16124763LL;
	int32_t x271 = -1;
	volatile uint32_t x272 = UINT32_MAX;
	int32_t t64 = 520;

	t64 = (((x269&x270)/x271)<=x272);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x275 = 912420298530LL;
	volatile uint64_t x276 = UINT64_MAX;
	volatile int32_t t65 = -21;

	t65 = (((x273&x274)/x275)<=x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -1;
	static uint64_t x278 = UINT64_MAX;
	int32_t x279 = 1290394;
	volatile int32_t x280 = INT32_MAX;

	t66 = (((x277&x278)/x279)<=x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int8_t x282 = INT8_MIN;
	uint32_t x284 = 1996U;

	t67 = (((x281&x282)/x283)<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = INT16_MIN;
	volatile int16_t x287 = INT16_MIN;
	volatile uint64_t x288 = 12LLU;

	t68 = (((x285&x286)/x287)<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x289 = -1LL;
	int16_t x290 = 0;
	uint32_t x291 = 930627U;
	int32_t t69 = -132377808;

	t69 = (((x289&x290)/x291)<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x293 = 88U;
	uint32_t x294 = UINT32_MAX;
	int64_t x296 = 671961LL;
	int32_t t70 = 74700254;

	t70 = (((x293&x294)/x295)<=x296);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x297 = UINT32_MAX;
	uint16_t x298 = UINT16_MAX;
	static volatile int32_t x300 = 10208;
	volatile int32_t t71 = 12;

	t71 = (((x297&x298)/x299)<=x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 1;
	uint16_t x303 = 12U;
	int16_t x304 = -5;
	static volatile int32_t t72 = 15381047;

	t72 = (((x301&x302)/x303)<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x306 = -1;
	static int32_t x307 = INT32_MIN;
	volatile uint32_t x308 = UINT32_MAX;
	int32_t t73 = 48;

	t73 = (((x305&x306)/x307)<=x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MIN;
	static int16_t x310 = INT16_MIN;
	volatile int32_t t74 = -44228742;

	t74 = (((x309&x310)/x311)<=x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	static volatile int16_t x314 = -67;
	static int32_t t75 = 20036;

	t75 = (((x313&x314)/x315)<=x316);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x318 = 1131599198980986769LLU;
	int16_t x319 = INT16_MAX;
	static int32_t t76 = 265541;

	t76 = (((x317&x318)/x319)<=x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x321 = INT8_MAX;
	static int32_t x322 = 7;
	int32_t x323 = 27569;
	volatile int32_t t77 = -121834062;

	t77 = (((x321&x322)/x323)<=x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = 6;
	uint64_t x326 = 17958361833253383LLU;
	uint16_t x327 = 157U;
	int64_t x328 = INT64_MIN;
	int32_t t78 = -1399438;

	t78 = (((x325&x326)/x327)<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x330 = 125845723237222LL;
	int64_t x331 = INT64_MAX;
	static uint64_t x332 = UINT64_MAX;

	t79 = (((x329&x330)/x331)<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x333 = 25;
	volatile uint32_t x335 = 1341U;
	int64_t x336 = -1LL;

	t80 = (((x333&x334)/x335)<=x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = -200945824;
	volatile int64_t x338 = INT64_MIN;
	static uint8_t x339 = 6U;

	t81 = (((x337&x338)/x339)<=x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x342 = INT32_MIN;
	int8_t x344 = -1;

	t82 = (((x341&x342)/x343)<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x345 = INT32_MAX;
	int32_t x346 = -1;
	uint32_t x347 = UINT32_MAX;
	uint64_t x348 = 8341LLU;
	static int32_t t83 = -1185558;

	t83 = (((x345&x346)/x347)<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x351 = INT8_MAX;
	int32_t t84 = 106;

	t84 = (((x349&x350)/x351)<=x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x353 = 2;
	uint64_t x354 = 1739620127LLU;
	static int64_t x355 = INT64_MAX;
	int32_t t85 = 1516;

	t85 = (((x353&x354)/x355)<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = -58LL;
	static int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	uint64_t x360 = 8006LLU;
	int32_t t86 = -7494806;

	t86 = (((x357&x358)/x359)<=x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = INT64_MIN;
	int64_t x362 = 8735907128LL;
	int16_t x363 = INT16_MIN;
	volatile int32_t t87 = -62248;

	t87 = (((x361&x362)/x363)<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = -36;
	volatile int32_t x366 = INT32_MAX;
	int8_t x367 = -4;
	uint32_t x368 = 4445820U;
	int32_t t88 = -13;

	t88 = (((x365&x366)/x367)<=x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x369 = UINT16_MAX;
	uint32_t x370 = UINT32_MAX;
	int16_t x371 = INT16_MAX;
	static uint64_t x372 = 395662703896LLU;
	int32_t t89 = 0;

	t89 = (((x369&x370)/x371)<=x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = 92172903071550619LLU;
	int16_t x374 = INT16_MIN;
	int8_t x375 = -30;
	int32_t t90 = -72995;

	t90 = (((x373&x374)/x375)<=x376);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x377 = -1;
	int32_t x378 = -793;
	uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MAX;
	int32_t t91 = 191256;

	t91 = (((x377&x378)/x379)<=x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x382 = -1LL;
	int16_t x383 = INT16_MIN;
	static int32_t t92 = 720;

	t92 = (((x381&x382)/x383)<=x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x385 = -859436985;
	static volatile int64_t x386 = INT64_MIN;
	uint8_t x387 = 5U;
	int64_t x388 = -1LL;
	volatile int32_t t93 = -1;

	t93 = (((x385&x386)/x387)<=x388);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -67106146;
	int16_t x390 = INT16_MAX;
	uint64_t x391 = UINT64_MAX;
	int16_t x392 = 230;
	static volatile int32_t t94 = 596343;

	t94 = (((x389&x390)/x391)<=x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = 552U;
	int32_t x399 = -1;
	volatile int32_t t95 = -1;

	t95 = (((x397&x398)/x399)<=x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x401 = INT64_MAX;
	int16_t x402 = 8032;
	uint16_t x403 = 8638U;
	static int8_t x404 = INT8_MAX;
	int32_t t96 = -1611;

	t96 = (((x401&x402)/x403)<=x404);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x405 = INT64_MIN;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MIN;
	int8_t x408 = INT8_MAX;
	int32_t t97 = 14;

	t97 = (((x405&x406)/x407)<=x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x409 = 483144580LLU;
	uint8_t x410 = UINT8_MAX;
	static int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;
	int32_t t98 = -1;

	t98 = (((x409&x410)/x411)<=x412);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x414 = 41U;
	uint64_t x415 = 76LLU;
	uint64_t x416 = 14932280546326557LLU;
	volatile int32_t t99 = -199;

	t99 = (((x413&x414)/x415)<=x416);

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

