#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x1 = 1U;
int32_t x7 = -1;
volatile uint32_t t1 = 129489189U;
static uint16_t x10 = UINT16_MAX;
uint8_t x11 = 22U;
uint8_t x24 = UINT8_MAX;
uint32_t x34 = 48273738U;
uint16_t x36 = 46U;
int16_t x39 = -5;
uint16_t x41 = 0U;
static uint8_t x42 = UINT8_MAX;
volatile int32_t x43 = INT32_MIN;
int32_t t10 = -89667;
volatile uint8_t x45 = 1U;
int16_t x46 = INT16_MIN;
volatile int64_t x48 = INT64_MAX;
static int16_t x49 = INT16_MIN;
int8_t x52 = INT8_MIN;
volatile int64_t t12 = -4201594995LL;
static volatile int32_t t13 = -52715;
int16_t x57 = INT16_MIN;
int16_t x58 = INT16_MIN;
volatile int32_t x59 = -451;
int16_t x61 = INT16_MIN;
int16_t x64 = 928;
int64_t x80 = -351704836869112LL;
int32_t x81 = 97;
static volatile int64_t t20 = -730212382289LL;
int32_t x86 = INT32_MIN;
volatile int64_t x95 = INT64_MIN;
uint32_t x102 = UINT32_MAX;
volatile uint32_t x105 = 2921284U;
int8_t x106 = -1;
uint8_t x107 = 7U;
uint64_t x112 = 905LLU;
uint64_t x114 = UINT64_MAX;
volatile int32_t x115 = INT32_MIN;
uint32_t x116 = 650U;
uint32_t t28 = 15112U;
uint8_t x118 = 38U;
uint64_t x120 = 4LLU;
static uint64_t t30 = 1360556674339LLU;
volatile int32_t x130 = INT32_MIN;
uint8_t x132 = 2U;
volatile int32_t x157 = 2921984;
uint8_t x159 = 124U;
uint32_t t39 = 14964053U;
uint64_t x165 = 3453049657023LLU;
int64_t x170 = INT64_MAX;
static uint32_t t42 = 1U;
uint64_t x181 = 4284123072910378570LLU;
int32_t x185 = 59461405;
static int16_t x195 = -1;
int32_t t51 = 1;
int8_t x212 = -1;
volatile uint16_t x216 = 448U;
int8_t x223 = -25;
volatile int32_t t55 = 405774431;
uint8_t x230 = 0U;
uint64_t x231 = 364701789629LLU;
int16_t x233 = INT16_MAX;
static uint32_t x235 = 1566939U;
volatile uint32_t x247 = 230140U;
int32_t x252 = -1;
volatile int64_t t64 = 1LL;
uint32_t x272 = 380U;
volatile int64_t x276 = -30330835417581317LL;
int64_t x279 = -1LL;
int64_t t69 = -1462916LL;
static int64_t x298 = -121068LL;
volatile int64_t t73 = -20454260511820878LL;
int64_t t74 = 490LL;
int32_t x315 = -6291098;
volatile int64_t t76 = -1LL;
uint64_t x318 = 13027LLU;
int64_t x319 = INT64_MIN;
uint8_t x324 = UINT8_MAX;
int32_t t78 = 634975;
volatile int8_t x325 = INT8_MIN;
int64_t x330 = -1LL;
uint16_t x338 = UINT16_MAX;
static uint64_t x339 = UINT64_MAX;
int16_t x345 = INT16_MAX;
int64_t x352 = -1LL;
int64_t x353 = -62179485829932LL;
volatile uint8_t x354 = 14U;
int8_t x360 = INT8_MIN;
static uint16_t x361 = 1U;
static uint8_t x363 = 0U;
volatile int64_t x367 = -1LL;
uint32_t x373 = UINT32_MAX;
int8_t x374 = INT8_MAX;
volatile int32_t t92 = 1;
int64_t x384 = INT64_MAX;
int64_t x393 = INT64_MIN;
volatile int8_t x397 = -1;
volatile int32_t x400 = -46945;
uint32_t t97 = 0U;
int32_t x405 = 512;
int64_t t99 = -223102LL;


void f0(void) {
	int32_t x2 = -1;
	int8_t x3 = INT8_MIN;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = 30094;

	t0 = ((x1<=x2)^(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int32_t x6 = -1;
	uint32_t x8 = 7U;

	t1 = ((x5<=x6)^(x7/x8));

	if (t1 != 613566756U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x12 = -601;
	volatile int32_t t2 = 165;

	t2 = ((x9<=x10)^(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -85741014LL;
	static int64_t x14 = INT64_MIN;
	volatile int16_t x15 = -5;
	int16_t x16 = -19;
	volatile int32_t t3 = -82;

	t3 = ((x13<=x14)^(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int8_t x18 = -1;
	static int32_t x19 = INT32_MIN;
	uint64_t x20 = 1634182208631501LLU;
	static uint64_t t4 = 516529011130542LLU;

	t4 = ((x17<=x18)^(x19/x20));

	if (t4 != 11288LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = UINT8_MAX;
	static int16_t x22 = 0;
	uint32_t x23 = UINT32_MAX;
	volatile uint32_t t5 = 234U;

	t5 = ((x21<=x22)^(x23/x24));

	if (t5 != 16843009U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 1U;
	volatile int8_t x26 = INT8_MIN;
	static uint64_t x27 = 804388449757328448LLU;
	int32_t x28 = INT32_MIN;
	uint64_t t6 = 1778LLU;

	t6 = ((x25<=x26)^(x27/x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 528651463089064LLU;
	int8_t x30 = INT8_MAX;
	static volatile uint64_t x31 = UINT64_MAX;
	static uint64_t x32 = 8161640519911LLU;
	uint64_t t7 = 1006790034819LLU;

	t7 = ((x29<=x30)^(x31/x32));

	if (t7 != 2260176LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 11026820732349LLU;
	static uint16_t x35 = UINT16_MAX;
	volatile int32_t t8 = 86218467;

	t8 = ((x33<=x34)^(x35/x36));

	if (t8 != 1424) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = 0;
	int32_t x38 = -280360467;
	int16_t x40 = 5733;
	static int32_t t9 = 694563;

	t9 = ((x37<=x38)^(x39/x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x44 = INT16_MAX;

	t10 = ((x41<=x42)^(x43/x44));

	if (t10 != -65537) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x47 = -28;
	int64_t t11 = 94446975LL;

	t11 = ((x45<=x46)^(x47/x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -1;
	int64_t x51 = -1LL;

	t12 = ((x49<=x50)^(x51/x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	int32_t x54 = -1;
	int16_t x55 = 26;
	int32_t x56 = INT32_MAX;

	t13 = ((x53<=x54)^(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x60 = 6150511290058325LLU;
	volatile uint64_t t14 = 3400507LLU;

	t14 = ((x57<=x58)^(x59/x60));

	if (t14 != 2998LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	static int8_t x63 = INT8_MIN;
	volatile int32_t t15 = -365456200;

	t15 = ((x61<=x62)^(x63/x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	static volatile int64_t x66 = 1053178275351LL;
	uint8_t x67 = UINT8_MAX;
	static int16_t x68 = -1;
	static int32_t t16 = 14;

	t16 = ((x65<=x66)^(x67/x68));

	if (t16 != -256) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	int32_t x71 = -2531442;
	static int64_t x72 = 7403LL;
	volatile int64_t t17 = 892268092328LL;

	t17 = ((x69<=x70)^(x71/x72));

	if (t17 != -341LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	uint8_t x74 = 30U;
	int16_t x75 = INT16_MAX;
	volatile int16_t x76 = INT16_MIN;
	int32_t t18 = -22;

	t18 = ((x73<=x74)^(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = UINT8_MAX;
	static int8_t x78 = INT8_MAX;
	int8_t x79 = -1;
	static volatile int64_t t19 = -6427104614LL;

	t19 = ((x77<=x78)^(x79/x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = -823;
	static int8_t x83 = 10;
	int64_t x84 = INT64_MIN;

	t20 = ((x81<=x82)^(x83/x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MIN;
	volatile int32_t x87 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 75250;

	t21 = ((x85<=x86)^(x87/x88));

	if (t21 != -65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	int64_t x90 = -1LL;
	volatile int16_t x91 = INT16_MAX;
	int8_t x92 = INT8_MAX;
	int32_t t22 = -2938;

	t22 = ((x89<=x90)^(x91/x92));

	if (t22 != 258) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	int32_t x94 = INT32_MIN;
	static int16_t x96 = 5;
	int64_t t23 = -3661814629344748743LL;

	t23 = ((x93<=x94)^(x95/x96));

	if (t23 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x97 = INT8_MIN;
	volatile int8_t x98 = INT8_MAX;
	static int16_t x99 = INT16_MIN;
	volatile int8_t x100 = -1;
	static volatile int32_t t24 = 907;

	t24 = ((x97<=x98)^(x99/x100));

	if (t24 != 32769) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int32_t x103 = INT32_MAX;
	uint8_t x104 = 55U;
	int32_t t25 = -43;

	t25 = ((x101<=x102)^(x103/x104));

	if (t25 != 39045156) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x108 = -1LL;
	volatile int64_t t26 = 4676691316769436LL;

	t26 = ((x105<=x106)^(x107/x108));

	if (t26 != -8LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	static uint64_t x110 = 54783383259481LLU;
	int16_t x111 = INT16_MIN;
	volatile uint64_t t27 = 290042492LLU;

	t27 = ((x109<=x110)^(x111/x112));

	if (t27 != 20383142622883446LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 3446U;

	t28 = ((x113<=x114)^(x115/x116));

	if (t28 != 3303821U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -13;
	int32_t x119 = INT32_MIN;
	static uint64_t t29 = 11632LLU;

	t29 = ((x117<=x118)^(x119/x120));

	if (t29 != 4611686017890516993LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 58U;
	uint16_t x122 = UINT16_MAX;
	uint64_t x123 = 49048678LLU;
	uint16_t x124 = 13287U;

	t30 = ((x121<=x122)^(x123/x124));

	if (t30 != 3690LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 30534U;
	uint32_t x126 = 317298172U;
	int16_t x127 = 2359;
	int32_t x128 = -1;
	int32_t t31 = -598265604;

	t31 = ((x125<=x126)^(x127/x128));

	if (t31 != -2360) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x129 = INT8_MIN;
	volatile int32_t x131 = 31;
	int32_t t32 = -594108;

	t32 = ((x129<=x130)^(x131/x132));

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -1;
	static uint16_t x134 = 19588U;
	int64_t x135 = -1LL;
	uint16_t x136 = 3975U;
	static volatile int64_t t33 = -237781807937646771LL;

	t33 = ((x133<=x134)^(x135/x136));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x137 = 230475423U;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 191U;
	uint64_t x140 = UINT64_MAX;
	uint64_t t34 = 131750858008LLU;

	t34 = ((x137<=x138)^(x139/x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -1;
	int8_t x142 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 2U;
	volatile uint64_t t35 = 1LLU;

	t35 = ((x141<=x142)^(x143/x144));

	if (t35 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = -1LL;
	int64_t x146 = -6588827214LL;
	int64_t x147 = INT64_MIN;
	int16_t x148 = INT16_MAX;
	volatile int64_t t36 = 11014930LL;

	t36 = ((x145<=x146)^(x147/x148));

	if (t36 != -281483566907400LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	volatile uint32_t x150 = 237971U;
	static int32_t x151 = 813326095;
	int8_t x152 = INT8_MIN;
	int32_t t37 = -1;

	t37 = ((x149<=x150)^(x151/x152));

	if (t37 != -6354109) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int16_t x154 = INT16_MIN;
	volatile int16_t x155 = -1;
	int16_t x156 = -1;
	volatile int32_t t38 = -4;

	t38 = ((x153<=x154)^(x155/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x158 = -1LL;
	uint32_t x160 = 909U;

	t39 = ((x157<=x158)^(x159/x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int32_t x162 = INT32_MAX;
	static int32_t x163 = INT32_MIN;
	volatile uint16_t x164 = UINT16_MAX;
	int32_t t40 = -1690;

	t40 = ((x161<=x162)^(x163/x164));

	if (t40 != -32767) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = INT32_MAX;
	static uint64_t x167 = 449162LLU;
	uint16_t x168 = 466U;
	volatile uint64_t t41 = 4010706862985817989LLU;

	t41 = ((x165<=x166)^(x167/x168));

	if (t41 != 963LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -2;
	int32_t x171 = -33497231;
	uint32_t x172 = 3772554U;

	t42 = ((x169<=x170)^(x171/x172));

	if (t42 != 1128U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	uint32_t x174 = 1814606105U;
	int8_t x175 = INT8_MIN;
	int16_t x176 = -1;
	int32_t t43 = 9199166;

	t43 = ((x173<=x174)^(x175/x176));

	if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 0U;
	static int8_t x178 = -1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MIN;
	static volatile int32_t t44 = 702731;

	t44 = ((x177<=x178)^(x179/x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x182 = 10;
	static int32_t x183 = INT32_MIN;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = 9;

	t45 = ((x181<=x182)^(x183/x184));

	if (t45 != 16777216) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x186 = INT32_MIN;
	volatile int8_t x187 = -5;
	static int32_t x188 = -1;
	volatile int32_t t46 = -1;

	t46 = ((x185<=x186)^(x187/x188));

	if (t46 != 5) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -567212964LL;
	volatile int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MAX;
	static int8_t x192 = INT8_MAX;
	int32_t t47 = -1934;

	t47 = ((x189<=x190)^(x191/x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 0;
	int32_t x194 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -7601;

	t48 = ((x193<=x194)^(x195/x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int64_t x198 = -1LL;
	uint64_t x199 = 55LLU;
	uint32_t x200 = 808151300U;
	uint64_t t49 = 248738LLU;

	t49 = ((x197<=x198)^(x199/x200));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MAX;
	uint8_t x202 = UINT8_MAX;
	uint64_t x203 = 1291074664465LLU;
	uint16_t x204 = 4U;
	uint64_t t50 = 46LLU;

	t50 = ((x201<=x202)^(x203/x204));

	if (t50 != 322768666116LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	static uint16_t x206 = 939U;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = 2U;

	t51 = ((x205<=x206)^(x207/x208));

	if (t51 != -63) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MIN;
	volatile int32_t t52 = 2780563;

	t52 = ((x209<=x210)^(x211/x212));

	if (t52 != 129) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x213 = INT64_MIN;
	uint16_t x214 = 3U;
	int32_t x215 = -47;
	int32_t t53 = 73000740;

	t53 = ((x213<=x214)^(x215/x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = 0;
	static int32_t x218 = 812334;
	uint32_t x219 = UINT32_MAX;
	volatile int8_t x220 = INT8_MAX;
	static volatile uint32_t t54 = 3U;

	t54 = ((x217<=x218)^(x219/x220));

	if (t54 != 33818641U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	uint8_t x224 = UINT8_MAX;

	t55 = ((x221<=x222)^(x223/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 1599U;
	int16_t x227 = 133;
	volatile int8_t x228 = INT8_MIN;
	int32_t t56 = -9472;

	t56 = ((x225<=x226)^(x227/x228));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 495351307U;
	int32_t x232 = 5919;
	uint64_t t57 = 1LLU;

	t57 = ((x229<=x230)^(x231/x232));

	if (t57 != 61615440LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x234 = 3U;
	int32_t x236 = -10340447;
	uint32_t t58 = 12392U;

	t58 = ((x233<=x234)^(x235/x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x241 = 574451054273960LL;
	static volatile int16_t x242 = -11244;
	int16_t x243 = 1;
	volatile uint32_t x244 = UINT32_MAX;
	static uint32_t t59 = 74447021U;

	t59 = ((x241<=x242)^(x243/x244));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	volatile uint8_t x246 = UINT8_MAX;
	uint8_t x248 = UINT8_MAX;
	uint32_t t60 = 20053U;

	t60 = ((x245<=x246)^(x247/x248));

	if (t60 != 903U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = INT32_MIN;
	static int8_t x250 = 0;
	uint8_t x251 = 4U;
	volatile int32_t t61 = -1816587;

	t61 = ((x249<=x250)^(x251/x252));

	if (t61 != -3) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MIN;
	int16_t x254 = -1;
	volatile uint32_t x255 = UINT32_MAX;
	static int32_t x256 = INT32_MAX;
	uint32_t t62 = 4590555U;

	t62 = ((x253<=x254)^(x255/x256));

	if (t62 != 3U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x261 = INT32_MAX;
	uint8_t x262 = 2U;
	static uint16_t x263 = 253U;
	uint32_t x264 = UINT32_MAX;
	static volatile uint32_t t63 = 457U;

	t63 = ((x261<=x262)^(x263/x264));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = 1852477;
	static volatile uint32_t x266 = 31671338U;
	int64_t x267 = 231142956LL;
	uint16_t x268 = UINT16_MAX;

	t64 = ((x265<=x266)^(x267/x268));

	if (t64 != 3526LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x269 = 56U;
	int16_t x270 = INT16_MIN;
	uint16_t x271 = UINT16_MAX;
	volatile uint32_t t65 = 1617715485U;

	t65 = ((x269<=x270)^(x271/x272));

	if (t65 != 173U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x273 = INT8_MIN;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int64_t t66 = -2359421262432LL;

	t66 = ((x273<=x274)^(x275/x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -1;
	int64_t x278 = INT64_MAX;
	uint64_t x280 = 1633LLU;
	volatile uint64_t t67 = 61994788696LLU;

	t67 = ((x277<=x278)^(x279/x280));

	if (t67 != 11296230296209154LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = -1LL;
	uint16_t x282 = 2U;
	int32_t x283 = 237;
	int16_t x284 = INT16_MIN;
	volatile int32_t t68 = 909696;

	t68 = ((x281<=x282)^(x283/x284));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x285 = UINT16_MAX;
	static int64_t x286 = INT64_MIN;
	int64_t x287 = -1LL;
	static int8_t x288 = INT8_MIN;

	t69 = ((x285<=x286)^(x287/x288));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x289 = INT64_MIN;
	volatile int64_t x290 = INT64_MIN;
	int64_t x291 = INT64_MIN;
	static int64_t x292 = INT64_MAX;
	volatile int64_t t70 = -2180380647129LL;

	t70 = ((x289<=x290)^(x291/x292));

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = INT32_MIN;
	uint8_t x294 = 16U;
	int8_t x295 = INT8_MIN;
	volatile int8_t x296 = -13;
	volatile int32_t t71 = 212167254;

	t71 = ((x293<=x294)^(x295/x296));

	if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = -1;
	static volatile int32_t x299 = -1;
	volatile uint8_t x300 = 13U;
	int32_t t72 = 270;

	t72 = ((x297<=x298)^(x299/x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 26;
	int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	int8_t x304 = 14;

	t73 = ((x301<=x302)^(x303/x304));

	if (t73 != 658812288346769700LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x305 = INT16_MAX;
	int16_t x306 = INT16_MIN;
	static int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;

	t74 = ((x305<=x306)^(x307/x308));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x309 = -1LL;
	uint8_t x310 = 32U;
	volatile int32_t x311 = INT32_MAX;
	uint32_t x312 = 62151402U;
	uint32_t t75 = 0U;

	t75 = ((x309<=x310)^(x311/x312));

	if (t75 != 35U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	int32_t x314 = -1;
	int64_t x316 = INT64_MIN;

	t76 = ((x313<=x314)^(x315/x316));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MAX;
	int16_t x320 = INT16_MAX;
	volatile int64_t t77 = 20296315338720815LL;

	t77 = ((x317<=x318)^(x319/x320));

	if (t77 != -281483566907399LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = -1;
	static int32_t x322 = -1061;
	int32_t x323 = INT32_MIN;

	t78 = ((x321<=x322)^(x323/x324));

	if (t78 != -8421504) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x326 = -4;
	int8_t x327 = 0;
	static int16_t x328 = INT16_MAX;
	int32_t t79 = 30419;

	t79 = ((x325<=x326)^(x327/x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x329 = INT32_MIN;
	uint16_t x331 = 13U;
	int8_t x332 = -21;
	volatile int32_t t80 = -646635151;

	t80 = ((x329<=x330)^(x331/x332));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x333 = -688LL;
	int32_t x334 = -58;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t81 = 519795LLU;

	t81 = ((x333<=x334)^(x335/x336));

	if (t81 != 1LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = INT32_MIN;
	int64_t x340 = -8LL;
	uint64_t t82 = 13175716692710LLU;

	t82 = ((x337<=x338)^(x339/x340));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -10533161090LL;
	int8_t x342 = -1;
	int32_t x343 = INT32_MIN;
	int32_t x344 = -135926;
	volatile int32_t t83 = 1601;

	t83 = ((x341<=x342)^(x343/x344));

	if (t83 != 15799) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x346 = INT16_MIN;
	int64_t x347 = 17537964074510LL;
	static int64_t x348 = INT64_MIN;
	int64_t t84 = 1054LL;

	t84 = ((x345<=x346)^(x347/x348));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x349 = 15682U;
	static int16_t x350 = -1667;
	int32_t x351 = -7;
	static int64_t t85 = 10LL;

	t85 = ((x349<=x350)^(x351/x352));

	if (t85 != 7LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x355 = INT16_MIN;
	uint8_t x356 = UINT8_MAX;
	int32_t t86 = -5621119;

	t86 = ((x353<=x354)^(x355/x356));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	uint16_t x359 = 10U;
	static volatile int32_t t87 = 1982692;

	t87 = ((x357<=x358)^(x359/x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x362 = 803U;
	volatile uint8_t x364 = UINT8_MAX;
	int32_t t88 = -5205;

	t88 = ((x361<=x362)^(x363/x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x366 = 4206553807435833068LLU;
	volatile int8_t x368 = -1;
	volatile int64_t t89 = -21141LL;

	t89 = ((x365<=x366)^(x367/x368));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x370 = 7U;
	int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MAX;
	int64_t t90 = -1LL;

	t90 = ((x369<=x370)^(x371/x372));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x375 = 1778U;
	uint32_t x376 = 1881177441U;
	volatile uint32_t t91 = 9793U;

	t91 = ((x373<=x374)^(x375/x376));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = 14340LL;
	int16_t x378 = INT16_MAX;
	static int8_t x379 = -5;
	int16_t x380 = INT16_MIN;

	t92 = ((x377<=x378)^(x379/x380));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = -1;
	int32_t x382 = -1;
	uint32_t x383 = 3U;
	static int64_t t93 = 288288227295488346LL;

	t93 = ((x381<=x382)^(x383/x384));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = 8;
	static uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = -114977158320970427LL;
	static uint8_t x388 = UINT8_MAX;
	volatile int64_t t94 = 796995270525LL;

	t94 = ((x385<=x386)^(x387/x388));

	if (t94 != -450890816944981LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x389 = 0LLU;
	uint16_t x390 = 14U;
	int8_t x391 = -14;
	int32_t x392 = -44353186;
	volatile int32_t t95 = 1437;

	t95 = ((x389<=x390)^(x391/x392));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x394 = 42059U;
	int32_t x395 = -1;
	int64_t x396 = INT64_MAX;
	volatile int64_t t96 = 57076100939264LL;

	t96 = ((x393<=x394)^(x395/x396));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x398 = 7598545355LLU;
	uint32_t x399 = UINT32_MAX;

	t97 = ((x397<=x398)^(x399/x400));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x401 = -8660711881873209LL;
	static volatile uint32_t x402 = 2U;
	uint8_t x403 = UINT8_MAX;
	uint8_t x404 = 1U;
	int32_t t98 = 3;

	t98 = ((x401<=x402)^(x403/x404));

	if (t98 != 254) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x406 = 142451LLU;
	int16_t x407 = -1;
	static int64_t x408 = INT64_MIN;

	t99 = ((x405<=x406)^(x407/x408));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

