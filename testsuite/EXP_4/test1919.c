#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
int8_t x11 = -3;
static int64_t x13 = INT64_MAX;
int32_t t3 = -1;
int64_t x18 = INT64_MIN;
uint64_t x23 = 1948LLU;
volatile int32_t t5 = -114423;
int32_t t7 = 22570;
uint16_t x35 = 262U;
volatile int32_t t8 = -8;
int8_t x44 = -1;
uint16_t x47 = UINT16_MAX;
int8_t x48 = INT8_MIN;
static int16_t x51 = -1;
int64_t x53 = INT64_MIN;
int32_t x56 = INT32_MIN;
uint32_t x59 = 21U;
volatile int32_t t14 = 8964930;
volatile int32_t t15 = 664;
int32_t x65 = INT32_MAX;
volatile int64_t x69 = INT64_MAX;
static volatile int32_t t17 = -72388;
volatile int32_t t19 = -21696467;
uint64_t x84 = UINT64_MAX;
int64_t x86 = INT64_MIN;
int8_t x89 = INT8_MIN;
uint16_t x92 = 572U;
static uint8_t x94 = 12U;
volatile uint8_t x96 = 15U;
static int32_t x101 = 1629;
uint16_t x105 = 3907U;
static volatile int16_t x113 = -1;
int64_t x116 = INT64_MAX;
int16_t x118 = -1;
int64_t x128 = -1LL;
static int8_t x132 = INT8_MIN;
int32_t t32 = 0;
uint32_t x137 = 177860U;
int32_t x138 = -969600839;
int32_t x140 = 16574470;
static volatile int32_t t34 = -145841;
static int16_t x145 = INT16_MIN;
int32_t x147 = INT32_MAX;
int8_t x153 = INT8_MIN;
static volatile uint8_t x164 = 7U;
uint32_t x169 = UINT32_MAX;
uint16_t x173 = UINT16_MAX;
static uint8_t x175 = 0U;
int64_t x177 = INT64_MAX;
int32_t x183 = 4857;
static int16_t x184 = -12863;
int8_t x185 = 15;
int32_t t47 = -86;
uint64_t x203 = 675444608106LLU;
int8_t x205 = -1;
int64_t x231 = 1LL;
int32_t x233 = -1;
static uint16_t x238 = UINT16_MAX;
int8_t x240 = -1;
static int32_t t59 = 31907;
int32_t t60 = 5;
int16_t x251 = -5;
static volatile int32_t t62 = -1270;
static int16_t x253 = INT16_MIN;
uint32_t x254 = 100312031U;
int16_t x255 = INT16_MAX;
int32_t t64 = 9101;
volatile int8_t x263 = INT8_MIN;
int8_t x265 = -1;
static volatile int64_t x275 = -1LL;
static int16_t x276 = INT16_MAX;
static int16_t x278 = 995;
uint8_t x284 = UINT8_MAX;
static volatile int32_t t70 = 366;
volatile int32_t t71 = 4102;
int64_t x291 = INT64_MIN;
uint8_t x295 = 4U;
volatile int32_t t73 = 3548;
int16_t x312 = INT16_MIN;
int32_t t77 = 50105;
static uint16_t x318 = 4003U;
static int16_t x320 = -1;
static int8_t x324 = 24;
volatile int64_t x328 = INT64_MAX;
int64_t x329 = -205706172LL;
uint16_t x330 = 2218U;
int32_t x345 = INT32_MIN;
int64_t x346 = -1LL;
int16_t x352 = -1;
static uint32_t x353 = UINT32_MAX;
volatile uint8_t x356 = 7U;
static int16_t x361 = -1;
volatile int16_t x364 = INT16_MIN;
int8_t x365 = INT8_MIN;
volatile int32_t t91 = -110555859;
volatile int8_t x375 = INT8_MIN;
uint64_t x378 = 23LLU;
static int32_t x379 = -1;
volatile int32_t t94 = -53;
static uint8_t x394 = 1U;
static uint64_t x397 = 60788LLU;


void f0(void) {
	uint64_t x2 = 6015495151533548660LLU;
	volatile int16_t x3 = -3;
	volatile int32_t x4 = 88335;
	int32_t t0 = 2581;

	t0 = (x1==(x2%(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint8_t x6 = 45U;
	volatile int16_t x7 = -22;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 3;

	t1 = (x5==(x6%(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 65091U;
	int16_t x10 = INT16_MIN;
	static uint32_t x12 = 1232U;
	static volatile int32_t t2 = 2292389;

	t2 = (x9==(x10%(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	int16_t x15 = -3985;
	static uint32_t x16 = UINT32_MAX;

	t3 = (x13==(x14%(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint16_t x19 = 206U;
	int16_t x20 = INT16_MIN;
	volatile int32_t t4 = 24;

	t4 = (x17==(x18%(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;
	uint16_t x24 = 12U;

	t5 = (x21==(x22%(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 6882U;
	int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	static int64_t x28 = 307077930911407LL;
	volatile int32_t t6 = 2039;

	t6 = (x25==(x26%(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int32_t x30 = -145926;
	static uint32_t x31 = UINT32_MAX;
	int32_t x32 = INT32_MIN;

	t7 = (x29==(x30%(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = -1856160LL;
	uint64_t x34 = 19222205745LLU;
	volatile int64_t x36 = INT64_MIN;

	t8 = (x33==(x34%(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int8_t x38 = INT8_MIN;
	static uint64_t x39 = UINT64_MAX;
	volatile int16_t x40 = INT16_MIN;
	int32_t t9 = 232;

	t9 = (x37==(x38%(x39|x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = INT8_MIN;
	int32_t x42 = -1;
	static int16_t x43 = INT16_MIN;
	int32_t t10 = 158;

	t10 = (x41==(x42%(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int8_t x46 = -1;
	int32_t t11 = 54089;

	t11 = (x45==(x46%(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 13387LLU;
	int16_t x50 = INT16_MAX;
	static int16_t x52 = INT16_MIN;
	volatile int32_t t12 = 8358;

	t12 = (x49==(x50%(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = UINT16_MAX;
	int32_t x55 = INT32_MIN;
	int32_t t13 = -62994;

	t13 = (x53==(x54%(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 0LLU;
	int32_t x58 = 5661251;
	static int64_t x60 = -889440658580LL;

	t14 = (x57==(x58%(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x61 = INT16_MIN;
	uint64_t x62 = 260277719660864LLU;
	int8_t x63 = -1;
	uint32_t x64 = 2647191U;

	t15 = (x61==(x62%(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x66 = 238664LL;
	int8_t x67 = 1;
	uint64_t x68 = 6160440805251LLU;
	int32_t t16 = -3017334;

	t16 = (x65==(x66%(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	static int16_t x72 = INT16_MIN;

	t17 = (x69==(x70%(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -51;
	uint32_t x74 = 112U;
	int64_t x75 = INT64_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -231800847;

	t18 = (x73==(x74%(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	volatile int32_t x78 = -1;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;

	t19 = (x77==(x78%(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	volatile int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	int32_t t20 = -1;

	t20 = (x81==(x82%(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -6598923;
	int8_t x87 = INT8_MAX;
	int64_t x88 = -1LL;
	volatile int32_t t21 = 58547;

	t21 = (x85==(x86%(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = 4972LL;
	uint16_t x91 = 94U;
	int32_t t22 = 217528170;

	t22 = (x89==(x90%(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x95 = UINT32_MAX;
	static int32_t t23 = 14446;

	t23 = (x93==(x94%(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 95;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MAX;
	static int32_t x100 = INT32_MIN;
	static volatile int32_t t24 = -323250;

	t24 = (x97==(x98%(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = 0;
	uint8_t x103 = 124U;
	int8_t x104 = -1;
	int32_t t25 = -1;

	t25 = (x101==(x102%(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x106 = -4;
	uint16_t x107 = 186U;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = 196;

	t26 = (x105==(x106%(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 248517407492737292LL;
	uint8_t x110 = 2U;
	int32_t x111 = INT32_MIN;
	volatile int64_t x112 = -1LL;
	volatile int32_t t27 = -199262349;

	t27 = (x109==(x110%(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = -1;
	int64_t x115 = INT64_MAX;
	int32_t t28 = -873940;

	t28 = (x113==(x114%(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 932U;
	static int16_t x119 = 721;
	int64_t x120 = INT64_MIN;
	int32_t t29 = -16;

	t29 = (x117==(x118%(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	volatile int32_t x122 = INT32_MIN;
	int64_t x123 = 85731774457LL;
	int8_t x124 = -1;
	int32_t t30 = 5;

	t30 = (x121==(x122%(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 1U;
	int32_t x126 = -1;
	uint16_t x127 = 60U;
	int32_t t31 = -498898751;

	t31 = (x125==(x126%(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MAX;
	static volatile uint16_t x130 = 3278U;
	int8_t x131 = 1;

	t32 = (x129==(x130%(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -62;
	uint8_t x134 = UINT8_MAX;
	static int16_t x135 = -1;
	static int64_t x136 = -3588772LL;
	volatile int32_t t33 = -59864;

	t33 = (x133==(x134%(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x139 = 561;

	t34 = (x137==(x138%(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x141 = INT8_MIN;
	int32_t x142 = INT32_MIN;
	uint8_t x143 = UINT8_MAX;
	static uint32_t x144 = 20247U;
	volatile int32_t t35 = 34746613;

	t35 = (x141==(x142%(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	uint16_t x148 = 6497U;
	static volatile int32_t t36 = 108634;

	t36 = (x145==(x146%(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	static int16_t x150 = 1978;
	static int64_t x151 = INT64_MIN;
	int32_t x152 = 10802919;
	volatile int32_t t37 = -3;

	t37 = (x149==(x150%(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 0U;
	static int64_t x155 = -374607267426021167LL;
	uint64_t x156 = 89958762366574LLU;
	int32_t t38 = -3953611;

	t38 = (x153==(x154%(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 2259425U;
	int16_t x158 = 1000;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = -1;
	int32_t t39 = -94;

	t39 = (x157==(x158%(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 980U;
	int16_t x162 = INT16_MIN;
	int8_t x163 = 1;
	volatile int32_t t40 = -311639179;

	t40 = (x161==(x162%(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	volatile int32_t x166 = -1;
	static uint8_t x167 = 36U;
	int16_t x168 = INT16_MIN;
	volatile int32_t t41 = 116924;

	t41 = (x165==(x166%(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MIN;
	int32_t x171 = 1123745;
	uint16_t x172 = 2U;
	volatile int32_t t42 = -167013;

	t42 = (x169==(x170%(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x174 = -6;
	uint32_t x176 = 56U;
	volatile int32_t t43 = 9;

	t43 = (x173==(x174%(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = INT16_MIN;
	volatile int32_t x179 = 58;
	uint8_t x180 = UINT8_MAX;
	static volatile int32_t t44 = -12894;

	t44 = (x177==(x178%(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 43;
	volatile uint8_t x182 = 2U;
	int32_t t45 = 12;

	t45 = (x181==(x182%(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x186 = INT32_MAX;
	static uint8_t x187 = 1U;
	int16_t x188 = -1;
	int32_t t46 = 115047720;

	t46 = (x185==(x186%(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = INT16_MAX;
	int32_t x190 = 752299;
	uint32_t x191 = 60636163U;
	static int32_t x192 = -1;

	t47 = (x189==(x190%(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x193 = INT64_MIN;
	int16_t x194 = 0;
	static uint16_t x195 = 25124U;
	int64_t x196 = INT64_MAX;
	volatile int32_t t48 = -1;

	t48 = (x193==(x194%(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x197 = UINT8_MAX;
	int64_t x198 = INT64_MIN;
	volatile int32_t x199 = INT32_MIN;
	int16_t x200 = INT16_MAX;
	int32_t t49 = -26760337;

	t49 = (x197==(x198%(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	uint64_t x202 = 4140LLU;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 888;

	t50 = (x201==(x202%(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x206 = INT64_MIN;
	int16_t x207 = 14457;
	int64_t x208 = 19991335878080LL;
	int32_t t51 = 45;

	t51 = (x205==(x206%(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = INT32_MIN;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 17;

	t52 = (x209==(x210%(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = 6U;
	int16_t x214 = 3535;
	static volatile uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MAX;
	int32_t t53 = 89;

	t53 = (x213==(x214%(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x217 = 103U;
	uint32_t x218 = 0U;
	uint8_t x219 = 14U;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 1;

	t54 = (x217==(x218%(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	volatile uint16_t x222 = 16U;
	uint32_t x223 = 129521233U;
	int8_t x224 = INT8_MAX;
	volatile int32_t t55 = 39;

	t55 = (x221==(x222%(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	int64_t x227 = -3168553148LL;
	int16_t x228 = INT16_MAX;
	int32_t t56 = 370304408;

	t56 = (x225==(x226%(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -47;
	static int16_t x230 = INT16_MIN;
	int32_t x232 = INT32_MIN;
	int32_t t57 = 2393865;

	t57 = (x229==(x230%(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = 128319183823541LL;
	int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MAX;
	static volatile int32_t t58 = -2529;

	t58 = (x233==(x234%(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -3;
	int8_t x239 = INT8_MIN;

	t59 = (x237==(x238%(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	static uint32_t x244 = UINT32_MAX;

	t60 = (x241==(x242%(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	int64_t x247 = INT64_MAX;
	static uint16_t x248 = 11U;
	int32_t t61 = 10;

	t61 = (x245==(x246%(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -1;
	volatile int32_t x250 = -1;
	int8_t x252 = -38;

	t62 = (x249==(x250%(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x256 = 28794U;
	volatile int32_t t63 = -4701;

	t63 = (x253==(x254%(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	static int8_t x259 = -1;
	int8_t x260 = INT8_MAX;

	t64 = (x257==(x258%(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = -51004LL;
	int32_t x262 = -108;
	int16_t x264 = -1;
	int32_t t65 = -20525;

	t65 = (x261==(x262%(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x266 = 482U;
	uint64_t x267 = 152590220898084854LLU;
	int32_t x268 = 993094536;
	static volatile int32_t t66 = 5684;

	t66 = (x265==(x266%(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MAX;
	int16_t x270 = INT16_MAX;
	int16_t x271 = INT16_MIN;
	volatile uint64_t x272 = 123598557937173LLU;
	int32_t t67 = 16165;

	t67 = (x269==(x270%(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = UINT64_MAX;
	static uint16_t x274 = 1379U;
	volatile int32_t t68 = -1212;

	t68 = (x273==(x274%(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x279 = 1178487U;
	uint16_t x280 = UINT16_MAX;
	volatile int32_t t69 = -75;

	t69 = (x277==(x278%(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 2771805LL;
	int64_t x282 = INT64_MIN;
	static volatile int8_t x283 = -1;

	t70 = (x281==(x282%(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x285 = INT8_MIN;
	volatile uint64_t x286 = UINT64_MAX;
	uint64_t x287 = 492156339514406976LLU;
	int16_t x288 = INT16_MAX;

	t71 = (x285==(x286%(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	static int32_t x290 = INT32_MIN;
	uint16_t x292 = 1U;
	volatile int32_t t72 = -1603943;

	t72 = (x289==(x290%(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = 1U;
	volatile uint8_t x294 = 0U;
	uint32_t x296 = 1916963U;

	t73 = (x293==(x294%(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	static int64_t x298 = -1LL;
	volatile uint16_t x299 = 14820U;
	volatile uint64_t x300 = 15435704995638LLU;
	int32_t t74 = 72297;

	t74 = (x297==(x298%(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 0;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t75 = 32375639;

	t75 = (x301==(x302%(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = 1;
	static volatile uint64_t x306 = 19020094LLU;
	int8_t x307 = INT8_MAX;
	int8_t x308 = -29;
	volatile int32_t t76 = 1;

	t76 = (x305==(x306%(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	uint64_t x310 = 124670107258LLU;
	static int32_t x311 = INT32_MAX;

	t77 = (x309==(x310%(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 5U;
	uint16_t x314 = UINT16_MAX;
	static int16_t x315 = -510;
	int64_t x316 = -24404493773807467LL;
	volatile int32_t t78 = -17;

	t78 = (x313==(x314%(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = -375785162;

	t79 = (x317==(x318%(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MAX;
	int32_t x323 = -1;
	volatile int32_t t80 = 23294297;

	t80 = (x321==(x322%(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	static uint64_t x326 = 491LLU;
	static int32_t x327 = INT32_MAX;
	static volatile int32_t t81 = 1;

	t81 = (x325==(x326%(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x331 = UINT16_MAX;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t82 = -1;

	t82 = (x329==(x330%(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	uint64_t x335 = 10179260243174090LLU;
	int16_t x336 = INT16_MIN;
	int32_t t83 = -1;

	t83 = (x333==(x334%(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 560;
	volatile int8_t x338 = INT8_MAX;
	static int32_t x339 = -2;
	static uint16_t x340 = 14669U;
	volatile int32_t t84 = 4078;

	t84 = (x337==(x338%(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 105U;
	volatile int8_t x342 = INT8_MIN;
	uint32_t x343 = 1U;
	int16_t x344 = 20;
	static int32_t t85 = 502440;

	t85 = (x341==(x342%(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x347 = 3047U;
	int8_t x348 = INT8_MIN;
	static int32_t t86 = 16415375;

	t86 = (x345==(x346%(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	uint8_t x350 = UINT8_MAX;
	volatile int8_t x351 = -1;
	static volatile int32_t t87 = -436544636;

	t87 = (x349==(x350%(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	static int32_t t88 = -126166;

	t88 = (x353==(x354%(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -31899;
	int8_t x358 = 1;
	int64_t x359 = 16129737502109080LL;
	volatile int8_t x360 = 1;
	volatile int32_t t89 = -17956036;

	t89 = (x357==(x358%(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x362 = 9403373U;
	int64_t x363 = INT64_MIN;
	int32_t t90 = -18;

	t90 = (x361==(x362%(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x366 = 1U;
	static uint64_t x367 = 21471728496440LLU;
	uint8_t x368 = 3U;

	t91 = (x365==(x366%(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	static int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	int64_t x372 = INT64_MIN;
	volatile int32_t t92 = 763;

	t92 = (x369==(x370%(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = 76U;
	uint64_t x374 = UINT64_MAX;
	int64_t x376 = -1LL;
	volatile int32_t t93 = -6832;

	t93 = (x373==(x374%(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	static uint8_t x380 = 4U;

	t94 = (x377==(x378%(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MAX;
	static uint32_t x382 = 130U;
	static volatile int32_t x383 = INT32_MIN;
	uint16_t x384 = UINT16_MAX;
	volatile int32_t t95 = 2;

	t95 = (x381==(x382%(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 0;
	static volatile uint16_t x386 = 43U;
	int16_t x387 = -5806;
	uint8_t x388 = UINT8_MAX;
	int32_t t96 = 213482883;

	t96 = (x385==(x386%(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x389 = UINT32_MAX;
	static uint16_t x390 = 113U;
	volatile int16_t x391 = INT16_MIN;
	volatile int8_t x392 = -62;
	volatile int32_t t97 = -1;

	t97 = (x389==(x390%(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = -1;
	int64_t x395 = -1LL;
	int16_t x396 = -7;
	int32_t t98 = 11646244;

	t98 = (x393==(x394%(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x398 = INT64_MIN;
	volatile uint32_t x399 = UINT32_MAX;
	volatile uint16_t x400 = 1U;
	volatile int32_t t99 = -1772;

	t99 = (x397==(x398%(x399|x400)));

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
