#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x13 = -1;
uint64_t x18 = UINT64_MAX;
int16_t x38 = -1;
uint32_t x44 = UINT32_MAX;
volatile int16_t x48 = INT16_MIN;
uint32_t x53 = UINT32_MAX;
volatile int16_t x56 = INT16_MIN;
int8_t x64 = INT8_MIN;
int64_t x66 = -632548065694217LL;
int64_t t13 = 13LL;
static int8_t x70 = -1;
static int16_t x71 = 5;
int32_t t14 = 10;
int64_t x76 = -1831320467914185163LL;
volatile int64_t t17 = -7304320380LL;
static int16_t x90 = -1;
static uint32_t x93 = 243U;
int64_t x102 = -1LL;
int64_t t21 = -173672170166LL;
uint64_t x128 = UINT64_MAX;
int16_t x142 = 1344;
volatile int32_t t25 = 63841183;
int8_t x154 = -23;
int16_t x162 = INT16_MIN;
uint64_t x163 = UINT64_MAX;
uint64_t t30 = 22LLU;
volatile int8_t x169 = INT8_MIN;
int64_t t32 = -18737731LL;
int8_t x197 = INT8_MIN;
int64_t t38 = 36913LL;
uint64_t x208 = UINT64_MAX;
int64_t x210 = -1LL;
static volatile int64_t t40 = -1206LL;
static int64_t t41 = -188903212LL;
uint64_t t43 = 451265LLU;
uint64_t x232 = 847229227459827891LLU;
uint64_t t44 = 6496216963077577LLU;
uint16_t x249 = 207U;
volatile int32_t x252 = INT32_MIN;
int64_t x256 = INT64_MAX;
static int64_t t48 = 11777LL;
static volatile uint64_t t49 = 0LLU;
static int64_t t50 = 9189454LL;
int64_t x278 = 734956434LL;
int8_t x281 = -1;
static uint8_t x284 = UINT8_MAX;
int32_t x285 = 1;
volatile uint8_t x287 = 120U;
volatile int16_t x289 = INT16_MAX;
static uint64_t x296 = 474148117996LLU;
static volatile uint64_t t55 = 210987718LLU;
volatile int32_t x301 = -1;
int16_t x303 = -1;
uint16_t x308 = UINT16_MAX;
volatile int64_t t57 = -2182695615341LL;
uint32_t x315 = 246U;
uint8_t x316 = 2U;
static volatile uint16_t x323 = 28U;
static uint64_t x324 = 4497679LLU;
int64_t x327 = -548125838712LL;
uint64_t t61 = 11240979199298LLU;
int8_t x352 = INT8_MIN;
uint16_t x355 = 22U;
volatile uint32_t x359 = 5253392U;
static int16_t x367 = -213;
uint8_t x368 = UINT8_MAX;
int64_t x378 = INT64_MAX;
volatile int16_t x379 = 453;
uint16_t x382 = 4U;
static volatile uint32_t t72 = 48356222U;
int32_t x390 = INT32_MAX;
uint64_t x391 = 3036686LLU;
volatile int64_t t74 = 16677828LL;
uint64_t t75 = 32927593418758885LLU;
int16_t x406 = INT16_MAX;
int64_t x408 = INT64_MAX;
static int64_t t77 = 195LL;
int16_t x409 = INT16_MIN;
int8_t x411 = 1;
int8_t x419 = INT8_MAX;
volatile uint8_t x428 = 7U;
uint16_t x434 = UINT16_MAX;
uint64_t t81 = 1093955828303285280LLU;
uint16_t x451 = 0U;
volatile int16_t x453 = 234;
volatile uint8_t x471 = 11U;
uint64_t x477 = UINT64_MAX;
volatile uint16_t x482 = 272U;
int64_t x484 = 223915153332828LL;
int64_t t89 = 821588407058313808LL;
static uint8_t x492 = 4U;
static int16_t x500 = INT16_MIN;
static volatile uint8_t x507 = 6U;
int8_t x519 = -1;
uint64_t t95 = 27008836LLU;
volatile int8_t x521 = INT8_MAX;
static int32_t x522 = INT32_MIN;
volatile int32_t t96 = 41;
int8_t x529 = INT8_MIN;
uint64_t x530 = 7908205LLU;
static volatile int16_t x536 = INT16_MAX;
static uint64_t t98 = 2835LLU;
static uint8_t x537 = UINT8_MAX;
uint8_t x538 = 122U;
static int64_t x540 = INT64_MIN;


void f0(void) {
	static int64_t x5 = -1LL;
	int32_t x6 = 23;
	int8_t x7 = INT8_MIN;
	volatile int32_t x8 = INT32_MIN;
	volatile int64_t t0 = 17LL;

	t0 = ((x5+(x6-x7))%x8);

	if (t0 != 150LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x9 = 1256U;
	volatile int64_t x10 = -31LL;
	uint8_t x11 = 3U;
	int64_t x12 = INT64_MAX;
	volatile int64_t t1 = 128LL;

	t1 = ((x9+(x10-x11))%x12);

	if (t1 != 1222LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = INT16_MAX;
	static volatile int8_t x15 = INT8_MIN;
	static int64_t x16 = -1LL;
	volatile int64_t t2 = -329081540298438LL;

	t2 = ((x13+(x14-x15))%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MAX;
	uint64_t x19 = UINT64_MAX;
	volatile int64_t x20 = -53922974769052207LL;
	uint64_t t3 = 21219732910LLU;

	t3 = ((x17+(x18-x19))%x20);

	if (t3 != 127LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 87364U;
	int32_t x22 = INT32_MIN;
	static int8_t x23 = INT8_MIN;
	volatile int64_t x24 = 253313176483335LL;
	volatile int64_t t4 = -4LL;

	t4 = ((x21+(x22-x23))%x24);

	if (t4 != 2147571140LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 2669U;
	int64_t x26 = INT64_MAX;
	uint32_t x27 = 36563U;
	uint16_t x28 = 23867U;
	static volatile int64_t t5 = 1077407LL;

	t5 = ((x25+(x26-x27))%x28);

	if (t5 != 6427LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 0U;
	volatile int16_t x30 = INT16_MAX;
	uint64_t x31 = 39784300173LLU;
	volatile int64_t x32 = INT64_MIN;
	volatile uint64_t t6 = 55LLU;

	t6 = ((x29+(x30-x31))%x32);

	if (t6 != 9223371997070508402LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = INT16_MAX;
	int8_t x39 = INT8_MAX;
	int64_t x40 = -3060158LL;
	int64_t t7 = -29LL;

	t7 = ((x37+(x38-x39))%x40);

	if (t7 != 32639LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x41 = 1U;
	static volatile int8_t x42 = -1;
	int8_t x43 = INT8_MAX;
	static uint32_t t8 = 185935271U;

	t8 = ((x41+(x42-x43))%x44);

	if (t8 != 4294967169U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 0;
	uint8_t x46 = 52U;
	int16_t x47 = INT16_MIN;
	volatile int32_t t9 = 11021;

	t9 = ((x45+(x46-x47))%x48);

	if (t9 != 52) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	uint32_t t10 = 0U;

	t10 = ((x53+(x54-x55))%x56);

	if (t10 != 65662U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x57 = 1U;
	int16_t x58 = INT16_MAX;
	int8_t x59 = INT8_MIN;
	static uint16_t x60 = UINT16_MAX;
	int32_t t11 = -15157;

	t11 = ((x57+(x58-x59))%x60);

	if (t11 != 32896) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	uint32_t x62 = 73541859U;
	uint8_t x63 = 1U;
	volatile uint32_t t12 = 28U;

	t12 = ((x61+(x62-x63))%x64);

	if (t12 != 2221025506U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = INT16_MIN;
	static uint32_t x67 = 7148U;
	volatile uint8_t x68 = 6U;

	t13 = ((x65+(x66-x67))%x68);

	if (t13 != -3LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = INT16_MIN;
	int32_t x72 = -1;

	t14 = ((x69+(x70-x71))%x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x73 = 756917588284760LLU;
	static int16_t x74 = -1;
	uint8_t x75 = 103U;
	volatile uint64_t t15 = 700377398714533134LLU;

	t15 = ((x73+(x74-x75))%x76);

	if (t15 != 756917588284656LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	static volatile int64_t x78 = -1LL;
	volatile int16_t x79 = INT16_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t16 = -26635079851042548LL;

	t16 = ((x77+(x78-x79))%x80);

	if (t16 != -32641LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint16_t x85 = UINT16_MAX;
	int64_t x86 = -98719332199798LL;
	int64_t x87 = -1LL;
	int8_t x88 = -1;

	t17 = ((x85+(x86-x87))%x88);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = 205675416196451123LL;
	static volatile uint8_t x91 = 8U;
	uint8_t x92 = 8U;
	volatile int64_t t18 = -2088964876589664661LL;

	t18 = ((x89+(x90-x91))%x92);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x94 = UINT16_MAX;
	uint16_t x95 = 357U;
	uint16_t x96 = UINT16_MAX;
	uint32_t t19 = 41008602U;

	t19 = ((x93+(x94-x95))%x96);

	if (t19 != 65421U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x97 = INT32_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile int16_t x99 = -190;
	int32_t x100 = INT32_MAX;
	volatile int32_t t20 = 53511120;

	t20 = ((x97+(x98-x99))%x100);

	if (t20 != -2147483203) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = -1;
	uint8_t x103 = 4U;
	uint8_t x104 = UINT8_MAX;

	t21 = ((x101+(x102-x103))%x104);

	if (t21 != -6LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x113 = UINT16_MAX;
	int8_t x114 = INT8_MAX;
	int8_t x115 = INT8_MAX;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t22 = -40179;

	t22 = ((x113+(x114-x115))%x116);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x125 = 35U;
	int32_t x126 = -1;
	volatile uint32_t x127 = 9378069U;
	volatile uint64_t t23 = 8268674809LLU;

	t23 = ((x125+(x126-x127))%x128);

	if (t23 != 4285589261LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = 135269709U;
	static int16_t x130 = INT16_MAX;
	int32_t x131 = INT32_MAX;
	volatile int16_t x132 = INT16_MIN;
	volatile uint32_t t24 = 214837U;

	t24 = ((x129+(x130-x131))%x132);

	if (t24 != 2282786125U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile uint16_t x143 = UINT16_MAX;
	static int8_t x144 = INT8_MIN;

	t25 = ((x141+(x142-x143))%x144);

	if (t25 != -63) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x145 = 6391;
	volatile uint16_t x146 = 508U;
	static int32_t x147 = -1;
	static int32_t x148 = INT32_MIN;
	volatile int32_t t26 = 5;

	t26 = ((x145+(x146-x147))%x148);

	if (t26 != 6900) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x149 = 38371298U;
	static int64_t x150 = -1713LL;
	volatile uint8_t x151 = 3U;
	int16_t x152 = INT16_MIN;
	int64_t t27 = 2135775029440354LL;

	t27 = ((x149+(x150-x151))%x152);

	if (t27 != 31022LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x153 = INT8_MAX;
	volatile uint32_t x155 = 1532539U;
	int64_t x156 = -2LL;
	int64_t t28 = 4849223193LL;

	t28 = ((x153+(x154-x155))%x156);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x161 = INT64_MAX;
	int32_t x164 = 11548;
	static uint64_t t29 = 5000LLU;

	t29 = ((x161+(x162-x163))%x164);

	if (t29 != 7428LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x165 = -1;
	uint64_t x166 = 41396747LLU;
	static int8_t x167 = 1;
	static volatile int64_t x168 = INT64_MIN;

	t30 = ((x165+(x166-x167))%x168);

	if (t30 != 41396745LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x170 = 41U;
	int64_t x171 = 368540973LL;
	int64_t x172 = -1LL;
	int64_t t31 = 15249911706973LL;

	t31 = ((x169+(x170-x171))%x172);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = INT64_MAX;
	uint16_t x174 = 5108U;
	static uint16_t x175 = 10356U;
	int8_t x176 = INT8_MIN;

	t32 = ((x173+(x174-x175))%x176);

	if (t32 != 127LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = 2U;
	int16_t x178 = INT16_MAX;
	static int64_t x179 = -241LL;
	volatile int64_t x180 = -256014LL;
	int64_t t33 = 1602715561348LL;

	t33 = ((x177+(x178-x179))%x180);

	if (t33 != 33010LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x181 = INT64_MIN;
	int8_t x182 = 0;
	static uint16_t x183 = 0U;
	volatile uint16_t x184 = 17675U;
	volatile int64_t t34 = 424999570416829LL;

	t34 = ((x181+(x182-x183))%x184);

	if (t34 != -14533LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x185 = INT8_MIN;
	int8_t x186 = INT8_MAX;
	int64_t x187 = 33671836753813237LL;
	volatile uint16_t x188 = 586U;
	static volatile int64_t t35 = 27772069124LL;

	t35 = ((x185+(x186-x187))%x188);

	if (t35 != -472LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x193 = UINT64_MAX;
	uint8_t x194 = 0U;
	uint32_t x195 = 0U;
	int8_t x196 = 2;
	uint64_t t36 = 94500364311114593LLU;

	t36 = ((x193+(x194-x195))%x196);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x198 = 2U;
	int8_t x199 = -7;
	int64_t x200 = INT64_MIN;
	volatile int64_t t37 = 6869341700LL;

	t37 = ((x197+(x198-x199))%x200);

	if (t37 != -119LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x201 = -117070LL;
	int32_t x202 = 3274371;
	int32_t x203 = -300527;
	int16_t x204 = -31;

	t38 = ((x201+(x202-x203))%x204);

	if (t38 != 26LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x205 = -1LL;
	static uint32_t x206 = UINT32_MAX;
	uint8_t x207 = 0U;
	uint64_t t39 = 1519352LLU;

	t39 = ((x205+(x206-x207))%x208);

	if (t39 != 4294967294LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x209 = 183786U;
	uint16_t x211 = UINT16_MAX;
	int16_t x212 = INT16_MAX;

	t40 = ((x209+(x210-x211))%x212);

	if (t40 != 19949LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = 1149122004784LL;
	uint32_t x214 = 218U;
	uint8_t x215 = 2U;
	volatile uint8_t x216 = 1U;

	t41 = ((x213+(x214-x215))%x216);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x217 = 32U;
	int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 777LLU;
	int64_t x220 = -13174933590500287LL;
	uint64_t t42 = 2604784089104288LLU;

	t42 = ((x217+(x218-x219))%x220);

	if (t42 != 13174931443015894LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = -23;
	int16_t x222 = 1;
	int8_t x223 = -60;
	uint64_t x224 = 65258374LLU;

	t43 = ((x221+(x222-x223))%x224);

	if (t43 != 38LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x229 = UINT64_MAX;
	int32_t x230 = -1;
	uint32_t x231 = UINT32_MAX;

	t44 = ((x229+(x230-x231))%x232);

	if (t44 != 654930297053165904LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x237 = 16382169974988LL;
	int32_t x238 = INT32_MAX;
	int64_t x239 = 39LL;
	volatile int8_t x240 = -1;
	int64_t t45 = -65931617LL;

	t45 = ((x237+(x238-x239))%x240);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x245 = INT32_MAX;
	static int64_t x246 = -982LL;
	static uint8_t x247 = 7U;
	int16_t x248 = 6;
	int64_t t46 = -1LL;

	t46 = ((x245+(x246-x247))%x248);

	if (t46 != 2LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x250 = -1;
	uint16_t x251 = UINT16_MAX;
	static volatile int32_t t47 = 1;

	t47 = ((x249+(x250-x251))%x252);

	if (t47 != -65329) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x253 = -1;
	int8_t x254 = INT8_MIN;
	uint8_t x255 = 24U;

	t48 = ((x253+(x254-x255))%x256);

	if (t48 != -153LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x257 = 3U;
	volatile uint8_t x258 = 0U;
	uint64_t x259 = 369298249LLU;
	int16_t x260 = -2;

	t49 = ((x257+(x258-x259))%x260);

	if (t49 != 18446744073340253370LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x269 = -1LL;
	uint16_t x270 = UINT16_MAX;
	uint16_t x271 = UINT16_MAX;
	uint16_t x272 = UINT16_MAX;

	t50 = ((x269+(x270-x271))%x272);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x277 = -1LL;
	int64_t x279 = 63269206667365258LL;
	static uint8_t x280 = 3U;
	volatile int64_t t51 = -3476069854368061LL;

	t51 = ((x277+(x278-x279))%x280);

	if (t51 != -2LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x282 = INT32_MAX;
	int64_t x283 = INT64_MAX;
	volatile int64_t t52 = 41379355700LL;

	t52 = ((x281+(x282-x283))%x284);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x286 = UINT64_MAX;
	int16_t x288 = -190;
	static uint64_t t53 = 7LLU;

	t53 = ((x285+(x286-x287))%x288);

	if (t53 != 70LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x290 = INT8_MIN;
	uint64_t x291 = 1355LLU;
	static int32_t x292 = 408936;
	volatile uint64_t t54 = 991637930LLU;

	t54 = ((x289+(x290-x291))%x292);

	if (t54 != 31284LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x293 = 1U;
	int32_t x294 = INT32_MIN;
	volatile uint32_t x295 = 32845623U;

	t55 = ((x293+(x294-x295))%x296);

	if (t55 != 2114638026LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x302 = INT16_MIN;
	volatile uint8_t x304 = 66U;
	volatile int32_t t56 = -13154304;

	t56 = ((x301+(x302-x303))%x304);

	if (t56 != -32) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MAX;
	volatile uint16_t x307 = 2797U;

	t57 = ((x305+(x306-x307))%x308);

	if (t57 != -2798LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x309 = INT64_MIN;
	int8_t x310 = 54;
	int64_t x311 = -1LL;
	uint8_t x312 = 31U;
	volatile int64_t t58 = -467470136154LL;

	t58 = ((x309+(x310-x311))%x312);

	if (t58 != -15LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = INT32_MAX;
	volatile uint32_t t59 = 55229U;

	t59 = ((x313+(x314-x315))%x316);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x321 = UINT16_MAX;
	int16_t x322 = -1;
	uint64_t t60 = 1343068143757LLU;

	t60 = ((x321+(x322-x323))%x324);

	if (t60 != 65506LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x325 = UINT16_MAX;
	uint64_t x326 = 311LLU;
	int32_t x328 = -1;

	t61 = ((x325+(x326-x327))%x328);

	if (t61 != 548125904558LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = -1;
	uint64_t x334 = 34483741782211LLU;
	int64_t x335 = -8358753761LL;
	int32_t x336 = INT32_MIN;
	uint64_t t62 = 2LLU;

	t62 = ((x333+(x334-x335))%x336);

	if (t62 != 34492100535971LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x337 = 1;
	static int16_t x338 = -27;
	uint64_t x339 = 93LLU;
	uint16_t x340 = 23360U;
	uint64_t t63 = 1031277LLU;

	t63 = ((x337+(x338-x339))%x340);

	if (t63 != 5577LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x341 = INT16_MIN;
	uint64_t x342 = 73664518775LLU;
	int64_t x343 = INT64_MIN;
	static int8_t x344 = INT8_MAX;
	volatile uint64_t t64 = 698877951431LLU;

	t64 = ((x341+(x342-x343))%x344);

	if (t64 != 114LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x349 = 380155264573637587LLU;
	int16_t x350 = 1;
	int32_t x351 = INT32_MAX;
	uint64_t t65 = 1174LLU;

	t65 = ((x349+(x350-x351))%x352);

	if (t65 != 380155262426153941LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x353 = INT16_MAX;
	uint64_t x354 = 4963602445LLU;
	uint32_t x356 = UINT32_MAX;
	volatile uint64_t t66 = 11013LLU;

	t66 = ((x353+(x354-x355))%x356);

	if (t66 != 668667895LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x357 = INT16_MAX;
	volatile int32_t x358 = INT32_MIN;
	int64_t x360 = INT64_MAX;
	volatile int64_t t67 = -24590757267440098LL;

	t67 = ((x357+(x358-x359))%x360);

	if (t67 != 2142263023LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x365 = 1367333880091593LLU;
	int64_t x366 = -1LL;
	volatile uint64_t t68 = 960679905611LLU;

	t68 = ((x365+(x366-x367))%x368);

	if (t68 != 215LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x373 = 11U;
	int8_t x374 = -5;
	int16_t x375 = INT16_MAX;
	volatile uint8_t x376 = 100U;
	volatile int32_t t69 = 3031;

	t69 = ((x373+(x374-x375))%x376);

	if (t69 != -61) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x377 = 545328301516369LLU;
	volatile int16_t x380 = -156;
	volatile uint64_t t70 = 750LLU;

	t70 = ((x377+(x378-x379))%x380);

	if (t70 != 9223917365156291723LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x381 = INT32_MIN;
	int8_t x383 = 2;
	static int64_t x384 = 12015622LL;
	static volatile int64_t t71 = -4404516LL;

	t71 = ((x381+(x382-x383))%x384);

	if (t71 != -8702930LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x385 = 22U;
	static int32_t x386 = 229341;
	uint16_t x387 = UINT16_MAX;
	int32_t x388 = INT32_MIN;

	t72 = ((x385+(x386-x387))%x388);

	if (t72 != 163828U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = INT64_MIN;
	int32_t x392 = INT32_MAX;
	static volatile uint64_t t73 = 1390377LLU;

	t73 = ((x389+(x390-x391))%x392);

	if (t73 != 2144446963LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	static volatile int64_t x395 = -258666231868567647LL;
	volatile int32_t x396 = -4413;

	t74 = ((x393+(x394-x395))%x396);

	if (t74 != 2180LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x397 = 102;
	uint64_t x398 = 1736846LLU;
	int16_t x399 = INT16_MIN;
	static int64_t x400 = INT64_MIN;

	t75 = ((x397+(x398-x399))%x400);

	if (t75 != 1769716LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x401 = -1;
	uint64_t x402 = 28085172706463LLU;
	uint16_t x403 = 1750U;
	int16_t x404 = INT16_MAX;
	uint64_t t76 = 5LLU;

	t76 = ((x401+(x402-x403))%x404);

	if (t76 != 10609LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x405 = -1;
	int32_t x407 = -2;

	t77 = ((x405+(x406-x407))%x408);

	if (t77 != 32768LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x410 = 0;
	uint16_t x412 = 1666U;
	int32_t t78 = -6237112;

	t78 = ((x409+(x410-x411))%x412);

	if (t78 != -1115) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x417 = 1798U;
	volatile uint32_t x418 = UINT32_MAX;
	volatile int32_t x420 = INT32_MIN;
	uint32_t t79 = 59U;

	t79 = ((x417+(x418-x419))%x420);

	if (t79 != 1670U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x425 = 1;
	int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MAX;
	static int32_t t80 = 6;

	t80 = ((x425+(x426-x427))%x428);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = 2;
	int64_t x435 = INT64_MAX;
	static uint64_t x436 = 2251452228292152329LLU;

	t81 = ((x433+(x434-x435))%x436);

	if (t81 != 217563123686232030LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x445 = 2;
	int8_t x446 = 12;
	int8_t x447 = INT8_MIN;
	uint32_t x448 = 872777U;
	volatile uint32_t t82 = 21U;

	t82 = ((x445+(x446-x447))%x448);

	if (t82 != 142U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x449 = INT8_MIN;
	int64_t x450 = INT64_MAX;
	static uint64_t x452 = 356873802583441LLU;
	volatile uint64_t t83 = 42535004119LLU;

	t83 = ((x449+(x450-x451))%x452);

	if (t83 != 325482888326475LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x454 = UINT32_MAX;
	int16_t x455 = -78;
	static int16_t x456 = INT16_MIN;
	static uint32_t t84 = 107362U;

	t84 = ((x453+(x454-x455))%x456);

	if (t84 != 311U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x457 = 0U;
	uint64_t x458 = 801100LLU;
	static uint32_t x459 = UINT32_MAX;
	static int64_t x460 = 969773793275397LL;
	uint64_t t85 = 4775687255317220995LLU;

	t85 = ((x457+(x458-x459))%x460);

	if (t85 != 676747524059084LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x465 = 26095U;
	uint16_t x466 = UINT16_MAX;
	int32_t x467 = -57237873;
	static volatile uint32_t x468 = 6765039U;
	volatile uint32_t t86 = 39U;

	t86 = ((x465+(x466-x467))%x468);

	if (t86 != 3209191U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x469 = INT16_MIN;
	volatile uint8_t x470 = 35U;
	volatile uint8_t x472 = UINT8_MAX;
	int32_t t87 = -88595439;

	t87 = ((x469+(x470-x471))%x472);

	if (t87 != -104) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x478 = 123U;
	int16_t x479 = INT16_MIN;
	volatile uint8_t x480 = UINT8_MAX;
	volatile uint64_t t88 = 12314023815109LLU;

	t88 = ((x477+(x478-x479))%x480);

	if (t88 != 250LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x481 = UINT32_MAX;
	int32_t x483 = -1;

	t89 = ((x481+(x482-x483))%x484);

	if (t89 != 272LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x485 = INT64_MIN;
	int64_t x486 = -1LL;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = 2U;
	volatile int64_t t90 = 4771033790231LL;

	t90 = ((x485+(x486-x487))%x488);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x489 = -231;
	uint64_t x490 = 4890862604139939LLU;
	volatile uint16_t x491 = 3341U;
	uint64_t t91 = 1022343760725232LLU;

	t91 = ((x489+(x490-x491))%x492);

	if (t91 != 3LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x497 = 52;
	uint64_t x498 = 108392142LLU;
	static uint8_t x499 = 0U;
	static uint64_t t92 = 118935882566010813LLU;

	t92 = ((x497+(x498-x499))%x500);

	if (t92 != 108392194LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x505 = -1;
	static int16_t x506 = INT16_MAX;
	static uint32_t x508 = 2746495U;
	static volatile uint32_t t93 = 432781U;

	t93 = ((x505+(x506-x507))%x508);

	if (t93 != 32760U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x513 = -172752257900243LL;
	int8_t x514 = INT8_MIN;
	int16_t x515 = INT16_MIN;
	static int16_t x516 = INT16_MAX;
	volatile int64_t t94 = 235265LL;

	t94 = ((x513+(x514-x515))%x516);

	if (t94 != -23997LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x517 = UINT32_MAX;
	uint64_t x518 = UINT64_MAX;
	static int16_t x520 = -1;

	t95 = ((x517+(x518-x519))%x520);

	if (t95 != 4294967295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x523 = -28;
	int8_t x524 = -1;

	t96 = ((x521+(x522-x523))%x524);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x531 = -67451LL;
	int8_t x532 = INT8_MIN;
	volatile uint64_t t97 = 3609LLU;

	t97 = ((x529+(x530-x531))%x532);

	if (t97 != 7975528LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x533 = INT64_MIN;
	volatile uint64_t x534 = UINT64_MAX;
	int8_t x535 = INT8_MIN;

	t98 = ((x533+(x534-x535))%x536);

	if (t98 != 135LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x539 = -60;
	int64_t t99 = -53764359930440LL;

	t99 = ((x537+(x538-x539))%x540);

	if (t99 != 437LL) { NG(); } else { ; }
	
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

