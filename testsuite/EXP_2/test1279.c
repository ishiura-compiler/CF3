#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
static volatile int64_t x7 = -1LL;
volatile int16_t x11 = INT16_MAX;
static int32_t x23 = 2056282;
static uint16_t x26 = UINT16_MAX;
uint16_t x29 = UINT16_MAX;
uint64_t t7 = 632941LLU;
static volatile int64_t x35 = -1LL;
int32_t t9 = -580;
static volatile int32_t t10 = -82435;
uint64_t x48 = 1051615798244823996LLU;
static int64_t x51 = INT64_MIN;
volatile int32_t x52 = -1;
static volatile int64_t x53 = -1LL;
volatile uint64_t x58 = UINT64_MAX;
volatile int8_t x68 = -1;
int16_t x72 = -1;
volatile int8_t x74 = -4;
uint32_t t19 = 2054828U;
int64_t x81 = INT64_MIN;
static volatile uint8_t x82 = 2U;
int16_t x84 = INT16_MAX;
int32_t t20 = 23291890;
int32_t x85 = -109189733;
volatile int32_t t22 = 695976114;
int64_t x94 = INT64_MAX;
int32_t x106 = INT32_MIN;
uint8_t x107 = 5U;
uint64_t x108 = 14LLU;
int16_t x110 = INT16_MAX;
int32_t x111 = INT32_MIN;
int8_t x117 = INT8_MIN;
int64_t x124 = INT64_MAX;
volatile uint64_t t31 = 1513754905393507LLU;
uint32_t x129 = UINT32_MAX;
uint16_t x130 = UINT16_MAX;
int8_t x143 = INT8_MAX;
uint8_t x147 = UINT8_MAX;
int8_t x160 = 30;
volatile int32_t t39 = -1;
int8_t x165 = INT8_MIN;
volatile uint32_t x169 = 82436U;
volatile uint32_t x182 = UINT32_MAX;
int8_t x191 = 1;
volatile int32_t x194 = -1;
int32_t t48 = -31458;
volatile uint32_t x200 = UINT32_MAX;
static int8_t x204 = INT8_MAX;
int32_t t50 = 191453806;
uint16_t x213 = 1001U;
volatile int32_t x216 = INT32_MIN;
int32_t x217 = 942863;
int16_t x222 = INT16_MAX;
volatile uint64_t x237 = 68574494285835434LLU;
volatile int32_t x243 = 7513762;
int16_t x244 = 467;
volatile uint32_t x246 = 3905U;
static int8_t x249 = 2;
int32_t x250 = -1;
volatile uint32_t t63 = 462U;
static int32_t x260 = INT32_MAX;
volatile int32_t t64 = -10331;
uint16_t x265 = 26876U;
int8_t x267 = -1;
volatile int8_t x268 = INT8_MIN;
volatile int8_t x270 = INT8_MIN;
int8_t x289 = 1;
volatile uint16_t x293 = 1914U;
volatile int16_t x297 = -83;
static int64_t x303 = -63285908945382LL;
uint64_t t74 = 10022487753524LLU;
int32_t x314 = INT32_MAX;
uint16_t x319 = 31571U;
int64_t x322 = INT64_MIN;
volatile int16_t x326 = INT16_MIN;
int32_t x328 = -41;
int32_t t82 = 2989893;
int16_t x337 = INT16_MIN;
volatile uint64_t t84 = 410835716522690087LLU;
int16_t x350 = 0;
volatile int64_t t86 = 193LL;
volatile int64_t x356 = -68008539218211078LL;
int8_t x358 = INT8_MIN;
int32_t x365 = INT32_MAX;
uint32_t t90 = 330915U;
uint32_t x375 = 13274U;
int16_t x377 = -1;
int8_t x381 = -1;
volatile int64_t x383 = 279847LL;
static volatile int32_t t95 = -72;
static int32_t x389 = INT32_MIN;
int32_t x392 = INT32_MAX;
volatile int32_t t97 = 62;
int64_t x399 = -11287142069914LL;


void f0(void) {
	static int64_t x2 = INT64_MIN;
	int8_t x3 = -22;
	static volatile int64_t x4 = 479070541284LL;
	volatile int64_t t0 = -173036184111935LL;

	t0 = ((x1==(x2==x3))%x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 5U;
	uint8_t x6 = UINT8_MAX;
	static volatile int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 1622738;

	t1 = ((x5==(x6==x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int32_t x10 = 7219381;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = -317383916551284956LL;

	t2 = ((x9==(x10==x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int16_t x14 = 1;
	volatile uint32_t x15 = 4U;
	static volatile int32_t x16 = -563428;
	volatile int32_t t3 = 4060187;

	t3 = ((x13==(x14==x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	uint16_t x18 = UINT16_MAX;
	uint8_t x19 = 57U;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -316;

	t4 = ((x17==(x18==x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 17U;
	static uint32_t x22 = 81129158U;
	static int8_t x24 = INT8_MIN;
	int32_t t5 = -6312671;

	t5 = ((x21==(x22==x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	int32_t x27 = -1;
	volatile int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -266;

	t6 = ((x25==(x26==x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 333U;
	uint16_t x31 = 20165U;
	uint64_t x32 = 374949014746963LLU;

	t7 = ((x29==(x30==x31))%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint16_t x34 = UINT16_MAX;
	static int16_t x36 = INT16_MIN;
	int32_t t8 = -754;

	t8 = ((x33==(x34==x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int64_t x38 = 8764LL;
	uint64_t x39 = 54718369148937LLU;
	uint16_t x40 = 22U;

	t9 = ((x37==(x38==x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	int64_t x42 = INT64_MAX;
	int8_t x43 = 1;
	volatile int8_t x44 = INT8_MAX;

	t10 = ((x41==(x42==x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -13;
	uint8_t x46 = 6U;
	static int16_t x47 = INT16_MIN;
	uint64_t t11 = 438294353977LLU;

	t11 = ((x45==(x46==x47))%x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	int64_t x50 = -1074093491304365340LL;
	volatile int32_t t12 = -20278042;

	t12 = ((x49==(x50==x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x54 = -1;
	int8_t x55 = INT8_MAX;
	int32_t x56 = INT32_MIN;
	static volatile int32_t t13 = 430817;

	t13 = ((x53==(x54==x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = -2803533413847943975LL;
	int32_t x59 = -3004;
	volatile int8_t x60 = INT8_MIN;
	int32_t t14 = -5662716;

	t14 = ((x57==(x58==x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	static uint64_t x62 = 12721LLU;
	uint32_t x63 = 6U;
	uint8_t x64 = UINT8_MAX;
	int32_t t15 = 1;

	t15 = ((x61==(x62==x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	volatile int64_t x66 = INT64_MIN;
	volatile int8_t x67 = INT8_MIN;
	int32_t t16 = -2349362;

	t16 = ((x65==(x66==x67))%x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x70 = 192889LLU;
	volatile int64_t x71 = 3181192535963740LL;
	static int32_t t17 = 5684169;

	t17 = ((x69==(x70==x71))%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = UINT8_MAX;
	volatile int64_t x75 = INT64_MAX;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -10;

	t18 = ((x73==(x74==x75))%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 70861709511421244LL;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = INT32_MIN;
	volatile uint32_t x80 = 7148256U;

	t19 = ((x77==(x78==x79))%x80);

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x83 = INT32_MIN;

	t20 = ((x81==(x82==x83))%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MIN;
	uint8_t x88 = 94U;
	int32_t t21 = 2;

	t21 = ((x85==(x86==x87))%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 21921U;
	int16_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	int8_t x92 = -1;

	t22 = ((x89==(x90==x91))%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	volatile int32_t x95 = -1;
	volatile int32_t x96 = -13;
	volatile int32_t t23 = -130894245;

	t23 = ((x93==(x94==x95))%x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	static int16_t x98 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 129404215LLU;

	t24 = ((x97==(x98==x99))%x100);

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -300157100LL;
	volatile uint64_t x102 = 23820160LLU;
	static int8_t x103 = INT8_MAX;
	uint32_t x104 = 1348321U;
	volatile uint32_t t25 = 0U;

	t25 = ((x101==(x102==x103))%x104);

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	volatile uint64_t t26 = 42LLU;

	t26 = ((x105==(x106==x107))%x108);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 2976034U;
	static int8_t x112 = 1;
	static volatile int32_t t27 = 0;

	t27 = ((x109==(x110==x111))%x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = -1;
	int16_t x114 = INT16_MIN;
	int16_t x115 = INT16_MIN;
	uint32_t x116 = UINT32_MAX;
	uint32_t t28 = 940U;

	t28 = ((x113==(x114==x115))%x116);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = 619;
	static int8_t x119 = INT8_MIN;
	int8_t x120 = INT8_MAX;
	volatile int32_t t29 = 603754751;

	t29 = ((x117==(x118==x119))%x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 94U;
	int8_t x122 = -1;
	int8_t x123 = INT8_MIN;
	volatile int64_t t30 = 6810279943061LL;

	t30 = ((x121==(x122==x123))%x124);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 246U;
	int64_t x126 = INT64_MIN;
	int16_t x127 = INT16_MAX;
	uint64_t x128 = 472737695LLU;

	t31 = ((x125==(x126==x127))%x128);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x131 = 8LLU;
	int16_t x132 = -2;
	volatile int32_t t32 = -76446339;

	t32 = ((x129==(x130==x131))%x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	uint16_t x134 = 2176U;
	int64_t x135 = INT64_MAX;
	int32_t x136 = -66528133;
	volatile int32_t t33 = -31;

	t33 = ((x133==(x134==x135))%x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	static volatile int16_t x138 = 689;
	volatile uint8_t x139 = 76U;
	int16_t x140 = INT16_MAX;
	volatile int32_t t34 = 11;

	t34 = ((x137==(x138==x139))%x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	int16_t x142 = -984;
	uint16_t x144 = UINT16_MAX;
	int32_t t35 = 13697902;

	t35 = ((x141==(x142==x143))%x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 868;

	t36 = ((x145==(x146==x147))%x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	uint32_t x150 = UINT32_MAX;
	static int16_t x151 = -1;
	uint32_t x152 = UINT32_MAX;
	uint32_t t37 = 2672677U;

	t37 = ((x149==(x150==x151))%x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static uint8_t x154 = 26U;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 799587328U;
	volatile uint32_t t38 = 2U;

	t38 = ((x153==(x154==x155))%x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MAX;
	volatile uint64_t x158 = 519544217LLU;
	volatile uint32_t x159 = 230006229U;

	t39 = ((x157==(x158==x159))%x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 117LLU;
	uint16_t x162 = 971U;
	uint64_t x163 = 3LLU;
	int16_t x164 = 13;
	int32_t t40 = -89;

	t40 = ((x161==(x162==x163))%x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x166 = 83260755382723553LL;
	int16_t x167 = INT16_MIN;
	static int32_t x168 = 12388;
	static int32_t t41 = -681855561;

	t41 = ((x165==(x166==x167))%x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x170 = -1;
	uint16_t x171 = UINT16_MAX;
	static int32_t x172 = 12658714;
	int32_t t42 = 83183265;

	t42 = ((x169==(x170==x171))%x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 19254155832923150LLU;
	int16_t x174 = -1;
	volatile int64_t x175 = -1LL;
	uint8_t x176 = 43U;
	static volatile int32_t t43 = -22583817;

	t43 = ((x173==(x174==x175))%x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 124U;
	uint64_t x178 = 117397851LLU;
	int64_t x179 = 117405684908080761LL;
	volatile int16_t x180 = 27;
	int32_t t44 = 28;

	t44 = ((x177==(x178==x179))%x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = -1;
	uint16_t x183 = UINT16_MAX;
	volatile int64_t x184 = INT64_MIN;
	int64_t t45 = -3759589LL;

	t45 = ((x181==(x182==x183))%x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x185 = 27649U;
	uint16_t x186 = 5262U;
	int32_t x187 = INT32_MAX;
	int16_t x188 = -3;
	int32_t t46 = -25497;

	t46 = ((x185==(x186==x187))%x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = 2218244592315126368LLU;
	int64_t x190 = INT64_MIN;
	volatile int64_t x192 = INT64_MAX;
	volatile int64_t t47 = 24417893821LL;

	t47 = ((x189==(x190==x191))%x192);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -1LL;
	int32_t x195 = -1;
	int32_t x196 = -1;

	t48 = ((x193==(x194==x195))%x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	static volatile int64_t x198 = -116249184LL;
	static volatile uint16_t x199 = UINT16_MAX;
	uint32_t t49 = 222943185U;

	t49 = ((x197==(x198==x199))%x200);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -397749958624LL;
	static int32_t x202 = -501293;
	int64_t x203 = INT64_MAX;

	t50 = ((x201==(x202==x203))%x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = INT16_MAX;
	static volatile uint32_t x206 = UINT32_MAX;
	static int32_t x207 = 168492720;
	uint16_t x208 = 394U;
	int32_t t51 = 451808;

	t51 = ((x205==(x206==x207))%x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 213U;
	int64_t x210 = INT64_MIN;
	int32_t x211 = -436958032;
	static uint16_t x212 = 199U;
	volatile int32_t t52 = 0;

	t52 = ((x209==(x210==x211))%x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x214 = -1702774462LL;
	int64_t x215 = -2175055797251LL;
	int32_t t53 = 61462611;

	t53 = ((x213==(x214==x215))%x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x218 = 21341U;
	int16_t x219 = INT16_MAX;
	static int64_t x220 = -8082156LL;
	int64_t t54 = 177706976700LL;

	t54 = ((x217==(x218==x219))%x220);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MIN;
	volatile int32_t x223 = -56236;
	volatile int16_t x224 = -1;
	int32_t t55 = 0;

	t55 = ((x221==(x222==x223))%x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	static uint16_t x226 = 1U;
	volatile uint8_t x227 = 21U;
	static volatile int32_t x228 = -146612;
	int32_t t56 = 0;

	t56 = ((x225==(x226==x227))%x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int32_t x230 = INT32_MAX;
	int64_t x231 = -25480LL;
	volatile int64_t x232 = -1LL;
	int64_t t57 = 4713939LL;

	t57 = ((x229==(x230==x231))%x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 4U;
	int16_t x234 = INT16_MIN;
	static int8_t x235 = INT8_MIN;
	uint16_t x236 = 1U;
	volatile int32_t t58 = 202726;

	t58 = ((x233==(x234==x235))%x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x238 = INT16_MIN;
	static int32_t x239 = -1;
	static volatile int32_t x240 = INT32_MAX;
	volatile int32_t t59 = -560;

	t59 = ((x237==(x238==x239))%x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 51U;
	uint32_t x242 = 3U;
	int32_t t60 = -1;

	t60 = ((x241==(x242==x243))%x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 54LLU;
	volatile uint32_t x247 = UINT32_MAX;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 164295068;

	t61 = ((x245==(x246==x247))%x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t62 = 8593014;

	t62 = ((x249==(x250==x251))%x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = INT16_MIN;
	uint8_t x254 = UINT8_MAX;
	static uint64_t x255 = UINT64_MAX;
	uint32_t x256 = 26823475U;

	t63 = ((x253==(x254==x255))%x256);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x257 = -1;
	int16_t x258 = -1;
	int64_t x259 = INT64_MAX;

	t64 = ((x257==(x258==x259))%x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	static int64_t x262 = -327200690241642LL;
	uint16_t x263 = 10U;
	int32_t x264 = 611254482;
	volatile int32_t t65 = 3560;

	t65 = ((x261==(x262==x263))%x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x266 = UINT32_MAX;
	volatile int32_t t66 = -1108694;

	t66 = ((x265==(x266==x267))%x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;
	int32_t t67 = 16167268;

	t67 = ((x269==(x270==x271))%x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x277 = -1;
	static volatile int8_t x278 = INT8_MIN;
	uint64_t x279 = 45532051147LLU;
	static uint32_t x280 = 35136921U;
	uint32_t t68 = 247U;

	t68 = ((x277==(x278==x279))%x280);

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 11007U;
	volatile uint64_t x282 = UINT64_MAX;
	int32_t x283 = -532036;
	uint64_t x284 = UINT64_MAX;
	uint64_t t69 = 1767121LLU;

	t69 = ((x281==(x282==x283))%x284);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 12U;
	uint32_t x286 = 6671830U;
	int8_t x287 = INT8_MIN;
	int64_t x288 = -1LL;
	int64_t t70 = 31237LL;

	t70 = ((x285==(x286==x287))%x288);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = UINT32_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t71 = -416;

	t71 = ((x289==(x290==x291))%x292);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x294 = UINT32_MAX;
	int16_t x295 = INT16_MIN;
	volatile uint32_t x296 = 2679U;
	volatile uint32_t t72 = 10978U;

	t72 = ((x293==(x294==x295))%x296);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x298 = 3371U;
	uint32_t x299 = UINT32_MAX;
	int64_t x300 = INT64_MIN;
	volatile int64_t t73 = -3614135973LL;

	t73 = ((x297==(x298==x299))%x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x301 = INT64_MAX;
	static int32_t x302 = INT32_MAX;
	static uint64_t x304 = UINT64_MAX;

	t74 = ((x301==(x302==x303))%x304);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = -1;
	uint32_t x306 = 6U;
	int32_t x307 = 208926;
	static uint32_t x308 = 2U;
	uint32_t t75 = 32U;

	t75 = ((x305==(x306==x307))%x308);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x309 = INT32_MIN;
	volatile int16_t x310 = INT16_MIN;
	int8_t x311 = -1;
	uint64_t x312 = UINT64_MAX;
	static uint64_t t76 = 153424961986210LLU;

	t76 = ((x309==(x310==x311))%x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 1050519U;
	static uint16_t x315 = 2559U;
	static int64_t x316 = INT64_MIN;
	int64_t t77 = -3029831687033LL;

	t77 = ((x313==(x314==x315))%x316);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = -503930440LL;
	static volatile int64_t x318 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t78 = 234090316LL;

	t78 = ((x317==(x318==x319))%x320);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x321 = INT8_MAX;
	int64_t x323 = INT64_MIN;
	volatile uint64_t x324 = UINT64_MAX;
	volatile uint64_t t79 = 90LLU;

	t79 = ((x321==(x322==x323))%x324);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x325 = 57211737859842LL;
	int16_t x327 = INT16_MAX;
	int32_t t80 = 249225;

	t80 = ((x325==(x326==x327))%x328);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MAX;
	uint8_t x330 = 3U;
	static volatile uint64_t x331 = 60LLU;
	volatile int64_t x332 = -3627LL;
	int64_t t81 = 192695304185643LL;

	t81 = ((x329==(x330==x331))%x332);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x333 = UINT16_MAX;
	uint32_t x334 = 1179327877U;
	int8_t x335 = -1;
	int8_t x336 = 3;

	t82 = ((x333==(x334==x335))%x336);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x338 = 1;
	uint8_t x339 = UINT8_MAX;
	static int64_t x340 = -1LL;
	static volatile int64_t t83 = 3304624122737LL;

	t83 = ((x337==(x338==x339))%x340);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MAX;
	static uint64_t x342 = UINT64_MAX;
	static int16_t x343 = INT16_MAX;
	uint64_t x344 = 26459493119LLU;

	t84 = ((x341==(x342==x343))%x344);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x345 = 3950U;
	int16_t x346 = INT16_MIN;
	volatile int64_t x347 = -1LL;
	volatile uint8_t x348 = 9U;
	volatile int32_t t85 = 1;

	t85 = ((x345==(x346==x347))%x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x349 = 959673294U;
	static int16_t x351 = -1;
	static int64_t x352 = INT64_MIN;

	t86 = ((x349==(x350==x351))%x352);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x353 = INT64_MAX;
	static int64_t x354 = INT64_MIN;
	uint32_t x355 = UINT32_MAX;
	volatile int64_t t87 = 1LL;

	t87 = ((x353==(x354==x355))%x356);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = 510;
	int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	int32_t t88 = 227525148;

	t88 = ((x357==(x358==x359))%x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x361 = -1;
	static int64_t x362 = -1871082985428245279LL;
	int64_t x363 = 88080LL;
	static int32_t x364 = -1;
	int32_t t89 = 652;

	t89 = ((x361==(x362==x363))%x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x366 = -7831;
	static uint8_t x367 = UINT8_MAX;
	uint32_t x368 = 3U;

	t90 = ((x365==(x366==x367))%x368);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -15;
	uint8_t x370 = 30U;
	static volatile int8_t x371 = -1;
	int16_t x372 = -332;
	static int32_t t91 = -314993856;

	t91 = ((x369==(x370==x371))%x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x373 = INT16_MAX;
	static volatile int16_t x374 = INT16_MIN;
	volatile int32_t x376 = 154444;
	int32_t t92 = -3546;

	t92 = ((x373==(x374==x375))%x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -28559751;
	volatile int32_t t93 = -63308544;

	t93 = ((x377==(x378==x379))%x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x382 = 212235144U;
	int64_t x384 = 6437106480LL;
	volatile int64_t t94 = 1LL;

	t94 = ((x381==(x382==x383))%x384);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 36LLU;
	int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	static volatile int16_t x388 = -39;

	t95 = ((x385==(x386==x387))%x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x390 = 38651674849140547LLU;
	int64_t x391 = -1LL;
	static volatile int32_t t96 = -11734;

	t96 = ((x389==(x390==x391))%x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint32_t x393 = UINT32_MAX;
	int64_t x394 = 946959865705LL;
	uint64_t x395 = 2969298LLU;
	int8_t x396 = INT8_MIN;

	t97 = ((x393==(x394==x395))%x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x398 = INT32_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t98 = -3;

	t98 = ((x397==(x398==x399))%x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = 14;
	uint16_t x403 = 6159U;
	int16_t x404 = INT16_MIN;
	volatile int32_t t99 = -785859789;

	t99 = ((x401==(x402==x403))%x404);

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

