#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x4 = INT16_MIN;
volatile int16_t x5 = 97;
static int8_t x26 = INT8_MIN;
int32_t x30 = INT32_MIN;
volatile uint64_t t6 = 1691958253804LLU;
int32_t x35 = INT32_MIN;
volatile int16_t x39 = INT16_MIN;
uint64_t t9 = 9365778LLU;
uint16_t x45 = UINT16_MAX;
volatile int64_t t10 = 2836157942LL;
int32_t x49 = 64571430;
int8_t x50 = -3;
int64_t x51 = INT64_MIN;
volatile int64_t t12 = 0LL;
volatile uint8_t x62 = UINT8_MAX;
int64_t t14 = 233459304684974201LL;
volatile int16_t x70 = -1;
int32_t x71 = -1;
volatile int64_t t16 = 122737127609364LL;
volatile int64_t x76 = -1LL;
uint64_t t17 = 633LLU;
int32_t t18 = -12208;
uint32_t x87 = UINT32_MAX;
volatile int64_t t20 = 26044LL;
int32_t x94 = -335969874;
uint8_t x95 = 58U;
volatile int32_t t22 = -1;
uint16_t x100 = 31031U;
volatile uint64_t t23 = 713585339LLU;
int64_t x101 = INT64_MIN;
uint64_t x109 = 533460412775507LLU;
volatile uint64_t t26 = 1726727LLU;
int8_t x113 = 50;
uint32_t x116 = UINT32_MAX;
int32_t x120 = -10;
static int64_t x122 = 13559222654LL;
static int64_t t29 = -22455680678LL;
uint32_t x126 = 11079U;
volatile int16_t x128 = 1;
uint16_t x129 = 260U;
int8_t x132 = -4;
volatile int32_t t32 = -895000519;
uint32_t t33 = 12148671U;
volatile uint64_t x142 = 41LLU;
static int16_t x144 = INT16_MIN;
static int8_t x149 = INT8_MIN;
int32_t t36 = -6;
static volatile int32_t x156 = INT32_MAX;
static uint8_t x158 = 4U;
int16_t x166 = INT16_MAX;
volatile int64_t t40 = -353122383LL;
uint8_t x175 = 10U;
uint64_t x177 = UINT64_MAX;
static volatile int8_t x190 = INT8_MIN;
uint64_t x196 = 1193LLU;
int8_t x197 = INT8_MIN;
uint32_t t48 = 368902U;
uint8_t x203 = 69U;
int32_t t49 = -1915869;
volatile uint32_t t50 = 2215U;
uint8_t x210 = 0U;
uint64_t x217 = UINT64_MAX;
int32_t x218 = INT32_MAX;
int32_t x220 = 368443751;
int16_t x224 = INT16_MIN;
volatile int64_t x233 = INT64_MAX;
int32_t x237 = INT32_MIN;
volatile uint64_t x242 = UINT64_MAX;
static uint16_t x248 = UINT16_MAX;
int32_t x252 = -213770;
int16_t x260 = -2465;
int32_t x261 = 2;
int32_t x263 = -42;
uint64_t x268 = UINT64_MAX;
int64_t x271 = INT64_MIN;
volatile uint16_t x275 = UINT16_MAX;
volatile int64_t x278 = INT64_MIN;
int16_t x283 = -9139;
static int32_t x284 = -1;
volatile int64_t t67 = 256236798LL;
int8_t x286 = 0;
uint8_t x287 = UINT8_MAX;
int16_t x297 = INT16_MIN;
int32_t t71 = -411;
volatile int64_t x303 = INT64_MIN;
int64_t t72 = -4732096347LL;
int8_t x308 = 0;
volatile int32_t t73 = -5341311;
int64_t x310 = 2605159113573LL;
int32_t x321 = -1;
int16_t x326 = -75;
int16_t x335 = INT16_MAX;
int32_t t80 = -131053377;
int8_t x338 = -1;
int64_t x342 = INT64_MAX;
static volatile int16_t x346 = 3804;
static volatile int16_t x350 = 15547;
int8_t x353 = 16;
static int8_t x356 = INT8_MAX;
int64_t x360 = INT64_MAX;
static int32_t x362 = -1;
uint32_t t89 = 3799U;
int64_t x374 = -746025493076049077LL;
volatile int32_t x377 = INT32_MIN;
static int64_t x382 = -1LL;
uint8_t x385 = 3U;
uint16_t x392 = 22613U;
volatile uint16_t x393 = 126U;
uint64_t t95 = 247250LLU;
int64_t x397 = INT64_MIN;
int16_t x401 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x2 = 0U;
	int8_t x3 = INT8_MIN;
	volatile int64_t t0 = -72743LL;

	t0 = (x1%((x2%x3)|x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	static volatile int64_t t1 = 485LL;

	t1 = (x5%((x6%x7)|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	int32_t x10 = -1;
	int16_t x11 = -19;
	uint32_t x12 = 12484398U;
	uint32_t t2 = 26U;

	t2 = (x9%((x10%x11)|x12));

	if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MAX;
	volatile int64_t x15 = INT64_MAX;
	uint8_t x16 = 3U;
	static int64_t t3 = 3470360309873977950LL;

	t3 = (x13%((x14%x15)|x16));

	if (t3 != -128LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 44U;
	int32_t x22 = INT32_MIN;
	int16_t x23 = 65;
	int16_t x24 = -1;
	volatile int32_t t4 = -3;

	t4 = (x21%((x22%x23)|x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 1U;
	static int32_t x27 = 536178825;
	int16_t x28 = INT16_MIN;
	static int32_t t5 = -1889948;

	t5 = (x25%((x26%x27)|x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 3144410603345LLU;
	int64_t x31 = INT64_MAX;
	uint8_t x32 = 3U;

	t6 = (x29%((x30%x31)|x32));

	if (t6 != 3144410603345LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 97U;
	static int16_t x34 = -1;
	int8_t x36 = -1;
	static volatile int32_t t7 = 9511;

	t7 = (x33%((x34%x35)|x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 183832557925157066LL;
	int32_t x38 = 64127745;
	static int32_t x40 = INT32_MIN;
	volatile int64_t t8 = -13358321811LL;

	t8 = (x37%((x38%x39)|x40));

	if (t8 != 486721122LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	volatile int64_t x42 = 21323345050LL;
	uint32_t x43 = UINT32_MAX;
	uint64_t x44 = 3538883027LLU;

	t9 = (x41%((x42%x43)|x44));

	if (t9 != 1032789113LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	static volatile int16_t x47 = -1904;
	volatile int64_t x48 = INT64_MIN;

	t10 = (x45%((x46%x47)|x48));

	if (t10 != 127LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x52 = 3;
	int64_t t11 = -518306529LL;

	t11 = (x49%((x50%x51)|x52));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	static int32_t x54 = -1;
	static int32_t x55 = INT32_MAX;
	int64_t x56 = 94691550545059LL;

	t12 = (x53%((x54%x55)|x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = 1013LL;
	uint16_t x59 = 3658U;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t13 = 3960LL;

	t13 = (x57%((x58%x59)|x60));

	if (t13 != 1012LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = UINT8_MAX;
	static int16_t x63 = INT16_MAX;
	int64_t x64 = INT64_MAX;

	t14 = (x61%((x62%x63)|x64));

	if (t14 != 255LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = INT16_MIN;
	volatile uint16_t x66 = 3781U;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 1706U;
	int32_t t15 = -1;

	t15 = (x65%((x66%x67)|x68));

	if (t15 != -908) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x69 = INT64_MIN;
	int16_t x72 = 1;

	t16 = (x69%((x70%x71)|x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = UINT8_MAX;
	static uint64_t x74 = 329406093253667LLU;
	static uint16_t x75 = UINT16_MAX;

	t17 = (x73%((x74%x75)|x76));

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = 0;
	static uint16_t x78 = UINT16_MAX;
	static uint16_t x79 = UINT16_MAX;
	int16_t x80 = INT16_MIN;

	t18 = (x77%((x78%x79)|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x81 = INT16_MAX;
	int64_t x82 = -1LL;
	volatile uint32_t x83 = UINT32_MAX;
	int64_t x84 = 8001964172424LL;
	static int64_t t19 = 55LL;

	t19 = (x81%((x82%x83)|x84));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 242885705U;
	int64_t x86 = INT64_MIN;
	int64_t x88 = 1532LL;

	t20 = (x85%((x86%x87)|x88));

	if (t20 != 242885705LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x89 = INT64_MIN;
	uint16_t x90 = UINT16_MAX;
	int8_t x91 = 2;
	uint32_t x92 = UINT32_MAX;
	int64_t t21 = 2770LL;

	t21 = (x89%((x90%x91)|x92));

	if (t21 != -2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 0U;
	static volatile int32_t x96 = 48;

	t22 = (x93%((x94%x95)|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x97 = 2289152068LLU;
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;

	t23 = (x97%((x98%x99)|x100));

	if (t23 != 2289152068LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x102 = INT8_MIN;
	uint64_t x103 = 9867289519LLU;
	uint32_t x104 = UINT32_MAX;
	uint64_t t24 = 918216LLU;

	t24 = (x101%((x102%x103)|x104));

	if (t24 != 2147483648LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x105 = -1;
	int16_t x106 = INT16_MIN;
	static int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	static int64_t t25 = -657LL;

	t25 = (x105%((x106%x107)|x108));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 0U;
	uint16_t x111 = 59U;
	static int32_t x112 = INT32_MIN;

	t26 = (x109%((x110%x111)|x112));

	if (t26 != 533460412775507LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x114 = 23339798597084437LL;
	volatile int32_t x115 = INT32_MIN;
	int64_t t27 = -134137956784LL;

	t27 = (x113%((x114%x115)|x116));

	if (t27 != 50LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MAX;
	static int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	int64_t t28 = 1980336933322038526LL;

	t28 = (x117%((x118%x119)|x120));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -408LL;
	int64_t x123 = INT64_MIN;
	static int8_t x124 = 1;

	t29 = (x121%((x122%x123)|x124));

	if (t29 != -408LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x125 = 119680U;
	int16_t x127 = INT16_MIN;
	volatile uint32_t t30 = 22U;

	t30 = (x125%((x126%x127)|x128));

	if (t30 != 8890U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x130 = UINT8_MAX;
	uint64_t x131 = UINT64_MAX;
	uint64_t t31 = 1971724784LLU;

	t31 = (x129%((x130%x131)|x132));

	if (t31 != 260LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 1488U;
	int32_t x134 = INT32_MIN;
	int32_t x135 = INT32_MAX;
	uint8_t x136 = 3U;

	t32 = (x133%((x134%x135)|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x137 = UINT16_MAX;
	uint32_t x138 = 545U;
	int32_t x139 = INT32_MAX;
	uint32_t x140 = UINT32_MAX;

	t33 = (x137%((x138%x139)|x140));

	if (t33 != 65535U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x141 = UINT16_MAX;
	static int32_t x143 = INT32_MAX;
	volatile uint64_t t34 = 8LLU;

	t34 = (x141%((x142%x143)|x144));

	if (t34 != 65535LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	static volatile uint16_t x146 = 107U;
	uint16_t x147 = 2238U;
	int16_t x148 = INT16_MIN;
	int64_t t35 = 58605178896163443LL;

	t35 = (x145%((x146%x147)|x148));

	if (t35 != -22742LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x150 = -1;
	int8_t x151 = INT8_MIN;
	volatile int32_t x152 = 41;

	t36 = (x149%((x150%x151)|x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	volatile int32_t x154 = INT32_MIN;
	static int64_t x155 = 13460564LL;
	volatile int64_t t37 = -161914174666307LL;

	t37 = (x153%((x154%x155)|x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = 19917LL;
	int8_t x159 = -12;
	static int16_t x160 = -1;
	int64_t t38 = 151057845650398466LL;

	t38 = (x157%((x158%x159)|x160));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	static int64_t x162 = INT64_MAX;
	int16_t x163 = INT16_MIN;
	int64_t x164 = 7LL;
	volatile int64_t t39 = 439279680957457LL;

	t39 = (x161%((x162%x163)|x164));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = INT32_MIN;
	uint32_t x167 = 702319U;
	int64_t x168 = -741935LL;

	t40 = (x165%((x166%x167)|x168));

	if (t40 != -652382LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	static int16_t x172 = 1;
	int64_t t41 = 92365458983318859LL;

	t41 = (x169%((x170%x171)|x172));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MAX;
	static uint8_t x174 = UINT8_MAX;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t42 = -67982282804035055LL;

	t42 = (x173%((x174%x175)|x176));

	if (t42 != 2147483647LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x178 = 1U;
	static uint64_t x179 = 6592LLU;
	int32_t x180 = 629;
	uint64_t t43 = 392979811843467217LLU;

	t43 = (x177%((x178%x179)|x180));

	if (t43 != 85LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 4893U;
	volatile uint16_t x182 = 2087U;
	uint64_t x183 = 929269152783345LLU;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t44 = 1451069429634LLU;

	t44 = (x181%((x182%x183)|x184));

	if (t44 != 4893LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = UINT64_MAX;
	int8_t x186 = -1;
	static int64_t x187 = 1LL;
	int8_t x188 = -1;
	uint64_t t45 = 22690179713840733LLU;

	t45 = (x185%((x186%x187)|x188));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = INT16_MAX;
	volatile uint8_t x191 = UINT8_MAX;
	uint32_t x192 = UINT32_MAX;
	uint32_t t46 = 1642988U;

	t46 = (x189%((x190%x191)|x192));

	if (t46 != 32767U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x193 = -1;
	volatile uint64_t x194 = UINT64_MAX;
	static int64_t x195 = INT64_MIN;
	volatile uint64_t t47 = 0LLU;

	t47 = (x193%((x194%x195)|x196));

	if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x198 = 3U;
	volatile uint32_t x199 = 127956U;
	uint8_t x200 = 4U;

	t48 = (x197%((x198%x199)|x200));

	if (t48 != 2U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = -1022007;
	volatile int16_t x202 = 5419;
	int8_t x204 = INT8_MIN;

	t49 = (x201%((x202%x203)|x204));

	if (t49 != -77) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -1;
	int8_t x206 = 1;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MIN;

	t50 = (x205%((x206%x207)|x208));

	if (t50 != 32766U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 0LLU;
	volatile uint16_t x211 = UINT16_MAX;
	volatile uint16_t x212 = 4674U;
	uint64_t t51 = 3806000968LLU;

	t51 = (x209%((x210%x211)|x212));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x219 = 502212947LLU;
	volatile uint64_t t52 = 24132831373LLU;

	t52 = (x217%((x218%x219)|x220));

	if (t52 != 321848577LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x221 = 5019250276284723LLU;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	volatile uint64_t t53 = 355483809436LLU;

	t53 = (x221%((x222%x223)|x224));

	if (t53 != 5019250276284723LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x229 = UINT64_MAX;
	volatile int16_t x230 = -12;
	static uint8_t x231 = 6U;
	volatile int32_t x232 = INT32_MAX;
	uint64_t t54 = 689089813550886LLU;

	t54 = (x229%((x230%x231)|x232));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x234 = INT16_MAX;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = INT8_MAX;
	volatile int64_t t55 = -512174476LL;

	t55 = (x233%((x234%x235)|x236));

	if (t55 != 7LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x238 = 512261302LL;
	uint16_t x239 = UINT16_MAX;
	volatile int16_t x240 = INT16_MIN;
	int64_t t56 = 1076677LL;

	t56 = (x237%((x238%x239)|x240));

	if (t56 != -4178LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x241 = INT16_MIN;
	int64_t x243 = INT64_MIN;
	volatile int16_t x244 = -19;
	uint64_t t57 = 5LLU;

	t57 = (x241%((x242%x243)|x244));

	if (t57 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x245 = 4U;
	static volatile int16_t x246 = -1;
	int16_t x247 = INT16_MIN;
	int32_t t58 = 30716973;

	t58 = (x245%((x246%x247)|x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	int8_t x250 = INT8_MIN;
	volatile int32_t x251 = -1;
	int32_t t59 = 7;

	t59 = (x249%((x250%x251)|x252));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x253 = 1989;
	int8_t x254 = 1;
	int64_t x255 = -1LL;
	static int64_t x256 = INT64_MAX;
	int64_t t60 = -3754LL;

	t60 = (x253%((x254%x255)|x256));

	if (t60 != 1989LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 3047U;
	static int32_t x258 = -6;
	static int64_t x259 = -4046060330LL;
	static int64_t t61 = 9138011591168LL;

	t61 = (x257%((x258%x259)|x260));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x262 = INT64_MIN;
	static int32_t x264 = -2791;
	int64_t t62 = -595439866501LL;

	t62 = (x261%((x262%x263)|x264));

	if (t62 != 2LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x265 = 7182;
	volatile uint64_t x266 = 38410LLU;
	static int64_t x267 = INT64_MAX;
	volatile uint64_t t63 = 34711711950796LLU;

	t63 = (x265%((x266%x267)|x268));

	if (t63 != 7182LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = -1;
	volatile int8_t x270 = INT8_MIN;
	int32_t x272 = 12918;
	int64_t t64 = 9LL;

	t64 = (x269%((x270%x271)|x272));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = -1;
	static volatile int8_t x274 = INT8_MIN;
	volatile int64_t x276 = 249987651LL;
	volatile int64_t t65 = 3341LL;

	t65 = (x273%((x274%x275)|x276));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = -1;
	volatile int32_t x279 = INT32_MIN;
	static int8_t x280 = -1;
	int64_t t66 = 1408LL;

	t66 = (x277%((x278%x279)|x280));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = -16498422LL;
	volatile int64_t x282 = -1LL;

	t67 = (x281%((x282%x283)|x284));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x285 = INT64_MAX;
	uint8_t x288 = UINT8_MAX;
	static int64_t t68 = 13306042LL;

	t68 = (x285%((x286%x287)|x288));

	if (t68 != 127LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x289 = UINT8_MAX;
	int16_t x290 = 3;
	static int64_t x291 = -4LL;
	volatile int8_t x292 = 2;
	static int64_t t69 = -254229LL;

	t69 = (x289%((x290%x291)|x292));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x293 = UINT32_MAX;
	static int32_t x294 = INT32_MIN;
	static int8_t x295 = INT8_MAX;
	volatile int32_t x296 = -101300;
	volatile uint32_t t70 = 1433U;

	t70 = (x293%((x294%x295)|x296));

	if (t70 != 3U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x298 = UINT16_MAX;
	uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MAX;

	t71 = (x297%((x298%x299)|x300));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 1U;
	volatile uint32_t x302 = 60832725U;
	uint16_t x304 = UINT16_MAX;

	t72 = (x301%((x302%x303)|x304));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x305 = -105;
	uint16_t x306 = UINT16_MAX;
	int8_t x307 = -8;

	t73 = (x305%((x306%x307)|x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x309 = 178U;
	volatile uint16_t x311 = 163U;
	int32_t x312 = INT32_MAX;
	volatile int64_t t74 = -540028126253226LL;

	t74 = (x309%((x310%x311)|x312));

	if (t74 != 178LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	int64_t x314 = 612637LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MAX;
	static int64_t t75 = -9LL;

	t75 = (x313%((x314%x315)|x316));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x317 = INT64_MAX;
	int64_t x318 = -1LL;
	volatile int8_t x319 = 3;
	int64_t x320 = 152372LL;
	static volatile int64_t t76 = 599743500360LL;

	t76 = (x317%((x318%x319)|x320));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x322 = -1;
	int8_t x323 = INT8_MIN;
	static volatile int16_t x324 = INT16_MAX;
	static volatile int32_t t77 = 113;

	t77 = (x321%((x322%x323)|x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 533U;
	int32_t x327 = 7;
	int64_t x328 = INT64_MIN;
	int64_t t78 = -267678187221148LL;

	t78 = (x325%((x326%x327)|x328));

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1791068;
	int64_t x330 = INT64_MIN;
	int32_t x331 = 1;
	int8_t x332 = INT8_MIN;
	int64_t t79 = -2177850002648LL;

	t79 = (x329%((x330%x331)|x332));

	if (t79 != -92LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x333 = UINT8_MAX;
	static int32_t x334 = -97;
	volatile int16_t x336 = INT16_MIN;

	t80 = (x333%((x334%x335)|x336));

	if (t80 != 61) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = -1;
	int64_t x339 = 37588090418103699LL;
	int64_t x340 = -1LL;
	volatile int64_t t81 = 53466378LL;

	t81 = (x337%((x338%x339)|x340));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	static volatile uint16_t x344 = 3642U;
	int64_t t82 = -543913LL;

	t82 = (x341%((x342%x343)|x344));

	if (t82 != -2147483648LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x345 = INT64_MIN;
	uint64_t x347 = 1390596569723970589LLU;
	uint16_t x348 = 7875U;
	uint64_t t83 = 20661LLU;

	t83 = (x345%((x346%x347)|x348));

	if (t83 != 7617LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = 2827U;
	static volatile int16_t x351 = INT16_MIN;
	volatile uint64_t x352 = 918119567454933LLU;
	uint64_t t84 = 7279273LLU;

	t84 = (x349%((x350%x351)|x352));

	if (t84 != 2827LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = -15652;
	volatile int32_t t85 = -4512680;

	t85 = (x353%((x354%x355)|x356));

	if (t85 != 16) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = 81943106;
	int16_t x358 = INT16_MIN;
	int16_t x359 = INT16_MIN;
	static volatile int64_t t86 = 3786960048834224093LL;

	t86 = (x357%((x358%x359)|x360));

	if (t86 != 81943106LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	int8_t x363 = 10;
	volatile uint16_t x364 = 3030U;
	int32_t t87 = 12;

	t87 = (x361%((x362%x363)|x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x365 = 10;
	volatile int16_t x366 = INT16_MAX;
	static int16_t x367 = INT16_MIN;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t88 = 29843234;

	t88 = (x365%((x366%x367)|x368));

	if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x369 = 4U;
	int16_t x370 = -1;
	volatile int8_t x371 = -1;
	static int32_t x372 = INT32_MIN;

	t89 = (x369%((x370%x371)|x372));

	if (t89 != 4U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x373 = UINT8_MAX;
	static int8_t x375 = -1;
	int64_t x376 = -1LL;
	volatile int64_t t90 = -1288LL;

	t90 = (x373%((x374%x375)|x376));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x378 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = -1;
	volatile int32_t t91 = 24883;

	t91 = (x377%((x378%x379)|x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x381 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	static int8_t x384 = -1;
	int64_t t92 = -127925238920237LL;

	t92 = (x381%((x382%x383)|x384));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x386 = 10;
	static int32_t x387 = -574529;
	static uint32_t x388 = UINT32_MAX;
	volatile uint32_t t93 = 110U;

	t93 = (x385%((x386%x387)|x388));

	if (t93 != 3U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -1;
	int32_t x390 = -3;
	uint64_t x391 = 35927704LLU;
	volatile uint64_t t94 = 1535264214324036327LLU;

	t94 = (x389%((x390%x391)|x392));

	if (t94 != 11135364LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x394 = -1;
	uint8_t x395 = 1U;
	uint64_t x396 = 9737LLU;

	t95 = (x393%((x394%x395)|x396));

	if (t95 != 126LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x398 = INT64_MAX;
	int16_t x399 = -155;
	static int32_t x400 = -1;
	int64_t t96 = -186LL;

	t96 = (x397%((x398%x399)|x400));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x402 = -1167679997715544201LL;
	static int64_t x403 = INT64_MIN;
	int16_t x404 = -1;
	int64_t t97 = -35693376028489022LL;

	t97 = (x401%((x402%x403)|x404));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x405 = -58;
	volatile int8_t x406 = INT8_MAX;
	static int32_t x407 = INT32_MIN;
	static volatile uint8_t x408 = UINT8_MAX;
	volatile int32_t t98 = -46891;

	t98 = (x405%((x406%x407)|x408));

	if (t98 != -58) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MAX;
	int32_t x410 = -38820581;
	static uint64_t x411 = 1264576384LLU;
	uint16_t x412 = 2U;
	uint64_t t99 = 323LLU;

	t99 = (x409%((x410%x411)|x412));

	if (t99 != 533399389LLU) { NG(); } else { ; }
	
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

