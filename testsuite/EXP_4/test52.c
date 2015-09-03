#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -3;
int32_t x2 = 8941131;
volatile uint8_t x7 = 28U;
volatile int32_t t1 = 0;
static volatile uint64_t x9 = 860LLU;
int32_t x16 = INT32_MAX;
int16_t x17 = 0;
uint64_t x22 = UINT64_MAX;
static int16_t x24 = -1;
int64_t x37 = INT64_MIN;
int64_t t8 = INT64_MIN;
int32_t x56 = 113;
int16_t x61 = 6335;
volatile int8_t x73 = INT8_MIN;
int8_t x74 = INT8_MIN;
int32_t x78 = INT32_MIN;
int16_t x86 = INT16_MIN;
volatile int64_t t18 = 51854LL;
static uint16_t x89 = 24235U;
volatile int16_t x98 = INT16_MAX;
static volatile int64_t x100 = INT64_MIN;
static uint64_t x105 = 5224LLU;
int64_t x108 = INT64_MIN;
static int64_t t23 = -2146475684548661101LL;
int16_t x114 = INT16_MAX;
uint16_t x115 = 10050U;
volatile uint32_t t25 = 92386U;
static int64_t x121 = 225485888605LL;
int32_t x123 = INT32_MAX;
int64_t x125 = -1LL;
volatile int64_t t27 = 68127461406768516LL;
uint8_t x134 = 10U;
int32_t x136 = -4577672;
uint32_t x141 = UINT32_MAX;
int8_t x149 = INT8_MIN;
uint16_t x151 = 1719U;
static uint16_t x152 = UINT16_MAX;
int32_t x154 = -453829;
volatile uint32_t x155 = 2386990U;
int64_t t33 = -19122042LL;
int32_t x162 = -2764;
int64_t x169 = 34574624894LL;
int8_t x171 = INT8_MIN;
volatile int64_t t37 = INT64_MIN;
uint64_t t38 = 242934801382LLU;
int8_t x185 = INT8_MIN;
uint16_t x189 = 39U;
volatile int64_t t41 = INT64_MIN;
static int16_t x208 = -871;
uint32_t x212 = 247196111U;
volatile int64_t x216 = 3LL;
static int32_t x217 = INT32_MIN;
uint32_t x218 = UINT32_MAX;
int32_t x221 = INT32_MIN;
volatile uint64_t t50 = 1855431LLU;
int16_t x243 = INT16_MIN;
volatile int32_t t52 = -408373563;
volatile int64_t t53 = -1166837943071194LL;
int16_t x253 = INT16_MIN;
static uint64_t x255 = UINT64_MAX;
int64_t x257 = -1LL;
volatile int64_t x267 = -1LL;
static int16_t x276 = INT16_MAX;
int32_t x278 = INT32_MAX;
uint16_t x279 = UINT16_MAX;
int32_t x281 = INT32_MIN;
volatile int8_t x282 = 55;
uint32_t t60 = 425U;
volatile int32_t t65 = 1;
int32_t x309 = 222071;
static volatile uint16_t x312 = UINT16_MAX;
uint16_t x317 = 307U;
int32_t x320 = INT32_MIN;
uint64_t t70 = 70054306022931980LLU;
static int8_t x334 = -1;
int64_t x338 = INT64_MIN;
int64_t x339 = -1LL;
int64_t x344 = -152585003367LL;
int8_t x348 = -25;
int64_t x355 = INT64_MIN;
uint64_t t79 = 4379LLU;
volatile uint64_t x366 = UINT64_MAX;
uint32_t x367 = UINT32_MAX;
int32_t x373 = -886;
volatile int32_t t82 = 7080678;
int32_t x378 = 6074105;
int8_t x383 = INT8_MIN;
uint8_t x390 = UINT8_MAX;
int16_t x395 = INT16_MAX;
uint64_t x401 = UINT64_MAX;
uint64_t x402 = 51020LLU;
uint32_t x403 = UINT32_MAX;
static int64_t x404 = INT64_MIN;
int32_t x405 = 1007829;
int16_t x406 = -17;
uint16_t x409 = 205U;
int64_t t91 = -953388LL;
static int8_t x417 = INT8_MIN;
volatile int8_t x418 = -1;
static uint32_t t93 = 31224339U;
int16_t x433 = INT16_MIN;


void f0(void) {
	static uint16_t x3 = 2U;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 4264293058226982LLU;

	t0 = (x1^(x2/(x3+x4)));

	if (t0 != 18446744073700610486LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int16_t x6 = -1;
	uint16_t x8 = 1U;

	t1 = (x5^(x6/(x7+x8)));

	if (t1 != 255) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static int8_t x11 = 1;
	uint8_t x12 = UINT8_MAX;
	uint64_t t2 = 216LLU;

	t2 = (x9^(x10/(x11+x12)));

	if (t2 != 18410715276690588508LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = 99268018;
	int16_t x15 = -1;
	int32_t t3 = INT32_MIN;

	t3 = (x13^(x14/(x15+x16)));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x18 = UINT8_MAX;
	static volatile int64_t x19 = 45762LL;
	static volatile int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 388980363536925546LL;

	t4 = (x17^(x18/(x19+x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 513047479877642LLU;
	int16_t x23 = INT16_MIN;
	volatile uint64_t t5 = 510343268050861871LLU;

	t5 = (x21^(x22/(x23+x24)));

	if (t5 != 513047479877643LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static int8_t x26 = INT8_MIN;
	uint8_t x27 = 63U;
	int32_t x28 = INT32_MIN;
	volatile int32_t t6 = -30623;

	t6 = (x25^(x26/(x27+x28)));

	if (t6 != 255) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 16675U;
	int64_t x34 = INT64_MAX;
	int16_t x35 = 1503;
	int16_t x36 = -747;
	volatile int64_t t7 = -517276994605LL;

	t7 = (x33^(x34/(x35+x36)));

	if (t7 != 12200227561993379LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -88LL;
	int32_t x39 = INT32_MIN;
	uint32_t x40 = 10149571U;

	t8 = (x37^(x38/(x39+x40)));

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	static int32_t x42 = 2;
	volatile int16_t x43 = INT16_MIN;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t9 = UINT64_MAX;

	t9 = (x41^(x42/(x43+x44)));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x53 = UINT32_MAX;
	int32_t x54 = -1;
	uint32_t x55 = 554269U;
	volatile uint32_t t10 = 4807U;

	t10 = (x53^(x54/(x55+x56)));

	if (t10 != 4294959548U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = 789;
	int16_t x58 = -5275;
	uint32_t x59 = UINT32_MAX;
	static uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 883707723697542LLU;

	t11 = (x57^(x58/(x59+x60)));

	if (t11 != 4294968084LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x62 = 0;
	uint32_t x63 = 1897847164U;
	int64_t x64 = -1LL;
	static int64_t t12 = 0LL;

	t12 = (x61^(x62/(x63+x64)));

	if (t12 != 6335LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 2U;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -65;
	static int16_t x68 = INT16_MIN;
	uint64_t t13 = 4280765731451400131LLU;

	t13 = (x65^(x66/(x67+x68)));

	if (t13 != 3LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 579007542060139021LLU;
	static int16_t x70 = 3;
	uint16_t x71 = 6U;
	int16_t x72 = -3932;
	volatile uint64_t t14 = 112277113751104845LLU;

	t14 = (x69^(x70/(x71+x72)));

	if (t14 != 579007542060139021LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x75 = INT16_MAX;
	volatile int32_t x76 = INT32_MIN;
	static volatile int32_t t15 = -451239804;

	t15 = (x73^(x74/(x75+x76)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x77 = 14U;
	int8_t x79 = INT8_MIN;
	int32_t x80 = INT32_MAX;
	volatile int32_t t16 = 866;

	t16 = (x77^(x78/(x79+x80)));

	if (t16 != -15) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	volatile int64_t x83 = -1LL;
	int32_t x84 = -1;
	int64_t t17 = 2554671432542521744LL;

	t17 = (x81^(x82/(x83+x84)));

	if (t17 != -2147483648LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x87 = 92U;
	volatile int64_t x88 = -1LL;

	t18 = (x85^(x86/(x87+x88)));

	if (t18 != -9223372036854775449LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x90 = INT64_MIN;
	int64_t x91 = 21772794004LL;
	uint8_t x92 = UINT8_MAX;
	volatile int64_t t19 = 65035884357988LL;

	t19 = (x89^(x90/(x91+x92)));

	if (t19 != -423605401LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x93 = UINT16_MAX;
	uint8_t x94 = 0U;
	uint64_t x95 = UINT64_MAX;
	static uint8_t x96 = 30U;
	uint64_t t20 = 1512740797LLU;

	t20 = (x93^(x94/(x95+x96)));

	if (t20 != 65535LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = 716;
	int16_t x99 = INT16_MAX;
	static int64_t t21 = -7687178529LL;

	t21 = (x97^(x98/(x99+x100)));

	if (t21 != 716LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x106 = UINT8_MAX;
	static uint16_t x107 = UINT16_MAX;
	uint64_t t22 = 3431LLU;

	t22 = (x105^(x106/(x107+x108)));

	if (t22 != 5224LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = 566414LL;
	static uint16_t x110 = 3448U;
	int8_t x111 = -18;
	uint8_t x112 = 5U;

	t23 = (x109^(x110/(x111+x112)));

	if (t23 != -566663LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x113 = 70U;
	volatile int16_t x116 = INT16_MAX;
	int32_t t24 = -13896412;

	t24 = (x113^(x114/(x115+x116)));

	if (t24 != 70) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 122U;
	static int16_t x118 = INT16_MAX;
	static int32_t x119 = INT32_MIN;
	uint32_t x120 = 1354908U;

	t25 = (x117^(x118/(x119+x120)));

	if (t25 != 122U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x122 = 4564770624LLU;
	uint32_t x124 = 670499466U;
	volatile uint64_t t26 = 8921136080773222LLU;

	t26 = (x121^(x122/(x123+x124)));

	if (t26 != 225485888604LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x126 = INT32_MIN;
	int8_t x127 = 4;
	int64_t x128 = INT64_MIN;

	t27 = (x125^(x126/(x127+x128)));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = -1;
	uint8_t x130 = 2U;
	int8_t x131 = INT8_MIN;
	int64_t x132 = -172425LL;
	volatile int64_t t28 = 392304423LL;

	t28 = (x129^(x130/(x131+x132)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = -1;
	uint8_t x135 = UINT8_MAX;
	int32_t t29 = 18949;

	t29 = (x133^(x134/(x135+x136)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x137 = UINT64_MAX;
	static uint16_t x138 = 637U;
	int64_t x139 = -1LL;
	int64_t x140 = -1LL;
	uint64_t t30 = 7221973992408354LLU;

	t30 = (x137^(x138/(x139+x140)));

	if (t30 != 317LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x142 = -27;
	static uint64_t x143 = 24301257LLU;
	uint16_t x144 = 161U;
	volatile uint64_t t31 = 572126085822430LLU;

	t31 = (x141^(x142/(x143+x144)));

	if (t31 != 757042480307LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x150 = -169502884781515LL;
	static int64_t t32 = 789548428825618053LL;

	t32 = (x149^(x150/(x151+x152)));

	if (t32 != 2520339188LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x153 = 0U;
	static int64_t x156 = INT64_MIN;

	t33 = (x153^(x154/(x155+x156)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = 24;
	static int16_t x158 = INT16_MIN;
	uint16_t x159 = UINT16_MAX;
	volatile int32_t x160 = -1;
	volatile int32_t t34 = 1837;

	t34 = (x157^(x158/(x159+x160)));

	if (t34 != 24) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x161 = INT64_MIN;
	static uint32_t x163 = UINT32_MAX;
	int8_t x164 = INT8_MIN;
	volatile int64_t t35 = INT64_MIN;

	t35 = (x161^(x162/(x163+x164)));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x170 = INT8_MAX;
	int64_t x172 = INT64_MAX;
	volatile int64_t t36 = 0LL;

	t36 = (x169^(x170/(x171+x172)));

	if (t36 != 34574624894LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x173 = INT64_MIN;
	int16_t x174 = -1;
	int16_t x175 = -1;
	int64_t x176 = INT64_MAX;

	t37 = (x173^(x174/(x175+x176)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x181 = 26861665LLU;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 2981U;
	int32_t x184 = INT32_MIN;

	t38 = (x181^(x182/(x183+x184)));

	if (t38 != 26861665LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint8_t x186 = 9U;
	int8_t x187 = INT8_MIN;
	int32_t x188 = INT32_MAX;
	int32_t t39 = -3026;

	t39 = (x185^(x186/(x187+x188)));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x190 = 4084U;
	int16_t x191 = -1;
	int16_t x192 = INT16_MIN;
	volatile int32_t t40 = 706999;

	t40 = (x189^(x190/(x191+x192)));

	if (t40 != 39) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MAX;
	static uint8_t x195 = 1U;
	uint32_t x196 = 336672607U;

	t41 = (x193^(x194/(x195+x196)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x197 = INT64_MIN;
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = 20U;
	static uint32_t x200 = 587U;
	static volatile int64_t t42 = 62865295730033LL;

	t42 = (x197^(x198/(x199+x200)));

	if (t42 != -9223372036854775701LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = 1032;
	static volatile int8_t x202 = INT8_MIN;
	int64_t x203 = 1271103529025099831LL;
	static int16_t x204 = 1;
	volatile int64_t t43 = 0LL;

	t43 = (x201^(x202/(x203+x204)));

	if (t43 != 1032LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = -1;
	volatile uint8_t x206 = 3U;
	uint64_t x207 = 4LLU;
	static uint64_t t44 = UINT64_MAX;

	t44 = (x205^(x206/(x207+x208)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x209 = 417631847437741LLU;
	int16_t x210 = INT16_MIN;
	int16_t x211 = INT16_MAX;
	uint64_t t45 = 266637101146961LLU;

	t45 = (x209^(x210/(x211+x212)));

	if (t45 != 417631847437756LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x213 = INT64_MAX;
	volatile int32_t x214 = INT32_MIN;
	uint32_t x215 = 11U;
	static int64_t t46 = 14617016294162LL;

	t46 = (x213^(x214/(x215+x216)));

	if (t46 != -9223372036701384120LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MIN;
	uint32_t t47 = 1798010911U;

	t47 = (x217^(x218/(x219+x220)));

	if (t47 != 2147483649U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x222 = UINT32_MAX;
	volatile int64_t x223 = -1LL;
	static uint8_t x224 = UINT8_MAX;
	volatile int64_t t48 = 182514966338152528LL;

	t48 = (x221^(x222/(x223+x224)));

	if (t48 != -2130574328LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x225 = 1064;
	volatile int64_t x226 = INT64_MIN;
	static volatile uint32_t x227 = UINT32_MAX;
	uint8_t x228 = 5U;
	volatile int64_t t49 = 2366378LL;

	t49 = (x225^(x226/(x227+x228)));

	if (t49 != -2305843009213692888LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x233 = 997846633U;
	uint64_t x234 = UINT64_MAX;
	int64_t x235 = INT64_MAX;
	uint64_t x236 = 171514470172925494LLU;

	t50 = (x233^(x234/(x235+x236)));

	if (t50 != 997846632LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x237 = 2U;
	int64_t x238 = INT64_MIN;
	int8_t x239 = INT8_MAX;
	static int16_t x240 = INT16_MAX;
	static int64_t t51 = -567127460LL;

	t51 = (x237^(x238/(x239+x240)));

	if (t51 != -280396790808497LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 268U;
	volatile int16_t x242 = INT16_MIN;
	int8_t x244 = INT8_MIN;

	t52 = (x241^(x242/(x243+x244)));

	if (t52 != 268) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x249 = -1;
	int64_t x250 = 3LL;
	int32_t x251 = INT32_MAX;
	int8_t x252 = -1;

	t53 = (x249^(x250/(x251+x252)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x254 = -1LL;
	int8_t x256 = INT8_MIN;
	uint64_t t54 = 394085LLU;

	t54 = (x253^(x254/(x255+x256)));

	if (t54 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x258 = UINT16_MAX;
	uint16_t x259 = 1724U;
	uint8_t x260 = UINT8_MAX;
	volatile int64_t t55 = 70095422617LL;

	t55 = (x257^(x258/(x259+x260)));

	if (t55 != -34LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x261 = INT8_MIN;
	uint64_t x262 = UINT64_MAX;
	volatile int64_t x263 = INT64_MIN;
	uint32_t x264 = 108U;
	volatile uint64_t t56 = 427190531832491LLU;

	t56 = (x261^(x262/(x263+x264)));

	if (t56 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x265 = 261U;
	int64_t x266 = 502742LL;
	uint16_t x268 = UINT16_MAX;
	int64_t t57 = 242LL;

	t57 = (x265^(x266/(x267+x268)));

	if (t57 != 258LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x273 = 5327;
	volatile int32_t x274 = 2;
	uint8_t x275 = UINT8_MAX;
	int32_t t58 = -5;

	t58 = (x273^(x274/(x275+x276)));

	if (t58 != 5327) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x277 = INT8_MIN;
	int32_t x280 = -1;
	volatile int32_t t59 = -12839447;

	t59 = (x277^(x278/(x279+x280)));

	if (t59 != -32895) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x283 = 53U;
	int32_t x284 = INT32_MIN;

	t60 = (x281^(x282/(x283+x284)));

	if (t60 != 2147483648U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x285 = -596;
	int8_t x286 = -1;
	volatile int8_t x287 = -1;
	uint64_t x288 = UINT64_MAX;
	volatile uint64_t t61 = 2192687012LLU;

	t61 = (x285^(x286/(x287+x288)));

	if (t61 != 18446744073709551021LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x289 = 13U;
	volatile int16_t x290 = 12665;
	uint64_t x291 = 111790LLU;
	static volatile int64_t x292 = -1LL;
	uint64_t t62 = 1751267321317020LLU;

	t62 = (x289^(x290/(x291+x292)));

	if (t62 != 13LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x293 = INT32_MIN;
	uint8_t x294 = 3U;
	int8_t x295 = 0;
	static uint32_t x296 = 242338748U;
	volatile uint32_t t63 = 389553U;

	t63 = (x293^(x294/(x295+x296)));

	if (t63 != 2147483648U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x297 = 68U;
	static int8_t x298 = -1;
	int16_t x299 = INT16_MIN;
	volatile int8_t x300 = -1;
	int32_t t64 = 806573;

	t64 = (x297^(x298/(x299+x300)));

	if (t64 != 68) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = -3;
	int8_t x302 = -59;
	volatile int16_t x303 = -1;
	static volatile int16_t x304 = INT16_MIN;

	t65 = (x301^(x302/(x303+x304)));

	if (t65 != -3) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x305 = 8U;
	volatile int64_t x306 = 53217686LL;
	volatile uint64_t x307 = UINT64_MAX;
	static uint64_t x308 = UINT64_MAX;
	uint64_t t66 = 0LLU;

	t66 = (x305^(x306/(x307+x308)));

	if (t66 != 8LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x310 = INT16_MIN;
	int64_t x311 = -1LL;
	volatile int64_t t67 = -11LL;

	t67 = (x309^(x310/(x311+x312)));

	if (t67 != 222071LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x313 = INT8_MIN;
	volatile int16_t x314 = -5200;
	uint16_t x315 = 3674U;
	static int16_t x316 = -1;
	volatile int32_t t68 = -492045;

	t68 = (x313^(x314/(x315+x316)));

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x318 = -62429647740LL;
	uint64_t x319 = 450699608982LLU;
	volatile uint64_t t69 = 927458496394840LLU;

	t69 = (x317^(x318/(x319+x320)));

	if (t69 != 41125359LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x321 = UINT8_MAX;
	uint8_t x322 = 1U;
	static uint64_t x323 = 6872532235713170LLU;
	int8_t x324 = -52;

	t70 = (x321^(x322/(x323+x324)));

	if (t70 != 255LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = -1LL;
	int64_t x326 = -200428958985349919LL;
	int8_t x327 = INT8_MIN;
	int64_t x328 = 30648476771LL;
	int64_t t71 = -274758109890LL;

	t71 = (x325^(x326/(x327+x328)));

	if (t71 != 6539604LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x329 = -1032;
	volatile int8_t x330 = 11;
	volatile int16_t x331 = -1;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t72 = 54U;

	t72 = (x329^(x330/(x331+x332)));

	if (t72 != 4294966264U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x333 = -1LL;
	volatile int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t73 = 6300512551567LL;

	t73 = (x333^(x334/(x335+x336)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x337 = 4718417LL;
	uint64_t x340 = 1645762815LLU;
	volatile uint64_t t74 = 31432LLU;

	t74 = (x337^(x338/(x339+x340)));

	if (t74 != 5608633335LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	uint64_t x343 = 61823159LLU;
	static uint64_t t75 = 9213314221928472744LLU;

	t75 = (x341^(x342/(x343+x344)));

	if (t75 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile uint16_t x346 = 3U;
	uint64_t x347 = 371LLU;
	static uint64_t t76 = 7351876213802964LLU;

	t76 = (x345^(x346/(x347+x348)));

	if (t76 != 255LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x349 = -31;
	static int64_t x350 = INT64_MAX;
	volatile int16_t x351 = 1;
	int32_t x352 = 4007917;
	int64_t t77 = -10176277LL;

	t77 = (x349^(x350/(x351+x352)));

	if (t77 != -2301287610379LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x353 = 2U;
	volatile int8_t x354 = 3;
	volatile int64_t x356 = 681547619261334LL;
	volatile int64_t t78 = 121LL;

	t78 = (x353^(x354/(x355+x356)));

	if (t78 != 2LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MAX;
	static uint64_t x358 = 283LLU;
	int64_t x359 = INT64_MIN;
	uint32_t x360 = UINT32_MAX;

	t79 = (x357^(x358/(x359+x360)));

	if (t79 != 127LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x368 = 0U;
	static uint64_t t80 = 423733453467720LLU;

	t80 = (x365^(x366/(x367+x368)));

	if (t80 != 18446744069414584318LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = -9;
	volatile int64_t x370 = -1LL;
	static uint8_t x371 = 39U;
	volatile uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t81 = 798759593185LLU;

	t81 = (x369^(x370/(x371+x372)));

	if (t81 != 17961303440190879213LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x374 = UINT8_MAX;
	volatile int16_t x375 = 905;
	int16_t x376 = INT16_MIN;

	t82 = (x373^(x374/(x375+x376)));

	if (t82 != -886) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x377 = UINT32_MAX;
	uint8_t x379 = 5U;
	volatile uint64_t x380 = 72931LLU;
	volatile uint64_t t83 = 1281950LLU;

	t83 = (x377^(x378/(x379+x380)));

	if (t83 != 4294967212LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = 0;
	int8_t x382 = -1;
	int8_t x384 = -12;
	int32_t t84 = 1427;

	t84 = (x381^(x382/(x383+x384)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x385 = -1LL;
	static volatile int32_t x386 = -19265605;
	uint16_t x387 = 3121U;
	int64_t x388 = INT64_MIN;
	volatile int64_t t85 = -49LL;

	t85 = (x385^(x386/(x387+x388)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x389 = 4U;
	volatile int64_t x391 = -9008LL;
	int8_t x392 = -1;
	static int64_t t86 = 787464908714LL;

	t86 = (x389^(x390/(x391+x392)));

	if (t86 != 4LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int32_t x394 = -1;
	volatile int32_t x396 = -1;
	volatile int32_t t87 = -359;

	t87 = (x393^(x394/(x395+x396)));

	if (t87 != 65535) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x397 = 26;
	int64_t x398 = -1LL;
	static int16_t x399 = 6307;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t88 = 52500221024LL;

	t88 = (x397^(x398/(x399+x400)));

	if (t88 != 26LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t t89 = UINT64_MAX;

	t89 = (x401^(x402/(x403+x404)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x407 = UINT8_MAX;
	uint32_t x408 = 456884U;
	uint32_t t90 = 1911U;

	t90 = (x405^(x406/(x407+x408)));

	if (t90 != 1000550U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x410 = -1LL;
	uint32_t x411 = UINT32_MAX;
	int8_t x412 = -1;

	t91 = (x409^(x410/(x411+x412)));

	if (t91 != 205LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x413 = 1U;
	int8_t x414 = INT8_MAX;
	static int64_t x415 = -1LL;
	int8_t x416 = INT8_MIN;
	static volatile int64_t t92 = 419LL;

	t92 = (x413^(x414/(x415+x416)));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x419 = 4336697U;
	int16_t x420 = INT16_MAX;

	t93 = (x417^(x418/(x419+x420)));

	if (t93 != 4294966358U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x421 = 679014737393997338LLU;
	uint64_t x422 = 7806031456322LLU;
	uint16_t x423 = 22243U;
	uint16_t x424 = 893U;
	static volatile uint64_t t94 = 32975758032482652LLU;

	t94 = (x421^(x422/(x423+x424)));

	if (t94 != 679014737190818147LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x429 = INT8_MIN;
	uint32_t x430 = UINT32_MAX;
	int8_t x431 = 22;
	static uint32_t x432 = UINT32_MAX;
	uint32_t t95 = 13U;

	t95 = (x429^(x430/(x431+x432)));

	if (t95 != 4090444940U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x434 = 2006U;
	volatile int16_t x435 = INT16_MIN;
	int8_t x436 = 3;
	volatile int32_t t96 = -2;

	t96 = (x433^(x434/(x435+x436)));

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -122613;
	int64_t x442 = 1082633576849LL;
	int8_t x443 = -1;
	static uint64_t x444 = 168LLU;
	volatile uint64_t t97 = 1LLU;

	t97 = (x441^(x442/(x443+x444)));

	if (t97 != 18446744067226605638LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x445 = 0;
	static uint16_t x446 = 70U;
	int8_t x447 = INT8_MIN;
	uint32_t x448 = 153938U;
	static uint32_t t98 = 157U;

	t98 = (x445^(x446/(x447+x448)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x449 = INT16_MAX;
	int32_t x450 = INT32_MIN;
	volatile int16_t x451 = 4620;
	int16_t x452 = INT16_MAX;
	int32_t t99 = 6;

	t99 = (x449^(x450/(x451+x452)));

	if (t99 != -40866) { NG(); } else { ; }
	
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

