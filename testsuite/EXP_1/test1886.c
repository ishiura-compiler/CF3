#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x8 = INT16_MAX;
uint32_t x12 = UINT32_MAX;
static uint32_t x15 = 26U;
volatile int32_t x21 = -3;
static volatile uint8_t x24 = UINT8_MAX;
int16_t x50 = 1111;
uint32_t x53 = UINT32_MAX;
uint32_t t9 = 39065U;
uint32_t x64 = 2334933U;
volatile int32_t t13 = -47157;
volatile uint64_t t14 = 13453LLU;
uint32_t x98 = 2U;
int64_t x104 = 6376LL;
uint64_t x107 = 382234977317LLU;
static uint64_t t20 = 20LLU;
int8_t x111 = -2;
static int16_t x114 = INT16_MAX;
volatile int16_t x115 = INT16_MAX;
uint32_t x124 = 150825U;
int8_t x129 = INT8_MIN;
volatile uint32_t x138 = UINT32_MAX;
volatile uint8_t x143 = 25U;
int8_t x144 = -1;
volatile uint64_t t28 = 29LLU;
static volatile uint32_t x145 = 192122U;
int8_t x146 = INT8_MIN;
uint8_t x149 = 95U;
int32_t x153 = -1;
int8_t x165 = INT8_MAX;
uint16_t x173 = UINT16_MAX;
uint32_t x176 = UINT32_MAX;
volatile uint64_t x178 = 54017LLU;
volatile uint64_t t35 = 7241287LLU;
uint8_t x187 = 14U;
uint8_t x188 = 15U;
int8_t x189 = INT8_MIN;
static volatile int16_t x191 = INT16_MIN;
uint32_t x197 = 4139788U;
uint32_t t38 = 1209U;
volatile int16_t x203 = 6848;
int32_t x217 = 1;
uint8_t x218 = UINT8_MAX;
static int32_t x219 = -1;
uint64_t x233 = 639139LLU;
int16_t x236 = INT16_MIN;
volatile uint32_t t46 = 1334090U;
static volatile uint64_t t49 = 130712470LLU;
volatile int32_t x257 = 5124;
uint64_t x264 = UINT64_MAX;
uint64_t x274 = 646399LLU;
int32_t x277 = -1;
volatile int32_t t53 = 222413;
int8_t x294 = -1;
static volatile uint32_t x295 = 104U;
int64_t t56 = 81202882920311LL;
int32_t x299 = 41;
int32_t t58 = -60;
uint32_t x307 = UINT32_MAX;
volatile uint32_t t59 = 155919U;
int64_t x313 = INT64_MAX;
int16_t x333 = -1;
volatile int8_t x335 = 1;
int32_t t65 = 976335;
int64_t x338 = INT64_MAX;
int64_t x340 = INT64_MIN;
volatile uint16_t x348 = 5565U;
int16_t x349 = 0;
int16_t x350 = INT16_MIN;
uint32_t x358 = 28660193U;
int8_t x363 = 19;
int8_t x376 = 0;
static int64_t x380 = 106160658781LL;
int32_t x382 = -1;
int32_t x386 = -1;
int32_t x388 = -1;
int32_t t76 = -168120;
uint16_t x396 = 2U;
uint32_t x410 = 438613774U;
int64_t x413 = 3959237108899245LL;
static int64_t x415 = -1LL;
uint16_t x419 = 18457U;
int16_t x420 = -1;
volatile uint32_t t82 = 310U;
int32_t x443 = INT32_MIN;
volatile uint64_t t86 = 8111453895007489LLU;
uint64_t x445 = UINT64_MAX;
int8_t x446 = 9;
static uint8_t x461 = 2U;
int32_t x467 = -1;
static int16_t x472 = 126;
int8_t x475 = INT8_MIN;
int16_t x476 = -1;
static int16_t x477 = -1;
int8_t x480 = INT8_MAX;
int64_t x493 = 1078377838312996539LL;
int16_t x496 = -1;
uint64_t t95 = 816LLU;
uint64_t t96 = 38541866LLU;
int8_t x505 = INT8_MAX;
volatile int64_t x506 = -1LL;
static int32_t x508 = -1;


void f0(void) {
	int32_t x5 = -1;
	volatile uint32_t x6 = 62U;
	volatile uint64_t x7 = 42LLU;
	uint64_t t0 = 1285098138797801LLU;

	t0 = (((x5|x6)*x7)+x8);

	if (t0 != 180388659157LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = UINT64_MAX;
	int8_t x10 = -1;
	volatile int64_t x11 = -16845719336LL;
	uint64_t t1 = 15056131517787LLU;

	t1 = (((x9|x10)*x11)+x12);

	if (t1 != 21140686631LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	uint32_t x16 = 914U;
	volatile uint32_t t2 = 80318998U;

	t2 = (((x13|x14)*x15)+x16);

	if (t2 != 888U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	int64_t x18 = -1649826247867LL;
	int16_t x19 = INT16_MIN;
	int8_t x20 = 1;
	static int64_t t3 = -217084534LL;

	t3 = (((x17|x18)*x19)+x20);

	if (t3 != 32769LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	volatile int32_t t4 = 7526;

	t4 = (((x21|x22)*x23)+x24);

	if (t4 != 383) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	static uint64_t x30 = 9LLU;
	uint8_t x31 = UINT8_MAX;
	volatile int32_t x32 = INT32_MIN;
	static volatile uint64_t t5 = 6605748189904959444LLU;

	t5 = (((x29|x30)*x31)+x32);

	if (t5 != 18446743523953740023LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x33 = UINT8_MAX;
	volatile uint16_t x34 = 11171U;
	volatile int16_t x35 = INT16_MIN;
	int16_t x36 = -1;
	volatile int32_t t6 = -313887486;

	t6 = (((x33|x34)*x35)+x36);

	if (t6 != -369065985) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = 14LLU;
	volatile uint8_t x42 = UINT8_MAX;
	static volatile int32_t x43 = INT32_MIN;
	volatile int32_t x44 = INT32_MIN;
	uint64_t t7 = 3633572LLU;

	t7 = (((x41|x42)*x43)+x44);

	if (t7 != 18446743523953737728LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x49 = 0;
	int16_t x51 = INT16_MIN;
	int16_t x52 = -1;
	volatile int32_t t8 = -2050989;

	t8 = (((x49|x50)*x51)+x52);

	if (t8 != -36405249) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x54 = INT32_MIN;
	int16_t x55 = INT16_MIN;
	int16_t x56 = 5;

	t9 = (((x53|x54)*x55)+x56);

	if (t9 != 32773U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MIN;
	volatile int8_t x58 = -1;
	static int8_t x59 = -7;
	int32_t x60 = INT32_MIN;
	volatile int32_t t10 = -5996;

	t10 = (((x57|x58)*x59)+x60);

	if (t10 != -2147483641) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = 1608654093U;
	int8_t x63 = -1;
	static volatile uint32_t t11 = 6U;

	t11 = (((x61|x62)*x63)+x64);

	if (t11 != 2334934U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x65 = 3728587947032LLU;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 3U;
	int8_t x68 = INT8_MIN;
	static volatile uint64_t t12 = 166LLU;

	t12 = (((x65|x66)*x67)+x68);

	if (t12 != 11196979740541LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 13U;
	int8_t x70 = INT8_MAX;
	volatile int32_t x71 = -1;
	int32_t x72 = 402;

	t13 = (((x69|x70)*x71)+x72);

	if (t13 != 275) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = UINT64_MAX;
	int16_t x83 = -28;
	int8_t x84 = INT8_MIN;

	t14 = (((x81|x82)*x83)+x84);

	if (t14 != 18446744073709551516LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 13437718U;
	volatile uint16_t x86 = UINT16_MAX;
	int32_t x87 = 33030780;
	int64_t x88 = 232788161591LL;
	static volatile int64_t t15 = -16347194328250LL;

	t15 = (((x85|x86)*x87)+x88);

	if (t15 != 237046428091LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	uint8_t x91 = 33U;
	int8_t x92 = 62;
	static volatile int32_t t16 = 11230672;

	t16 = (((x89|x90)*x91)+x92);

	if (t16 != -4162) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x93 = 63;
	int64_t x94 = -1LL;
	int8_t x95 = 4;
	static int32_t x96 = -1940;
	volatile int64_t t17 = 23445LL;

	t17 = (((x93|x94)*x95)+x96);

	if (t17 != -1944LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x97 = -7069;
	volatile int16_t x99 = INT16_MIN;
	int64_t x100 = 46702977LL;
	volatile int64_t t18 = 56493930431612LL;

	t18 = (((x97|x98)*x99)+x100);

	if (t18 != 278339969LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x101 = 12LLU;
	static uint8_t x102 = 67U;
	uint16_t x103 = 425U;
	static uint64_t t19 = 9203038298573056754LLU;

	t19 = (((x101|x102)*x103)+x104);

	if (t19 != 39951LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x105 = 2U;
	int8_t x106 = -31;
	int8_t x108 = INT8_MIN;

	t20 = (((x105|x106)*x107)+x108);

	if (t20 != 18373237392561940303LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x109 = 30246765357LLU;
	uint64_t x110 = 3526574158657259425LLU;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t21 = 474674507899556094LLU;

	t21 = (((x109|x110)*x111)+x112);

	if (t21 != 2170223684843794598LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -1;
	int8_t x116 = -24;
	int32_t t22 = 11341;

	t22 = (((x113|x114)*x115)+x116);

	if (t22 != -32791) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = 6;
	uint16_t x122 = 33U;
	int16_t x123 = -2286;
	uint32_t t23 = 11367905U;

	t23 = (((x121|x122)*x123)+x124);

	if (t23 != 61671U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x125 = INT32_MIN;
	static int8_t x126 = -1;
	volatile uint16_t x127 = 0U;
	uint32_t x128 = 6U;
	volatile uint32_t t24 = 682U;

	t24 = (((x125|x126)*x127)+x128);

	if (t24 != 6U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x130 = INT8_MIN;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	volatile int32_t t25 = -10884215;

	t25 = (((x129|x130)*x131)+x132);

	if (t25 != -2147467264) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = -1;
	int32_t x134 = 198;
	int64_t x135 = -1LL;
	static int16_t x136 = 771;
	int64_t t26 = -736LL;

	t26 = (((x133|x134)*x135)+x136);

	if (t26 != 772LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = INT16_MIN;
	uint8_t x139 = 19U;
	volatile int16_t x140 = INT16_MAX;
	volatile uint32_t t27 = 2054U;

	t27 = (((x137|x138)*x139)+x140);

	if (t27 != 32748U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	uint64_t x142 = 1617LLU;

	t28 = (((x141|x142)*x143)+x144);

	if (t28 != 18446744073708772840LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x147 = -1;
	static int64_t x148 = 537991423034667LL;
	volatile int64_t t29 = 56043177LL;

	t29 = (((x145|x146)*x147)+x148);

	if (t29 != 537991423034673LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x150 = -6366583LL;
	int16_t x151 = INT16_MAX;
	static int8_t x152 = -1;
	static int64_t t30 = -55LL;

	t30 = (((x149|x150)*x151)+x152);

	if (t30 != -208611007200LL) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x154 = 6288;
	int8_t x155 = -1;
	int16_t x156 = -216;
	volatile int32_t t31 = 175142;

	t31 = (((x153|x154)*x155)+x156);

	if (t31 != -215) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 20U;
	int64_t x162 = 456LL;
	volatile uint64_t x163 = UINT64_MAX;
	uint16_t x164 = 186U;
	volatile uint64_t t32 = 593LLU;

	t32 = (((x161|x162)*x163)+x164);

	if (t32 != 18446744073709551326LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	volatile uint16_t x168 = 902U;
	int32_t t33 = -63;

	t33 = (((x165|x166)*x167)+x168);

	if (t33 != 4178950) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x174 = INT64_MIN;
	static int8_t x175 = 0;
	static volatile int64_t t34 = 2439714LL;

	t34 = (((x173|x174)*x175)+x176);

	if (t34 != 4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x177 = 19U;
	static int16_t x179 = -28;
	int64_t x180 = 76838332746995LL;

	t35 = (((x177|x178)*x179)+x180);

	if (t35 != 76838331234015LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x185 = UINT64_MAX;
	uint8_t x186 = UINT8_MAX;
	static uint64_t t36 = 2477LLU;

	t36 = (((x185|x186)*x187)+x188);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x190 = 0LLU;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t37 = 66366431879216LLU;

	t37 = (((x189|x190)*x191)+x192);

	if (t37 != 4194303LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x198 = 1;
	static int8_t x199 = INT8_MAX;
	int8_t x200 = INT8_MIN;

	t38 = (((x197|x198)*x199)+x200);

	if (t38 != 525753075U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = UINT32_MAX;
	volatile uint64_t x202 = 116LLU;
	int64_t x204 = -1LL;
	volatile uint64_t t39 = 77LLU;

	t39 = (((x201|x202)*x203)+x204);

	if (t39 != 29411936036159LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = INT16_MIN;
	int64_t x206 = -1LL;
	uint32_t x207 = UINT32_MAX;
	volatile uint8_t x208 = UINT8_MAX;
	int64_t t40 = 2073957877LL;

	t40 = (((x205|x206)*x207)+x208);

	if (t40 != -4294967040LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x220 = -1;
	static int32_t t41 = -29145;

	t41 = (((x217|x218)*x219)+x220);

	if (t41 != -256) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MAX;
	uint64_t x227 = UINT64_MAX;
	int8_t x228 = -16;
	static volatile uint64_t t42 = 28965323LLU;

	t42 = (((x225|x226)*x227)+x228);

	if (t42 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x229 = 78U;
	int8_t x230 = -1;
	uint64_t x231 = UINT64_MAX;
	volatile int16_t x232 = INT16_MIN;
	uint64_t t43 = 76012232LLU;

	t43 = (((x229|x230)*x231)+x232);

	if (t43 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x234 = 166U;
	volatile int64_t x235 = -1LL;
	static uint64_t t44 = 2525LLU;

	t44 = (((x233|x234)*x235)+x236);

	if (t44 != 18446744073708879705LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x237 = -1;
	volatile int16_t x238 = -1;
	uint16_t x239 = 3689U;
	volatile int16_t x240 = INT16_MAX;
	int32_t t45 = 353611;

	t45 = (((x237|x238)*x239)+x240);

	if (t45 != 29078) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x241 = 45U;
	int8_t x242 = 13;
	static volatile uint32_t x243 = 606023U;
	int16_t x244 = -1;

	t46 = (((x241|x242)*x243)+x244);

	if (t46 != 27271034U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = 0U;
	static int32_t x246 = INT32_MIN;
	uint64_t x247 = 3861165740LLU;
	volatile int8_t x248 = -1;
	static volatile uint64_t t47 = 1121991283LLU;

	t47 = (((x245|x246)*x247)+x248);

	if (t47 != 10154953784841732095LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x249 = INT32_MAX;
	uint64_t x250 = UINT64_MAX;
	static int8_t x251 = INT8_MAX;
	uint64_t x252 = 45123917716073796LLU;
	static uint64_t t48 = 105663952974397LLU;

	t48 = (((x249|x250)*x251)+x252);

	if (t48 != 45123917716073669LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x253 = 19U;
	uint8_t x254 = 29U;
	int64_t x255 = -295021707624471926LL;
	volatile uint64_t x256 = 108050678LLU;

	t49 = (((x253|x254)*x255)+x256);

	if (t49 != 9301071137458972588LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x258 = 3;
	static uint8_t x259 = 64U;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t50 = 428;

	t50 = (((x257|x258)*x259)+x260);

	if (t50 != 393663) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x261 = 0U;
	volatile int16_t x262 = INT16_MIN;
	int8_t x263 = -3;
	volatile uint64_t t51 = 186LLU;

	t51 = (((x261|x262)*x263)+x264);

	if (t51 != 98303LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x273 = -1;
	uint16_t x275 = 31984U;
	static volatile int16_t x276 = 17;
	volatile uint64_t t52 = 133940LLU;

	t52 = (((x273|x274)*x275)+x276);

	if (t52 != 18446744073709519649LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x278 = -1;
	uint8_t x279 = 23U;
	uint16_t x280 = 6U;

	t53 = (((x277|x278)*x279)+x280);

	if (t53 != -17) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x281 = INT8_MIN;
	uint32_t x282 = 11801U;
	static uint64_t x283 = UINT64_MAX;
	int8_t x284 = 0;
	volatile uint64_t t54 = 4091812266LLU;

	t54 = (((x281|x282)*x283)+x284);

	if (t54 != 18446744069414584423LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = 8992349998326LL;
	int8_t x286 = INT8_MIN;
	int8_t x287 = 12;
	int64_t x288 = INT64_MAX;
	int64_t t55 = 407542221836021LL;

	t55 = (((x285|x286)*x287)+x288);

	if (t55 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x293 = -52948999LL;
	volatile int16_t x296 = 5813;

	t56 = (((x293|x294)*x295)+x296);

	if (t56 != 5709LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = 49LL;
	static int8_t x300 = 7;
	static volatile uint64_t t57 = 661LLU;

	t57 = (((x297|x298)*x299)+x300);

	if (t57 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x301 = INT8_MIN;
	uint8_t x302 = 36U;
	static int16_t x303 = INT16_MIN;
	int32_t x304 = 2101726;

	t58 = (((x301|x302)*x303)+x304);

	if (t58 != 5116382) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x305 = 12U;
	uint16_t x306 = UINT16_MAX;
	static volatile uint8_t x308 = UINT8_MAX;

	t59 = (((x305|x306)*x307)+x308);

	if (t59 != 4294902016U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x309 = 1U;
	uint16_t x310 = 124U;
	static int8_t x311 = -12;
	int8_t x312 = INT8_MAX;
	volatile int32_t t60 = 2447660;

	t60 = (((x309|x310)*x311)+x312);

	if (t60 != -1373) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x314 = -1;
	int32_t x315 = INT32_MIN;
	int64_t x316 = INT64_MIN;
	static int64_t t61 = 41311LL;

	t61 = (((x313|x314)*x315)+x316);

	if (t61 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x317 = 185;
	int16_t x318 = INT16_MIN;
	int8_t x319 = 0;
	uint8_t x320 = 28U;
	static volatile int32_t t62 = 629;

	t62 = (((x317|x318)*x319)+x320);

	if (t62 != 28) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x325 = -521286;
	int32_t x326 = 31587433;
	int64_t x327 = -4727656823154LL;
	static int64_t x328 = 10607991LL;
	int64_t t63 = -9LL;

	t63 = (((x325|x326)*x327)+x328);

	if (t63 != 1859013943668047025LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x329 = 66475528U;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -1;
	int8_t x332 = INT8_MAX;
	static uint32_t t64 = 87089113U;

	t64 = (((x329|x330)*x331)+x332);

	if (t64 != 128U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x334 = INT8_MIN;
	int32_t x336 = INT32_MAX;

	t65 = (((x333|x334)*x335)+x336);

	if (t65 != 2147483646) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x337 = -1;
	int32_t x339 = INT32_MIN;
	static int64_t t66 = -267364026152990LL;

	t66 = (((x337|x338)*x339)+x340);

	if (t66 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x341 = INT32_MIN;
	static int8_t x342 = INT8_MIN;
	uint64_t x343 = 10090534LLU;
	uint32_t x344 = 139921534U;
	uint64_t t67 = 837305172681LLU;

	t67 = (((x341|x342)*x343)+x344);

	if (t67 != 18446744072557884798LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x345 = UINT64_MAX;
	uint8_t x346 = 15U;
	static int64_t x347 = INT64_MIN;
	uint64_t t68 = 248859476238063100LLU;

	t68 = (((x345|x346)*x347)+x348);

	if (t68 != 9223372036854781373LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x351 = 19599U;
	int8_t x352 = INT8_MIN;
	int32_t t69 = 6;

	t69 = (((x349|x350)*x351)+x352);

	if (t69 != -642220160) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x357 = INT16_MIN;
	int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t70 = 104728U;

	t70 = (((x357|x358)*x359)+x360);

	if (t70 != 4293435039U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x361 = 336U;
	uint16_t x362 = 4685U;
	int8_t x364 = -24;
	int32_t t71 = 201;

	t71 = (((x361|x362)*x363)+x364);

	if (t71 != 94159) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x369 = 4;
	int16_t x370 = INT16_MAX;
	static uint32_t x371 = 85U;
	int16_t x372 = INT16_MIN;
	uint32_t t72 = 461794152U;

	t72 = (((x369|x370)*x371)+x372);

	if (t72 != 2752427U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = INT16_MIN;
	volatile int16_t x374 = 130;
	int64_t x375 = -1LL;
	volatile int64_t t73 = -946130819278LL;

	t73 = (((x373|x374)*x375)+x376);

	if (t73 != 32638LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x377 = INT32_MIN;
	int64_t x378 = INT64_MIN;
	volatile int16_t x379 = INT16_MAX;
	int64_t t74 = 7LL;

	t74 = (((x377|x378)*x379)+x380);

	if (t74 != -70260436035235LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = INT8_MAX;
	static uint64_t x383 = 287910146852848866LLU;
	int64_t x384 = 0LL;
	volatile uint64_t t75 = 24577924080LLU;

	t75 = (((x381|x382)*x383)+x384);

	if (t75 != 18158833926856702750LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x387 = -1;

	t76 = (((x385|x386)*x387)+x388);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x393 = INT16_MAX;
	static int8_t x394 = INT8_MAX;
	int64_t x395 = -341917934555LL;
	static volatile int64_t t77 = 23204352LL;

	t77 = (((x393|x394)*x395)+x396);

	if (t77 != -11203624961563683LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x401 = 154;
	static uint16_t x402 = 7212U;
	int64_t x403 = -1LL;
	uint64_t x404 = 4370494876203LLU;
	volatile uint64_t t78 = 10LLU;

	t78 = (((x401|x402)*x403)+x404);

	if (t78 != 4370494868845LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x405 = INT16_MIN;
	int32_t x406 = INT32_MAX;
	int16_t x407 = INT16_MIN;
	volatile int32_t x408 = 10;
	static int32_t t79 = -74;

	t79 = (((x405|x406)*x407)+x408);

	if (t79 != 32778) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x409 = UINT8_MAX;
	int8_t x411 = 1;
	int8_t x412 = 0;
	uint32_t t80 = 3157926U;

	t80 = (((x409|x410)*x411)+x412);

	if (t80 != 438614015U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x414 = INT16_MAX;
	uint16_t x416 = 6076U;
	volatile int64_t t81 = -102268LL;

	t81 = (((x413|x414)*x415)+x416);

	if (t81 != -3959237108918339LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x417 = 808U;
	uint16_t x418 = 2411U;

	t82 = (((x417|x418)*x419)+x420);

	if (t82 != 53949810U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = 0;
	int8_t x427 = INT8_MAX;
	static int8_t x428 = INT8_MIN;
	static int32_t t83 = 63094;

	t83 = (((x425|x426)*x427)+x428);

	if (t83 != -16384) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x429 = 3847019LLU;
	int8_t x430 = INT8_MAX;
	static uint8_t x431 = 12U;
	volatile int32_t x432 = INT32_MIN;
	volatile uint64_t t84 = 59806LLU;

	t84 = (((x429|x430)*x431)+x432);

	if (t84 != 18446744071608232436LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x433 = -1LL;
	static int32_t x434 = -562912;
	int64_t x435 = -1LL;
	int8_t x436 = INT8_MIN;
	int64_t t85 = -678042693435LL;

	t85 = (((x433|x434)*x435)+x436);

	if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x441 = -1LL;
	volatile int16_t x442 = 0;
	static uint64_t x444 = 7654155337LLU;

	t86 = (((x441|x442)*x443)+x444);

	if (t86 != 9801638985LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x447 = INT32_MIN;
	static volatile int8_t x448 = INT8_MIN;
	volatile uint64_t t87 = 12440042812LLU;

	t87 = (((x445|x446)*x447)+x448);

	if (t87 != 2147483520LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x457 = INT32_MIN;
	static int32_t x458 = INT32_MIN;
	uint64_t x459 = UINT64_MAX;
	uint16_t x460 = UINT16_MAX;
	static uint64_t t88 = 693LLU;

	t88 = (((x457|x458)*x459)+x460);

	if (t88 != 2147549183LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x462 = 17016496705659145LLU;
	volatile uint8_t x463 = UINT8_MAX;
	uint16_t x464 = 4550U;
	volatile uint64_t t89 = 2LLU;

	t89 = (((x461|x462)*x463)+x464);

	if (t89 != 4339206659943087035LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x465 = 61267U;
	static volatile uint64_t x466 = 9132LLU;
	static uint64_t x468 = 3484262846LLU;
	static uint64_t t90 = 341872546LLU;

	t90 = (((x465|x466)*x467)+x468);

	if (t90 != 3484201407LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x469 = 1;
	static int32_t x470 = -1;
	static uint8_t x471 = 108U;
	int32_t t91 = 275;

	t91 = (((x469|x470)*x471)+x472);

	if (t91 != 18) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x473 = UINT8_MAX;
	uint8_t x474 = 57U;
	int32_t t92 = -7;

	t92 = (((x473|x474)*x475)+x476);

	if (t92 != -32641) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x478 = INT8_MIN;
	static int16_t x479 = INT16_MIN;
	int32_t t93 = -460904182;

	t93 = (((x477|x478)*x479)+x480);

	if (t93 != 32895) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x481 = INT32_MAX;
	uint32_t x482 = 12419U;
	int32_t x483 = 51465606;
	int32_t x484 = INT32_MAX;
	uint32_t t94 = 27950201U;

	t94 = (((x481|x482)*x483)+x484);

	if (t94 != 2096018041U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x494 = 273;
	static uint64_t x495 = UINT64_MAX;

	t95 = (((x493|x494)*x495)+x496);

	if (t95 != 17368366235396554820LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x497 = 1;
	uint64_t x498 = 478095332LLU;
	uint32_t x499 = 25311203U;
	uint16_t x500 = 21U;

	t96 = (((x497|x498)*x499)+x500);

	if (t96 != 12101168026915620LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x501 = -870;
	int32_t x502 = INT32_MIN;
	volatile uint64_t x503 = UINT64_MAX;
	volatile uint32_t x504 = 5122932U;
	volatile uint64_t t97 = 569483918LLU;

	t97 = (((x501|x502)*x503)+x504);

	if (t97 != 5123802LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x507 = 0;
	volatile int64_t t98 = 32706212618337466LL;

	t98 = (((x505|x506)*x507)+x508);

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = 14161774547LL;
	volatile int8_t x510 = -1;
	uint16_t x511 = 2U;
	static uint8_t x512 = UINT8_MAX;
	volatile int64_t t99 = -15LL;

	t99 = (((x509|x510)*x511)+x512);

	if (t99 != 253LL) { NG(); } else { ; }
	
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

