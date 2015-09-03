#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x3 = -2;
volatile int32_t t1 = 3350710;
int32_t x9 = -995696814;
int64_t x12 = INT64_MIN;
static uint64_t x21 = 396075707LLU;
volatile int32_t t4 = -224;
static int16_t x26 = -1;
int64_t x43 = INT64_MAX;
static volatile int32_t t9 = 372913;
int8_t x45 = -4;
int8_t x49 = INT8_MIN;
int64_t x52 = -8887940602614584LL;
static int32_t t11 = -21426167;
static uint32_t x55 = 126582U;
int32_t t12 = 325806648;
volatile int32_t t13 = -428636;
static volatile int64_t x61 = INT64_MIN;
static int16_t x62 = INT16_MIN;
int32_t x64 = -1;
static int32_t x68 = -4014556;
volatile int32_t t16 = 1411628;
volatile int8_t x74 = 1;
volatile int32_t x78 = -29596;
uint64_t x86 = 39015198LLU;
uint64_t x88 = 231LLU;
int64_t x90 = INT64_MAX;
static int32_t t21 = 1;
int8_t x98 = 9;
static uint32_t x101 = UINT32_MAX;
int32_t t23 = -6328;
int32_t x105 = INT32_MIN;
static int64_t x106 = 0LL;
uint64_t x109 = 116584830562838LLU;
int32_t t27 = 1407706;
static volatile int64_t x126 = 31510731023187LL;
uint8_t x127 = 2U;
int64_t x135 = -650561070453339115LL;
static int64_t x142 = -1LL;
int32_t x148 = INT32_MAX;
int32_t x150 = INT32_MIN;
int64_t x153 = -402201839567654400LL;
uint32_t x160 = 3850452U;
int32_t t35 = 65;
volatile int16_t x172 = 1130;
int64_t x180 = -1LL;
int8_t x188 = -1;
static int16_t x193 = INT16_MIN;
int32_t x195 = -1;
uint64_t x230 = UINT64_MAX;
volatile int32_t t53 = 21;
static volatile uint64_t x237 = 2LLU;
int64_t x249 = -1LL;
volatile int8_t x252 = INT8_MIN;
volatile int32_t t58 = 0;
volatile int32_t t59 = -7777;
int16_t x258 = -1;
static int8_t x260 = INT8_MIN;
static uint8_t x267 = 61U;
volatile int16_t x271 = -91;
uint32_t x273 = 1648912U;
volatile int16_t x278 = 464;
int8_t x283 = INT8_MAX;
static int16_t x285 = 2761;
int16_t x290 = -1;
static volatile int32_t t69 = -779622;
static uint64_t x313 = 50LLU;
volatile int32_t x314 = -1;
uint8_t x321 = 1U;
int8_t x325 = -1;
volatile int32_t t75 = -205968297;
int32_t x334 = 38814844;
int8_t x335 = 0;
int32_t t78 = -127;
int32_t x350 = INT32_MIN;
uint32_t x353 = 41U;
int8_t x358 = 1;
volatile uint64_t x370 = UINT64_MAX;
static volatile uint16_t x378 = 6483U;
int32_t t87 = 1;
int32_t t88 = 0;
volatile int32_t t89 = 0;
int8_t x389 = 0;
uint32_t x401 = UINT32_MAX;
static int64_t x406 = INT64_MAX;
uint16_t x407 = UINT16_MAX;
volatile int32_t t92 = -14;
volatile int64_t x417 = INT64_MAX;
uint64_t x418 = UINT64_MAX;
static uint32_t x419 = 963U;
int8_t x430 = -1;
volatile uint16_t x432 = 11U;


void f0(void) {
	int32_t x1 = -1;
	int64_t x2 = INT64_MIN;
	int8_t x4 = 1;
	int32_t t0 = -65161330;

	t0 = ((x1==x2)<=(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = 0;
	volatile int32_t x6 = 507;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = -1;

	t1 = ((x5==x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	static uint64_t x11 = 707343963075735163LLU;
	volatile int32_t t2 = -4195198;

	t2 = ((x9==x10)<=(x11+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 52U;
	int16_t x18 = -1964;
	uint16_t x19 = UINT16_MAX;
	static uint32_t x20 = UINT32_MAX;
	volatile int32_t t3 = -16128;

	t3 = ((x17==x18)<=(x19+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = -1;
	uint32_t x23 = UINT32_MAX;
	static int32_t x24 = 2404681;

	t4 = ((x21==x22)<=(x23+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = 133564991;

	t5 = ((x25==x26)<=(x27+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int16_t x30 = INT16_MIN;
	int8_t x31 = 14;
	int16_t x32 = INT16_MIN;
	volatile int32_t t6 = -570805;

	t6 = ((x29==x30)<=(x31+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x33 = 767U;
	static uint64_t x34 = UINT64_MAX;
	volatile int64_t x35 = INT64_MIN;
	uint32_t x36 = 63U;
	int32_t t7 = -600;

	t7 = ((x33==x34)<=(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MAX;
	int8_t x38 = 1;
	static int16_t x39 = INT16_MAX;
	static volatile int16_t x40 = INT16_MAX;
	int32_t t8 = 0;

	t8 = ((x37==x38)<=(x39+x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 391913058403710675LLU;
	int64_t x42 = INT64_MIN;
	int32_t x44 = INT32_MIN;

	t9 = ((x41==x42)<=(x43+x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x46 = -1LL;
	static volatile uint16_t x47 = 19U;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -1;

	t10 = ((x45==x46)<=(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x50 = UINT16_MAX;
	int16_t x51 = 0;

	t11 = ((x49==x50)<=(x51+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static int64_t x54 = -68344933254LL;
	volatile int64_t x56 = INT64_MIN;

	t12 = ((x53==x54)<=(x55+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = -1;
	int16_t x58 = INT16_MAX;
	uint32_t x59 = 4U;
	int16_t x60 = 1410;

	t13 = ((x57==x58)<=(x59+x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x63 = 1U;
	int32_t t14 = -389;

	t14 = ((x61==x62)<=(x63+x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = INT8_MIN;
	volatile uint8_t x67 = UINT8_MAX;
	volatile int32_t t15 = -40068425;

	t15 = ((x65==x66)<=(x67+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = 504;
	uint64_t x70 = UINT64_MAX;
	uint8_t x71 = UINT8_MAX;
	uint16_t x72 = UINT16_MAX;

	t16 = ((x69==x70)<=(x71+x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -49228289;
	int16_t x75 = 16;
	uint8_t x76 = 9U;
	int32_t t17 = -47;

	t17 = ((x73==x74)<=(x75+x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x77 = UINT32_MAX;
	int32_t x79 = -1;
	uint16_t x80 = 28856U;
	int32_t t18 = -1505;

	t18 = ((x77==x78)<=(x79+x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 6881U;
	int64_t x87 = -1LL;
	int32_t t19 = 16;

	t19 = ((x85==x86)<=(x87+x88));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	int16_t x91 = INT16_MIN;
	static uint8_t x92 = UINT8_MAX;
	int32_t t20 = -1574;

	t20 = ((x89==x90)<=(x91+x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MAX;
	static int32_t x94 = INT32_MAX;
	uint64_t x95 = UINT64_MAX;
	static uint16_t x96 = UINT16_MAX;

	t21 = ((x93==x94)<=(x95+x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MIN;
	int16_t x99 = -1;
	volatile uint64_t x100 = UINT64_MAX;
	volatile int32_t t22 = 7;

	t22 = ((x97==x98)<=(x99+x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x102 = INT16_MIN;
	int16_t x103 = 1;
	uint8_t x104 = UINT8_MAX;

	t23 = ((x101==x102)<=(x103+x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t24 = -11;

	t24 = ((x105==x106)<=(x107+x108));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x110 = UINT64_MAX;
	int8_t x111 = -1;
	uint16_t x112 = 73U;
	int32_t t25 = 37;

	t25 = ((x109==x110)<=(x111+x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile int16_t x114 = 14;
	int64_t x115 = INT64_MAX;
	static int16_t x116 = INT16_MIN;
	volatile int32_t t26 = 10235417;

	t26 = ((x113==x114)<=(x115+x116));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = INT32_MIN;
	uint64_t x118 = 60345003209397388LLU;
	int64_t x119 = -17411613744671LL;
	int64_t x120 = 8846329129LL;

	t27 = ((x117==x118)<=(x119+x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x125 = INT8_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t28 = 402027466;

	t28 = ((x125==x126)<=(x127+x128));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MAX;
	int8_t x136 = 1;
	static volatile int32_t t29 = 115;

	t29 = ((x133==x134)<=(x135+x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -453371318;
	int64_t x138 = 20384907571LL;
	volatile int16_t x139 = -110;
	int64_t x140 = 1048789LL;
	int32_t t30 = 1878642;

	t30 = ((x137==x138)<=(x139+x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x141 = 127U;
	int8_t x143 = 0;
	uint64_t x144 = UINT64_MAX;
	volatile int32_t t31 = 461597;

	t31 = ((x141==x142)<=(x143+x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x145 = 2858285LLU;
	static int64_t x146 = INT64_MAX;
	uint32_t x147 = 15366U;
	int32_t t32 = 1;

	t32 = ((x145==x146)<=(x147+x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 184U;
	uint8_t x151 = 2U;
	volatile uint8_t x152 = 1U;
	volatile int32_t t33 = -461425779;

	t33 = ((x149==x150)<=(x151+x152));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = -1;
	volatile int16_t x155 = INT16_MIN;
	uint8_t x156 = 89U;
	volatile int32_t t34 = -8089;

	t34 = ((x153==x154)<=(x155+x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x157 = INT8_MIN;
	int32_t x158 = -1;
	volatile int64_t x159 = -1LL;

	t35 = ((x157==x158)<=(x159+x160));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x161 = 1;
	uint16_t x162 = 1006U;
	int64_t x163 = 1LL;
	uint16_t x164 = 4113U;
	volatile int32_t t36 = 24357;

	t36 = ((x161==x162)<=(x163+x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x165 = INT16_MIN;
	uint64_t x166 = 411LLU;
	volatile uint64_t x167 = UINT64_MAX;
	int16_t x168 = INT16_MAX;
	int32_t t37 = -3241690;

	t37 = ((x165==x166)<=(x167+x168));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = UINT64_MAX;
	int8_t x170 = -1;
	static uint16_t x171 = UINT16_MAX;
	volatile int32_t t38 = 167378;

	t38 = ((x169==x170)<=(x171+x172));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x173 = 7433894124550LLU;
	uint64_t x174 = 853409LLU;
	int8_t x175 = INT8_MIN;
	static int64_t x176 = 551988767231971993LL;
	volatile int32_t t39 = -782948;

	t39 = ((x173==x174)<=(x175+x176));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = -141LL;
	static uint16_t x178 = 18260U;
	uint8_t x179 = 16U;
	int32_t t40 = 84756426;

	t40 = ((x177==x178)<=(x179+x180));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x181 = 16284156U;
	volatile int8_t x182 = -3;
	static int64_t x183 = 3LL;
	static uint32_t x184 = 190U;
	static int32_t t41 = -26127287;

	t41 = ((x181==x182)<=(x183+x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MIN;
	int8_t x187 = -1;
	int32_t t42 = -9;

	t42 = ((x185==x186)<=(x187+x188));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 790255552932789LLU;
	int64_t x190 = -1LL;
	volatile int64_t x191 = 756815915066553178LL;
	int8_t x192 = -12;
	volatile int32_t t43 = 3771;

	t43 = ((x189==x190)<=(x191+x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x194 = 0U;
	int8_t x196 = INT8_MAX;
	volatile int32_t t44 = 900123129;

	t44 = ((x193==x194)<=(x195+x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 78973367U;
	uint8_t x198 = 3U;
	int32_t x199 = -1;
	int32_t x200 = -12789;
	volatile int32_t t45 = 628;

	t45 = ((x197==x198)<=(x199+x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -1;
	static uint32_t x202 = 5792U;
	int64_t x203 = INT64_MIN;
	static uint32_t x204 = 495U;
	static int32_t t46 = -3;

	t46 = ((x201==x202)<=(x203+x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MIN;
	uint16_t x206 = 1009U;
	int64_t x207 = INT64_MIN;
	int32_t x208 = 31069;
	static int32_t t47 = 10546633;

	t47 = ((x205==x206)<=(x207+x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = 48;
	uint32_t x210 = 14865U;
	int32_t x211 = INT32_MAX;
	uint32_t x212 = UINT32_MAX;
	int32_t t48 = -1302;

	t48 = ((x209==x210)<=(x211+x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = INT32_MIN;
	int32_t x214 = INT32_MIN;
	int16_t x215 = INT16_MAX;
	int64_t x216 = 1LL;
	volatile int32_t t49 = 10363632;

	t49 = ((x213==x214)<=(x215+x216));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = 10045;
	static uint8_t x219 = UINT8_MAX;
	int16_t x220 = INT16_MIN;
	volatile int32_t t50 = -117;

	t50 = ((x217==x218)<=(x219+x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x221 = UINT8_MAX;
	uint64_t x222 = UINT64_MAX;
	int64_t x223 = INT64_MAX;
	volatile uint64_t x224 = 10110048LLU;
	volatile int32_t t51 = -3;

	t51 = ((x221==x222)<=(x223+x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	volatile uint16_t x226 = 9786U;
	int64_t x227 = -1LL;
	int16_t x228 = 166;
	int32_t t52 = 6543;

	t52 = ((x225==x226)<=(x227+x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -87;
	uint8_t x231 = 31U;
	uint8_t x232 = 13U;

	t53 = ((x229==x230)<=(x231+x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x233 = -351084998036903LL;
	volatile uint16_t x234 = UINT16_MAX;
	uint32_t x235 = 0U;
	int16_t x236 = 9340;
	volatile int32_t t54 = -14082;

	t54 = ((x233==x234)<=(x235+x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x238 = INT16_MAX;
	volatile uint8_t x239 = UINT8_MAX;
	volatile int16_t x240 = -11633;
	int32_t t55 = 863573994;

	t55 = ((x237==x238)<=(x239+x240));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x241 = -1;
	volatile int64_t x242 = -1LL;
	int32_t x243 = INT32_MIN;
	volatile int32_t x244 = 21;
	volatile int32_t t56 = -883420;

	t56 = ((x241==x242)<=(x243+x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = -9526LL;
	int16_t x247 = 16;
	volatile int64_t x248 = INT64_MIN;
	int32_t t57 = 6946704;

	t57 = ((x245==x246)<=(x247+x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x250 = INT16_MIN;
	int64_t x251 = -35255LL;

	t58 = ((x249==x250)<=(x251+x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -5;
	volatile int16_t x254 = -820;
	uint8_t x255 = 1U;
	static int16_t x256 = INT16_MAX;

	t59 = ((x253==x254)<=(x255+x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x257 = -1;
	volatile int32_t x259 = -1;
	volatile int32_t t60 = 5;

	t60 = ((x257==x258)<=(x259+x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x261 = 10U;
	int64_t x262 = -1LL;
	volatile int16_t x263 = INT16_MAX;
	int8_t x264 = INT8_MIN;
	volatile int32_t t61 = 830;

	t61 = ((x261==x262)<=(x263+x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = INT8_MAX;
	int64_t x266 = 522727801LL;
	int64_t x268 = -351894896139059952LL;
	int32_t t62 = -17;

	t62 = ((x265==x266)<=(x267+x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x269 = -1;
	volatile uint64_t x270 = UINT64_MAX;
	int32_t x272 = INT32_MAX;
	static int32_t t63 = 13028;

	t63 = ((x269==x270)<=(x271+x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x274 = INT32_MIN;
	volatile int32_t x275 = -1;
	uint8_t x276 = 21U;
	int32_t t64 = -8248788;

	t64 = ((x273==x274)<=(x275+x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = -1;
	int32_t x279 = -1;
	static uint32_t x280 = UINT32_MAX;
	int32_t t65 = -170517439;

	t65 = ((x277==x278)<=(x279+x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	static uint8_t x284 = UINT8_MAX;
	volatile int32_t t66 = 113;

	t66 = ((x281==x282)<=(x283+x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x286 = INT8_MAX;
	volatile uint16_t x287 = 3713U;
	volatile int16_t x288 = INT16_MIN;
	int32_t t67 = 5997;

	t67 = ((x285==x286)<=(x287+x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	int32_t x291 = 154579;
	int32_t x292 = 14;
	volatile int32_t t68 = 25;

	t68 = ((x289==x290)<=(x291+x292));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x293 = 14U;
	uint16_t x294 = 0U;
	uint8_t x295 = UINT8_MAX;
	int64_t x296 = 3108478454LL;

	t69 = ((x293==x294)<=(x295+x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x297 = 69U;
	uint32_t x298 = 30U;
	static uint32_t x299 = 292863814U;
	uint64_t x300 = 1310444LLU;
	int32_t t70 = 22;

	t70 = ((x297==x298)<=(x299+x300));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -224281573;
	int64_t x306 = -1LL;
	int8_t x307 = 1;
	static int16_t x308 = 1;
	int32_t t71 = -335461;

	t71 = ((x305==x306)<=(x307+x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x315 = INT32_MIN;
	static uint16_t x316 = UINT16_MAX;
	int32_t t72 = -3;

	t72 = ((x313==x314)<=(x315+x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = -1;
	int64_t x319 = INT64_MIN;
	volatile int32_t x320 = INT32_MAX;
	int32_t t73 = -22974759;

	t73 = ((x317==x318)<=(x319+x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x322 = INT64_MAX;
	uint32_t x323 = 76873681U;
	int8_t x324 = -1;
	int32_t t74 = 0;

	t74 = ((x321==x322)<=(x323+x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x326 = 53U;
	int8_t x327 = 4;
	static volatile int32_t x328 = INT32_MIN;

	t75 = ((x325==x326)<=(x327+x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x329 = -27470282692581112LL;
	static int64_t x330 = 123866085738245022LL;
	int8_t x331 = 0;
	uint16_t x332 = 126U;
	volatile int32_t t76 = -12;

	t76 = ((x329==x330)<=(x331+x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = -887724914LL;
	volatile uint8_t x336 = 4U;
	static int32_t t77 = -1;

	t77 = ((x333==x334)<=(x335+x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x337 = INT64_MIN;
	static int64_t x338 = INT64_MIN;
	int16_t x339 = INT16_MAX;
	uint64_t x340 = UINT64_MAX;

	t78 = ((x337==x338)<=(x339+x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -14LL;
	int32_t x342 = -4;
	uint16_t x343 = 15U;
	volatile uint16_t x344 = 7U;
	static volatile int32_t t79 = 9456460;

	t79 = ((x341==x342)<=(x343+x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x345 = 1710916U;
	static uint16_t x346 = UINT16_MAX;
	int64_t x347 = 15252999688721LL;
	static volatile uint32_t x348 = UINT32_MAX;
	static volatile int32_t t80 = -2485;

	t80 = ((x345==x346)<=(x347+x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x349 = -1;
	uint8_t x351 = 3U;
	int16_t x352 = INT16_MAX;
	volatile int32_t t81 = -850685;

	t81 = ((x349==x350)<=(x351+x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x354 = 8;
	int32_t x355 = INT32_MIN;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t82 = 36578;

	t82 = ((x353==x354)<=(x355+x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x357 = -1;
	uint32_t x359 = UINT32_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t83 = -342;

	t83 = ((x357==x358)<=(x359+x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x361 = -1;
	int8_t x362 = 1;
	int8_t x363 = 9;
	static int8_t x364 = 0;
	volatile int32_t t84 = -18776;

	t84 = ((x361==x362)<=(x363+x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x369 = 1U;
	static int32_t x371 = -510620385;
	int16_t x372 = INT16_MAX;
	static volatile int32_t t85 = 46062177;

	t85 = ((x369==x370)<=(x371+x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x373 = -119153;
	static uint16_t x374 = 1238U;
	int8_t x375 = 2;
	int16_t x376 = -1;
	int32_t t86 = 733796838;

	t86 = ((x373==x374)<=(x375+x376));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x377 = UINT16_MAX;
	volatile int64_t x379 = 7169544305LL;
	int32_t x380 = 1;

	t87 = ((x377==x378)<=(x379+x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x381 = 0;
	int8_t x382 = -21;
	int16_t x383 = INT16_MIN;
	uint64_t x384 = UINT64_MAX;

	t88 = ((x381==x382)<=(x383+x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x385 = INT32_MAX;
	volatile int64_t x386 = -1LL;
	int8_t x387 = -1;
	int8_t x388 = INT8_MIN;

	t89 = ((x385==x386)<=(x387+x388));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x390 = 23872349584986LLU;
	int16_t x391 = 347;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t90 = 17987;

	t90 = ((x389==x390)<=(x391+x392));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x402 = UINT32_MAX;
	int32_t x403 = -1;
	int8_t x404 = -1;
	volatile int32_t t91 = -2378490;

	t91 = ((x401==x402)<=(x403+x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = 27890147464419491LLU;
	static int32_t x408 = INT32_MIN;

	t92 = ((x405==x406)<=(x407+x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x413 = INT8_MIN;
	static uint8_t x414 = 18U;
	volatile uint64_t x415 = 3691572LLU;
	uint32_t x416 = 121418U;
	int32_t t93 = 7570;

	t93 = ((x413==x414)<=(x415+x416));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x420 = 1;
	volatile int32_t t94 = -23405;

	t94 = ((x417==x418)<=(x419+x420));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x421 = 11U;
	int64_t x422 = 64986474067465770LL;
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;
	int32_t t95 = -53;

	t95 = ((x421==x422)<=(x423+x424));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x425 = 17U;
	uint16_t x426 = 11U;
	volatile int8_t x427 = INT8_MIN;
	uint8_t x428 = 93U;
	int32_t t96 = 18970;

	t96 = ((x425==x426)<=(x427+x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x429 = -3893404135LL;
	static int16_t x431 = INT16_MIN;
	int32_t t97 = 378;

	t97 = ((x429==x430)<=(x431+x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = INT16_MIN;
	static uint8_t x434 = 26U;
	int16_t x435 = INT16_MIN;
	volatile int32_t x436 = -1;
	volatile int32_t t98 = 8990822;

	t98 = ((x433==x434)<=(x435+x436));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x437 = INT8_MAX;
	int16_t x438 = -1;
	uint16_t x439 = 3385U;
	static volatile int32_t x440 = 726631;
	int32_t t99 = -1356;

	t99 = ((x437==x438)<=(x439+x440));

	if (t99 != 1) { NG(); } else { ; }
	
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

