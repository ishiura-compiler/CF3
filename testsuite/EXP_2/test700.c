#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 369847U;
volatile int64_t t2 = -254437724LL;
uint64_t x20 = 323091495356358LLU;
int16_t x24 = INT16_MAX;
int64_t x27 = INT64_MIN;
volatile uint32_t x29 = 92972920U;
int64_t x31 = 11954LL;
volatile int32_t x33 = -1939341;
volatile int32_t x40 = 67;
int64_t x49 = INT64_MAX;
int32_t t12 = -163;
uint16_t x58 = UINT16_MAX;
int32_t x73 = INT32_MIN;
int32_t x77 = -1;
volatile int32_t t18 = 465698655;
int16_t x87 = -1;
int64_t t21 = 244074819245LL;
int32_t x99 = INT32_MIN;
int8_t x101 = INT8_MIN;
uint32_t x115 = 403491172U;
static int64_t x124 = INT64_MIN;
int32_t x126 = 112762761;
static int32_t x128 = -1;
int8_t x130 = 7;
static uint16_t x132 = UINT16_MAX;
uint32_t x135 = UINT32_MAX;
uint32_t x140 = UINT32_MAX;
static int64_t x145 = 4168851101280074992LL;
int32_t x146 = INT32_MIN;
int16_t x147 = -960;
static int32_t x152 = INT32_MIN;
uint32_t t35 = 273397U;
uint8_t x162 = UINT8_MAX;
static uint32_t x167 = UINT32_MAX;
static int8_t x171 = -1;
int16_t x175 = -1;
int32_t t40 = INT32_MIN;
static int32_t x181 = INT32_MIN;
uint32_t t43 = 10506551U;
int32_t t44 = 55377214;
uint64_t x196 = 52751315LLU;
static uint8_t x201 = 119U;
int8_t x219 = -1;
uint8_t x224 = 1U;
static volatile int64_t t51 = -1LL;
volatile int64_t x225 = 6362816065LL;
uint64_t t55 = 798602408LLU;
int64_t x241 = INT64_MIN;
int8_t x242 = -1;
static int8_t x249 = INT8_MAX;
static uint8_t x251 = 1U;
static int8_t x252 = INT8_MIN;
volatile int64_t t61 = 284598363309451007LL;
static uint8_t x268 = 4U;
int32_t x269 = -43851037;
int32_t x272 = -48664411;
volatile int32_t t63 = -39;
int8_t x276 = 1;
volatile int32_t t64 = 0;
int16_t x287 = INT16_MIN;
uint8_t x295 = 78U;
uint8_t x296 = 62U;
int8_t x315 = -26;
static int64_t x318 = 251345946LL;
static int8_t x320 = 0;
int16_t x328 = -1;
int64_t x333 = -1LL;
int8_t x347 = -2;
int64_t t81 = 1445662071863LL;
static uint16_t x356 = 15U;
int32_t x372 = -1;
static uint64_t x379 = UINT64_MAX;
uint64_t t87 = 1066078703955706LLU;
uint16_t x383 = 1U;
uint32_t x384 = UINT32_MAX;
int8_t x387 = INT8_MAX;
volatile int32_t t89 = 16277;
int8_t x393 = INT8_MIN;
static int32_t x396 = INT32_MAX;
volatile int32_t t91 = 263004;
uint64_t x401 = UINT64_MAX;
int32_t x402 = 2044;
volatile int16_t x412 = -592;
int32_t x419 = INT32_MAX;
volatile int32_t t97 = -120605;
int64_t x421 = -394711LL;
static uint32_t x422 = UINT32_MAX;


void f0(void) {
	int16_t x1 = -1;
	static uint32_t x2 = UINT32_MAX;
	int8_t x3 = -1;
	int8_t x4 = INT8_MIN;

	t0 = ((x1-(x2%x3))&x4);

	if (t0 != 4294967168U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = INT32_MAX;
	volatile int64_t x10 = INT64_MAX;
	static int64_t x11 = INT64_MIN;
	static int64_t x12 = -1LL;
	int64_t t1 = -13692968LL;

	t1 = ((x9-(x10%x11))&x12);

	if (t1 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x13 = UINT8_MAX;
	int32_t x14 = INT32_MIN;
	int64_t x15 = -1LL;
	static uint32_t x16 = UINT32_MAX;

	t2 = ((x13-(x14%x15))&x16);

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 1U;
	volatile int64_t x18 = -1LL;
	static int64_t x19 = -1LL;
	static uint64_t t3 = 8782081117137902083LLU;

	t3 = ((x17-(x18%x19))&x20);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -253;
	uint32_t x22 = 2042148U;
	volatile int32_t x23 = INT32_MIN;
	static uint32_t t4 = 1U;

	t4 = ((x21-(x22%x23))&x24);

	if (t4 != 21983U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = UINT8_MAX;
	static uint64_t x26 = 482321LLU;
	int8_t x28 = INT8_MIN;
	uint64_t t5 = 13206743276138LLU;

	t5 = ((x25-(x26%x27))&x28);

	if (t5 != 18446744073709069440LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x30 = INT64_MIN;
	int32_t x32 = INT32_MIN;
	int64_t t6 = -1LL;

	t6 = ((x29-(x30%x31))&x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x34 = INT32_MAX;
	int32_t x35 = -1;
	uint32_t x36 = 504245U;
	volatile uint32_t t7 = 2027U;

	t7 = ((x33-(x34%x35))&x36);

	if (t7 != 139313U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	int32_t x38 = INT32_MIN;
	int16_t x39 = -1;
	int32_t t8 = -13456163;

	t8 = ((x37-(x38%x39))&x40);

	if (t8 != 67) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int64_t x44 = -1LL;
	int64_t t9 = -42126LL;

	t9 = ((x41-(x42%x43))&x44);

	if (t9 != -127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	static int64_t x46 = -1LL;
	volatile int32_t x47 = -15391155;
	volatile uint8_t x48 = 1U;
	int64_t t10 = 0LL;

	t10 = ((x45-(x46%x47))&x48);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x50 = INT32_MIN;
	int16_t x51 = INT16_MIN;
	int64_t x52 = 3489183LL;
	int64_t t11 = -15557810LL;

	t11 = ((x49-(x50%x51))&x52);

	if (t11 != 3489183LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	static int32_t x54 = -190;
	static int8_t x55 = INT8_MIN;
	volatile uint8_t x56 = UINT8_MAX;

	t12 = ((x53-(x54%x55))&x56);

	if (t12 != 61) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 459U;
	volatile int32_t t13 = 2;

	t13 = ((x57-(x58%x59))&x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	static int16_t x62 = INT16_MIN;
	int16_t x63 = -1;
	volatile int16_t x64 = INT16_MAX;
	volatile int32_t t14 = 347179530;

	t14 = ((x61-(x62%x63))&x64);

	if (t14 != 32640) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	volatile int8_t x66 = INT8_MAX;
	uint32_t x67 = 22842337U;
	uint32_t x68 = 0U;
	static uint32_t t15 = 4U;

	t15 = ((x65-(x66%x67))&x68);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int16_t x70 = INT16_MIN;
	volatile uint16_t x71 = UINT16_MAX;
	uint32_t x72 = UINT32_MAX;
	uint32_t t16 = 153799753U;

	t16 = ((x69-(x70%x71))&x72);

	if (t16 != 2147516416U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = INT16_MIN;
	static int64_t x75 = -1LL;
	int8_t x76 = INT8_MAX;
	static volatile int64_t t17 = 10145352905120LL;

	t17 = ((x73-(x74%x75))&x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = 8018;
	int8_t x79 = -24;
	static int8_t x80 = INT8_MIN;

	t18 = ((x77-(x78%x79))&x80);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int64_t x81 = 183371348257199LL;
	volatile uint32_t x82 = 28U;
	static int64_t x83 = INT64_MIN;
	int64_t x84 = -1LL;
	int64_t t19 = -26569578037LL;

	t19 = ((x81-(x82%x83))&x84);

	if (t19 != 183371348257171LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 2954056734976861299LL;
	int16_t x86 = 1644;
	static volatile uint64_t x88 = 746082092211LLU;
	static uint64_t t20 = 177645921924152716LLU;

	t20 = ((x85-(x86%x87))&x88);

	if (t20 != 690225497139LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	volatile int64_t x96 = INT64_MAX;

	t21 = ((x93-(x94%x95))&x96);

	if (t21 != 255LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1;
	int32_t x98 = 2;
	uint16_t x100 = 6U;
	int32_t t22 = 0;

	t22 = ((x97-(x98%x99))&x100);

	if (t22 != 4) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x102 = -1;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = INT32_MAX;
	static volatile uint32_t t23 = 3U;

	t23 = ((x101-(x102%x103))&x104);

	if (t23 != 2147483520U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	volatile int64_t x110 = -250065914351354LL;
	static int16_t x111 = INT16_MAX;
	volatile int32_t x112 = INT32_MAX;
	volatile int64_t t24 = -1LL;

	t24 = ((x109-(x110%x111))&x112);

	if (t24 != 57529LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x113 = 6U;
	int16_t x114 = -1;
	int8_t x116 = -7;
	volatile uint32_t t25 = 256693U;

	t25 = ((x113-(x114%x115))&x116);

	if (t25 != 4034911721U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	volatile int16_t x118 = INT16_MAX;
	int32_t x119 = -1;
	volatile uint8_t x120 = 120U;
	int32_t t26 = 57596;

	t26 = ((x117-(x118%x119))&x120);

	if (t26 != 120) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MIN;
	int64_t t27 = INT64_MIN;

	t27 = ((x121-(x122%x123))&x124);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x125 = 58385LL;
	volatile uint32_t x127 = 24810U;
	volatile int64_t t28 = -276LL;

	t28 = ((x125-(x126%x127))&x128);

	if (t28 != 57074LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = INT8_MIN;
	volatile int8_t x131 = INT8_MIN;
	volatile int32_t t29 = -238129;

	t29 = ((x129-(x130%x131))&x132);

	if (t29 != 65401) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	static int64_t x136 = INT64_MIN;
	int64_t t30 = -6449405967545910LL;

	t30 = ((x133-(x134%x135))&x136);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MAX;
	volatile int8_t x138 = 0;
	uint16_t x139 = 8U;
	volatile int64_t t31 = -898225282597520183LL;

	t31 = ((x137-(x138%x139))&x140);

	if (t31 != 4294967295LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = -37460;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	uint8_t x144 = 1U;
	int32_t t32 = 66976640;

	t32 = ((x141-(x142%x143))&x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x148 = INT32_MIN;
	static int64_t t33 = 4983LL;

	t33 = ((x145-(x146%x147))&x148);

	if (t33 != 4168851100385935360LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = UINT8_MAX;
	int32_t x150 = -635409;
	uint16_t x151 = UINT16_MAX;
	int32_t t34 = 5653566;

	t34 = ((x149-(x150%x151))&x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x153 = -25;
	static uint32_t x154 = UINT32_MAX;
	static int8_t x155 = -7;
	static volatile uint8_t x156 = UINT8_MAX;

	t35 = ((x153-(x154%x155))&x156);

	if (t35 != 225U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x157 = 28U;
	static int16_t x158 = -1;
	static int32_t x159 = 1511708;
	static volatile uint8_t x160 = 16U;
	volatile int32_t t36 = -9772327;

	t36 = ((x157-(x158%x159))&x160);

	if (t36 != 16) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -11;
	static volatile int32_t x163 = -14;
	int16_t x164 = INT16_MIN;
	volatile int32_t t37 = 2268;

	t37 = ((x161-(x162%x163))&x164);

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = 98;
	int32_t x166 = INT32_MIN;
	int16_t x168 = 7293;
	volatile uint32_t t38 = 7181387U;

	t38 = ((x165-(x166%x167))&x168);

	if (t38 != 96U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = 576;
	int8_t x170 = -4;
	int32_t x172 = INT32_MAX;
	int32_t t39 = 10818054;

	t39 = ((x169-(x170%x171))&x172);

	if (t39 != 576) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x173 = -1;
	uint8_t x174 = 9U;
	int32_t x176 = INT32_MIN;

	t40 = ((x173-(x174%x175))&x176);

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	volatile int32_t x178 = -1;
	uint64_t x179 = UINT64_MAX;
	int8_t x180 = INT8_MIN;
	uint64_t t41 = 658890LLU;

	t41 = ((x177-(x178%x179))&x180);

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x182 = INT64_MIN;
	volatile uint8_t x183 = UINT8_MAX;
	int16_t x184 = INT16_MAX;
	int64_t t42 = 63238169LL;

	t42 = ((x181-(x182%x183))&x184);

	if (t42 != 128LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = 33;
	uint32_t x186 = UINT32_MAX;
	static uint8_t x187 = UINT8_MAX;
	int16_t x188 = INT16_MIN;

	t43 = ((x185-(x186%x187))&x188);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MAX;
	int32_t x190 = INT32_MAX;
	int32_t x191 = INT32_MIN;
	volatile int16_t x192 = -1;

	t44 = ((x189-(x190%x191))&x192);

	if (t44 != -2147450880) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	volatile int8_t x194 = -11;
	int16_t x195 = INT16_MAX;
	volatile uint64_t t45 = 6806239641LLU;

	t45 = ((x193-(x194%x195))&x196);

	if (t45 != 52723715LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MIN;
	uint16_t x199 = 107U;
	int32_t x200 = -1;
	volatile int32_t t46 = -48065;

	t46 = ((x197-(x198%x199))&x200);

	if (t46 != 195) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x202 = 163U;
	uint64_t x203 = 7286579936704LLU;
	uint32_t x204 = UINT32_MAX;
	static uint64_t t47 = 45611171469LLU;

	t47 = ((x201-(x202%x203))&x204);

	if (t47 != 4294967252LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -4386;
	static uint32_t x206 = 81919869U;
	static volatile uint64_t x207 = UINT64_MAX;
	int8_t x208 = INT8_MIN;
	volatile uint64_t t48 = 2410730270LLU;

	t48 = ((x205-(x206%x207))&x208);

	if (t48 != 18446744073627627264LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x213 = 29U;
	uint32_t x214 = 5U;
	uint16_t x215 = UINT16_MAX;
	static int64_t x216 = -34977111285421816LL;
	volatile int64_t t49 = -49712052938137247LL;

	t49 = ((x213-(x214%x215))&x216);

	if (t49 != 8LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x217 = -1;
	volatile int16_t x218 = -1;
	int32_t x220 = INT32_MIN;
	int32_t t50 = INT32_MIN;

	t50 = ((x217-(x218%x219))&x220);

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x221 = INT64_MIN;
	volatile int8_t x222 = INT8_MIN;
	int16_t x223 = INT16_MAX;

	t51 = ((x221-(x222%x223))&x224);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x226 = UINT8_MAX;
	volatile int32_t x227 = -2;
	int8_t x228 = -1;
	volatile int64_t t52 = 9634391751LL;

	t52 = ((x225-(x226%x227))&x228);

	if (t52 != 6362816064LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -60100;
	int16_t x230 = -1;
	int8_t x231 = INT8_MAX;
	int16_t x232 = 6726;
	volatile int32_t t53 = 24158;

	t53 = ((x229-(x230%x231))&x232);

	if (t53 != 4100) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = 15694639860143LL;
	int16_t x234 = INT16_MIN;
	int16_t x235 = -1;
	volatile uint16_t x236 = 99U;
	int64_t t54 = -321LL;

	t54 = ((x233-(x234%x235))&x236);

	if (t54 != 35LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x237 = INT32_MIN;
	static int32_t x238 = -1;
	static uint64_t x239 = 6367117093009683450LLU;
	static int16_t x240 = -3;

	t55 = ((x237-(x238%x239))&x240);

	if (t55 != 12734234183871883253LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x243 = -1LL;
	int32_t x244 = INT32_MIN;
	volatile int64_t t56 = INT64_MIN;

	t56 = ((x241-(x242%x243))&x244);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x245 = 53675541LLU;
	uint64_t x246 = UINT64_MAX;
	int32_t x247 = -13;
	int32_t x248 = INT32_MIN;
	uint64_t t57 = 108767882LLU;

	t57 = ((x245-(x246%x247))&x248);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x250 = 684006990;
	static int32_t t58 = 3716122;

	t58 = ((x249-(x250%x251))&x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x253 = -73421830090375LL;
	uint8_t x254 = 18U;
	volatile uint32_t x255 = 7U;
	int16_t x256 = INT16_MIN;
	int64_t t59 = -3695476780570226LL;

	t59 = ((x253-(x254%x255))&x256);

	if (t59 != -73421830094848LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = -1;
	uint64_t x259 = UINT64_MAX;
	int8_t x260 = INT8_MAX;
	volatile uint64_t t60 = 116807051332629LLU;

	t60 = ((x257-(x258%x259))&x260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = 619LL;
	uint32_t x262 = 0U;
	volatile int32_t x263 = -1;
	int16_t x264 = INT16_MIN;

	t61 = ((x261-(x262%x263))&x264);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x265 = -3;
	int32_t x266 = -1;
	uint8_t x267 = 9U;
	volatile int32_t t62 = -2601;

	t62 = ((x265-(x266%x267))&x268);

	if (t62 != 4) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x270 = -1;
	uint16_t x271 = UINT16_MAX;

	t63 = ((x269-(x270%x271))&x272);

	if (t63 != -50306908) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = INT16_MAX;
	int8_t x274 = -55;
	int32_t x275 = 4161091;

	t64 = ((x273-(x274%x275))&x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MIN;
	volatile uint64_t x278 = 2004666568413112LLU;
	int32_t x279 = INT32_MAX;
	static volatile int16_t x280 = -61;
	uint64_t t65 = 1057891045979396LLU;

	t65 = ((x277-(x278%x279))&x280);

	if (t65 != 18446744070240711105LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x281 = 7U;
	uint64_t x282 = 1LLU;
	int16_t x283 = -1;
	uint64_t x284 = 9786196944LLU;
	uint64_t t66 = 23927842770831LLU;

	t66 = ((x281-(x282%x283))&x284);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x285 = -3915;
	volatile int64_t x286 = -1LL;
	volatile int16_t x288 = -1;
	int64_t t67 = 1019798095882463221LL;

	t67 = ((x285-(x286%x287))&x288);

	if (t67 != -3914LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = -1;
	static uint16_t x291 = 22U;
	int8_t x292 = -6;
	static int64_t t68 = INT64_MIN;

	t68 = ((x289-(x290%x291))&x292);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = -1LL;
	int16_t x294 = INT16_MAX;
	volatile int64_t t69 = -57365636477LL;

	t69 = ((x293-(x294%x295))&x296);

	if (t69 != 56LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -6253;
	volatile uint32_t x298 = 135086236U;
	static uint16_t x299 = 24560U;
	int8_t x300 = 31;
	volatile uint32_t t70 = 28U;

	t70 = ((x297-(x298%x299))&x300);

	if (t70 != 23U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x301 = UINT16_MAX;
	volatile int32_t x302 = 2618059;
	volatile int64_t x303 = 1868079652297660377LL;
	int64_t x304 = -1LL;
	static volatile int64_t t71 = 970LL;

	t71 = ((x301-(x302%x303))&x304);

	if (t71 != -2552524LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x309 = INT16_MAX;
	uint64_t x310 = 156LLU;
	int16_t x311 = INT16_MIN;
	int8_t x312 = -1;
	volatile uint64_t t72 = 2717931LLU;

	t72 = ((x309-(x310%x311))&x312);

	if (t72 != 32611LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x313 = 30044163U;
	uint8_t x314 = 5U;
	int32_t x316 = -223;
	static volatile uint32_t t73 = 72506939U;

	t73 = ((x313-(x314%x315))&x316);

	if (t73 != 30043936U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x317 = 18722808;
	uint16_t x319 = UINT16_MAX;
	int64_t t74 = 2753510355721656LL;

	t74 = ((x317-(x318%x319))&x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MAX;
	int64_t x323 = -1LL;
	volatile uint64_t x324 = 12LLU;
	uint64_t t75 = 338776264125LLU;

	t75 = ((x321-(x322%x323))&x324);

	if (t75 != 12LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = -1LL;
	int32_t x326 = INT32_MAX;
	static int64_t x327 = INT64_MAX;
	volatile int64_t t76 = 13633447369LL;

	t76 = ((x325-(x326%x327))&x328);

	if (t76 != -2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = -249;
	int8_t x331 = INT8_MAX;
	static int32_t x332 = INT32_MIN;
	volatile uint64_t t77 = 55519016880467LLU;

	t77 = ((x329-(x330%x331))&x332);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x334 = 3969;
	int8_t x335 = INT8_MIN;
	int64_t x336 = INT64_MIN;
	static int64_t t78 = INT64_MIN;

	t78 = ((x333-(x334%x335))&x336);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x341 = INT64_MIN;
	int32_t x342 = INT32_MIN;
	int8_t x343 = 1;
	int32_t x344 = INT32_MIN;
	volatile int64_t t79 = INT64_MIN;

	t79 = ((x341-(x342%x343))&x344);

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MIN;
	int32_t x348 = -1;
	volatile int64_t t80 = 668731196LL;

	t80 = ((x345-(x346%x347))&x348);

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x349 = INT32_MAX;
	uint8_t x350 = 10U;
	int32_t x351 = -1;
	int64_t x352 = -2985LL;

	t81 = ((x349-(x350%x351))&x352);

	if (t81 != 2147480663LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = -1;
	volatile uint16_t x354 = 1849U;
	static int64_t x355 = INT64_MIN;
	static int64_t t82 = 40346LL;

	t82 = ((x353-(x354%x355))&x356);

	if (t82 != 6LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	int64_t x362 = 175761LL;
	int32_t x363 = -1947046;
	static int32_t x364 = INT32_MIN;
	int64_t t83 = 25624414580396964LL;

	t83 = ((x361-(x362%x363))&x364);

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x365 = 4U;
	uint32_t x366 = 443U;
	int8_t x367 = 1;
	uint16_t x368 = 4141U;
	uint32_t t84 = 13U;

	t84 = ((x365-(x366%x367))&x368);

	if (t84 != 4U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x369 = INT32_MAX;
	volatile int64_t x370 = INT64_MIN;
	static volatile uint16_t x371 = UINT16_MAX;
	volatile int64_t t85 = -164220LL;

	t85 = ((x369-(x370%x371))&x372);

	if (t85 != 2147516415LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = INT8_MAX;
	volatile uint32_t x374 = 861079U;
	volatile int8_t x375 = INT8_MIN;
	static volatile uint64_t x376 = UINT64_MAX;
	static volatile uint64_t t86 = 7LLU;

	t86 = ((x373-(x374%x375))&x376);

	if (t86 != 4294106344LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x377 = INT8_MIN;
	volatile int16_t x378 = -1;
	int32_t x380 = INT32_MIN;

	t87 = ((x377-(x378%x379))&x380);

	if (t87 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = 198;
	uint16_t x382 = 4U;
	uint32_t t88 = 2007906786U;

	t88 = ((x381-(x382%x383))&x384);

	if (t88 != 198U) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x385 = -2053;
	int8_t x386 = INT8_MAX;
	int32_t x388 = -1;

	t89 = ((x385-(x386%x387))&x388);

	if (t89 != -2053) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x389 = -1;
	static uint16_t x390 = 43U;
	int16_t x391 = -1;
	int16_t x392 = INT16_MIN;
	volatile int32_t t90 = -140351;

	t90 = ((x389-(x390%x391))&x392);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x394 = -1;
	int16_t x395 = INT16_MAX;

	t91 = ((x393-(x394%x395))&x396);

	if (t91 != 2147483521) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x397 = UINT8_MAX;
	uint8_t x398 = 104U;
	volatile int8_t x399 = INT8_MIN;
	int32_t x400 = 466297;
	int32_t t92 = -25;

	t92 = ((x397-(x398%x399))&x400);

	if (t92 != 17) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x403 = 7564;
	int64_t x404 = -1LL;
	uint64_t t93 = 8505671478360638LLU;

	t93 = ((x401-(x402%x403))&x404);

	if (t93 != 18446744073709549571LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x405 = 479U;
	int8_t x406 = INT8_MIN;
	uint64_t x407 = UINT64_MAX;
	uint16_t x408 = UINT16_MAX;
	static uint64_t t94 = 954LLU;

	t94 = ((x405-(x406%x407))&x408);

	if (t94 != 607LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x409 = INT64_MAX;
	int64_t x410 = 7403694845LL;
	volatile uint64_t x411 = 3LLU;
	uint64_t t95 = 0LLU;

	t95 = ((x409-(x410%x411))&x412);

	if (t95 != 9223372036854775216LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x413 = INT64_MAX;
	static int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MAX;
	int16_t x416 = INT16_MIN;
	static volatile int64_t t96 = 2LL;

	t96 = ((x413-(x414%x415))&x416);

	if (t96 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = -169;
	static uint8_t x420 = 75U;

	t97 = ((x417-(x418%x419))&x420);

	if (t97 != 9) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x423 = UINT32_MAX;
	int64_t x424 = INT64_MAX;
	static int64_t t98 = -806443845580987914LL;

	t98 = ((x421-(x422%x423))&x424);

	if (t98 != 9223372036854381097LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x425 = -521449668;
	volatile int16_t x426 = -1;
	uint64_t x427 = 3394732056LLU;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t99 = 39928026544LLU;

	t99 = ((x425-(x426%x427))&x428);

	if (t99 != 18446744069414584320LLU) { NG(); } else { ; }
	
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

