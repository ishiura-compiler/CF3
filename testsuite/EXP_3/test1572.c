#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MIN;
static int64_t t2 = -48LL;
int8_t x22 = INT8_MAX;
uint64_t x25 = UINT64_MAX;
static int32_t x29 = -79062353;
uint64_t x34 = 2197474007LLU;
uint64_t t8 = 259786114LLU;
int8_t x43 = INT8_MIN;
uint16_t x49 = UINT16_MAX;
int32_t x51 = 0;
int32_t x52 = INT32_MIN;
int32_t t13 = 242516;
uint64_t t15 = UINT64_MAX;
uint32_t x70 = UINT32_MAX;
uint64_t x75 = UINT64_MAX;
volatile int64_t t18 = -496562340481LL;
uint8_t x82 = 30U;
static int8_t x83 = INT8_MAX;
int32_t x84 = INT32_MIN;
volatile int16_t x86 = 131;
volatile int32_t t20 = -234551272;
volatile uint64_t t21 = 43958649442373LLU;
uint64_t t24 = 1170655667LLU;
static uint64_t x112 = 44514767664969685LLU;
volatile uint8_t x120 = 2U;
volatile uint64_t t28 = 89336637LLU;
int8_t x127 = INT8_MAX;
volatile int32_t t29 = -762;
static int32_t x130 = INT32_MAX;
static uint8_t x134 = UINT8_MAX;
int32_t x138 = -1;
uint8_t x140 = UINT8_MAX;
static int32_t t32 = -239998;
static int64_t x142 = INT64_MIN;
uint32_t x144 = 1U;
static int16_t x150 = -1;
int32_t t35 = 16435;
int16_t x156 = -1;
int64_t t37 = 2175509897802LL;
uint16_t x165 = UINT16_MAX;
volatile int16_t x173 = -15;
int32_t x178 = INT32_MIN;
int16_t x181 = -1;
static volatile int64_t x188 = 4175998LL;
volatile int64_t x191 = 447332483351630LL;
uint16_t x193 = 27730U;
int8_t x199 = 34;
int32_t x200 = -569;
int32_t x214 = INT32_MIN;
int64_t x223 = -243360LL;
int32_t x225 = 19;
int16_t x226 = -1;
int16_t x233 = -2542;
int8_t x239 = INT8_MIN;
uint8_t x242 = 14U;
volatile int64_t x243 = 3705580284513295597LL;
int16_t x244 = INT16_MIN;
static int64_t x247 = INT64_MIN;
int16_t x250 = 83;
uint32_t t60 = 796755969U;
static volatile int64_t t61 = -145827401982LL;
uint8_t x262 = 3U;
int32_t x263 = -1;
static volatile int32_t t64 = 207;
volatile uint32_t x269 = 9176059U;
uint64_t x272 = 1009LLU;
volatile int16_t x276 = -1;
int16_t x283 = -4;
static volatile int32_t t68 = 4838481;
int8_t x288 = INT8_MIN;
static uint8_t x294 = UINT8_MAX;
static uint32_t x297 = UINT32_MAX;
static int8_t x300 = 0;
int16_t x304 = INT16_MAX;
uint8_t x305 = UINT8_MAX;
int64_t t74 = 276292109804789LL;
int16_t x310 = -24;
static uint32_t t75 = 2569U;
volatile uint8_t x315 = UINT8_MAX;
static int64_t x317 = -1LL;
int8_t x318 = -1;
int64_t x319 = -1LL;
volatile uint16_t x320 = 126U;
uint16_t x326 = UINT16_MAX;
static volatile int64_t t80 = 2987797490725LL;
int8_t x335 = INT8_MAX;
int8_t x340 = INT8_MIN;
volatile uint8_t x344 = 125U;
uint64_t x347 = 706715431916LLU;
static volatile int64_t x355 = -1LL;
int32_t x357 = INT32_MIN;
static int32_t x368 = -1;
int8_t x370 = INT8_MIN;
int8_t x375 = INT8_MIN;
int64_t x376 = -549270088338LL;
volatile int32_t t91 = 5329637;
volatile int64_t x387 = -1LL;
volatile int64_t x389 = INT64_MAX;
int32_t x390 = -1;
int32_t x396 = -1;
volatile int32_t x397 = INT32_MAX;
uint32_t x401 = 223653743U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int64_t x2 = -5503566729714025LL;
	int16_t x3 = -4134;
	uint16_t x4 = UINT16_MAX;
	int64_t t0 = -181492112474264040LL;

	t0 = ((x1/x2)|(x3<=x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	uint16_t x7 = 152U;
	int8_t x8 = -3;
	volatile int32_t t1 = 4;

	t1 = ((x5/x6)|(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = -1LL;
	volatile uint16_t x10 = 13U;
	uint16_t x11 = 4949U;
	int32_t x12 = INT32_MIN;

	t2 = ((x9/x10)|(x11<=x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	int16_t x14 = INT16_MIN;
	volatile int32_t x15 = INT32_MAX;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -405;

	t3 = ((x13/x14)|(x15<=x16));

	if (t3 != -65535) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	uint32_t x18 = 6336U;
	int8_t x19 = 6;
	int16_t x20 = -1182;
	uint32_t t4 = 6963U;

	t4 = ((x17/x18)|(x19<=x20));

	if (t4 != 677862U) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1956U;
	static uint32_t x23 = 2U;
	int32_t x24 = -287612;
	int32_t t5 = -1027535485;

	t5 = ((x21/x22)|(x23<=x24));

	if (t5 != 15) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x26 = 10U;
	int16_t x27 = 0;
	uint8_t x28 = 18U;
	uint64_t t6 = 2539LLU;

	t6 = ((x25/x26)|(x27<=x28));

	if (t6 != 1844674407370955161LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = 657905758;
	uint64_t x31 = UINT64_MAX;
	int32_t x32 = INT32_MAX;
	static int32_t t7 = 2;

	t7 = ((x29/x30)|(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 3002U;
	int16_t x35 = -1422;
	static uint16_t x36 = UINT16_MAX;

	t8 = ((x33/x34)|(x35<=x36));

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	static int32_t x38 = -26416165;
	int32_t x39 = INT32_MIN;
	volatile uint16_t x40 = 2645U;
	volatile int32_t t9 = -293531;

	t9 = ((x37/x38)|(x39<=x40));

	if (t9 != 81) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	int16_t x42 = INT16_MIN;
	uint16_t x44 = 38U;
	int32_t t10 = -52117043;

	t10 = ((x41/x42)|(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	int16_t x46 = INT16_MAX;
	volatile int64_t x47 = -1LL;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -1411;

	t11 = ((x45/x46)|(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x50 = INT64_MIN;
	volatile int64_t t12 = -31411862602531065LL;

	t12 = ((x49/x50)|(x51<=x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	uint64_t x56 = 22LLU;

	t13 = ((x53/x54)|(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 668;
	int32_t x62 = 1;
	int16_t x63 = -6;
	uint16_t x64 = 29U;
	static volatile int32_t t14 = 1227;

	t14 = ((x61/x62)|(x63<=x64));

	if (t14 != 669) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x65 = UINT64_MAX;
	static uint8_t x66 = 1U;
	static volatile int16_t x67 = -1;
	uint32_t x68 = 720U;

	t15 = ((x65/x66)|(x67<=x68));

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	volatile uint8_t x72 = 12U;
	uint32_t t16 = 3476U;

	t16 = ((x69/x70)|(x71<=x72));

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int32_t x74 = -1;
	volatile uint8_t x76 = UINT8_MAX;
	int32_t t17 = 125620;

	t17 = ((x73/x74)|(x75<=x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MIN;
	volatile int64_t x79 = INT64_MIN;
	int16_t x80 = INT16_MIN;

	t18 = ((x77/x78)|(x79<=x80));

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = -5392;
	volatile int32_t t19 = 68;

	t19 = ((x81/x82)|(x83<=x84));

	if (t19 != -179) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x85 = 2077U;
	uint64_t x87 = UINT64_MAX;
	int64_t x88 = 815LL;

	t20 = ((x85/x86)|(x87<=x88));

	if (t20 != 15) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x89 = 99156178369079741LLU;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = 9646U;
	static volatile int32_t x92 = INT32_MAX;

	t21 = ((x89/x90)|(x91<=x92));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 5976684599LLU;
	int32_t x94 = INT32_MAX;
	volatile int16_t x95 = INT16_MAX;
	uint16_t x96 = 0U;
	volatile uint64_t t22 = 986113285354LLU;

	t22 = ((x93/x94)|(x95<=x96));

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = -20;
	int8_t x98 = -14;
	static int8_t x99 = INT8_MAX;
	volatile int16_t x100 = INT16_MIN;
	volatile int32_t t23 = -10101;

	t23 = ((x97/x98)|(x99<=x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	volatile uint64_t x102 = 744246942LLU;
	int8_t x103 = INT8_MAX;
	static uint32_t x104 = 10U;

	t24 = ((x101/x102)|(x103<=x104));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	int64_t x110 = -19631326241665302LL;
	int32_t x111 = -30414632;
	volatile int64_t t25 = -144029668LL;

	t25 = ((x109/x110)|(x111<=x112));

	if (t25 != -469LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = -6;
	int16_t x114 = INT16_MIN;
	int8_t x115 = -1;
	int32_t x116 = 114710;
	volatile int32_t t26 = 2579775;

	t26 = ((x113/x114)|(x115<=x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -5;
	int16_t x118 = 31;
	int64_t x119 = INT64_MIN;
	int32_t t27 = 229568;

	t27 = ((x117/x118)|(x119<=x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	uint64_t x122 = 5894684356553354472LLU;
	int32_t x123 = 0;
	volatile int16_t x124 = -1;

	t28 = ((x121/x122)|(x123<=x124));

	if (t28 != 3LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -147;
	int8_t x126 = INT8_MIN;
	static int8_t x128 = -6;

	t29 = ((x125/x126)|(x127<=x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = INT8_MAX;
	static int64_t x131 = -277LL;
	uint16_t x132 = UINT16_MAX;
	int32_t t30 = 14417739;

	t30 = ((x129/x130)|(x131<=x132));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x133 = 11370040034LLU;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = UINT8_MAX;
	static volatile uint64_t t31 = 6262847018500284671LLU;

	t31 = ((x133/x134)|(x135<=x136));

	if (t31 != 44588393LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = -1;
	int16_t x139 = INT16_MIN;

	t32 = ((x137/x138)|(x139<=x140));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x141 = 793U;
	static uint32_t x143 = 45U;
	volatile int64_t t33 = -1305104909098034418LL;

	t33 = ((x141/x142)|(x143<=x144));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MAX;
	volatile uint64_t x147 = 1LLU;
	uint8_t x148 = 1U;
	static int64_t t34 = -60LL;

	t34 = ((x145/x146)|(x147<=x148));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MIN;
	int64_t x151 = -5155LL;
	static uint32_t x152 = UINT32_MAX;

	t35 = ((x149/x150)|(x151<=x152));

	if (t35 != 129) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = INT8_MAX;
	volatile uint32_t x155 = UINT32_MAX;
	volatile int32_t t36 = -564087;

	t36 = ((x153/x154)|(x155<=x156));

	if (t36 != 259) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x157 = 2939714U;
	static int64_t x158 = -1LL;
	int16_t x159 = INT16_MIN;
	volatile uint8_t x160 = 72U;

	t37 = ((x157/x158)|(x159<=x160));

	if (t37 != -2939713LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = -1;
	int64_t x162 = 3790314086278LL;
	int32_t x163 = INT32_MAX;
	volatile uint64_t x164 = UINT64_MAX;
	int64_t t38 = 555983755813LL;

	t38 = ((x161/x162)|(x163<=x164));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x166 = INT64_MIN;
	uint16_t x167 = 1144U;
	uint8_t x168 = 58U;
	static volatile int64_t t39 = 7LL;

	t39 = ((x165/x166)|(x167<=x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -1LL;
	static volatile int8_t x170 = -1;
	int64_t x171 = 6147946077141091LL;
	uint64_t x172 = 154895LLU;
	int64_t t40 = 2196959LL;

	t40 = ((x169/x170)|(x171<=x172));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = INT32_MIN;
	static uint32_t x175 = 181681U;
	volatile int16_t x176 = INT16_MIN;
	volatile int32_t t41 = 111814;

	t41 = ((x173/x174)|(x175<=x176));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 41604U;
	volatile int8_t x179 = INT8_MIN;
	int32_t x180 = INT32_MAX;
	uint32_t t42 = 28U;

	t42 = ((x177/x178)|(x179<=x180));

	if (t42 != 1U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x182 = INT8_MAX;
	static uint64_t x183 = UINT64_MAX;
	static uint64_t x184 = 62855896241566255LLU;
	volatile int32_t t43 = 79357;

	t43 = ((x181/x182)|(x183<=x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 0U;
	static int16_t x186 = 1;
	static int16_t x187 = 2;
	volatile int32_t t44 = 1221912;

	t44 = ((x185/x186)|(x187<=x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 0;
	volatile int32_t x190 = 317268;
	uint16_t x192 = UINT16_MAX;
	static volatile int32_t t45 = 3;

	t45 = ((x189/x190)|(x191<=x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x194 = -1;
	int64_t x195 = -1LL;
	int16_t x196 = INT16_MAX;
	int32_t t46 = 8025;

	t46 = ((x193/x194)|(x195<=x196));

	if (t46 != -27729) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = INT32_MAX;
	volatile int32_t x198 = INT32_MAX;
	volatile int32_t t47 = 14817504;

	t47 = ((x197/x198)|(x199<=x200));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x201 = 586LLU;
	static uint8_t x202 = 61U;
	int32_t x203 = INT32_MIN;
	volatile int64_t x204 = INT64_MIN;
	static uint64_t t48 = 107568380141LLU;

	t48 = ((x201/x202)|(x203<=x204));

	if (t48 != 9LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -1LL;
	static uint64_t x206 = 1920151LLU;
	static volatile int64_t x207 = -241LL;
	static uint8_t x208 = 42U;
	volatile uint64_t t49 = 1LLU;

	t49 = ((x205/x206)|(x207<=x208));

	if (t49 != 9606923660541LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = -1LL;
	int16_t x210 = 1;
	uint64_t x211 = 112012LLU;
	volatile uint64_t x212 = UINT64_MAX;
	int64_t t50 = 108110033516LL;

	t50 = ((x209/x210)|(x211<=x212));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 1U;
	int16_t x215 = INT16_MIN;
	uint64_t x216 = 28140LLU;
	static volatile int32_t t51 = 1;

	t51 = ((x213/x214)|(x215<=x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 23U;
	int32_t x218 = 3693;
	static int32_t x219 = INT32_MIN;
	static int32_t x220 = -1;
	int32_t t52 = 118103;

	t52 = ((x217/x218)|(x219<=x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MIN;
	static int16_t x224 = 1;
	volatile int32_t t53 = 1;

	t53 = ((x221/x222)|(x223<=x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x227 = UINT32_MAX;
	static int32_t x228 = -1979136;
	volatile int32_t t54 = -148804347;

	t54 = ((x225/x226)|(x227<=x228));

	if (t54 != -19) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x229 = 839268U;
	int64_t x230 = INT64_MIN;
	volatile int8_t x231 = -2;
	static uint32_t x232 = 8483U;
	static volatile int64_t t55 = 456106258822LL;

	t55 = ((x229/x230)|(x231<=x232));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = 743993410286589437LL;
	int16_t x235 = 30;
	uint8_t x236 = UINT8_MAX;
	static int64_t t56 = 2186382113568LL;

	t56 = ((x233/x234)|(x235<=x236));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x237 = 27949U;
	volatile uint8_t x238 = 4U;
	volatile int32_t x240 = -3;
	uint32_t t57 = 3833250U;

	t57 = ((x237/x238)|(x239<=x240));

	if (t57 != 6987U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = INT8_MIN;
	volatile int32_t t58 = 2;

	t58 = ((x241/x242)|(x243<=x244));

	if (t58 != -9) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = INT16_MAX;
	int64_t x246 = 171294424LL;
	volatile int16_t x248 = INT16_MAX;
	volatile int64_t t59 = 8405178687LL;

	t59 = ((x245/x246)|(x247<=x248));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x249 = UINT32_MAX;
	uint16_t x251 = UINT16_MAX;
	volatile int64_t x252 = 2LL;

	t60 = ((x249/x250)|(x251<=x252));

	if (t60 != 51746593U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x253 = 1882821146LL;
	int16_t x254 = INT16_MAX;
	uint8_t x255 = 3U;
	volatile int64_t x256 = -2LL;

	t61 = ((x253/x254)|(x255<=x256));

	if (t61 != 57460LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = UINT8_MAX;
	static int32_t x258 = 21584507;
	uint16_t x259 = 79U;
	int8_t x260 = 1;
	static int32_t t62 = 88192;

	t62 = ((x257/x258)|(x259<=x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	int64_t x264 = -53450611733LL;
	static volatile int32_t t63 = 4262;

	t63 = ((x261/x262)|(x263<=x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x265 = -22;
	static uint8_t x266 = 2U;
	int64_t x267 = INT64_MAX;
	static int16_t x268 = INT16_MIN;

	t64 = ((x265/x266)|(x267<=x268));

	if (t64 != -11) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x270 = INT8_MIN;
	static int8_t x271 = -1;
	uint32_t t65 = 48760577U;

	t65 = ((x269/x270)|(x271<=x272));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x273 = 0U;
	int32_t x274 = INT32_MIN;
	uint64_t x275 = 78504850LLU;
	int32_t t66 = 0;

	t66 = ((x273/x274)|(x275<=x276));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = INT32_MAX;
	int16_t x278 = INT16_MIN;
	int64_t x279 = -53631451026LL;
	int32_t x280 = INT32_MAX;
	int32_t t67 = 4;

	t67 = ((x277/x278)|(x279<=x280));

	if (t67 != -65535) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x281 = 5U;
	static uint8_t x282 = 5U;
	int8_t x284 = INT8_MIN;

	t68 = ((x281/x282)|(x283<=x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = -1;
	int64_t x286 = 652897744693805201LL;
	volatile int32_t x287 = INT32_MAX;
	volatile int64_t t69 = -32495799LL;

	t69 = ((x285/x286)|(x287<=x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = -1;
	volatile uint64_t x290 = 210482300LLU;
	uint32_t x291 = 435166540U;
	int16_t x292 = INT16_MAX;
	uint64_t t70 = 119LLU;

	t70 = ((x289/x290)|(x291<=x292));

	if (t70 != 87640357757LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = -100010940;
	int64_t x295 = INT64_MIN;
	static int32_t x296 = INT32_MIN;
	int32_t t71 = 15029206;

	t71 = ((x293/x294)|(x295<=x296));

	if (t71 != -392199) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x298 = 124LLU;
	uint32_t x299 = UINT32_MAX;
	volatile uint64_t t72 = 3388485419052442146LLU;

	t72 = ((x297/x298)|(x299<=x300));

	if (t72 != 34636833LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	static uint32_t x302 = 104U;
	int16_t x303 = INT16_MAX;
	volatile uint32_t t73 = 35U;

	t73 = ((x301/x302)|(x303<=x304));

	if (t73 != 41297761U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x306 = -1440742108264LL;
	static int16_t x307 = -1;
	volatile uint8_t x308 = 2U;

	t74 = ((x305/x306)|(x307<=x308));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x309 = 4928916U;
	int16_t x311 = -1;
	static int32_t x312 = -35;

	t75 = ((x309/x310)|(x311<=x312));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 150729998238864LLU;
	volatile int64_t x314 = INT64_MIN;
	static int8_t x316 = -1;
	uint64_t t76 = 479435247LLU;

	t76 = ((x313/x314)|(x315<=x316));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t t77 = 79505524LL;

	t77 = ((x317/x318)|(x319<=x320));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x321 = 2229U;
	int64_t x322 = -209237951LL;
	int32_t x323 = -1;
	uint32_t x324 = UINT32_MAX;
	int64_t t78 = -217LL;

	t78 = ((x321/x322)|(x323<=x324));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 997811281U;
	int64_t x327 = -60LL;
	uint16_t x328 = 1488U;
	volatile uint32_t t79 = 250652U;

	t79 = ((x325/x326)|(x327<=x328));

	if (t79 != 15225U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MAX;
	volatile uint64_t x331 = UINT64_MAX;
	static uint16_t x332 = 47U;

	t80 = ((x329/x330)|(x331<=x332));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x333 = -60;
	int32_t x334 = 18;
	static int8_t x336 = INT8_MIN;
	volatile int32_t t81 = 38;

	t81 = ((x333/x334)|(x335<=x336));

	if (t81 != -3) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x337 = 9682885U;
	int32_t x338 = INT32_MAX;
	static int8_t x339 = -40;
	volatile uint32_t t82 = 210U;

	t82 = ((x337/x338)|(x339<=x340));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = -12;
	int16_t x342 = INT16_MIN;
	volatile uint32_t x343 = 13654U;
	int32_t t83 = 621;

	t83 = ((x341/x342)|(x343<=x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = 0;
	volatile int16_t x346 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t84 = -86;

	t84 = ((x345/x346)|(x347<=x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x349 = 6U;
	volatile uint8_t x350 = UINT8_MAX;
	int8_t x351 = -16;
	static volatile uint16_t x352 = UINT16_MAX;
	static volatile uint32_t t85 = 447327U;

	t85 = ((x349/x350)|(x351<=x352));

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x353 = -487370LL;
	static int8_t x354 = -1;
	uint64_t x356 = 17497345703435488LLU;
	static int64_t t86 = -2461910LL;

	t86 = ((x353/x354)|(x355<=x356));

	if (t86 != 487370LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x358 = INT32_MIN;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t87 = -346;

	t87 = ((x357/x358)|(x359<=x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 1LLU;
	int64_t x362 = INT64_MIN;
	int8_t x363 = -1;
	int64_t x364 = 14087233LL;
	uint64_t t88 = 5LLU;

	t88 = ((x361/x362)|(x363<=x364));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x365 = 2724269736LLU;
	volatile uint8_t x366 = 1U;
	uint32_t x367 = 873U;
	volatile uint64_t t89 = 17267876686854LLU;

	t89 = ((x365/x366)|(x367<=x368));

	if (t89 != 2724269737LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x369 = 5U;
	volatile uint32_t x371 = 223088338U;
	static volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t90 = 1;

	t90 = ((x369/x370)|(x371<=x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = 1820;

	t91 = ((x373/x374)|(x375<=x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = UINT16_MAX;
	static volatile uint64_t x379 = 64526LLU;
	static int32_t x380 = 0;
	int64_t t92 = -11579045445274453LL;

	t92 = ((x377/x378)|(x379<=x380));

	if (t92 != -140739635871744LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = INT8_MIN;
	uint64_t x382 = UINT64_MAX;
	uint16_t x383 = 12623U;
	volatile int32_t x384 = -1;
	volatile uint64_t t93 = 5669623738950LLU;

	t93 = ((x381/x382)|(x383<=x384));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = INT8_MIN;
	static volatile uint64_t x386 = UINT64_MAX;
	int8_t x388 = INT8_MIN;
	uint64_t t94 = 146669258768200098LLU;

	t94 = ((x385/x386)|(x387<=x388));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x391 = 25042195034445LLU;
	int16_t x392 = INT16_MAX;
	volatile int64_t t95 = -58464761179453768LL;

	t95 = ((x389/x390)|(x391<=x392));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = INT16_MIN;
	static volatile uint64_t x394 = 128330493083598077LLU;
	volatile uint16_t x395 = 4165U;
	volatile uint64_t t96 = 878680770336116857LLU;

	t96 = ((x393/x394)|(x395<=x396));

	if (t96 != 143LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x398 = 3U;
	int16_t x399 = -1;
	int8_t x400 = INT8_MIN;
	int32_t t97 = -268229004;

	t97 = ((x397/x398)|(x399<=x400));

	if (t97 != 715827882) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x402 = UINT64_MAX;
	int8_t x403 = INT8_MIN;
	int32_t x404 = INT32_MIN;
	uint64_t t98 = 5104762171LLU;

	t98 = ((x401/x402)|(x403<=x404));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x405 = UINT8_MAX;
	uint16_t x406 = 17U;
	uint64_t x407 = 81031028621348LLU;
	int8_t x408 = -1;
	int32_t t99 = -10887;

	t99 = ((x405/x406)|(x407<=x408));

	if (t99 != 15) { NG(); } else { ; }
	
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

