#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
static int16_t x4 = -7112;
int8_t x5 = -1;
int32_t x7 = INT32_MIN;
uint64_t x8 = 258570265121864LLU;
int16_t x15 = INT16_MIN;
volatile int32_t x16 = -129563065;
uint64_t x22 = 6733164517243LLU;
int64_t x23 = 1744LL;
int64_t x31 = -1LL;
int32_t x32 = 348;
static int32_t x34 = INT32_MIN;
static int16_t x35 = INT16_MIN;
uint16_t x36 = 149U;
static volatile int64_t t10 = INT64_MIN;
int64_t x46 = 26LL;
uint64_t x47 = 51156LLU;
static uint64_t t11 = 810409246LLU;
uint16_t x55 = UINT16_MAX;
int16_t x57 = INT16_MIN;
static int16_t x59 = INT16_MIN;
static uint8_t x60 = UINT8_MAX;
static int32_t x64 = INT32_MIN;
int32_t t15 = -51464;
int32_t x66 = INT32_MIN;
int64_t x68 = -1LL;
int64_t t16 = 8601077LL;
int16_t x73 = -30;
uint8_t x75 = 107U;
volatile int32_t x81 = 392934;
int16_t x85 = INT16_MAX;
static volatile uint8_t x92 = 44U;
uint32_t t22 = 3257327U;
int64_t x96 = INT64_MIN;
static int32_t x98 = INT32_MIN;
static int32_t x100 = INT32_MIN;
int8_t x102 = -55;
static uint64_t x104 = 53535128LLU;
int32_t x111 = INT32_MIN;
uint32_t x117 = 3U;
uint8_t x121 = UINT8_MAX;
int32_t x124 = -1;
int64_t x127 = INT64_MIN;
uint8_t x143 = 0U;
static int8_t x146 = INT8_MIN;
volatile int64_t x155 = INT64_MIN;
static int64_t x162 = -116664913LL;
int64_t x163 = 32611096764LL;
int32_t x166 = INT32_MIN;
uint32_t x168 = UINT32_MAX;
uint64_t x170 = 554894LLU;
int16_t x172 = -1;
static int32_t t42 = -3675;
int8_t x179 = -1;
uint8_t x180 = 95U;
volatile int32_t x181 = INT32_MIN;
volatile uint64_t t45 = 48LLU;
int64_t x187 = -103158433LL;
int8_t x188 = INT8_MIN;
uint32_t x194 = UINT32_MAX;
volatile int64_t t48 = -24114863LL;
int64_t t50 = -3823749970293227730LL;
uint32_t x208 = UINT32_MAX;
volatile int32_t x212 = -1;
int8_t x220 = -2;
int32_t t55 = 1;
volatile int32_t t56 = -8272518;
uint64_t x229 = 54338179126886LLU;
int64_t x230 = -1154LL;
int64_t x240 = -30110289628LL;
int64_t x241 = 3508071231464146274LL;
static uint8_t x242 = 3U;
int64_t x246 = INT64_MAX;
static int8_t x252 = -1;
volatile uint8_t x257 = 3U;
static int32_t t64 = 3616252;
int64_t x262 = -1LL;
int32_t t65 = 2649504;
volatile int16_t x270 = -1;
volatile int64_t x276 = -1LL;
static uint8_t x283 = 0U;
int8_t x287 = INT8_MAX;
volatile int8_t x289 = -63;
volatile uint64_t t72 = 10947390901LLU;
int16_t x297 = INT16_MIN;
uint32_t x298 = 45208U;
volatile int32_t x304 = INT32_MIN;
int32_t x310 = INT32_MAX;
static int64_t x320 = INT64_MAX;
volatile int32_t t80 = -18526698;
static volatile int64_t t81 = -1712346620625433LL;
static int16_t x336 = -1;
volatile int64_t x339 = -3912LL;
static int16_t x340 = INT16_MIN;
uint8_t x341 = UINT8_MAX;
int16_t x343 = INT16_MIN;
uint32_t x346 = 28757U;
int16_t x347 = INT16_MAX;
volatile int32_t t86 = -6;
volatile int8_t x350 = INT8_MIN;
volatile int64_t t88 = 14966494803127LL;
int64_t x358 = INT64_MIN;
uint8_t x366 = 0U;
volatile uint64_t x369 = 865545LLU;
int32_t x374 = -7;
volatile int64_t t93 = -15034LL;
uint64_t x386 = UINT64_MAX;
static int64_t t97 = -225LL;
int64_t x397 = INT64_MAX;
uint8_t x399 = UINT8_MAX;
uint32_t x400 = 323013387U;


void f0(void) {
	volatile uint16_t x2 = 6U;
	int64_t x3 = -1LL;
	int64_t t0 = -238LL;

	t0 = ((x1==x2)+(x3&x4));

	if (t0 != -7112LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	static volatile uint64_t t1 = 2136781930380978LLU;

	t1 = ((x5==x6)+(x7&x8));

	if (t1 != 258569916121088LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 103U;
	static uint16_t x10 = 2474U;
	int16_t x11 = INT16_MAX;
	uint64_t x12 = 858276988263614LLU;
	static uint64_t t2 = 42842887312005616LLU;

	t2 = ((x9==x10)+(x11&x12));

	if (t2 != 7358LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 1U;
	static int64_t x14 = -93201326LL;
	volatile int32_t t3 = 14;

	t3 = ((x13==x14)+(x15&x16));

	if (t3 != -129564672) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	int64_t x19 = -1LL;
	int16_t x20 = INT16_MAX;
	volatile int64_t t4 = -684386LL;

	t4 = ((x17==x18)+(x19&x20));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -1LL;
	static int8_t x24 = INT8_MIN;
	static volatile int64_t t5 = 175547634LL;

	t5 = ((x21==x22)+(x23&x24));

	if (t5 != 1664LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x25 = UINT16_MAX;
	volatile int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = INT32_MIN;

	t6 = ((x25==x26)+(x27&x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	uint32_t x30 = 8979415U;
	int64_t t7 = 59LL;

	t7 = ((x29==x30)+(x31&x32));

	if (t7 != 348LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 7995357U;
	volatile int32_t t8 = -75559;

	t8 = ((x33==x34)+(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x37 = -38;
	int8_t x38 = 36;
	int32_t x39 = INT32_MIN;
	int64_t x40 = INT64_MIN;
	static volatile int64_t t9 = INT64_MIN;

	t9 = ((x37==x38)+(x39&x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = 4;
	static int8_t x42 = INT8_MAX;
	int32_t x43 = INT32_MIN;
	static int64_t x44 = INT64_MIN;

	t10 = ((x41==x42)+(x43&x44));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	static uint8_t x48 = UINT8_MAX;

	t11 = ((x45==x46)+(x47&x48));

	if (t11 != 212LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = INT16_MIN;
	static uint64_t x50 = UINT64_MAX;
	static uint32_t x51 = 0U;
	volatile int16_t x52 = 1660;
	volatile uint32_t t12 = 126871762U;

	t12 = ((x49==x50)+(x51&x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 7875017073653LLU;
	volatile int16_t x54 = 8427;
	int64_t x56 = -27029976165447LL;
	volatile int64_t t13 = -8815LL;

	t13 = ((x53==x54)+(x55&x56));

	if (t13 != 21433LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MAX;
	int32_t t14 = -13068;

	t14 = ((x57==x58)+(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	volatile uint16_t x63 = 8U;

	t15 = ((x61==x62)+(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x65 = INT32_MIN;
	uint32_t x67 = UINT32_MAX;

	t16 = ((x65==x66)+(x67&x68));

	if (t16 != 4294967296LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	static int16_t x70 = INT16_MIN;
	static int64_t x71 = INT64_MIN;
	uint64_t x72 = 3LLU;
	uint64_t t17 = 0LLU;

	t17 = ((x69==x70)+(x71&x72));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = 2770;
	int32_t x76 = -319809529;
	volatile int32_t t18 = 14602;

	t18 = ((x73==x74)+(x75&x76));

	if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -1;
	volatile int32_t x79 = -1;
	uint16_t x80 = 39U;
	volatile int32_t t19 = -2;

	t19 = ((x77==x78)+(x79&x80));

	if (t19 != 39) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x82 = -6360;
	int16_t x83 = INT16_MIN;
	uint32_t x84 = 652U;
	uint32_t t20 = 27146042U;

	t20 = ((x81==x82)+(x83&x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = 8725894;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MAX;
	int32_t t21 = -346010622;

	t21 = ((x85==x86)+(x87&x88));

	if (t21 != 2147450880) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int8_t x90 = INT8_MIN;
	uint32_t x91 = 282491175U;

	t22 = ((x89==x90)+(x91&x92));

	if (t22 != 36U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = -12;
	static uint32_t x95 = 1U;
	static int64_t t23 = -440397141589499LL;

	t23 = ((x93==x94)+(x95&x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = INT64_MAX;
	static int8_t x99 = -1;
	int32_t t24 = INT32_MIN;

	t24 = ((x97==x98)+(x99&x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x103 = 19471549U;
	volatile uint64_t t25 = 106634280177012036LLU;

	t25 = ((x101==x102)+(x103&x104));

	if (t25 != 18874520LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 104U;
	static volatile int16_t x106 = -1;
	volatile int8_t x107 = -1;
	uint64_t x108 = 319574823532292LLU;
	volatile uint64_t t26 = 16LLU;

	t26 = ((x105==x106)+(x107&x108));

	if (t26 != 319574823532292LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MAX;
	uint64_t x112 = 0LLU;
	volatile uint64_t t27 = 1735154LLU;

	t27 = ((x109==x110)+(x111&x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = 11291689;
	volatile int8_t x114 = -7;
	volatile uint64_t x115 = 12100280725592LLU;
	static volatile int32_t x116 = INT32_MIN;
	volatile uint64_t t28 = 1641535910LLU;

	t28 = ((x113==x114)+(x115&x116));

	if (t28 != 12098922872832LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = -1LL;
	static volatile int32_t x119 = -81;
	static uint16_t x120 = 1U;
	volatile int32_t t29 = 3647;

	t29 = ((x117==x118)+(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	int8_t x123 = INT8_MIN;
	volatile int32_t t30 = -41656;

	t30 = ((x121==x122)+(x123&x124));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int8_t x125 = 0;
	volatile int64_t x126 = INT64_MAX;
	static volatile int64_t x128 = INT64_MIN;
	static volatile int64_t t31 = INT64_MIN;

	t31 = ((x125==x126)+(x127&x128));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	int8_t x130 = INT8_MIN;
	int16_t x131 = -1;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = -53080216;

	t32 = ((x129==x130)+(x131&x132));

	if (t32 != 65535) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x133 = -1;
	int32_t x134 = INT32_MAX;
	int32_t x135 = 22;
	static int32_t x136 = INT32_MIN;
	int32_t t33 = -2950;

	t33 = ((x133==x134)+(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = UINT32_MAX;
	static uint16_t x140 = 7208U;
	static volatile uint32_t t34 = 3U;

	t34 = ((x137==x138)+(x139&x140));

	if (t34 != 7208U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 918;
	int16_t x142 = INT16_MAX;
	uint8_t x144 = UINT8_MAX;
	static int32_t t35 = -6377;

	t35 = ((x141==x142)+(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int32_t x147 = -336388271;
	int64_t x148 = -97528LL;
	volatile int64_t t36 = -10812939125LL;

	t36 = ((x145==x146)+(x147&x148));

	if (t36 != -336461056LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = INT8_MIN;
	uint8_t x150 = 28U;
	volatile int32_t x151 = INT32_MAX;
	int8_t x152 = INT8_MIN;
	volatile int32_t t37 = -5557089;

	t37 = ((x149==x150)+(x151&x152));

	if (t37 != 2147483520) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = INT32_MAX;
	uint8_t x154 = 23U;
	static uint16_t x156 = 1U;
	volatile int64_t t38 = 9409201LL;

	t38 = ((x153==x154)+(x155&x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x158 = INT16_MAX;
	volatile int64_t x159 = 6378783176847998LL;
	int64_t x160 = 655320974955711256LL;
	int64_t t39 = 1LL;

	t39 = ((x157==x158)+(x159&x160));

	if (t39 != 4548061667263000LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = -1;
	int8_t x164 = -49;
	int64_t t40 = 1810430686LL;

	t40 = ((x161==x162)+(x163&x164));

	if (t40 != 32611096716LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	uint32_t t41 = 1763U;

	t41 = ((x165==x166)+(x167&x168));

	if (t41 != 2147483648U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 57U;
	uint16_t x171 = 1643U;

	t42 = ((x169==x170)+(x171&x172));

	if (t42 != 1643) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int8_t x174 = -3;
	int8_t x175 = INT8_MAX;
	volatile uint64_t x176 = 44LLU;
	volatile uint64_t t43 = 97502LLU;

	t43 = ((x173==x174)+(x175&x176));

	if (t43 != 44LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 344454470491LL;
	int8_t x178 = INT8_MIN;
	volatile int32_t t44 = 0;

	t44 = ((x177==x178)+(x179&x180));

	if (t44 != 95) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = 224174918844207994LLU;
	uint64_t x183 = 590372264940LLU;
	int32_t x184 = -1;

	t45 = ((x181==x182)+(x183&x184));

	if (t45 != 590372264940LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 16160U;
	int8_t x186 = 0;
	int64_t t46 = 0LL;

	t46 = ((x185==x186)+(x187&x188));

	if (t46 != -103158528LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	int16_t x190 = -105;
	uint8_t x191 = 38U;
	volatile int32_t x192 = 1836126;
	static volatile int32_t t47 = -7;

	t47 = ((x189==x190)+(x191&x192));

	if (t47 != 6) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	int64_t x195 = INT64_MIN;
	static uint32_t x196 = 1415676U;

	t48 = ((x193==x194)+(x195&x196));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	uint8_t x198 = UINT8_MAX;
	int64_t x199 = 5730LL;
	static volatile int16_t x200 = 900;
	static volatile int64_t t49 = -76205070710LL;

	t49 = ((x197==x198)+(x199&x200));

	if (t49 != 512LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int32_t x202 = 49;
	static int64_t x203 = -1LL;
	uint32_t x204 = 3369U;

	t50 = ((x201==x202)+(x203&x204));

	if (t50 != 3369LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 6U;
	int64_t x206 = -7440004893LL;
	uint8_t x207 = 2U;
	uint32_t t51 = 9008U;

	t51 = ((x205==x206)+(x207&x208));

	if (t51 != 2U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = 1;
	int32_t x211 = -67;
	volatile int32_t t52 = -4916151;

	t52 = ((x209==x210)+(x211&x212));

	if (t52 != -67) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MAX;
	static int32_t x215 = 113;
	int16_t x216 = -3061;
	static int32_t t53 = -436;

	t53 = ((x213==x214)+(x215&x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 12U;
	uint64_t x218 = 528490998953LLU;
	int16_t x219 = -1;
	volatile int32_t t54 = -117;

	t54 = ((x217==x218)+(x219&x220));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = 193;
	static uint8_t x222 = UINT8_MAX;
	static volatile int8_t x223 = -1;
	int16_t x224 = 99;

	t55 = ((x221==x222)+(x223&x224));

	if (t55 != 99) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 1;
	int8_t x226 = 1;
	int8_t x227 = INT8_MIN;
	uint8_t x228 = 12U;

	t56 = ((x225==x226)+(x227&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x231 = 350LLU;
	int64_t x232 = 34744LL;
	uint64_t t57 = 2932007LLU;

	t57 = ((x229==x230)+(x231&x232));

	if (t57 != 280LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	int32_t x234 = 25;
	uint64_t x235 = UINT64_MAX;
	static uint64_t x236 = 34433151941146537LLU;
	uint64_t t58 = 3641154693704626943LLU;

	t58 = ((x233==x234)+(x235&x236));

	if (t58 != 34433151941146537LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 12132228;
	uint16_t x238 = 2U;
	static uint8_t x239 = 11U;
	volatile int64_t t59 = 1LL;

	t59 = ((x237==x238)+(x239&x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = -14;
	int64_t x244 = INT64_MIN;
	int64_t t60 = INT64_MIN;

	t60 = ((x241==x242)+(x243&x244));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x247 = INT8_MAX;
	uint8_t x248 = 32U;
	static int32_t t61 = 1837698;

	t61 = ((x245==x246)+(x247&x248));

	if (t61 != 32) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -51;
	int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MIN;
	int32_t t62 = INT32_MIN;

	t62 = ((x249==x250)+(x251&x252));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 6U;
	volatile uint32_t x254 = 67006U;
	static uint16_t x255 = UINT16_MAX;
	int16_t x256 = 838;
	static volatile int32_t t63 = 14775;

	t63 = ((x253==x254)+(x255&x256));

	if (t63 != 838) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x258 = UINT8_MAX;
	int16_t x259 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;

	t64 = ((x257==x258)+(x259&x260));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	int16_t x263 = -1;
	int32_t x264 = -76557;

	t65 = ((x261==x262)+(x263&x264));

	if (t65 != -76556) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	uint32_t x267 = 511942882U;
	static uint8_t x268 = 10U;
	volatile uint32_t t66 = 235847155U;

	t66 = ((x265==x266)+(x267&x268));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int16_t x271 = INT16_MAX;
	int16_t x272 = -1;
	volatile int32_t t67 = -35035729;

	t67 = ((x269==x270)+(x271&x272));

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 211U;
	int8_t x274 = INT8_MAX;
	int16_t x275 = -1;
	volatile int64_t t68 = 121258LL;

	t68 = ((x273==x274)+(x275&x276));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	volatile uint8_t x278 = 92U;
	uint32_t x279 = UINT32_MAX;
	static uint8_t x280 = UINT8_MAX;
	uint32_t t69 = 29887337U;

	t69 = ((x277==x278)+(x279&x280));

	if (t69 != 255U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -1;
	static int16_t x282 = 3;
	static volatile int64_t x284 = -4986207670LL;
	int64_t t70 = -1214293974130LL;

	t70 = ((x281==x282)+(x283&x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = 201639599170LLU;
	int64_t x286 = INT64_MIN;
	static volatile uint32_t x288 = UINT32_MAX;
	volatile uint32_t t71 = 1934533U;

	t71 = ((x285==x286)+(x287&x288));

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x290 = -1LL;
	volatile uint16_t x291 = 5U;
	volatile uint64_t x292 = 15054486791463014LLU;

	t72 = ((x289==x290)+(x291&x292));

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -6479941769LL;
	static int8_t x294 = INT8_MIN;
	int16_t x295 = INT16_MIN;
	static int16_t x296 = INT16_MIN;
	static int32_t t73 = -18418277;

	t73 = ((x293==x294)+(x295&x296));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = INT16_MAX;
	static volatile int32_t x300 = INT32_MAX;
	volatile int32_t t74 = 2597;

	t74 = ((x297==x298)+(x299&x300));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = INT64_MAX;
	int8_t x303 = -1;
	int32_t t75 = INT32_MIN;

	t75 = ((x301==x302)+(x303&x304));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -147;
	int16_t x306 = -1;
	uint64_t x307 = 47397644857LLU;
	static uint32_t x308 = 356221988U;
	static volatile uint64_t t76 = 250104898LLU;

	t76 = ((x305==x306)+(x307&x308));

	if (t76 != 18513952LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = UINT8_MAX;
	int8_t x311 = INT8_MIN;
	static int64_t x312 = -5747321629278LL;
	volatile int64_t t77 = -325786954851LL;

	t77 = ((x309==x310)+(x311&x312));

	if (t77 != -5747321629312LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 13;
	int32_t x314 = -1;
	static int32_t x315 = INT32_MIN;
	int8_t x316 = 12;
	volatile int32_t t78 = -600326;

	t78 = ((x313==x314)+(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x317 = INT16_MIN;
	volatile int64_t x318 = -1LL;
	int32_t x319 = -9881910;
	int64_t t79 = 1LL;

	t79 = ((x317==x318)+(x319&x320));

	if (t79 != 9223372036844893898LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 111;
	int64_t x322 = 834LL;
	static int16_t x323 = -968;
	uint8_t x324 = UINT8_MAX;

	t80 = ((x321==x322)+(x323&x324));

	if (t80 != 56) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = 3;
	volatile int64_t x326 = INT64_MIN;
	volatile uint32_t x327 = UINT32_MAX;
	int64_t x328 = INT64_MIN;

	t81 = ((x325==x326)+(x327&x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	static volatile int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;
	uint64_t x332 = 199825LLU;
	static uint64_t t82 = 0LLU;

	t82 = ((x329==x330)+(x331&x332));

	if (t82 != 199808LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MAX;
	int8_t x334 = -1;
	int16_t x335 = INT16_MIN;
	int32_t t83 = 4;

	t83 = ((x333==x334)+(x335&x336));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 29;
	volatile int64_t x338 = INT64_MIN;
	volatile int64_t t84 = 24068211030228080LL;

	t84 = ((x337==x338)+(x339&x340));

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = 9050768U;
	uint8_t x344 = UINT8_MAX;
	int32_t t85 = 3696954;

	t85 = ((x341==x342)+(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x345 = INT16_MIN;
	volatile int8_t x348 = INT8_MAX;

	t86 = ((x345==x346)+(x347&x348));

	if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x349 = INT8_MAX;
	static int32_t x351 = -1;
	uint64_t x352 = 96LLU;
	uint64_t t87 = 699066962569486LLU;

	t87 = ((x349==x350)+(x351&x352));

	if (t87 != 96LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = -28;
	int32_t x354 = 1;
	static int64_t x355 = -1LL;
	int32_t x356 = INT32_MAX;

	t88 = ((x353==x354)+(x355&x356));

	if (t88 != 2147483647LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = INT32_MAX;
	volatile uint32_t t89 = 4625U;

	t89 = ((x357==x358)+(x359&x360));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	int16_t x363 = -1;
	int8_t x364 = -1;
	static int32_t t90 = 3772;

	t90 = ((x361==x362)+(x363&x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	int8_t x367 = -4;
	volatile int32_t x368 = -1;
	static volatile int32_t t91 = 1;

	t91 = ((x365==x366)+(x367&x368));

	if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x370 = -1;
	static int8_t x371 = INT8_MIN;
	static uint32_t x372 = 36U;
	volatile uint32_t t92 = 96568880U;

	t92 = ((x369==x370)+(x371&x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x373 = INT32_MAX;
	int8_t x375 = INT8_MIN;
	static volatile int64_t x376 = INT64_MAX;

	t93 = ((x373==x374)+(x375&x376));

	if (t93 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	static int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = 166118600LLU;

	t94 = ((x377==x378)+(x379&x380));

	if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x382 = -89;
	int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MIN;
	static int64_t t95 = 26LL;

	t95 = ((x381==x382)+(x383&x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint64_t x385 = 91607623609071582LLU;
	uint64_t x387 = UINT64_MAX;
	int16_t x388 = INT16_MIN;
	volatile uint64_t t96 = 4451632252817922LLU;

	t96 = ((x385==x386)+(x387&x388));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = INT64_MAX;
	int8_t x390 = -1;
	int64_t x391 = 115687238051779LL;
	uint32_t x392 = 4391U;

	t97 = ((x389==x390)+(x391&x392));

	if (t97 != 259LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = UINT64_MAX;
	static int16_t x394 = 0;
	uint16_t x395 = 2U;
	uint8_t x396 = 0U;
	int32_t t98 = -14609;

	t98 = ((x393==x394)+(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x398 = -59293214LL;
	volatile uint32_t t99 = 352029908U;

	t99 = ((x397==x398)+(x399&x400));

	if (t99 != 11U) { NG(); } else { ; }
	
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

