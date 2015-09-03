#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MAX;
int8_t x10 = INT8_MAX;
int16_t x17 = -212;
static volatile uint32_t x22 = UINT32_MAX;
uint16_t x25 = 21U;
uint16_t x42 = UINT16_MAX;
int64_t x54 = INT64_MAX;
static int32_t t13 = -110;
int32_t t14 = -14;
int16_t x62 = INT16_MIN;
int8_t x64 = INT8_MIN;
int8_t x75 = INT8_MAX;
int32_t x76 = 46991;
uint32_t t18 = 1220187U;
volatile int32_t x79 = -132;
uint32_t t21 = 12073U;
uint16_t x95 = UINT16_MAX;
int64_t t26 = -245670878271163LL;
int64_t x113 = 3436279150321LL;
int8_t x115 = INT8_MIN;
volatile int32_t x118 = -1;
int64_t x119 = INT64_MIN;
volatile int32_t t29 = 72;
static int8_t x123 = INT8_MIN;
int32_t t30 = -237467;
int32_t t31 = -1;
uint16_t x133 = UINT16_MAX;
uint64_t x135 = UINT64_MAX;
volatile int32_t t35 = 10480739;
int8_t x148 = INT8_MIN;
int64_t x157 = INT64_MIN;
int64_t x158 = -2259888164382LL;
int8_t x165 = INT8_MAX;
volatile int8_t x177 = INT8_MAX;
uint16_t x186 = UINT16_MAX;
uint32_t x187 = UINT32_MAX;
int16_t x193 = 582;
uint16_t x200 = UINT16_MAX;
uint16_t x207 = 296U;
int32_t x210 = 136;
static int64_t x211 = INT64_MIN;
static int64_t x212 = -199883197LL;
int32_t x225 = INT32_MIN;
volatile uint64_t x227 = 1010142947777502LLU;
uint8_t x243 = 47U;
static int8_t x247 = 3;
uint64_t x253 = UINT64_MAX;
int16_t x265 = INT16_MIN;
volatile uint64_t x275 = 148071236955023841LLU;
int8_t x283 = -1;
uint16_t x287 = 1U;
int16_t x292 = -926;
volatile int8_t x311 = INT8_MIN;
static int16_t x315 = 0;
int64_t x316 = INT64_MIN;
int64_t t76 = -1LL;
int16_t x318 = INT16_MIN;
static volatile int32_t x322 = 3;
volatile int16_t x325 = -33;
int16_t x327 = INT16_MIN;
int64_t x335 = INT64_MAX;
volatile int32_t t81 = 982;
int16_t x344 = INT16_MIN;
static uint64_t t84 = 138326140171870LLU;
volatile int64_t x356 = -944132384316983LL;
int16_t x362 = -1;
static int32_t x363 = -20300458;
int32_t x365 = INT32_MAX;
uint16_t x367 = 3U;
int64_t x369 = INT64_MIN;
volatile uint64_t t88 = 90616LLU;
int8_t x375 = INT8_MIN;
static volatile int16_t x380 = INT16_MIN;
int8_t x381 = 28;
static int64_t t91 = 268463581788559LL;
volatile uint64_t x389 = UINT64_MAX;
volatile uint8_t x391 = 0U;
static uint64_t t93 = 2227493308904654635LLU;
uint64_t x397 = UINT64_MAX;
int8_t x401 = -1;
static volatile int64_t x405 = INT64_MAX;
uint64_t x406 = UINT64_MAX;
static uint16_t x410 = 2U;
int16_t x411 = INT16_MIN;
static volatile int8_t x415 = -1;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int16_t x2 = -1;
	int16_t x3 = -1;
	volatile uint32_t x4 = 954237486U;
	int64_t t0 = 95LL;

	t0 = (x1/((x2==x3)+x4));

	if (t0 != -9665698699LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 22045U;
	int32_t x6 = INT32_MIN;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = -4864;

	t1 = (x5/((x6==x7)+x8));

	if (t1 != -172) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile uint16_t x11 = 3U;
	static volatile int8_t x12 = -1;
	volatile int32_t t2 = -473976303;

	t2 = (x9/((x10==x11)+x12));

	if (t2 != 128) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 12089282153152196LLU;
	uint32_t x14 = UINT32_MAX;
	int16_t x15 = 40;
	int8_t x16 = INT8_MIN;
	volatile uint64_t t3 = 1002008LLU;

	t3 = (x13/((x14==x15)+x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -237;
	volatile uint64_t x19 = 5054350238194186LLU;
	uint32_t x20 = 76904074U;
	volatile uint32_t t4 = 748290U;

	t4 = (x17/((x18==x19)+x20));

	if (t4 != 55U) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x21 = 635116301U;
	volatile int16_t x23 = -1;
	int16_t x24 = 6;
	uint32_t t5 = 10700557U;

	t5 = (x21/((x22==x23)+x24));

	if (t5 != 90730900U) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 15U;
	int64_t x27 = INT64_MAX;
	volatile int16_t x28 = -115;
	static int32_t t6 = 169126615;

	t6 = (x25/((x26==x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = -1;
	int64_t x31 = -1LL;
	uint32_t x32 = 6U;
	volatile uint32_t t7 = 260U;

	t7 = (x29/((x30==x31)+x32));

	if (t7 != 613562075U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 299830;
	int16_t x34 = INT16_MAX;
	static uint32_t x35 = 238644U;
	static int32_t x36 = 68608;
	int32_t t8 = 594731;

	t8 = (x33/((x34==x35)+x36));

	if (t8 != 4) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x37 = INT64_MIN;
	volatile uint8_t x38 = 58U;
	uint32_t x39 = 1820U;
	int32_t x40 = INT32_MIN;
	volatile int64_t t9 = -3076923515959LL;

	t9 = (x37/((x38==x39)+x40));

	if (t9 != 4294967296LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int32_t x43 = -1;
	volatile int8_t x44 = 2;
	volatile int32_t t10 = -21185698;

	t10 = (x41/((x42==x43)+x44));

	if (t10 != -16384) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 721877570998657509LLU;
	uint32_t x46 = 4U;
	uint16_t x47 = 313U;
	static int16_t x48 = INT16_MAX;
	uint64_t t11 = 411769770LLU;

	t11 = (x45/((x46==x47)+x48));

	if (t11 != 22030627491032LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	uint64_t x50 = 2983206LLU;
	int16_t x51 = -1;
	int16_t x52 = INT16_MAX;
	static uint32_t t12 = 170158938U;

	t12 = (x49/((x50==x51)+x52));

	if (t12 != 131076U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 62U;
	uint32_t x55 = 918451U;
	int8_t x56 = -1;

	t13 = (x53/((x54==x55)+x56));

	if (t13 != -62) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint16_t x58 = UINT16_MAX;
	static uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1;

	t14 = (x57/((x58==x59)+x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint32_t x63 = UINT32_MAX;
	volatile uint32_t t15 = 3U;

	t15 = (x61/((x62==x63)+x64));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 4U;
	uint64_t x66 = UINT64_MAX;
	uint8_t x67 = 6U;
	int16_t x68 = 18;
	int32_t t16 = -7;

	t16 = (x65/((x66==x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = 7466174LL;

	t17 = (x69/((x70==x71)+x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x73 = 230219302U;
	volatile int64_t x74 = -932967LL;

	t18 = (x73/((x74==x75)+x76));

	if (t18 != 4899U) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	uint32_t x78 = UINT32_MAX;
	int16_t x80 = INT16_MIN;
	int32_t t19 = -108656110;

	t19 = (x77/((x78==x79)+x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	volatile int32_t x82 = INT32_MAX;
	int64_t x83 = INT64_MIN;
	int8_t x84 = 1;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x81/((x82==x83)+x84));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	static int16_t x86 = INT16_MAX;
	int8_t x87 = INT8_MAX;
	static int32_t x88 = INT32_MIN;

	t21 = (x85/((x86==x87)+x88));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 7823U;
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = -12296;
	static uint8_t x92 = 14U;
	int32_t t22 = -5;

	t22 = (x89/((x90==x91)+x92));

	if (t22 != 558) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 7U;
	static int16_t x94 = INT16_MAX;
	static int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -1635436;

	t23 = (x93/((x94==x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MIN;
	int32_t x98 = -31831948;
	int16_t x99 = INT16_MIN;
	uint16_t x100 = 5U;
	int32_t t24 = 172893855;

	t24 = (x97/((x98==x99)+x100));

	if (t24 != -6553) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 27U;
	uint64_t x102 = UINT64_MAX;
	static int16_t x103 = -1;
	volatile uint32_t x104 = 3856U;
	uint32_t t25 = 54U;

	t25 = (x101/((x102==x103)+x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 346;
	int64_t x106 = 118052470LL;
	int8_t x107 = INT8_MAX;
	volatile int64_t x108 = INT64_MIN;

	t26 = (x105/((x106==x107)+x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	uint32_t x110 = 1U;
	uint32_t x111 = 898899U;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -732453;

	t27 = (x109/((x110==x111)+x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -1LL;
	uint64_t x116 = 280659959505423LLU;
	volatile uint64_t t28 = 184507LLU;

	t28 = (x113/((x114==x115)+x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	static volatile int32_t x120 = 347;

	t29 = (x117/((x118==x119)+x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	int64_t x122 = 4402033449705053063LL;
	uint8_t x124 = UINT8_MAX;

	t30 = (x121/((x122==x123)+x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MAX;
	int32_t x126 = 566495;
	int64_t x127 = INT64_MAX;
	static int16_t x128 = 7217;

	t31 = (x125/((x126==x127)+x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = 5LLU;
	int64_t x130 = INT64_MIN;
	volatile int8_t x131 = -31;
	int16_t x132 = INT16_MAX;
	volatile uint64_t t32 = 47679798512464327LLU;

	t32 = (x129/((x130==x131)+x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 1U;
	uint32_t x136 = 69763515U;
	uint32_t t33 = 21274524U;

	t33 = (x133/((x134==x135)+x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = 55;
	int32_t x138 = INT32_MIN;
	static int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MAX;
	volatile int64_t t34 = 1369969LL;

	t34 = (x137/((x138==x139)+x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -1;
	uint8_t x142 = 7U;
	volatile int32_t x143 = 7536;
	volatile int32_t x144 = -1;

	t35 = (x141/((x142==x143)+x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = -1LL;
	uint64_t x146 = UINT64_MAX;
	int8_t x147 = 3;
	volatile int64_t t36 = -270734692154680764LL;

	t36 = (x145/((x146==x147)+x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	uint16_t x150 = 113U;
	volatile int64_t x151 = 6059577711482995LL;
	uint32_t x152 = 14083U;
	volatile uint32_t t37 = 179214759U;

	t37 = (x149/((x150==x151)+x152));

	if (t37 != 304972U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 9898328LL;
	uint16_t x154 = 5U;
	int8_t x155 = INT8_MIN;
	int64_t x156 = INT64_MAX;
	volatile int64_t t38 = -424LL;

	t38 = (x153/((x154==x155)+x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x159 = -1;
	volatile int64_t x160 = 5847142LL;
	int64_t t39 = -20972316LL;

	t39 = (x157/((x158==x159)+x160));

	if (t39 != -1577415434216LL) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint64_t x161 = 473824LLU;
	uint16_t x162 = 2371U;
	int32_t x163 = -1;
	volatile uint8_t x164 = 6U;
	uint64_t t40 = 27494686871568LLU;

	t40 = (x161/((x162==x163)+x164));

	if (t40 != 78970LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MIN;
	int64_t x167 = -1LL;
	int64_t x168 = INT64_MIN;
	int64_t t41 = 24587459608792904LL;

	t41 = (x165/((x166==x167)+x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int32_t x170 = -1;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 161U;
	static volatile int32_t t42 = 3824;

	t42 = (x169/((x170==x171)+x172));

	if (t42 != -202) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 427525LLU;
	uint64_t x174 = 23481867903440LLU;
	int8_t x175 = -1;
	int16_t x176 = INT16_MIN;
	static uint64_t t43 = 5209206762LLU;

	t43 = (x173/((x174==x175)+x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x178 = UINT16_MAX;
	int8_t x179 = INT8_MAX;
	uint8_t x180 = 11U;
	static int32_t t44 = -4752346;

	t44 = (x177/((x178==x179)+x180));

	if (t44 != 11) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 4U;
	int16_t x182 = -1;
	volatile int8_t x183 = 2;
	int16_t x184 = INT16_MIN;
	int32_t t45 = -112;

	t45 = (x181/((x182==x183)+x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	int16_t x188 = 6247;
	volatile int64_t t46 = -140823642762LL;

	t46 = (x185/((x186==x187)+x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x194 = 76;
	int16_t x195 = INT16_MIN;
	volatile int16_t x196 = INT16_MIN;
	volatile int32_t t47 = 15440861;

	t47 = (x193/((x194==x195)+x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x197 = -825136557292LL;
	int16_t x198 = INT16_MAX;
	volatile uint8_t x199 = 3U;
	static int64_t t48 = 67591208317210557LL;

	t48 = (x197/((x198==x199)+x200));

	if (t48 != -12590776LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -1;
	int8_t x202 = -1;
	static volatile uint32_t x203 = 1503954U;
	static int8_t x204 = INT8_MAX;
	static int32_t t49 = 1;

	t49 = (x201/((x202==x203)+x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = INT32_MIN;
	int8_t x206 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	volatile int64_t t50 = -172LL;

	t50 = (x205/((x206==x207)+x208));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 8269321LLU;
	volatile uint64_t t51 = 5LLU;

	t51 = (x209/((x210==x211)+x212));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x217 = 132U;
	uint16_t x218 = UINT16_MAX;
	static uint8_t x219 = UINT8_MAX;
	static int32_t x220 = -41942669;
	static volatile uint32_t t52 = 58090127U;

	t52 = (x217/((x218==x219)+x220));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x221 = INT32_MAX;
	volatile int8_t x222 = -1;
	uint64_t x223 = 127136LLU;
	int16_t x224 = -1657;
	int32_t t53 = -1;

	t53 = (x221/((x222==x223)+x224));

	if (t53 != -1296007) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x226 = 1;
	uint8_t x228 = 2U;
	int32_t t54 = 2867844;

	t54 = (x225/((x226==x227)+x228));

	if (t54 != -1073741824) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = -159;
	static int16_t x230 = -1;
	uint16_t x231 = UINT16_MAX;
	volatile int32_t x232 = INT32_MIN;
	static int32_t t55 = 4850195;

	t55 = (x229/((x230==x231)+x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x233 = INT32_MIN;
	uint64_t x234 = 1479911684244414722LLU;
	volatile int16_t x235 = INT16_MAX;
	int64_t x236 = INT64_MIN;
	volatile int64_t t56 = -43786853048844926LL;

	t56 = (x233/((x234==x235)+x236));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x237 = 58883407848167LLU;
	uint16_t x238 = 1U;
	uint32_t x239 = UINT32_MAX;
	int64_t x240 = 3196297313565191LL;
	static volatile uint64_t t57 = 1824542268120638LLU;

	t57 = (x237/((x238==x239)+x240));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = -206859908275246964LL;
	volatile int32_t x242 = INT32_MIN;
	int16_t x244 = INT16_MIN;
	static int64_t t58 = 1181055LL;

	t58 = (x241/((x242==x243)+x244));

	if (t58 != 6312863411720LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x245 = INT8_MIN;
	static int64_t x246 = -4960889760381LL;
	int32_t x248 = -1;
	int32_t t59 = -3532021;

	t59 = (x245/((x246==x247)+x248));

	if (t59 != 128) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = 533391302857LLU;
	uint8_t x250 = UINT8_MAX;
	static int16_t x251 = -1;
	static int8_t x252 = -3;
	static uint64_t t60 = 455395LLU;

	t60 = (x249/((x250==x251)+x252));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x254 = INT16_MIN;
	int64_t x255 = -1LL;
	int16_t x256 = -342;
	uint64_t t61 = 9177434686536525297LLU;

	t61 = (x253/((x254==x255)+x256));

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -2077959LL;
	int64_t x258 = -373108867414768692LL;
	volatile int32_t x259 = -8817;
	volatile int16_t x260 = INT16_MAX;
	int64_t t62 = 31306521740382068LL;

	t62 = (x257/((x258==x259)+x260));

	if (t62 != -63LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x261 = INT32_MAX;
	volatile uint64_t x262 = 26021524421208626LLU;
	volatile int16_t x263 = INT16_MIN;
	static int8_t x264 = INT8_MIN;
	int32_t t63 = 214232;

	t63 = (x261/((x262==x263)+x264));

	if (t63 != -16777215) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x266 = -1LL;
	int32_t x267 = INT32_MIN;
	volatile int64_t x268 = INT64_MAX;
	int64_t t64 = 70513715LL;

	t64 = (x265/((x266==x267)+x268));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = 220;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MAX;
	volatile int32_t t65 = 76189864;

	t65 = (x269/((x270==x271)+x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x273 = INT64_MIN;
	uint64_t x274 = 65680258LLU;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t66 = 0LLU;

	t66 = (x273/((x274==x275)+x276));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MIN;
	volatile int32_t x278 = -1;
	uint8_t x279 = UINT8_MAX;
	static uint64_t x280 = 2201002173LLU;
	volatile uint64_t t67 = 180LLU;

	t67 = (x277/((x278==x279)+x280));

	if (t67 != 4190532908LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x281 = UINT64_MAX;
	int16_t x282 = -1;
	uint8_t x284 = 2U;
	volatile uint64_t t68 = 86388740442243LLU;

	t68 = (x281/((x282==x283)+x284));

	if (t68 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	int16_t x288 = INT16_MAX;
	int64_t t69 = 429226791LL;

	t69 = (x285/((x286==x287)+x288));

	if (t69 != -281483566907400LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = INT32_MIN;
	volatile int64_t x290 = INT64_MIN;
	static volatile uint8_t x291 = 3U;
	int32_t t70 = -52;

	t70 = (x289/((x290==x291)+x292));

	if (t70 != 2319096) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = 2259703949216843493LL;
	int16_t x294 = -12;
	int64_t x295 = 173945LL;
	uint32_t x296 = 11934215U;
	int64_t t71 = -51703094934LL;

	t71 = (x293/((x294==x295)+x296));

	if (t71 != 189346676695LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = 65123795461456LL;
	int16_t x298 = INT16_MIN;
	int32_t x299 = 10918350;
	int16_t x300 = -1;
	int64_t t72 = -3847144691452275LL;

	t72 = (x297/((x298==x299)+x300));

	if (t72 != -65123795461456LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x301 = 8767756LLU;
	int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	volatile uint8_t x304 = 51U;
	volatile uint64_t t73 = 4134271410538849951LLU;

	t73 = (x301/((x302==x303)+x304));

	if (t73 != 171916LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = INT32_MAX;
	int16_t x306 = INT16_MAX;
	int64_t x307 = -1929LL;
	static int16_t x308 = -1;
	int32_t t74 = 10531756;

	t74 = (x305/((x306==x307)+x308));

	if (t74 != -2147483647) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1;
	uint32_t x310 = UINT32_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t75 = -60203;

	t75 = (x309/((x310==x311)+x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x313 = -1LL;
	uint16_t x314 = 0U;

	t76 = (x313/((x314==x315)+x316));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x317 = INT32_MIN;
	static uint8_t x319 = UINT8_MAX;
	uint8_t x320 = 95U;
	volatile int32_t t77 = -46266;

	t77 = (x317/((x318==x319)+x320));

	if (t77 != -22605091) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x321 = 509105538LLU;
	int32_t x323 = 17;
	uint8_t x324 = 88U;
	uint64_t t78 = 996LLU;

	t78 = (x321/((x322==x323)+x324));

	if (t78 != 5785290LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x326 = -1LL;
	volatile int8_t x328 = -3;
	int32_t t79 = -1633230;

	t79 = (x325/((x326==x327)+x328));

	if (t79 != 11) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = -1;
	static int64_t x330 = INT64_MIN;
	static uint64_t x331 = UINT64_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t80 = -8449;

	t80 = (x329/((x330==x331)+x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x333 = UINT8_MAX;
	int64_t x334 = INT64_MAX;
	int32_t x336 = -39105;

	t81 = (x333/((x334==x335)+x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -1;
	int32_t x338 = INT32_MIN;
	volatile uint32_t x339 = UINT32_MAX;
	uint32_t x340 = 227U;
	volatile uint32_t t82 = 476725U;

	t82 = (x337/((x338==x339)+x340));

	if (t82 != 18920560U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MAX;
	static int8_t x342 = 62;
	int64_t x343 = -476158530900LL;
	static int64_t t83 = 522905861704LL;

	t83 = (x341/((x342==x343)+x344));

	if (t83 != -281474976710655LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x345 = INT8_MIN;
	int8_t x346 = INT8_MAX;
	int16_t x347 = INT16_MAX;
	uint64_t x348 = 509LLU;

	t84 = (x345/((x346==x347)+x348));

	if (t84 != 36241147492553146LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x353 = 42089708U;
	int32_t x354 = -1;
	uint16_t x355 = UINT16_MAX;
	static volatile int64_t t85 = -57LL;

	t85 = (x353/((x354==x355)+x356));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 3U;
	uint16_t x364 = UINT16_MAX;
	static int32_t t86 = 5;

	t86 = (x361/((x362==x363)+x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x366 = -4;
	volatile int32_t x368 = 44;
	int32_t t87 = -6435;

	t87 = (x365/((x366==x367)+x368));

	if (t87 != 48806446) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x370 = 5U;
	uint32_t x371 = 4111U;
	volatile uint64_t x372 = 505218815017572LLU;

	t88 = (x369/((x370==x371)+x372));

	if (t88 != 18256LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x373 = 182U;
	static int8_t x374 = INT8_MIN;
	int16_t x376 = INT16_MAX;
	int32_t t89 = -26;

	t89 = (x373/((x374==x375)+x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 497618406316786293LLU;
	volatile int32_t x379 = 7;
	volatile int32_t t90 = 369253;

	t90 = (x377/((x378==x379)+x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MIN;
	static int64_t x384 = INT64_MIN;

	t91 = (x381/((x382==x383)+x384));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x385 = -48;
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MIN;
	static volatile uint32_t x388 = 1U;
	uint32_t t92 = 38U;

	t92 = (x385/((x386==x387)+x388));

	if (t92 != 4294967248U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x390 = 1;
	static int32_t x392 = -1;

	t93 = (x389/((x390==x391)+x392));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = UINT8_MAX;
	volatile int8_t x394 = INT8_MIN;
	int16_t x395 = -5843;
	static int16_t x396 = -1;
	int32_t t94 = 14618218;

	t94 = (x393/((x394==x395)+x396));

	if (t94 != -255) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x398 = 29;
	int64_t x399 = INT64_MIN;
	uint8_t x400 = 3U;
	uint64_t t95 = 3378075617730437624LLU;

	t95 = (x397/((x398==x399)+x400));

	if (t95 != 6148914691236517205LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x402 = UINT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MAX;
	volatile int32_t t96 = 15;

	t96 = (x401/((x402==x403)+x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x407 = 11U;
	volatile uint32_t x408 = UINT32_MAX;
	int64_t t97 = 6569065892LL;

	t97 = (x405/((x406==x407)+x408));

	if (t97 != 2147483648LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 163U;
	volatile int8_t x412 = -1;
	volatile int32_t t98 = -234635761;

	t98 = (x409/((x410==x411)+x412));

	if (t98 != -163) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x413 = 0U;
	int16_t x414 = -1;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t99 = 9;

	t99 = (x413/((x414==x415)+x416));

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

