#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MAX;
uint32_t x12 = 14647U;
static volatile int16_t x13 = INT16_MIN;
volatile int32_t t3 = 5920892;
static int64_t x18 = -1404877907LL;
int32_t t4 = 23620722;
int64_t x23 = -105194LL;
int16_t x27 = -93;
static uint32_t x31 = UINT32_MAX;
int8_t x38 = -17;
int8_t x48 = INT8_MIN;
static int32_t x49 = -1;
volatile int32_t t13 = 15;
volatile int32_t x59 = INT32_MAX;
volatile int64_t x67 = INT64_MAX;
int8_t x68 = INT8_MIN;
volatile int32_t t16 = 1020556;
int16_t x71 = INT16_MAX;
volatile int32_t t17 = 186953348;
static uint64_t x74 = 779188537794820LLU;
volatile int32_t t18 = 19;
volatile uint64_t x80 = UINT64_MAX;
int32_t x84 = 1723;
int32_t t20 = 895610;
int32_t t24 = 1669;
volatile int16_t x110 = INT16_MAX;
static int32_t x119 = -1;
int64_t x121 = INT64_MAX;
uint8_t x125 = UINT8_MAX;
int32_t t31 = -109252954;
int32_t t32 = 46;
int8_t x137 = INT8_MIN;
int32_t x144 = INT32_MAX;
int32_t t36 = -2;
static uint64_t x150 = 73836LLU;
int32_t x163 = INT32_MIN;
volatile int64_t x164 = 8327547LL;
int8_t x165 = 2;
int64_t x172 = -1LL;
volatile int32_t t42 = 4;
uint16_t x177 = 64U;
int32_t x186 = 44;
int32_t x188 = -3;
int8_t x193 = INT8_MAX;
int32_t t48 = -73769394;
volatile int32_t t49 = 60197238;
static int64_t x202 = -1LL;
volatile int64_t x210 = -11735183509292855LL;
uint64_t x211 = UINT64_MAX;
static volatile int32_t t52 = 108402;
int8_t x222 = INT8_MAX;
int32_t x223 = INT32_MAX;
int32_t x230 = -1;
int16_t x233 = INT16_MIN;
int16_t x234 = INT16_MIN;
int16_t x240 = INT16_MIN;
volatile int32_t t60 = -907140;
uint64_t x245 = 283244100314504211LLU;
static uint16_t x246 = 12942U;
static uint16_t x250 = 2U;
uint8_t x251 = 10U;
int64_t x252 = 117778022809795LL;
static volatile int32_t t62 = 25333190;
int32_t x254 = INT32_MIN;
uint16_t x255 = UINT16_MAX;
int64_t x260 = -1LL;
int8_t x261 = INT8_MIN;
uint16_t x263 = UINT16_MAX;
int32_t t65 = -25359;
int32_t t66 = -5138;
volatile int32_t t67 = -9;
static uint64_t x273 = UINT64_MAX;
int32_t x276 = INT32_MIN;
static uint16_t x278 = 5U;
uint8_t x292 = UINT8_MAX;
int32_t t72 = -5323783;
int16_t x294 = -1;
volatile int64_t x295 = -4LL;
uint8_t x297 = 2U;
volatile int8_t x298 = -2;
uint8_t x303 = 10U;
int64_t x306 = 14597766LL;
int64_t x307 = -2077017427370LL;
volatile int32_t t78 = 48145;
int64_t x317 = 2793594LL;
static int32_t x318 = INT32_MIN;
int8_t x323 = INT8_MIN;
volatile int32_t t80 = -29;
uint32_t x325 = 162312U;
uint16_t x326 = 7103U;
int8_t x334 = -1;
int32_t x338 = INT32_MAX;
static volatile int64_t x343 = -279941188397517442LL;
int32_t t89 = 26050;
uint64_t x362 = 8196902736991434514LLU;
int64_t x365 = INT64_MIN;
int8_t x370 = INT8_MIN;
volatile int32_t t92 = 1256367;
int8_t x375 = -1;
int32_t t93 = -1935;
int32_t x385 = INT32_MIN;
int64_t x387 = INT64_MIN;
volatile int32_t t96 = 20667;
static int16_t x389 = 51;
int16_t x390 = 1434;
int32_t x394 = -439;
int64_t x395 = INT64_MIN;
int8_t x398 = INT8_MIN;


void f0(void) {
	int32_t x1 = 20;
	static int8_t x2 = -1;
	static volatile uint16_t x3 = UINT16_MAX;
	int16_t x4 = 691;
	volatile int32_t t0 = -20;

	t0 = ((x1==x2)|(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static int8_t x7 = INT8_MAX;
	uint16_t x8 = 0U;
	volatile int32_t t1 = 13294930;

	t1 = ((x5==x6)|(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = 4653;
	static int64_t x11 = -1LL;
	int32_t t2 = -201408301;

	t2 = ((x9==x10)|(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MIN;
	static int16_t x15 = 4;
	uint8_t x16 = 59U;

	t3 = ((x13==x14)|(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -201450853809350186LL;
	uint32_t x19 = 114759U;
	uint64_t x20 = 1604848LLU;

	t4 = ((x17==x18)|(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -17;
	int8_t x22 = 31;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = 1520451;

	t5 = ((x21==x22)|(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 4U;
	static uint8_t x26 = 0U;
	int16_t x28 = -1;
	int32_t t6 = 872124;

	t6 = ((x25==x26)|(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = UINT8_MAX;
	int8_t x30 = -3;
	static uint32_t x32 = 104003980U;
	int32_t t7 = 8197;

	t7 = ((x29==x30)|(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	int16_t x34 = -638;
	int64_t x35 = -1LL;
	static int32_t x36 = INT32_MIN;
	int32_t t8 = -2203;

	t8 = ((x33==x34)|(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 23;
	int32_t x39 = INT32_MIN;
	static uint16_t x40 = UINT16_MAX;
	static int32_t t9 = -1031386;

	t9 = ((x37==x38)|(x39<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = 62U;
	volatile uint16_t x42 = 7957U;
	uint16_t x43 = 284U;
	static int8_t x44 = INT8_MAX;
	static int32_t t10 = -152365;

	t10 = ((x41==x42)|(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x45 = INT32_MIN;
	int32_t x46 = INT32_MAX;
	uint16_t x47 = 13U;
	volatile int32_t t11 = -27;

	t11 = ((x45==x46)|(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x50 = INT64_MIN;
	uint16_t x51 = 592U;
	int64_t x52 = 712083877060650851LL;
	volatile int32_t t12 = -1436393;

	t12 = ((x49==x50)|(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MAX;
	int32_t x54 = INT32_MIN;
	uint64_t x55 = 5343183552LLU;
	static int64_t x56 = INT64_MAX;

	t13 = ((x53==x54)|(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 3445U;
	volatile uint64_t x58 = 726978859382126LLU;
	static int32_t x60 = -1;
	volatile int32_t t14 = 0;

	t14 = ((x57==x58)|(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int8_t x62 = 24;
	volatile uint16_t x63 = 118U;
	static int32_t x64 = -1;
	static int32_t t15 = -95;

	t15 = ((x61==x62)|(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 7634083648291542522LLU;
	static uint16_t x66 = 26U;

	t16 = ((x65==x66)|(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = -1;
	int16_t x70 = -1;
	int32_t x72 = -1;

	t17 = ((x69==x70)|(x71<=x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	uint8_t x75 = 41U;
	volatile uint32_t x76 = 111U;

	t18 = ((x73==x74)|(x75<=x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = -1;
	static volatile int64_t x79 = 12392262538LL;
	int32_t t19 = -668;

	t19 = ((x77==x78)|(x79<=x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = UINT32_MAX;
	int64_t x82 = -1LL;
	int32_t x83 = 34382188;

	t20 = ((x81==x82)|(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 0;
	uint32_t x86 = UINT32_MAX;
	int16_t x87 = -1;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 146;

	t21 = ((x85==x86)|(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 455U;
	int32_t x90 = -37;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t x92 = 95298;
	static int32_t t22 = -60478366;

	t22 = ((x89==x90)|(x91<=x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -1;
	volatile int16_t x94 = -1;
	static uint32_t x95 = 4U;
	uint16_t x96 = 268U;
	static volatile int32_t t23 = -394;

	t23 = ((x93==x94)|(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	uint8_t x98 = UINT8_MAX;
	int8_t x99 = 4;
	static int16_t x100 = INT16_MAX;

	t24 = ((x97==x98)|(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	static int8_t x102 = INT8_MAX;
	uint16_t x103 = UINT16_MAX;
	uint16_t x104 = UINT16_MAX;
	static volatile int32_t t25 = -23647330;

	t25 = ((x101==x102)|(x103<=x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	static int64_t x106 = INT64_MAX;
	int32_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	volatile int32_t t26 = 250;

	t26 = ((x105==x106)|(x107<=x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	uint8_t x111 = UINT8_MAX;
	volatile uint64_t x112 = 8323350011079LLU;
	volatile int32_t t27 = -56;

	t27 = ((x109==x110)|(x111<=x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 481U;
	static uint16_t x114 = UINT16_MAX;
	static int16_t x115 = INT16_MAX;
	int64_t x116 = 123LL;
	static int32_t t28 = -47;

	t28 = ((x113==x114)|(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	int16_t x118 = -1;
	int16_t x120 = INT16_MIN;
	int32_t t29 = -15;

	t29 = ((x117==x118)|(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x122 = UINT32_MAX;
	uint8_t x123 = 28U;
	int8_t x124 = INT8_MAX;
	static volatile int32_t t30 = -52;

	t30 = ((x121==x122)|(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = -1;
	uint32_t x127 = 641491275U;
	static int8_t x128 = 6;

	t31 = ((x125==x126)|(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MIN;
	uint8_t x131 = UINT8_MAX;
	int16_t x132 = -1;

	t32 = ((x129==x130)|(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 1263068;
	volatile int64_t x134 = INT64_MIN;
	int8_t x135 = INT8_MIN;
	int16_t x136 = 1;
	int32_t t33 = 24136;

	t33 = ((x133==x134)|(x135<=x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -76;
	int16_t x139 = -10779;
	static int64_t x140 = 1LL;
	volatile int32_t t34 = -3351173;

	t34 = ((x137==x138)|(x139<=x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 115923759744LL;
	volatile uint16_t x142 = UINT16_MAX;
	int16_t x143 = INT16_MIN;
	volatile int32_t t35 = 101559331;

	t35 = ((x141==x142)|(x143<=x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -1;
	volatile int8_t x146 = INT8_MAX;
	int64_t x147 = -1LL;
	int64_t x148 = 0LL;

	t36 = ((x145==x146)|(x147<=x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x149 = 249U;
	int64_t x151 = INT64_MIN;
	static volatile int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 4065573;

	t37 = ((x149==x150)|(x151<=x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	static int32_t x154 = -1;
	uint8_t x155 = 30U;
	int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 1892;

	t38 = ((x153==x154)|(x155<=x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	uint64_t x158 = UINT64_MAX;
	int16_t x159 = INT16_MIN;
	static uint64_t x160 = 12375LLU;
	volatile int32_t t39 = 92;

	t39 = ((x157==x158)|(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MAX;
	static volatile int32_t t40 = 543854;

	t40 = ((x161==x162)|(x163<=x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = UINT8_MAX;
	int64_t x167 = -1415893LL;
	static int16_t x168 = INT16_MAX;
	int32_t t41 = -13;

	t41 = ((x165==x166)|(x167<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	static int16_t x170 = 0;
	int8_t x171 = 3;

	t42 = ((x169==x170)|(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = 0;
	int64_t x174 = -1LL;
	volatile int32_t x175 = -1;
	volatile int64_t x176 = INT64_MIN;
	volatile int32_t t43 = 0;

	t43 = ((x173==x174)|(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = -15173;
	uint16_t x179 = UINT16_MAX;
	uint32_t x180 = 287U;
	static int32_t t44 = -14890698;

	t44 = ((x177==x178)|(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x181 = 10954U;
	uint64_t x182 = 122360LLU;
	int64_t x183 = INT64_MIN;
	int64_t x184 = INT64_MIN;
	volatile int32_t t45 = 2865738;

	t45 = ((x181==x182)|(x183<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = UINT8_MAX;
	int64_t x187 = INT64_MAX;
	volatile int32_t t46 = -6900170;

	t46 = ((x185==x186)|(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	volatile int32_t x190 = INT32_MIN;
	uint8_t x191 = 69U;
	int32_t x192 = -330;
	volatile int32_t t47 = -257934;

	t47 = ((x189==x190)|(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -1;
	volatile int8_t x195 = 36;
	uint8_t x196 = 17U;

	t48 = ((x193==x194)|(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 0;
	uint16_t x198 = 1U;
	uint8_t x199 = 9U;
	int8_t x200 = INT8_MIN;

	t49 = ((x197==x198)|(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 1U;
	static uint16_t x203 = 3173U;
	uint16_t x204 = UINT16_MAX;
	volatile int32_t t50 = 182793434;

	t50 = ((x201==x202)|(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 786484653U;
	uint16_t x206 = 1U;
	int32_t x207 = INT32_MIN;
	static int16_t x208 = 263;
	static int32_t t51 = -82;

	t51 = ((x205==x206)|(x207<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	volatile int32_t x212 = INT32_MIN;

	t52 = ((x209==x210)|(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	static int8_t x215 = 2;
	uint64_t x216 = 256105152LLU;
	volatile int32_t t53 = 1623;

	t53 = ((x213==x214)|(x215<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -1;
	int16_t x218 = INT16_MIN;
	int32_t x219 = INT32_MIN;
	volatile int16_t x220 = -1;
	int32_t t54 = -182201194;

	t54 = ((x217==x218)|(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 49;
	volatile int32_t x224 = INT32_MAX;
	int32_t t55 = -105815949;

	t55 = ((x221==x222)|(x223<=x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = INT32_MIN;
	int8_t x227 = 22;
	uint8_t x228 = 15U;
	int32_t t56 = -7;

	t56 = ((x225==x226)|(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	uint8_t x231 = UINT8_MAX;
	static int32_t x232 = INT32_MIN;
	static int32_t t57 = -5388;

	t57 = ((x229==x230)|(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x235 = 27964U;
	int16_t x236 = -10385;
	volatile int32_t t58 = -967;

	t58 = ((x233==x234)|(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = 2U;
	int16_t x239 = -4453;
	volatile int32_t t59 = 6299;

	t59 = ((x237==x238)|(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x241 = 113330514110LLU;
	int32_t x242 = INT32_MIN;
	volatile uint16_t x243 = 5U;
	static int64_t x244 = -1LL;

	t60 = ((x241==x242)|(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x247 = INT32_MIN;
	uint32_t x248 = 7518005U;
	int32_t t61 = -13164;

	t61 = ((x245==x246)|(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 73225377885LLU;

	t62 = ((x249==x250)|(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 42;
	int32_t x256 = -32284;
	volatile int32_t t63 = 16573;

	t63 = ((x253==x254)|(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MIN;
	static int8_t x259 = -1;
	volatile int32_t t64 = -1745;

	t64 = ((x257==x258)|(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x262 = INT16_MAX;
	int8_t x264 = -1;

	t65 = ((x261==x262)|(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	volatile int8_t x266 = INT8_MIN;
	volatile int8_t x267 = INT8_MAX;
	static int16_t x268 = INT16_MIN;

	t66 = ((x265==x266)|(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static uint8_t x270 = UINT8_MAX;
	uint32_t x271 = UINT32_MAX;
	volatile uint8_t x272 = 1U;

	t67 = ((x269==x270)|(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x274 = -1LL;
	static volatile int8_t x275 = INT8_MIN;
	static int32_t t68 = -11167747;

	t68 = ((x273==x274)|(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x277 = INT64_MIN;
	volatile int16_t x279 = -34;
	uint64_t x280 = 93644188350761LLU;
	static int32_t t69 = -22;

	t69 = ((x277==x278)|(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = -1;
	static int8_t x282 = -2;
	uint32_t x283 = 7U;
	int32_t x284 = INT32_MAX;
	static volatile int32_t t70 = -70462803;

	t70 = ((x281==x282)|(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = 54;
	int64_t x286 = INT64_MIN;
	int32_t x287 = 0;
	volatile int64_t x288 = INT64_MAX;
	volatile int32_t t71 = 49123257;

	t71 = ((x285==x286)|(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	volatile uint16_t x290 = UINT16_MAX;
	int32_t x291 = INT32_MIN;

	t72 = ((x289==x290)|(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x293 = UINT32_MAX;
	volatile int8_t x296 = INT8_MIN;
	volatile int32_t t73 = -118545;

	t73 = ((x293==x294)|(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MAX;
	static int32_t x300 = INT32_MIN;
	volatile int32_t t74 = -452704;

	t74 = ((x297==x298)|(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = 750099;
	int32_t x302 = INT32_MAX;
	int64_t x304 = -16431183793776304LL;
	volatile int32_t t75 = -1;

	t75 = ((x301==x302)|(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 866U;
	static int16_t x308 = INT16_MIN;
	volatile int32_t t76 = 1007228555;

	t76 = ((x305==x306)|(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 3U;
	uint8_t x310 = 0U;
	static int64_t x311 = INT64_MIN;
	int64_t x312 = -11553598LL;
	static int32_t t77 = 148;

	t77 = ((x309==x310)|(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = 229016LL;
	int64_t x314 = INT64_MIN;
	volatile uint16_t x315 = UINT16_MAX;
	volatile int16_t x316 = INT16_MIN;

	t78 = ((x313==x314)|(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x319 = 414;
	int8_t x320 = INT8_MIN;
	int32_t t79 = 0;

	t79 = ((x317==x318)|(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x321 = 38753077U;
	static volatile int8_t x322 = INT8_MIN;
	static int64_t x324 = 2754657504124553525LL;

	t80 = ((x321==x322)|(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = -12410930;

	t81 = ((x325==x326)|(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MIN;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 66U;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = 697602;

	t82 = ((x329==x330)|(x331<=x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	volatile int64_t x335 = 2LL;
	uint8_t x336 = 3U;
	int32_t t83 = -246;

	t83 = ((x333==x334)|(x335<=x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = 18511U;
	int8_t x339 = INT8_MAX;
	volatile int16_t x340 = INT16_MIN;
	static int32_t t84 = 1031474;

	t84 = ((x337==x338)|(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	int16_t x342 = INT16_MAX;
	int64_t x344 = INT64_MIN;
	static int32_t t85 = 2;

	t85 = ((x341==x342)|(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = 0;
	static volatile int16_t x346 = -291;
	int16_t x347 = -3410;
	int64_t x348 = INT64_MIN;
	static int32_t t86 = -704;

	t86 = ((x345==x346)|(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 0;
	int8_t x350 = 0;
	int8_t x351 = INT8_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t87 = 19;

	t87 = ((x349==x350)|(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x353 = 62398939213931LLU;
	volatile uint32_t x354 = 56782261U;
	uint32_t x355 = 1325561U;
	static int64_t x356 = INT64_MAX;
	static volatile int32_t t88 = -639169;

	t88 = ((x353==x354)|(x355<=x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 1U;
	static int8_t x358 = INT8_MAX;
	uint16_t x359 = 2438U;
	uint64_t x360 = 8LLU;

	t89 = ((x357==x358)|(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = 34U;
	volatile int8_t x363 = 1;
	uint64_t x364 = 76781459LLU;
	volatile int32_t t90 = 2;

	t90 = ((x361==x362)|(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = 199192U;
	uint16_t x367 = 112U;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = -275483749;

	t91 = ((x365==x366)|(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -51;
	int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MIN;

	t92 = ((x369==x370)|(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = -1LL;
	int8_t x374 = INT8_MIN;
	int32_t x376 = -1;

	t93 = ((x373==x374)|(x375<=x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x377 = INT64_MAX;
	static int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t94 = -1;

	t94 = ((x377==x378)|(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int16_t x382 = INT16_MIN;
	static uint64_t x383 = 35274LLU;
	int16_t x384 = INT16_MIN;
	int32_t t95 = 106234;

	t95 = ((x381==x382)|(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x386 = INT32_MIN;
	int8_t x388 = INT8_MAX;

	t96 = ((x385==x386)|(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x391 = -377507LL;
	int32_t x392 = 15053173;
	volatile int32_t t97 = -54282965;

	t97 = ((x389==x390)|(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 575U;
	static int8_t x396 = -1;
	static volatile int32_t t98 = -159755082;

	t98 = ((x393==x394)|(x395<=x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	int32_t x399 = 7811;
	int64_t x400 = INT64_MIN;
	static int32_t t99 = 7861771;

	t99 = ((x397==x398)|(x399<=x400));

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

