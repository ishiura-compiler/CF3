#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 247681U;
volatile uint16_t x30 = 238U;
int8_t x31 = -1;
volatile uint64_t x34 = 7LLU;
uint32_t x36 = 33899969U;
volatile int32_t x41 = INT32_MIN;
uint16_t x43 = 12207U;
uint64_t x44 = 13790LLU;
uint8_t x58 = 114U;
uint32_t x65 = 26U;
uint16_t x66 = 223U;
uint16_t x69 = 5147U;
uint8_t x70 = 0U;
int8_t x84 = -1;
volatile uint32_t t12 = 92U;
uint8_t x86 = 4U;
volatile uint64_t x87 = 85268621847449LLU;
int64_t x93 = INT64_MIN;
volatile int8_t x102 = 15;
int64_t t18 = -102897077LL;
uint64_t x116 = 413531107469468LLU;
volatile uint64_t t19 = 261089403LLU;
static int64_t x119 = 464208796780LL;
static int16_t x138 = -3;
int16_t x140 = INT16_MAX;
int16_t x142 = -1;
int64_t x145 = -3LL;
uint64_t x149 = 453624LLU;
int64_t x157 = 4003722LL;
uint8_t x160 = 0U;
int32_t x174 = INT32_MIN;
int16_t x177 = 1;
volatile uint8_t x178 = 27U;
uint64_t x192 = 249886658922031LLU;
volatile int8_t x193 = INT8_MAX;
int64_t t34 = -44875814184209624LL;
uint32_t x205 = 233586U;
volatile uint32_t t36 = 469175028U;
volatile int32_t t37 = -87882;
static int8_t x216 = INT8_MIN;
volatile int64_t t38 = -8386867284953LL;
static int8_t x218 = INT8_MAX;
uint32_t x222 = UINT32_MAX;
int64_t x236 = 27LL;
int8_t x240 = INT8_MIN;
volatile int8_t x243 = 4;
static volatile uint64_t t46 = 31427993811602LLU;
int8_t x254 = -1;
int32_t x259 = INT32_MIN;
int16_t x262 = -120;
int16_t x269 = INT16_MAX;
int64_t x271 = 0LL;
int64_t x274 = INT64_MAX;
int8_t x277 = -1;
volatile uint64_t t52 = 185469532599861402LLU;
int32_t x285 = INT32_MIN;
static int32_t x287 = -1;
uint32_t x288 = 86U;
static int16_t x291 = -49;
uint32_t x295 = 33450U;
int16_t x305 = -1;
int64_t x308 = -1LL;
int64_t t59 = -2540950118086LL;
volatile uint64_t x310 = UINT64_MAX;
volatile int64_t x319 = 2046437257570511509LL;
int8_t x322 = -1;
volatile int64_t x333 = 939LL;
uint8_t x336 = UINT8_MAX;
volatile int16_t x341 = INT16_MIN;
int64_t x344 = INT64_MIN;
int16_t x354 = -1;
uint16_t x355 = 25U;
uint32_t x356 = 17U;
uint64_t t69 = 2992037498071LLU;
int64_t x357 = -1LL;
uint64_t x359 = 6052532849LLU;
uint32_t x373 = UINT32_MAX;
volatile int16_t x385 = INT16_MAX;
int16_t x388 = INT16_MIN;
int16_t x391 = -1;
volatile uint64_t x401 = UINT64_MAX;
volatile uint64_t t78 = UINT64_MAX;
int8_t x406 = INT8_MIN;
uint8_t x413 = 10U;
static uint16_t x421 = 20U;
int16_t x424 = INT16_MIN;
int64_t x428 = INT64_MIN;
static uint32_t x434 = 864032U;
int8_t x436 = INT8_MIN;
volatile int64_t x440 = INT64_MIN;
int8_t x445 = INT8_MIN;
uint64_t x453 = 134612LLU;
uint64_t t89 = 61762585181LLU;
int64_t t90 = 32760789LL;
int16_t x462 = -6;
uint64_t t92 = 500830234LLU;
uint16_t x484 = 50U;
uint8_t x489 = UINT8_MAX;
int32_t x491 = INT32_MIN;
uint16_t x492 = 2U;
int64_t x493 = -1LL;
volatile int32_t t99 = -44;


void f0(void) {
	static int32_t x1 = -1;
	volatile int16_t x2 = -1;
	static volatile uint32_t x3 = 2327774U;
	volatile int32_t x4 = -1;

	t0 = (x1*(x2%(x3+x4)));

	if (t0 != 4294741186U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -563588311;
	int32_t x6 = 3954;
	volatile int16_t x7 = -1;
	int16_t x8 = -1;
	int32_t t1 = -18062380;

	t1 = (x5*(x6%(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 9U;
	static int32_t x18 = INT32_MIN;
	int16_t x19 = 7;
	int8_t x20 = INT8_MIN;
	uint32_t t2 = 2U;

	t2 = (x17*(x18%(x19+x20)));

	if (t2 != 4294966486U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x29 = UINT8_MAX;
	int16_t x32 = INT16_MIN;
	int32_t t3 = -6301066;

	t3 = (x29*(x30%(x31+x32)));

	if (t3 != 60690) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = -2LL;
	uint8_t x35 = UINT8_MAX;
	uint64_t t4 = 191148789124042LLU;

	t4 = (x33*(x34%(x35+x36)));

	if (t4 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x42 = INT64_MIN;
	uint64_t t5 = 9416341516949803LLU;

	t5 = (x41*(x42%(x43+x44)));

	if (t5 != 18446707072566296576LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = INT32_MIN;
	uint16_t x46 = 375U;
	int16_t x47 = 2630;
	uint64_t x48 = 60930171329681LLU;
	volatile uint64_t t6 = 125411282011233LLU;

	t6 = (x45*(x46%(x47+x48)));

	if (t6 != 18446743268403183616LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x57 = INT16_MAX;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 48U;
	volatile uint32_t t7 = 2057465U;

	t7 = (x57*(x58%(x59+x60)));

	if (t7 != 3735438U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x67 = 841537U;
	volatile uint16_t x68 = UINT16_MAX;
	volatile uint32_t t8 = 13968635U;

	t8 = (x65*(x66%(x67+x68)));

	if (t8 != 5798U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x71 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	int32_t t9 = -4804840;

	t9 = (x69*(x70%(x71+x72)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int32_t x74 = -2982897;
	volatile int64_t x75 = 508115810LL;
	uint16_t x76 = 956U;
	static uint64_t t10 = 938968423603257420LLU;

	t10 = (x73*(x74%(x75+x76)));

	if (t10 != 2982897LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x77 = UINT8_MAX;
	static volatile uint8_t x78 = UINT8_MAX;
	static uint32_t x79 = 1942U;
	static volatile int32_t x80 = -1;
	volatile uint32_t t11 = 2U;

	t11 = (x77*(x78%(x79+x80)));

	if (t11 != 65025U) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x81 = 0U;
	uint8_t x82 = 3U;
	volatile int8_t x83 = INT8_MAX;

	t12 = (x81*(x82%(x83+x84)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x85 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;
	uint64_t t13 = 9816417003LLU;

	t13 = (x85*(x86%(x87+x88)));

	if (t13 != 8589934588LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x89 = 27U;
	int64_t x90 = INT64_MIN;
	uint8_t x91 = 49U;
	int16_t x92 = -1;
	volatile int64_t t14 = 222LL;

	t14 = (x89*(x90%(x91+x92)));

	if (t14 != -864LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x94 = 9491941472LLU;
	static uint64_t x95 = UINT64_MAX;
	volatile int64_t x96 = -215329599665322966LL;
	static volatile uint64_t t15 = 86728549038091LLU;

	t15 = (x93*(x94%(x95+x96)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x101 = 1536LLU;
	volatile uint16_t x103 = UINT16_MAX;
	static int16_t x104 = INT16_MAX;
	uint64_t t16 = 476LLU;

	t16 = (x101*(x102%(x103+x104)));

	if (t16 != 23040LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = 1;
	static int64_t x106 = INT64_MAX;
	volatile uint64_t x107 = 270506927100451LLU;
	uint16_t x108 = UINT16_MAX;
	uint64_t t17 = 208712300390102LLU;

	t17 = (x105*(x106%(x107+x108)));

	if (t17 != 167848203317151LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x109 = 0U;
	int64_t x110 = 2924661029555LL;
	static int32_t x111 = -1;
	volatile int16_t x112 = -1;

	t18 = (x109*(x110%(x111+x112)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = -4;
	int32_t x115 = INT32_MAX;

	t19 = (x113*(x114%(x115+x116)));

	if (t19 != 9724884991033507840LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x117 = 31787546LL;
	uint64_t x118 = 2698987LLU;
	uint16_t x120 = 22U;
	volatile uint64_t t20 = 2026653826671170496LLU;

	t20 = (x117*(x118%(x119+x120)));

	if (t20 != 85794173415902LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x133 = INT16_MAX;
	volatile int32_t x134 = -1;
	int64_t x135 = -7581569205LL;
	uint16_t x136 = 346U;
	volatile int64_t t21 = -510208668367359LL;

	t21 = (x133*(x134%(x135+x136)));

	if (t21 != -32767LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x137 = -1;
	uint32_t x139 = UINT32_MAX;
	uint32_t t22 = 11975917U;

	t22 = (x137*(x138%(x139+x140)));

	if (t22 != 4294967283U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x141 = -1191;
	uint16_t x143 = UINT16_MAX;
	volatile uint8_t x144 = 26U;
	int32_t t23 = -7481321;

	t23 = (x141*(x142%(x143+x144)));

	if (t23 != 1191) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x146 = -8;
	volatile int16_t x147 = INT16_MIN;
	int64_t x148 = -285956443149316288LL;
	static int64_t t24 = -18856302567229LL;

	t24 = (x145*(x146%(x147+x148)));

	if (t24 != 24LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x150 = 497;
	static uint64_t x151 = 11359919834140LLU;
	int64_t x152 = INT64_MIN;
	volatile uint64_t t25 = 138LLU;

	t25 = (x149*(x150%(x151+x152)));

	if (t25 != 225451128LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = -1LL;
	volatile uint8_t x154 = 0U;
	static uint64_t x155 = 33171715128982743LLU;
	uint32_t x156 = UINT32_MAX;
	uint64_t t26 = 53171835LLU;

	t26 = (x153*(x154%(x155+x156)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x158 = 4105416U;
	uint16_t x159 = UINT16_MAX;
	int64_t t27 = -4620583010LL;

	t27 = (x157*(x158%(x159+x160)));

	if (t27 != 169141239612LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 1091LLU;
	uint16_t x163 = 14U;
	static int16_t x164 = INT16_MIN;
	volatile uint64_t t28 = 1597014643394326LLU;

	t28 = (x161*(x162%(x163+x164)));

	if (t28 != 18446744073709550525LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x169 = 0;
	int32_t x170 = -1;
	int16_t x171 = -1;
	int8_t x172 = -27;
	volatile int32_t t29 = 244442;

	t29 = (x169*(x170%(x171+x172)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = -1;
	volatile uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 1241636804U;
	uint64_t t30 = 3197687167866094593LLU;

	t30 = (x173*(x174%(x175+x176)));

	if (t30 != 18446744073317180557LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x179 = -1;
	int32_t x180 = -1;
	int32_t t31 = -4;

	t31 = (x177*(x178%(x179+x180)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	int8_t x187 = INT8_MIN;
	uint16_t x188 = 4U;
	volatile int32_t t32 = -773911263;

	t32 = (x185*(x186%(x187+x188)));

	if (t32 != -2064384) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x189 = -218;
	int64_t x190 = -463060983LL;
	int32_t x191 = -1;
	volatile uint64_t t33 = 955783799843928LLU;

	t33 = (x189*(x190%(x191+x192)));

	if (t33 != 18422565340062096422LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x194 = 1884150133426679249LL;
	int32_t x195 = 898;
	int16_t x196 = INT16_MAX;

	t34 = (x193*(x194%(x195+x196)));

	if (t34 != 3180588LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x197 = 5;
	int64_t x198 = -1LL;
	static uint64_t x199 = UINT64_MAX;
	int16_t x200 = 3894;
	static uint64_t t35 = 1477422542LLU;

	t35 = (x197*(x198%(x199+x200)));

	if (t35 != 1360LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x206 = UINT16_MAX;
	uint32_t x207 = UINT32_MAX;
	static int8_t x208 = 0;

	t36 = (x205*(x206%(x207+x208)));

	if (t36 != 2423156622U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x209 = 6174840;
	uint8_t x210 = 46U;
	uint16_t x211 = 11U;
	static int8_t x212 = INT8_MIN;

	t37 = (x209*(x210%(x211+x212)));

	if (t37 != 284042640) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x213 = -793LL;
	volatile uint16_t x214 = 8997U;
	uint16_t x215 = 3682U;

	t38 = (x213*(x214%(x215+x216)));

	if (t38 != -1497977LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x217 = UINT32_MAX;
	int16_t x219 = INT16_MAX;
	int64_t x220 = -1LL;
	volatile int64_t t39 = 59453728LL;

	t39 = (x217*(x218%(x219+x220)));

	if (t39 != 545460846465LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = INT32_MIN;
	volatile int32_t x223 = 116183427;
	int16_t x224 = -1;
	uint32_t t40 = 3654U;

	t40 = (x221*(x222%(x223+x224)));

	if (t40 != 2147483648U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x229 = 84U;
	int32_t x230 = INT32_MIN;
	int64_t x231 = 1489344987LL;
	int64_t x232 = INT64_MIN;
	static volatile int64_t t41 = -1155301733053222LL;

	t41 = (x229*(x230%(x231+x232)));

	if (t41 != -180388626432LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = -40;
	volatile uint16_t x234 = UINT16_MAX;
	uint16_t x235 = UINT16_MAX;
	int64_t t42 = 52374718693LL;

	t42 = (x233*(x234%(x235+x236)));

	if (t42 != -2621400LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x237 = -1;
	static uint16_t x238 = UINT16_MAX;
	uint16_t x239 = UINT16_MAX;
	volatile int32_t t43 = -110464;

	t43 = (x237*(x238%(x239+x240)));

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x241 = 3405LLU;
	uint64_t x242 = 68704907409341283LLU;
	static volatile uint32_t x244 = 991164U;
	uint64_t t44 = 5164227338LLU;

	t44 = (x241*(x242%(x243+x244)));

	if (t44 != 1478488455LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x245 = INT32_MAX;
	uint8_t x246 = 1U;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 15555002541283LLU;
	static uint64_t t45 = 31LLU;

	t45 = (x245*(x246%(x247+x248)));

	if (t45 != 2147483647LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x249 = 0;
	int8_t x250 = -1;
	int16_t x251 = 402;
	volatile uint64_t x252 = UINT64_MAX;

	t46 = (x249*(x250%(x251+x252)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x253 = 0LLU;
	uint16_t x255 = 260U;
	uint16_t x256 = UINT16_MAX;
	uint64_t t47 = 12615285970LLU;

	t47 = (x253*(x254%(x255+x256)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x257 = INT8_MAX;
	volatile int64_t x258 = -430LL;
	int64_t x260 = -1063LL;
	int64_t t48 = 1332897800391743LL;

	t48 = (x257*(x258%(x259+x260)));

	if (t48 != -54610LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x261 = -12;
	static volatile uint64_t x263 = 44625103LLU;
	static int8_t x264 = 3;
	volatile uint64_t t49 = 1LLU;

	t49 = (x261*(x262%(x263+x264)));

	if (t49 != 18446744073341882344LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x270 = 33689305LL;
	volatile uint16_t x272 = 210U;
	volatile int64_t t50 = -221855113106759LL;

	t50 = (x269*(x270%(x271+x272)));

	if (t50 != 1802185LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x273 = 9123850U;
	volatile int64_t x275 = -1LL;
	uint64_t x276 = UINT64_MAX;
	uint64_t t51 = 56LLU;

	t51 = (x273*(x274%(x275+x276)));

	if (t51 != 18446744073700427766LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x278 = -1;
	int16_t x279 = 97;
	volatile uint64_t x280 = UINT64_MAX;

	t52 = (x277*(x278%(x279+x280)));

	if (t52 != 18446744073709551553LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = -1;
	int16_t x282 = INT16_MAX;
	static int16_t x283 = INT16_MAX;
	volatile uint16_t x284 = 1799U;
	volatile int32_t t53 = -13;

	t53 = (x281*(x282%(x283+x284)));

	if (t53 != -32767) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x286 = -1783864972999LL;
	int64_t t54 = 23239738705818763LL;

	t54 = (x285*(x286%(x287+x288)));

	if (t54 != 30064771072LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x289 = UINT8_MAX;
	volatile int32_t x290 = INT32_MIN;
	int8_t x292 = INT8_MIN;
	int32_t t55 = 204974;

	t55 = (x289*(x290%(x291+x292)));

	if (t55 != -44115) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	int32_t x296 = INT32_MIN;
	volatile uint32_t t56 = 9828721U;

	t56 = (x293*(x294%(x295+x296)));

	if (t56 != 1100283904U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x297 = -555391378415188LL;
	uint64_t x298 = UINT64_MAX;
	uint32_t x299 = 16589858U;
	volatile uint32_t x300 = 2097U;
	volatile uint64_t t57 = 184603172062208LLU;

	t57 = (x297*(x298%(x299+x300)));

	if (t57 != 6840327676185188048LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = INT8_MIN;
	int8_t x302 = 18;
	static int8_t x303 = -58;
	uint16_t x304 = 664U;
	int32_t t58 = 1;

	t58 = (x301*(x302%(x303+x304)));

	if (t58 != -2304) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x306 = INT32_MAX;
	uint16_t x307 = UINT16_MAX;

	t59 = (x305*(x306%(x307+x308)));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = -256127968677803LL;
	static uint8_t x311 = 8U;
	int8_t x312 = 20;
	uint64_t t60 = 34826667219044LLU;

	t60 = (x309*(x310%(x311+x312)));

	if (t60 != 18442902154179384571LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x313 = INT8_MIN;
	static int8_t x314 = INT8_MIN;
	volatile int8_t x315 = INT8_MIN;
	uint16_t x316 = 30U;
	volatile int32_t t61 = 42;

	t61 = (x313*(x314%(x315+x316)));

	if (t61 != 3840) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = -1;
	volatile uint32_t x318 = 56U;
	uint16_t x320 = 1455U;
	volatile int64_t t62 = -177084194LL;

	t62 = (x317*(x318%(x319+x320)));

	if (t62 != -56LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x321 = INT8_MIN;
	volatile int16_t x323 = INT16_MAX;
	static int32_t x324 = -60482;
	volatile int32_t t63 = -17493836;

	t63 = (x321*(x322%(x323+x324)));

	if (t63 != 128) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x325 = 313;
	int64_t x326 = -1LL;
	int16_t x327 = -1;
	int8_t x328 = INT8_MIN;
	volatile int64_t t64 = 8499384485552LL;

	t64 = (x325*(x326%(x327+x328)));

	if (t64 != -313LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x329 = 1597556LLU;
	int64_t x330 = 1139959835LL;
	int64_t x331 = INT64_MAX;
	int64_t x332 = INT64_MIN;
	static uint64_t t65 = 5786LLU;

	t65 = (x329*(x330%(x331+x332)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x334 = 11406LLU;
	volatile int64_t x335 = INT64_MIN;
	volatile uint64_t t66 = 21750132252199502LLU;

	t66 = (x333*(x334%(x335+x336)));

	if (t66 != 10710234LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x342 = 6U;
	int8_t x343 = INT8_MAX;
	int64_t t67 = -8314144075831463LL;

	t67 = (x341*(x342%(x343+x344)));

	if (t67 != -196608LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x349 = -1LL;
	volatile int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	int16_t x352 = -1;
	int64_t t68 = -131545717107LL;

	t68 = (x349*(x350%(x351+x352)));

	if (t68 != 32768LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x353 = 53629197LLU;

	t69 = (x353*(x354%(x355+x356)));

	if (t69 != 160887591LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x358 = 52U;
	int16_t x360 = -1;
	uint64_t t70 = 18950LLU;

	t70 = (x357*(x358%(x359+x360)));

	if (t70 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x374 = -1LL;
	int16_t x375 = INT16_MIN;
	int32_t x376 = -1;
	int64_t t71 = -7549166352LL;

	t71 = (x373*(x374%(x375+x376)));

	if (t71 != -4294967295LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x377 = -57;
	int64_t x378 = INT64_MIN;
	int64_t x379 = 422679LL;
	int32_t x380 = 126858228;
	volatile int64_t t72 = -946950790422424626LL;

	t72 = (x377*(x378%(x379+x380)));

	if (t72 != 7196698419LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x381 = 35U;
	static int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	volatile int16_t x384 = 701;
	volatile int64_t t73 = 492967044430945LL;

	t73 = (x381*(x382%(x383+x384)));

	if (t73 != -24535LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x386 = INT32_MIN;
	static int8_t x387 = INT8_MAX;
	volatile int32_t t74 = -1;

	t74 = (x385*(x386%(x387+x388)));

	if (t74 != -1056997886) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x389 = 42U;
	volatile uint64_t x390 = 767191LLU;
	static uint8_t x392 = UINT8_MAX;
	static volatile uint64_t t75 = 887895266094499LLU;

	t75 = (x389*(x390%(x391+x392)));

	if (t75 != 4662LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x393 = -62;
	volatile uint32_t x394 = 128320U;
	uint8_t x395 = UINT8_MAX;
	int32_t x396 = 960;
	uint32_t t76 = 790U;

	t76 = (x393*(x394%(x395+x396)));

	if (t76 != 4294921106U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x397 = -9396;
	volatile uint32_t x398 = 459U;
	volatile int32_t x399 = 27952;
	int8_t x400 = 36;
	uint32_t t77 = 203U;

	t77 = (x397*(x398%(x399+x400)));

	if (t77 != 4290654532U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x402 = INT16_MAX;
	volatile uint8_t x403 = UINT8_MAX;
	uint32_t x404 = UINT32_MAX;

	t78 = (x401*(x402%(x403+x404)));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x405 = -1LL;
	int64_t x407 = 287057444902795920LL;
	static int32_t x408 = 1;
	static int64_t t79 = -7187LL;

	t79 = (x405*(x406%(x407+x408)));

	if (t79 != 128LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x414 = UINT32_MAX;
	uint32_t x415 = 917U;
	static uint32_t x416 = 1041U;
	uint32_t t80 = 1113904482U;

	t80 = (x413*(x414%(x415+x416)));

	if (t80 != 3110U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x417 = -1LL;
	int8_t x418 = INT8_MIN;
	uint32_t x419 = 21U;
	static int16_t x420 = 6570;
	int64_t t81 = -7488930LL;

	t81 = (x417*(x418%(x419+x420)));

	if (t81 != -1337LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x422 = INT64_MAX;
	uint8_t x423 = 3U;
	volatile int64_t t82 = -32106189LL;

	t82 = (x421*(x422%(x423+x424)));

	if (t82 != 12940LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = -655307722650LL;
	uint8_t x426 = UINT8_MAX;
	uint8_t x427 = 0U;
	volatile int64_t t83 = 227LL;

	t83 = (x425*(x426%(x427+x428)));

	if (t83 != -167103469275750LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x433 = UINT32_MAX;
	int16_t x435 = 1;
	volatile uint32_t t84 = 4177643U;

	t84 = (x433*(x434%(x435+x436)));

	if (t84 != 4294103264U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x437 = INT32_MIN;
	static uint8_t x438 = 3U;
	volatile uint32_t x439 = 68238U;
	volatile int64_t t85 = -2LL;

	t85 = (x437*(x438%(x439+x440)));

	if (t85 != -6442450944LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x441 = 0U;
	int16_t x442 = INT16_MIN;
	int32_t x443 = -1;
	int64_t x444 = INT64_MAX;
	volatile int64_t t86 = -805684745736324LL;

	t86 = (x441*(x442%(x443+x444)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x446 = 3155592LL;
	static uint32_t x447 = 3872773U;
	volatile int8_t x448 = INT8_MIN;
	static int64_t t87 = -1LL;

	t87 = (x445*(x446%(x447+x448)));

	if (t87 != -403915776LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x449 = INT16_MIN;
	int64_t x450 = -1LL;
	int16_t x451 = -457;
	int32_t x452 = INT32_MAX;
	volatile int64_t t88 = -1LL;

	t88 = (x449*(x450%(x451+x452)));

	if (t88 != 32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x454 = -550746222818LL;
	int16_t x455 = INT16_MAX;
	int8_t x456 = -1;

	t89 = (x453*(x454%(x455+x456)));

	if (t89 != 18446744070228216072LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x457 = 26;
	static int8_t x458 = 7;
	volatile int64_t x459 = -1734296LL;
	volatile int8_t x460 = -1;

	t90 = (x457*(x458%(x459+x460)));

	if (t90 != 182LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x461 = UINT64_MAX;
	int32_t x463 = INT32_MIN;
	static uint32_t x464 = 478164280U;
	uint64_t t91 = 4536LLU;

	t91 = (x461*(x462%(x463+x464)));

	if (t91 != 18446744072040232254LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x473 = -45;
	volatile uint64_t x474 = 989221608LLU;
	int8_t x475 = INT8_MIN;
	volatile uint16_t x476 = 31U;

	t92 = (x473*(x474%(x475+x476)));

	if (t92 != 18446744029194579256LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x481 = 11U;
	static int64_t x482 = INT64_MIN;
	uint32_t x483 = 74U;
	volatile int64_t t93 = -13569029299LL;

	t93 = (x481*(x482%(x483+x484)));

	if (t93 != -88LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x485 = 1;
	volatile int8_t x486 = INT8_MIN;
	int16_t x487 = INT16_MAX;
	int8_t x488 = INT8_MIN;
	static int32_t t94 = -534473657;

	t94 = (x485*(x486%(x487+x488)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x490 = INT64_MIN;
	int64_t t95 = 12092151776378144LL;

	t95 = (x489*(x490%(x491+x492)));

	if (t95 != -2040LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x494 = 3820870437027127304LL;
	int64_t x495 = 52LL;
	uint32_t x496 = 982884100U;
	static int64_t t96 = 102LL;

	t96 = (x493*(x494%(x495+x496)));

	if (t96 != -201393056LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x501 = UINT8_MAX;
	int16_t x502 = -1;
	volatile int8_t x503 = 2;
	static volatile int8_t x504 = -1;
	int32_t t97 = 586210177;

	t97 = (x501*(x502%(x503+x504)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x505 = 743;
	volatile int16_t x506 = INT16_MAX;
	int64_t x507 = 193729872938832LL;
	uint8_t x508 = UINT8_MAX;
	int64_t t98 = 17148408956167LL;

	t98 = (x505*(x506%(x507+x508)));

	if (t98 != 24345881LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x509 = 6U;
	uint16_t x510 = 51U;
	int32_t x511 = 2780494;
	int32_t x512 = INT32_MIN;

	t99 = (x509*(x510%(x511+x512)));

	if (t99 != 306) { NG(); } else { ; }
	
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

