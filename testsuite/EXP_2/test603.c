#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
int32_t x2 = 256966511;
uint8_t x3 = UINT8_MAX;
static uint64_t t1 = 5952659LLU;
int16_t x10 = INT16_MIN;
int64_t t2 = -934LL;
uint16_t x18 = UINT16_MAX;
int32_t t4 = -1031052678;
int8_t x23 = INT8_MAX;
int16_t x24 = INT16_MIN;
int16_t x27 = -1;
int32_t x28 = -1;
int8_t x30 = INT8_MIN;
volatile uint32_t x32 = 1746461U;
volatile uint16_t x38 = 2U;
int8_t x41 = -1;
uint8_t x47 = 10U;
volatile int32_t t11 = -3598080;
volatile int32_t t13 = -4895347;
int32_t x59 = INT32_MAX;
int8_t x62 = INT8_MAX;
volatile int16_t x64 = INT16_MIN;
static int64_t x74 = INT64_MIN;
uint32_t x76 = 13U;
uint32_t x79 = 6129630U;
int64_t x84 = INT64_MAX;
int16_t x86 = INT16_MIN;
int64_t x87 = -70616LL;
static uint16_t x90 = 14963U;
int32_t t22 = 10;
int16_t x100 = 3783;
static int16_t x103 = INT16_MIN;
int16_t x106 = -4351;
volatile int32_t t25 = -1168;
int64_t x112 = INT64_MIN;
static volatile int64_t t26 = -86408LL;
volatile int32_t x121 = INT32_MIN;
int16_t x124 = -192;
static int32_t t29 = -77;
volatile int32_t x131 = INT32_MAX;
static int8_t x145 = -2;
volatile uint8_t x149 = 38U;
volatile int32_t t35 = 79;
uint8_t x155 = 12U;
int32_t x163 = INT32_MAX;
uint16_t x177 = 0U;
int16_t x178 = -6972;
static uint32_t x179 = 7804U;
int32_t t42 = 0;
int16_t x183 = INT16_MAX;
volatile int64_t t43 = 86496LL;
int8_t x194 = -3;
int8_t x202 = INT8_MIN;
volatile int32_t t48 = -122283;
int32_t t49 = -207;
int16_t x212 = -3;
uint64_t x220 = UINT64_MAX;
volatile int64_t x223 = INT64_MAX;
static uint16_t x224 = 5284U;
volatile int32_t x226 = INT32_MAX;
int64_t t54 = 26955LL;
int16_t x237 = INT16_MIN;
uint64_t x244 = UINT64_MAX;
static uint8_t x245 = 47U;
int32_t x247 = -1;
volatile int32_t x252 = -1;
int32_t t59 = 12729459;
uint8_t x258 = UINT8_MAX;
int64_t t63 = 0LL;
uint16_t x280 = 2U;
static volatile int32_t t65 = 29346717;
int64_t x286 = -2169LL;
static int8_t x289 = INT8_MIN;
volatile int8_t x299 = -1;
int64_t x302 = -202213633428LL;
int32_t t71 = -3;
static int64_t x308 = INT64_MAX;
volatile int16_t x310 = -3;
uint8_t x311 = 57U;
int32_t x314 = -436069803;
int16_t x315 = -5;
static uint8_t x316 = 11U;
int16_t x324 = INT16_MAX;
uint8_t x325 = UINT8_MAX;
int16_t x327 = -464;
uint16_t x329 = 261U;
static int8_t x330 = INT8_MIN;
static uint16_t x334 = 0U;
static uint64_t x337 = 105047282LLU;
static uint8_t x339 = UINT8_MAX;
int64_t x342 = -1LL;
volatile int64_t t82 = -1378LL;
int32_t t83 = 5;
static volatile int64_t t84 = 266002189LL;
int8_t x360 = -1;
int32_t x363 = 455230;
static uint64_t x366 = 2242147144260LLU;
int64_t x370 = INT64_MAX;
volatile int32_t t88 = -1415281;
volatile uint8_t x373 = 1U;
int64_t x379 = INT64_MIN;
volatile uint64_t t90 = 306843787LLU;
uint8_t x385 = 100U;
int16_t x389 = 1;
int16_t x392 = INT16_MIN;
static volatile int16_t x395 = -1;
uint8_t x406 = UINT8_MAX;


void f0(void) {
	int16_t x4 = -1;
	int32_t t0 = -88019;

	t0 = ((x1==(x2/x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = -419LL;
	uint64_t x6 = UINT64_MAX;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 1481639253239LLU;

	t1 = ((x5==(x6/x7))%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -61497968220LL;
	static volatile int32_t x11 = INT32_MAX;
	volatile int64_t x12 = INT64_MIN;

	t2 = ((x9==(x10/x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = -4;
	static int32_t x14 = -1;
	int32_t x15 = -1;
	int32_t x16 = 1062865;
	static volatile int32_t t3 = -20;

	t3 = ((x13==(x14/x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x19 = 3497U;
	volatile uint8_t x20 = 4U;

	t4 = ((x17==(x18/x19))%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int8_t x22 = 19;
	int32_t t5 = 3;

	t5 = ((x21==(x22/x23))%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 17627185U;
	uint64_t x26 = UINT64_MAX;
	volatile int32_t t6 = -485096004;

	t6 = ((x25==(x26/x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile int64_t x31 = 150346501503229LL;
	static volatile uint32_t t7 = 395328326U;

	t7 = ((x29==(x30/x31))%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -195LL;
	uint64_t x34 = 27017LLU;
	int32_t x35 = -1;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 545;

	t8 = ((x33==(x34/x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -1;
	static uint32_t x39 = 2U;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = 353644441;

	t9 = ((x37==(x38/x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x42 = INT16_MAX;
	static volatile uint64_t x43 = 8748480910LLU;
	volatile int32_t x44 = -1;
	static int32_t t10 = -162238611;

	t10 = ((x41==(x42/x43))%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -709401;
	int32_t x46 = INT32_MIN;
	int16_t x48 = INT16_MIN;

	t11 = ((x45==(x46/x47))%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = UINT32_MAX;
	int8_t x50 = -7;
	int16_t x51 = INT16_MAX;
	int32_t x52 = -1;
	int32_t t12 = 217860;

	t12 = ((x49==(x50/x51))%x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = -463;
	int64_t x55 = INT64_MIN;
	static volatile int16_t x56 = INT16_MAX;

	t13 = ((x53==(x54/x55))%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 1950;
	uint32_t x58 = 1662U;
	static uint8_t x60 = 43U;
	volatile int32_t t14 = -388455;

	t14 = ((x57==(x58/x59))%x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 105074U;
	volatile int32_t x63 = INT32_MAX;
	volatile int32_t t15 = 176758;

	t15 = ((x61==(x62/x63))%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	uint8_t x66 = 6U;
	int16_t x67 = 1204;
	int64_t x68 = INT64_MIN;
	int64_t t16 = 57685981411551LL;

	t16 = ((x65==(x66/x67))%x68);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x73 = -126902;
	static uint32_t x75 = 56799809U;
	uint32_t t17 = 10970U;

	t17 = ((x73==(x74/x75))%x76);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 72LL;
	int8_t x78 = 1;
	int32_t x80 = 55547;
	volatile int32_t t18 = 1948661;

	t18 = ((x77==(x78/x79))%x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 243U;
	static int64_t x82 = 7308662762LL;
	int8_t x83 = INT8_MIN;
	int64_t t19 = -5556763LL;

	t19 = ((x81==(x82/x83))%x84);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	static uint16_t x88 = UINT16_MAX;
	int32_t t20 = 362;

	t20 = ((x85==(x86/x87))%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	int64_t x91 = -4733783LL;
	int32_t x92 = 237;
	int32_t t21 = -179864;

	t21 = ((x89==(x90/x91))%x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x93 = 5U;
	static int16_t x94 = INT16_MAX;
	uint32_t x95 = 74U;
	volatile int16_t x96 = 11;

	t22 = ((x93==(x94/x95))%x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -3;
	int32_t x98 = INT32_MIN;
	static int8_t x99 = INT8_MIN;
	int32_t t23 = 85;

	t23 = ((x97==(x98/x99))%x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x101 = UINT8_MAX;
	static volatile int8_t x102 = INT8_MIN;
	int32_t x104 = INT32_MIN;
	int32_t t24 = 94966752;

	t24 = ((x101==(x102/x103))%x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x105 = 11289480LLU;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -1;

	t25 = ((x105==(x106/x107))%x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = 3819U;
	int16_t x110 = 196;
	uint32_t x111 = 452532009U;

	t26 = ((x109==(x110/x111))%x112);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 13248;
	uint8_t x118 = 17U;
	volatile int64_t x119 = -1LL;
	int64_t x120 = INT64_MIN;
	volatile int64_t t27 = 83024714691LL;

	t27 = ((x117==(x118/x119))%x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = -1;
	int64_t x123 = INT64_MAX;
	static volatile int32_t t28 = -24;

	t28 = ((x121==(x122/x123))%x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x125 = 120U;
	static int64_t x126 = -1LL;
	int16_t x127 = -1;
	int32_t x128 = -1;

	t29 = ((x125==(x126/x127))%x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	int16_t x130 = INT16_MAX;
	static volatile uint64_t x132 = UINT64_MAX;
	volatile uint64_t t30 = 20237LLU;

	t30 = ((x129==(x130/x131))%x132);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = UINT16_MAX;
	uint32_t x134 = 651169049U;
	uint64_t x135 = 9991571LLU;
	uint8_t x136 = 1U;
	int32_t t31 = 2684400;

	t31 = ((x133==(x134/x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x137 = 15U;
	volatile int32_t x138 = INT32_MAX;
	uint8_t x139 = 4U;
	int32_t x140 = -1;
	static volatile int32_t t32 = 384420593;

	t32 = ((x137==(x138/x139))%x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	int32_t x143 = INT32_MIN;
	int32_t x144 = 965;
	int32_t t33 = 7224;

	t33 = ((x141==(x142/x143))%x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x146 = UINT32_MAX;
	uint8_t x147 = 2U;
	static int16_t x148 = -1;
	int32_t t34 = 6;

	t34 = ((x145==(x146/x147))%x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x150 = 4838;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = INT8_MAX;

	t35 = ((x149==(x150/x151))%x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = -1LL;
	int64_t x156 = 87677575LL;
	volatile int64_t t36 = -2950LL;

	t36 = ((x153==(x154/x155))%x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = INT8_MIN;
	static int32_t x158 = INT32_MAX;
	static volatile int16_t x159 = INT16_MIN;
	int32_t x160 = -9172;
	int32_t t37 = -129;

	t37 = ((x157==(x158/x159))%x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = INT32_MAX;
	volatile uint16_t x162 = 45U;
	static int32_t x164 = INT32_MAX;
	int32_t t38 = -49985;

	t38 = ((x161==(x162/x163))%x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 0;
	int64_t x166 = -339306422LL;
	int16_t x167 = 3;
	int16_t x168 = INT16_MIN;
	int32_t t39 = -404139;

	t39 = ((x165==(x166/x167))%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	int64_t x170 = INT64_MAX;
	volatile int16_t x171 = INT16_MIN;
	uint64_t x172 = 91287605020147116LLU;
	uint64_t t40 = 350317587636659LLU;

	t40 = ((x169==(x170/x171))%x172);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = -56;
	int16_t x174 = -12586;
	int8_t x175 = -21;
	volatile int32_t x176 = -35486365;
	volatile int32_t t41 = -57011038;

	t41 = ((x173==(x174/x175))%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x180 = -1;

	t42 = ((x177==(x178/x179))%x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x181 = -10;
	uint8_t x182 = 0U;
	int64_t x184 = -1LL;

	t43 = ((x181==(x182/x183))%x184);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = 124U;
	int32_t x186 = 63812;
	int64_t x187 = -553051210LL;
	int16_t x188 = INT16_MIN;
	volatile int32_t t44 = 353310294;

	t44 = ((x185==(x186/x187))%x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = 3209799898025931LL;
	static int64_t x190 = INT64_MIN;
	uint8_t x191 = 7U;
	volatile int16_t x192 = -1;
	volatile int32_t t45 = 79810;

	t45 = ((x189==(x190/x191))%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x193 = 1U;
	volatile uint32_t x195 = 6837U;
	static uint16_t x196 = 222U;
	static volatile int32_t t46 = 68171;

	t46 = ((x193==(x194/x195))%x196);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MIN;
	int64_t x198 = 32844400617LL;
	int8_t x199 = INT8_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t47 = -21210854;

	t47 = ((x197==(x198/x199))%x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = 6;
	static uint8_t x203 = UINT8_MAX;
	volatile int8_t x204 = -1;

	t48 = ((x201==(x202/x203))%x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = INT32_MAX;
	int32_t x206 = -1;
	static int32_t x207 = -1;
	int32_t x208 = INT32_MIN;

	t49 = ((x205==(x206/x207))%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = UINT8_MAX;
	uint64_t x210 = 28180914072009LLU;
	int32_t x211 = INT32_MIN;
	static int32_t t50 = -163189502;

	t50 = ((x209==(x210/x211))%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = 60;
	static uint8_t x214 = 98U;
	int16_t x215 = INT16_MIN;
	int16_t x216 = INT16_MIN;
	volatile int32_t t51 = 290;

	t51 = ((x213==(x214/x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	volatile int64_t x218 = INT64_MIN;
	int64_t x219 = -1646905325311LL;
	volatile uint64_t t52 = 2015LLU;

	t52 = ((x217==(x218/x219))%x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x221 = 26205069106896LLU;
	volatile int64_t x222 = INT64_MAX;
	int32_t t53 = -7304;

	t53 = ((x221==(x222/x223))%x224);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x225 = -40559;
	uint32_t x227 = 32235U;
	static int64_t x228 = -3LL;

	t54 = ((x225==(x226/x227))%x228);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int8_t x234 = INT8_MIN;
	uint64_t x235 = 22LLU;
	uint8_t x236 = 1U;
	int32_t t55 = -31284677;

	t55 = ((x233==(x234/x235))%x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x238 = -3;
	uint8_t x239 = 32U;
	uint8_t x240 = 5U;
	static int32_t t56 = 15079338;

	t56 = ((x237==(x238/x239))%x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = -1;
	int64_t x243 = -472445107467961LL;
	volatile uint64_t t57 = 295574041LLU;

	t57 = ((x241==(x242/x243))%x244);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x246 = 3313U;
	static uint16_t x248 = UINT16_MAX;
	static volatile int32_t t58 = 0;

	t58 = ((x245==(x246/x247))%x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = -9473;
	volatile uint32_t x250 = 28936786U;
	static uint64_t x251 = UINT64_MAX;

	t59 = ((x249==(x250/x251))%x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x257 = UINT32_MAX;
	uint8_t x259 = 5U;
	int16_t x260 = -1;
	int32_t t60 = -13419;

	t60 = ((x257==(x258/x259))%x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x261 = 5U;
	static uint8_t x262 = 0U;
	uint16_t x263 = 3U;
	uint8_t x264 = 3U;
	static volatile int32_t t61 = -645419;

	t61 = ((x261==(x262/x263))%x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MIN;
	uint32_t x267 = UINT32_MAX;
	int64_t x268 = INT64_MIN;
	static int64_t t62 = -540776453995428LL;

	t62 = ((x265==(x266/x267))%x268);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = 317830141;
	static int16_t x270 = 1219;
	static int8_t x271 = -1;
	int64_t x272 = 192LL;

	t63 = ((x269==(x270/x271))%x272);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = -123;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = 1728561LL;
	int32_t x276 = INT32_MIN;
	volatile int32_t t64 = -162043;

	t64 = ((x273==(x274/x275))%x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x277 = INT32_MAX;
	volatile int8_t x278 = INT8_MIN;
	int16_t x279 = INT16_MIN;

	t65 = ((x277==(x278/x279))%x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	int32_t x284 = 4;
	int32_t t66 = -367571724;

	t66 = ((x281==(x282/x283))%x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x285 = INT32_MIN;
	volatile uint16_t x287 = UINT16_MAX;
	int8_t x288 = 1;
	static int32_t t67 = -255;

	t67 = ((x285==(x286/x287))%x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x290 = 96U;
	uint32_t x291 = 9383U;
	int32_t x292 = INT32_MIN;
	int32_t t68 = -5473;

	t68 = ((x289==(x290/x291))%x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	volatile int32_t x294 = -1;
	static volatile uint32_t x295 = 1311U;
	int8_t x296 = -1;
	static volatile int32_t t69 = -7393;

	t69 = ((x293==(x294/x295))%x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = INT32_MIN;
	static int8_t x298 = -2;
	int16_t x300 = INT16_MAX;
	volatile int32_t t70 = 1;

	t70 = ((x297==(x298/x299))%x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = -13;
	uint64_t x303 = 15858LLU;
	int16_t x304 = -2032;

	t71 = ((x301==(x302/x303))%x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x305 = 3LLU;
	volatile int32_t x306 = 7785257;
	uint8_t x307 = 19U;
	volatile int64_t t72 = -3665LL;

	t72 = ((x305==(x306/x307))%x308);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x309 = INT16_MAX;
	uint64_t x312 = 40400825LLU;
	uint64_t t73 = 26834885418760393LLU;

	t73 = ((x309==(x310/x311))%x312);

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x313 = UINT64_MAX;
	static volatile int32_t t74 = 128927;

	t74 = ((x313==(x314/x315))%x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = 2U;
	volatile int32_t x319 = INT32_MIN;
	volatile uint32_t x320 = 151931090U;
	static uint32_t t75 = 364454683U;

	t75 = ((x317==(x318/x319))%x320);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = -1LL;
	uint32_t x322 = 16718891U;
	static volatile uint32_t x323 = UINT32_MAX;
	volatile int32_t t76 = 1255529;

	t76 = ((x321==(x322/x323))%x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x326 = 5U;
	uint16_t x328 = 16976U;
	volatile int32_t t77 = -26;

	t77 = ((x325==(x326/x327))%x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x331 = -39;
	int8_t x332 = -1;
	volatile int32_t t78 = 3230892;

	t78 = ((x329==(x330/x331))%x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = -3;
	int64_t x335 = 114438424211858981LL;
	uint32_t x336 = 89316602U;
	volatile uint32_t t79 = 1123U;

	t79 = ((x333==(x334/x335))%x336);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x338 = 639U;
	int64_t x340 = 499798022306LL;
	int64_t t80 = -362073LL;

	t80 = ((x337==(x338/x339))%x340);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = -101657808LL;
	int16_t x343 = INT16_MAX;
	static uint8_t x344 = UINT8_MAX;
	int32_t t81 = -23812;

	t81 = ((x341==(x342/x343))%x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = INT16_MAX;
	int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MAX;
	int64_t x348 = INT64_MIN;

	t82 = ((x345==(x346/x347))%x348);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x349 = 0U;
	int8_t x350 = INT8_MAX;
	static int8_t x351 = 2;
	int8_t x352 = INT8_MIN;

	t83 = ((x349==(x350/x351))%x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int16_t x353 = INT16_MIN;
	volatile int8_t x354 = 48;
	uint32_t x355 = UINT32_MAX;
	volatile int64_t x356 = INT64_MAX;

	t84 = ((x353==(x354/x355))%x356);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x357 = -1LL;
	static int32_t x358 = INT32_MAX;
	int32_t x359 = INT32_MIN;
	volatile int32_t t85 = 5732115;

	t85 = ((x357==(x358/x359))%x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x361 = 135U;
	int8_t x362 = 0;
	int8_t x364 = INT8_MIN;
	volatile int32_t t86 = 269;

	t86 = ((x361==(x362/x363))%x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 1U;
	int64_t x367 = INT64_MIN;
	int32_t x368 = 11658;
	volatile int32_t t87 = 114445888;

	t87 = ((x365==(x366/x367))%x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x369 = 18U;
	volatile int8_t x371 = -27;
	int8_t x372 = 1;

	t88 = ((x369==(x370/x371))%x372);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x374 = 48U;
	uint32_t x375 = UINT32_MAX;
	uint32_t x376 = 4877U;
	uint32_t t89 = 1U;

	t89 = ((x373==(x374/x375))%x376);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x377 = 6;
	uint8_t x378 = UINT8_MAX;
	volatile uint64_t x380 = 127LLU;

	t90 = ((x377==(x378/x379))%x380);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -14;
	uint64_t x382 = 67685LLU;
	uint8_t x383 = UINT8_MAX;
	volatile int16_t x384 = -1;
	static volatile int32_t t91 = 2721487;

	t91 = ((x381==(x382/x383))%x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x386 = INT32_MIN;
	volatile int8_t x387 = INT8_MIN;
	int8_t x388 = -1;
	int32_t t92 = -7243715;

	t92 = ((x385==(x386/x387))%x388);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x390 = -984;
	static uint32_t x391 = UINT32_MAX;
	int32_t t93 = 548621992;

	t93 = ((x389==(x390/x391))%x392);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x393 = 21328LLU;
	int16_t x394 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t94 = 755;

	t94 = ((x393==(x394/x395))%x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MAX;
	static int32_t x399 = INT32_MIN;
	uint8_t x400 = 10U;
	int32_t t95 = 0;

	t95 = ((x397==(x398/x399))%x400);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = INT32_MIN;
	uint32_t x403 = 14U;
	int8_t x404 = -7;
	volatile int32_t t96 = 1078813;

	t96 = ((x401==(x402/x403))%x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x405 = -120;
	static uint32_t x407 = 3029626U;
	int8_t x408 = -1;
	volatile int32_t t97 = 4907;

	t97 = ((x405==(x406/x407))%x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = -578612078LL;
	int32_t x410 = -1;
	int32_t x411 = -71;
	static volatile uint8_t x412 = UINT8_MAX;
	volatile int32_t t98 = 12448;

	t98 = ((x409==(x410/x411))%x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x413 = -225;
	int64_t x414 = -1LL;
	int16_t x415 = -1;
	static int32_t x416 = -2007067;
	volatile int32_t t99 = -2549877;

	t99 = ((x413==(x414/x415))%x416);

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

