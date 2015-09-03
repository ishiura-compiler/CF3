#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int16_t x19 = -48;
static volatile int32_t x26 = -1;
volatile int8_t x33 = 47;
int8_t x41 = -1;
volatile int32_t x42 = -1;
int32_t x53 = -1;
uint32_t x55 = 16914808U;
volatile uint64_t t11 = 15235178286LLU;
volatile int64_t x67 = -32504016775164LL;
static uint32_t x68 = 527175234U;
static volatile int32_t x71 = -96474262;
int32_t x74 = INT32_MIN;
uint64_t x76 = 220329LLU;
static uint64_t t18 = 95419417LLU;
int64_t t19 = -422845231789754674LL;
static uint64_t x97 = 8569925934157100LLU;
uint32_t x100 = 756110533U;
volatile uint64_t t21 = 4LLU;
volatile int16_t x102 = INT16_MAX;
int32_t x103 = INT32_MAX;
uint32_t x107 = 445520U;
volatile uint16_t x109 = UINT16_MAX;
static uint64_t x110 = 11997487506LLU;
volatile uint16_t x111 = UINT16_MAX;
static int32_t x118 = 312;
int8_t x120 = 44;
static volatile int64_t t25 = 1LL;
static volatile int32_t x128 = 59;
int32_t t27 = 126089330;
int32_t x145 = 187;
int64_t x146 = INT64_MIN;
uint64_t x149 = 5LLU;
volatile uint64_t t32 = 1694121LLU;
volatile int8_t x154 = -1;
uint32_t x157 = UINT32_MAX;
static int32_t x158 = INT32_MAX;
volatile int8_t x160 = INT8_MIN;
volatile uint8_t x162 = 3U;
volatile int32_t x165 = INT32_MIN;
volatile int64_t t36 = -25946394425032043LL;
static uint32_t x173 = UINT32_MAX;
static uint32_t t38 = 194U;
int64_t x179 = -7LL;
volatile int64_t t39 = -438307322LL;
int16_t x181 = INT16_MIN;
static int64_t t40 = 8490LL;
int32_t x185 = -1;
int8_t x201 = -1;
volatile int16_t x202 = -1;
static int16_t x203 = INT16_MIN;
uint64_t x208 = UINT64_MAX;
uint64_t t46 = 8376473LLU;
static uint16_t x216 = 1U;
uint32_t t48 = 0U;
static uint32_t x222 = 2819U;
volatile int32_t t50 = -542;
uint16_t x229 = UINT16_MAX;
int8_t x248 = -1;
int64_t t55 = -28718678249LL;
int16_t x261 = INT16_MAX;
int64_t x262 = INT64_MIN;
volatile int16_t x264 = INT16_MIN;
uint64_t x279 = 88846121334LLU;
int8_t x280 = -1;
volatile int16_t x287 = -1;
static volatile int64_t x288 = -1LL;
volatile int64_t t63 = -686716446LL;
int16_t x291 = 1886;
static int32_t x298 = INT32_MAX;
int32_t x304 = INT32_MIN;
uint8_t x305 = 4U;
volatile int32_t x308 = -4529;
int64_t x311 = INT64_MIN;
volatile uint8_t x312 = 1U;
int64_t t68 = -228LL;
static int16_t x313 = INT16_MAX;
int16_t x314 = INT16_MIN;
int16_t x316 = INT16_MIN;
volatile int64_t t70 = -107880385222279295LL;
volatile uint64_t t71 = UINT64_MAX;
int8_t x332 = -1;
volatile int64_t t72 = 53LL;
int32_t t74 = -431752;
uint32_t t77 = 18U;
volatile uint64_t t78 = 52420704118704853LLU;
volatile int64_t x372 = INT64_MAX;
int64_t t81 = INT64_MAX;
static int16_t x386 = INT16_MIN;
uint64_t t84 = 24775675846873LLU;
int16_t x389 = 0;
int16_t x390 = -930;
int32_t x392 = INT32_MIN;
int64_t t85 = -22201829503754LL;
int16_t x395 = INT16_MAX;
volatile int8_t x408 = -2;
int8_t x410 = -58;
int32_t t90 = -1;
volatile int64_t t92 = -3323584868520418608LL;
static int32_t t93 = -139992;
uint16_t x431 = 124U;
int16_t x436 = INT16_MAX;
int64_t x442 = INT64_MAX;
int8_t x448 = INT8_MIN;


void f0(void) {
	volatile int8_t x1 = -1;
	static uint32_t x2 = 712649U;
	int64_t x3 = 8LL;
	int64_t t0 = -1916346LL;

	t0 = ((x1-(x2/x3))^x4);

	if (t0 != 74758LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 0;
	int32_t x10 = 4225538;
	volatile int64_t x11 = -61LL;
	uint16_t x12 = 14U;
	int64_t t1 = -140270525292778LL;

	t1 = ((x9-(x10/x11))^x12);

	if (t1 != 69273LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = -1;
	uint64_t x15 = UINT64_MAX;
	volatile int16_t x16 = 2160;
	uint64_t t2 = 3825374846056393343LLU;

	t2 = ((x13-(x14/x15))^x16);

	if (t2 != 18446744071562065807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x17 = -30614;
	int8_t x18 = INT8_MIN;
	int32_t x20 = INT32_MAX;
	int32_t t3 = 174;

	t3 = ((x17-(x18/x19))^x20);

	if (t3 != -2147453033) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x21 = -1;
	uint8_t x22 = 9U;
	int64_t x23 = INT64_MIN;
	int8_t x24 = INT8_MAX;
	int64_t t4 = 374886LL;

	t4 = ((x21-(x22/x23))^x24);

	if (t4 != -128LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	volatile int16_t x27 = INT16_MAX;
	int64_t x28 = INT64_MAX;
	volatile int64_t t5 = -466370038LL;

	t5 = ((x25-(x26/x27))^x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = INT8_MIN;
	int32_t x35 = INT32_MIN;
	volatile int64_t x36 = -1LL;
	int64_t t6 = 1LL;

	t6 = ((x33-(x34/x35))^x36);

	if (t6 != -48LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 1;
	int8_t x38 = -1;
	int32_t x39 = INT32_MAX;
	volatile int64_t x40 = -1LL;
	volatile int64_t t7 = -50LL;

	t7 = ((x37-(x38/x39))^x40);

	if (t7 != -2LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x43 = 29U;
	int16_t x44 = 0;
	int32_t t8 = -74;

	t8 = ((x41-(x42/x43))^x44);

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x45 = UINT32_MAX;
	static int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MIN;
	static int64_t x48 = 8287517775LL;
	static int64_t t9 = -416018462172514216LL;

	t9 = ((x45-(x46/x47))^x48);

	if (t9 != 4597384113LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MAX;
	int16_t x50 = 105;
	int32_t x51 = 376863;
	int32_t x52 = INT32_MIN;
	int32_t t10 = -114309165;

	t10 = ((x49-(x50/x51))^x52);

	if (t10 != -2147450881) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = UINT16_MAX;
	volatile uint64_t x56 = 4299564968372LLU;

	t11 = ((x53-(x54/x55))^x56);

	if (t11 != 4303254525515LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x57 = -1;
	static int8_t x58 = -17;
	uint64_t x59 = 28145LLU;
	int16_t x60 = -984;
	uint64_t t12 = 297168LLU;

	t12 = ((x57-(x58/x59))^x60);

	if (t12 != 655418158596299LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = 35143;
	volatile int16_t x62 = -97;
	volatile int16_t x63 = 936;
	uint8_t x64 = 11U;
	static int32_t t13 = 902226;

	t13 = ((x61-(x62/x63))^x64);

	if (t13 != 35148) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = UINT32_MAX;
	static int64_t x66 = INT64_MIN;
	int64_t t14 = -2997247LL;

	t14 = ((x65-(x66/x67))^x68);

	if (t14 != 3768034765LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MIN;
	int8_t x70 = INT8_MIN;
	volatile int64_t x72 = -1LL;
	volatile int64_t t15 = 8580101729LL;

	t15 = ((x69-(x70/x71))^x72);

	if (t15 != 32767LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = -1;
	uint32_t x75 = 783436613U;
	uint64_t t16 = 4768740475902593253LLU;

	t16 = ((x73-(x74/x75))^x76);

	if (t16 != 4294746964LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	static int8_t x79 = INT8_MIN;
	int8_t x80 = -1;
	int32_t t17 = -35304;

	t17 = ((x77-(x78/x79))^x80);

	if (t17 != 16777343) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 1143553599898094708LLU;
	static int8_t x86 = -12;
	volatile int64_t x87 = -63LL;
	uint32_t x88 = 490025476U;

	t18 = ((x85-(x86/x87))^x88);

	if (t18 != 1143553599683346032LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -3219;
	uint32_t x90 = 31322403U;
	volatile int64_t x91 = INT64_MIN;
	static volatile int32_t x92 = -1;

	t19 = ((x89-(x90/x91))^x92);

	if (t19 != 3218LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x93 = 1944769U;
	int32_t x94 = -1;
	static int16_t x95 = INT16_MAX;
	int64_t x96 = INT64_MIN;
	static int64_t t20 = 3611100812733756LL;

	t20 = ((x93-(x94/x95))^x96);

	if (t20 != -9223372036852831039LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x98 = INT32_MIN;
	int64_t x99 = 2LL;

	t21 = ((x97-(x98/x99))^x100);

	if (t21 != 8569927327799785LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x101 = 1656;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t22 = 28290LL;

	t22 = ((x101-(x102/x103))^x104);

	if (t22 != -9223372036854774152LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = INT32_MIN;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t23 = 48U;

	t23 = ((x105-(x106/x107))^x108);

	if (t23 != 4294962475U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x112 = INT8_MIN;
	volatile uint64_t t24 = 493016931LLU;

	t24 = ((x109-(x110/x111))^x112);

	if (t24 != 117602LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = -972721205LL;
	int8_t x119 = INT8_MIN;

	t25 = ((x117-(x118/x119))^x120);

	if (t25 != -972721183LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x121 = INT8_MIN;
	static uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 3U;
	uint32_t x124 = 460U;
	volatile uint32_t t26 = 23545U;

	t26 = ((x121-(x122/x123))^x124);

	if (t26 != 2863311847U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = UINT8_MAX;
	int16_t x127 = -11;

	t27 = ((x125-(x126/x127))^x128);

	if (t27 != -32724) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MIN;
	int16_t x130 = -1;
	int8_t x131 = INT8_MIN;
	volatile int8_t x132 = INT8_MIN;
	static volatile int32_t t28 = -909;

	t28 = ((x129-(x130/x131))^x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x137 = INT64_MAX;
	uint64_t x138 = UINT64_MAX;
	volatile int64_t x139 = -1LL;
	static uint8_t x140 = UINT8_MAX;
	volatile uint64_t t29 = 12863360065381LLU;

	t29 = ((x137-(x138/x139))^x140);

	if (t29 != 9223372036854775553LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x141 = UINT16_MAX;
	uint32_t x142 = UINT32_MAX;
	int64_t x143 = -673634588793309LL;
	static int64_t x144 = INT64_MIN;
	int64_t t30 = -1479095186LL;

	t30 = ((x141-(x142/x143))^x144);

	if (t30 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MIN;
	int64_t t31 = 488883621280206286LL;

	t31 = ((x145-(x146/x147))^x148);

	if (t31 != -32582LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x150 = 206;
	static uint16_t x151 = 143U;
	int16_t x152 = 11;

	t32 = ((x149-(x150/x151))^x152);

	if (t32 != 15LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x153 = 0U;
	volatile int32_t x155 = -1;
	int32_t x156 = -891132315;
	uint32_t t33 = 347U;

	t33 = ((x153-(x154/x155))^x156);

	if (t33 != 891132314U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x159 = 16;
	uint32_t t34 = 24867U;

	t34 = ((x157-(x158/x159))^x160);

	if (t34 != 134217600U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MAX;
	int16_t x163 = INT16_MIN;
	volatile int16_t x164 = 10;
	int64_t t35 = 23LL;

	t35 = ((x161-(x162/x163))^x164);

	if (t35 != 9223372036854775797LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = -1LL;
	volatile int64_t x167 = INT64_MAX;
	int16_t x168 = INT16_MAX;

	t36 = ((x165-(x166/x167))^x168);

	if (t36 != -2147450881LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	static volatile uint16_t x170 = UINT16_MAX;
	int32_t x171 = INT32_MIN;
	volatile int16_t x172 = INT16_MIN;
	volatile int32_t t37 = -883233253;

	t37 = ((x169-(x170/x171))^x172);

	if (t37 != 32767) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x174 = 0;
	uint8_t x175 = 2U;
	int32_t x176 = INT32_MIN;

	t38 = ((x173-(x174/x175))^x176);

	if (t38 != 2147483647U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x177 = 10;
	int32_t x178 = 0;
	int64_t x180 = -29525LL;

	t39 = ((x177-(x178/x179))^x180);

	if (t39 != -29535LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x182 = INT32_MIN;
	volatile int16_t x183 = INT16_MIN;
	static int64_t x184 = INT64_MIN;

	t40 = ((x181-(x182/x183))^x184);

	if (t40 != 9223372036854677504LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x186 = INT64_MIN;
	volatile uint8_t x187 = UINT8_MAX;
	static int16_t x188 = INT16_MIN;
	int64_t t41 = -3047735747456602392LL;

	t41 = ((x185-(x186/x187))^x188);

	if (t41 != -36170086419070849LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 8U;
	volatile uint16_t x190 = 4925U;
	uint64_t x191 = 64881416770490LLU;
	int8_t x192 = -2;
	static uint64_t t42 = 4286190604882LLU;

	t42 = ((x189-(x190/x191))^x192);

	if (t42 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = 199;
	static int8_t x194 = 8;
	static int8_t x195 = -1;
	static uint8_t x196 = 2U;
	volatile int32_t t43 = 4;

	t43 = ((x193-(x194/x195))^x196);

	if (t43 != 205) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x197 = 76427LLU;
	volatile int64_t x198 = -1LL;
	int8_t x199 = -1;
	static uint8_t x200 = 46U;
	uint64_t t44 = 322733873090761985LLU;

	t44 = ((x197-(x198/x199))^x200);

	if (t44 != 76452LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x204 = 194611U;
	static uint32_t t45 = 1045U;

	t45 = ((x201-(x202/x203))^x204);

	if (t45 != 4294772684U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x205 = 258LLU;
	int8_t x206 = INT8_MIN;
	volatile int8_t x207 = -1;

	t46 = ((x205-(x206/x207))^x208);

	if (t46 != 18446744073709551485LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = INT16_MAX;
	volatile int32_t t47 = -1;

	t47 = ((x213-(x214/x215))^x216);

	if (t47 != -32767) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x217 = INT8_MIN;
	int8_t x218 = -2;
	volatile int8_t x219 = -1;
	uint32_t x220 = 144836859U;

	t48 = ((x217-(x218/x219))^x220);

	if (t48 != 4150130565U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x221 = INT16_MIN;
	uint32_t x223 = 18195649U;
	uint64_t x224 = UINT64_MAX;
	uint64_t t49 = 34860330173114446LLU;

	t49 = ((x221-(x222/x223))^x224);

	if (t49 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x225 = 439U;
	int8_t x226 = -1;
	int16_t x227 = -1;
	int32_t x228 = -49;

	t50 = ((x225-(x226/x227))^x228);

	if (t50 != -391) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x230 = 163317954654LLU;
	uint32_t x231 = 411U;
	volatile uint16_t x232 = 1U;
	volatile uint64_t t51 = 15862LLU;

	t51 = ((x229-(x230/x231))^x232);

	if (t51 != 18446744073312249864LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 29408628LLU;
	static volatile int16_t x234 = INT16_MIN;
	static int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MIN;
	static volatile uint64_t t52 = 20978277244109953LLU;

	t52 = ((x233-(x234/x235))^x236);

	if (t52 != 9223372036884184436LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = 18;
	int16_t x238 = -1;
	int64_t x239 = -1LL;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t53 = -38LL;

	t53 = ((x237-(x238/x239))^x240);

	if (t53 != 65518LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 2U;
	static int8_t x242 = -44;
	volatile uint64_t x243 = 18697887928LLU;
	int64_t x244 = -17648059LL;
	volatile uint64_t t54 = 10370520581LLU;

	t54 = ((x241-(x242/x243))^x244);

	if (t54 != 1002479421LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x245 = -1LL;
	int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MIN;

	t55 = ((x245-(x246/x247))^x248);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x253 = -15;
	int16_t x254 = 59;
	int16_t x255 = -1;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t56 = -2;

	t56 = ((x253-(x254/x255))^x256);

	if (t56 != 211) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = 1U;
	int8_t x258 = 1;
	static int64_t x259 = -2291682957078LL;
	static int16_t x260 = -1522;
	int64_t t57 = -758385LL;

	t57 = ((x257-(x258/x259))^x260);

	if (t57 != -1521LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x263 = INT32_MIN;
	static volatile int64_t t58 = -50067LL;

	t58 = ((x261-(x262/x263))^x264);

	if (t58 != 4294967295LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = INT16_MIN;
	static uint8_t x266 = 11U;
	uint32_t x267 = 3428U;
	int64_t x268 = INT64_MIN;
	int64_t t59 = -66019094LL;

	t59 = ((x265-(x266/x267))^x268);

	if (t59 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = 5158570530258LLU;
	volatile int16_t x270 = INT16_MAX;
	uint64_t x271 = UINT64_MAX;
	int16_t x272 = INT16_MIN;
	volatile uint64_t t60 = 7025856LLU;

	t60 = ((x269-(x270/x271))^x272);

	if (t60 != 18446738915138999762LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = 172;
	volatile int8_t x278 = INT8_MIN;
	volatile uint64_t t61 = 87176494622169LLU;

	t61 = ((x277-(x278/x279))^x280);

	if (t61 != 207625593LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x281 = 6U;
	uint32_t x282 = 1963753U;
	uint64_t x283 = 31404192216LLU;
	int16_t x284 = -1;
	uint64_t t62 = 602919427325730726LLU;

	t62 = ((x281-(x282/x283))^x284);

	if (t62 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	static int32_t x286 = -1;

	t63 = ((x285-(x286/x287))^x288);

	if (t63 != 32768LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = -1;
	static int8_t x292 = -11;
	volatile int32_t t64 = -5;

	t64 = ((x289-(x290/x291))^x292);

	if (t64 != -246) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x297 = INT16_MAX;
	static int32_t x299 = INT32_MIN;
	int8_t x300 = 3;
	int32_t t65 = -115;

	t65 = ((x297-(x298/x299))^x300);

	if (t65 != 32764) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x301 = INT8_MIN;
	static int16_t x302 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int64_t t66 = -27LL;

	t66 = ((x301-(x302/x303))^x304);

	if (t66 != 2147483520LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x306 = INT16_MIN;
	int64_t x307 = -1LL;
	int64_t t67 = 317LL;

	t67 = ((x305-(x306/x307))^x308);

	if (t67 != 28235LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = -1LL;
	volatile int8_t x310 = -1;

	t68 = ((x309-(x310/x311))^x312);

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x315 = UINT16_MAX;
	int32_t t69 = 61;

	t69 = ((x313-(x314/x315))^x316);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = INT16_MIN;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MAX;

	t70 = ((x317-(x318/x319))^x320);

	if (t70 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = 0;
	volatile int32_t x326 = -3;
	uint16_t x327 = UINT16_MAX;
	static uint64_t x328 = UINT64_MAX;

	t71 = ((x325-(x326/x327))^x328);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x329 = 2700U;
	volatile int32_t x330 = INT32_MAX;
	int64_t x331 = INT64_MIN;

	t72 = ((x329-(x330/x331))^x332);

	if (t72 != -2701LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x333 = INT64_MAX;
	int8_t x334 = -1;
	uint8_t x335 = UINT8_MAX;
	int16_t x336 = -1;
	int64_t t73 = INT64_MIN;

	t73 = ((x333-(x334/x335))^x336);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x337 = 0;
	static volatile int32_t x338 = -1;
	uint8_t x339 = 62U;
	static int8_t x340 = 6;

	t74 = ((x337-(x338/x339))^x340);

	if (t74 != 6) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x341 = -1;
	uint64_t x342 = 12632452373874474LLU;
	uint8_t x343 = 2U;
	static int64_t x344 = 26381LL;
	volatile uint64_t t75 = 273351603153892562LLU;

	t75 = ((x341-(x342/x343))^x344);

	if (t75 != 18440427847522589543LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x349 = 800250424233LLU;
	volatile uint16_t x350 = 536U;
	volatile int8_t x351 = -15;
	uint8_t x352 = 26U;
	volatile uint64_t t76 = 3876504851569LLU;

	t76 = ((x349-(x350/x351))^x352);

	if (t76 != 800250424278LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x353 = 0U;
	int16_t x354 = INT16_MIN;
	uint32_t x355 = 96U;
	int8_t x356 = INT8_MAX;

	t77 = ((x353-(x354/x355))^x356);

	if (t77 != 4250228436U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x361 = 908U;
	volatile uint64_t x362 = UINT64_MAX;
	int16_t x363 = 12;
	uint64_t x364 = 0LLU;

	t78 = ((x361-(x362/x363))^x364);

	if (t78 != 16909515400900423223LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x365 = 14428U;
	uint8_t x366 = 6U;
	static int32_t x367 = -1;
	uint8_t x368 = 16U;
	uint32_t t79 = 290U;

	t79 = ((x365-(x366/x367))^x368);

	if (t79 != 14450U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x369 = -1;
	volatile int8_t x370 = 0;
	volatile uint32_t x371 = 1565184600U;
	volatile int64_t t80 = 133495322341LL;

	t80 = ((x369-(x370/x371))^x372);

	if (t80 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = INT64_MIN;
	static int64_t x374 = -1LL;
	volatile uint8_t x375 = UINT8_MAX;
	int32_t x376 = -1;

	t81 = ((x373-(x374/x375))^x376);

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x377 = 2872;
	int8_t x378 = -1;
	static int32_t x379 = -1;
	int32_t x380 = INT32_MAX;
	int32_t t82 = -22828;

	t82 = ((x377-(x378/x379))^x380);

	if (t82 != 2147480776) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x381 = 37U;
	int64_t x382 = -1LL;
	static uint64_t x383 = 4695739479LLU;
	volatile uint64_t x384 = 479LLU;
	uint64_t t83 = 349599476LLU;

	t83 = ((x381-(x382/x383))^x384);

	if (t83 != 18446744069781151589LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x385 = 19187070270023669LLU;
	static uint32_t x387 = 3222U;
	static uint16_t x388 = 28416U;

	t84 = ((x385-(x386/x387))^x388);

	if (t84 != 19187070268686315LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x391 = INT64_MIN;

	t85 = ((x389-(x390/x391))^x392);

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x393 = INT32_MAX;
	volatile int64_t x394 = INT64_MAX;
	int64_t x396 = -1LL;
	volatile int64_t t86 = -1468863128LL;

	t86 = ((x393-(x394/x395))^x396);

	if (t86 != 281481419423752LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MIN;
	uint64_t x399 = 830857594196076LLU;
	int16_t x400 = INT16_MIN;
	volatile uint64_t t87 = 34094823585374LLU;

	t87 = ((x397-(x398/x399))^x400);

	if (t87 != 10565LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x401 = UINT8_MAX;
	int32_t x402 = INT32_MIN;
	int64_t x403 = -7LL;
	static int8_t x404 = INT8_MAX;
	static int64_t t88 = 73450770LL;

	t88 = ((x401-(x402/x403))^x404);

	if (t88 != -306783214LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x405 = INT16_MIN;
	int64_t x406 = INT64_MIN;
	static int8_t x407 = INT8_MIN;
	int64_t t89 = 13375325441039LL;

	t89 = ((x405-(x406/x407))^x408);

	if (t89 != 72057594037960702LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = 1;
	int32_t x411 = INT32_MIN;
	uint16_t x412 = 37U;

	t90 = ((x409-(x410/x411))^x412);

	if (t90 != 36) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x413 = 6;
	volatile int32_t x414 = -1;
	int16_t x415 = INT16_MIN;
	volatile int8_t x416 = INT8_MAX;
	int32_t t91 = 284276034;

	t91 = ((x413-(x414/x415))^x416);

	if (t91 != 121) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = -237103473LL;
	volatile int16_t x418 = INT16_MIN;
	int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MIN;

	t92 = ((x417-(x418/x419))^x420);

	if (t92 != 9223372036617672335LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = INT32_MIN;
	int32_t x422 = INT32_MIN;
	static uint8_t x423 = 14U;
	volatile uint8_t x424 = 108U;

	t93 = ((x421-(x422/x423))^x424);

	if (t93 != -1994091995) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = INT8_MIN;
	int64_t x426 = INT64_MIN;
	int8_t x427 = INT8_MIN;
	int64_t x428 = -1LL;
	static int64_t t94 = -3822952981719894LL;

	t94 = ((x425-(x426/x427))^x428);

	if (t94 != 72057594037928063LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x429 = -1;
	int64_t x430 = -10LL;
	static int8_t x432 = INT8_MIN;
	static volatile int64_t t95 = 1185LL;

	t95 = ((x429-(x430/x431))^x432);

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x433 = INT8_MIN;
	int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MAX;
	int32_t t96 = -62;

	t96 = ((x433-(x434/x435))^x436);

	if (t96 != -32641) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x437 = 2282LL;
	uint64_t x438 = 1369667511073735LLU;
	int16_t x439 = INT16_MIN;
	static int64_t x440 = INT64_MIN;
	static uint64_t t97 = 81916272656LLU;

	t97 = ((x437-(x438/x439))^x440);

	if (t97 != 9223372036854778090LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x441 = INT8_MIN;
	uint8_t x443 = 6U;
	volatile uint64_t x444 = UINT64_MAX;
	volatile uint64_t t98 = 173902LLU;

	t98 = ((x441-(x442/x443))^x444);

	if (t98 != 1537228672809129428LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = INT32_MAX;
	int32_t x446 = INT32_MAX;
	uint8_t x447 = UINT8_MAX;
	int32_t t99 = -95497432;

	t99 = ((x445-(x446/x447))^x448);

	if (t99 != -2139062017) { NG(); } else { ; }
	
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

