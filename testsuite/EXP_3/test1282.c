#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t x2 = UINT32_MAX;
int8_t x8 = INT8_MAX;
uint64_t x16 = UINT64_MAX;
volatile int32_t t3 = 4878595;
static volatile int8_t x17 = 1;
int32_t t4 = 52140295;
static int8_t x37 = INT8_MAX;
int8_t x39 = -52;
volatile int32_t t10 = -87;
int64_t x45 = 17490LL;
int16_t x46 = INT16_MIN;
uint8_t x52 = UINT8_MAX;
volatile uint16_t x54 = UINT16_MAX;
volatile uint16_t x55 = 0U;
int64_t x72 = -1LL;
volatile int32_t x75 = -799877;
volatile int32_t t18 = 358550469;
volatile int32_t t19 = -127160;
volatile int32_t t20 = -29;
volatile int32_t t21 = 549;
int64_t x94 = INT64_MAX;
int32_t x95 = INT32_MIN;
int8_t x107 = INT8_MAX;
int32_t x110 = INT32_MIN;
static int32_t x111 = INT32_MIN;
uint16_t x115 = UINT16_MAX;
int32_t t29 = 55;
int8_t x122 = INT8_MAX;
static int16_t x126 = 1;
volatile int32_t t32 = 2940;
int64_t x139 = INT64_MAX;
int32_t x140 = INT32_MAX;
int32_t t34 = 1999344;
int64_t x142 = 513984928LL;
volatile uint8_t x146 = 115U;
int8_t x147 = 0;
int32_t t36 = 105;
int32_t t39 = 36881;
int16_t x161 = INT16_MIN;
int32_t t42 = 1009922303;
volatile int32_t x178 = -64127;
int16_t x184 = INT16_MIN;
int16_t x190 = INT16_MIN;
static int32_t t47 = 147;
uint64_t x194 = 919558290517LLU;
static int16_t x201 = INT16_MAX;
volatile int32_t t50 = 3;
uint64_t x206 = UINT64_MAX;
int64_t x210 = INT64_MIN;
uint8_t x211 = 88U;
volatile int16_t x218 = -9309;
int32_t t54 = -2443656;
int32_t t55 = -1;
uint8_t x226 = 3U;
uint64_t x229 = UINT64_MAX;
static volatile int32_t t57 = -197916;
int64_t x248 = INT64_MIN;
int64_t x255 = -22785822761905LL;
int64_t x262 = 15LL;
static uint8_t x270 = UINT8_MAX;
int16_t x273 = INT16_MIN;
volatile int64_t x274 = INT64_MIN;
int8_t x277 = INT8_MIN;
int32_t x282 = INT32_MIN;
int16_t x294 = INT16_MAX;
volatile int16_t x295 = 0;
static int32_t t73 = -5656834;
static int32_t x312 = INT32_MAX;
uint16_t x319 = 100U;
static int32_t t79 = -237621;
volatile uint16_t x327 = UINT16_MAX;
uint64_t x329 = UINT64_MAX;
volatile int16_t x333 = -1;
volatile uint32_t x337 = 560618063U;
int16_t x351 = INT16_MIN;
volatile int32_t t90 = 243094;
volatile uint16_t x367 = 106U;
volatile uint8_t x373 = 26U;
static int32_t t93 = 2;
int32_t t94 = -19604423;
int32_t x386 = 14768;
volatile uint16_t x390 = UINT16_MAX;
uint16_t x397 = 17U;
volatile int32_t t99 = -4606073;


void f0(void) {
	uint32_t x1 = 3U;
	int16_t x3 = INT16_MIN;
	uint64_t x4 = UINT64_MAX;
	volatile int32_t t0 = -140444490;

	t0 = ((x1==x2)==(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -6176632;
	uint16_t x6 = 693U;
	volatile int8_t x7 = INT8_MIN;
	volatile int32_t t1 = 48254593;

	t1 = ((x5==x6)==(x7==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 7198LL;
	volatile int32_t x10 = INT32_MIN;
	int64_t x11 = 3543464LL;
	uint32_t x12 = 171178805U;
	volatile int32_t t2 = 46;

	t2 = ((x9==x10)==(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static volatile uint8_t x14 = UINT8_MAX;
	int8_t x15 = 46;

	t3 = ((x13==x14)==(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x18 = UINT16_MAX;
	uint64_t x19 = 1011028LLU;
	static int16_t x20 = INT16_MAX;

	t4 = ((x17==x18)==(x19==x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 31399U;
	volatile uint64_t x22 = 1397LLU;
	volatile uint8_t x23 = 2U;
	uint32_t x24 = 4322U;
	int32_t t5 = 960164717;

	t5 = ((x21==x22)==(x23==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -1LL;
	uint8_t x26 = UINT8_MAX;
	static uint32_t x27 = UINT32_MAX;
	int64_t x28 = INT64_MIN;
	int32_t t6 = -831;

	t6 = ((x25==x26)==(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -83243016635111LL;
	int32_t x30 = INT32_MAX;
	static int32_t x31 = -1;
	uint64_t x32 = 11LLU;
	volatile int32_t t7 = 127420;

	t7 = ((x29==x30)==(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x33 = INT32_MIN;
	uint64_t x34 = UINT64_MAX;
	volatile uint8_t x35 = 66U;
	static int32_t x36 = INT32_MAX;
	int32_t t8 = 0;

	t8 = ((x33==x34)==(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MIN;
	int8_t x40 = -1;
	int32_t t9 = -283156827;

	t9 = ((x37==x38)==(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MAX;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = 12906900;
	int64_t x44 = INT64_MIN;

	t10 = ((x41==x42)==(x43==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x47 = -1;
	uint32_t x48 = 1U;
	static int32_t t11 = -285;

	t11 = ((x45==x46)==(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 7U;
	uint64_t x50 = 858371906314966LLU;
	volatile int64_t x51 = 116415313030464LL;
	static int32_t t12 = -49;

	t12 = ((x49==x50)==(x51==x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	static int16_t x56 = -1;
	static volatile int32_t t13 = 0;

	t13 = ((x53==x54)==(x55==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = UINT32_MAX;
	int8_t x60 = INT8_MIN;
	int32_t t14 = 189564711;

	t14 = ((x57==x58)==(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -8;
	int16_t x62 = INT16_MAX;
	int16_t x63 = INT16_MAX;
	static uint16_t x64 = 2672U;
	static int32_t t15 = 981646;

	t15 = ((x61==x62)==(x63==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MAX;
	uint8_t x66 = UINT8_MAX;
	static uint64_t x67 = 4402006555LLU;
	volatile int8_t x68 = INT8_MIN;
	int32_t t16 = -398758;

	t16 = ((x65==x66)==(x67==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = 436378633LL;
	static uint8_t x70 = UINT8_MAX;
	int64_t x71 = INT64_MIN;
	static volatile int32_t t17 = 64281;

	t17 = ((x69==x70)==(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = 13485834U;
	int8_t x74 = INT8_MIN;
	static uint16_t x76 = UINT16_MAX;

	t18 = ((x73==x74)==(x75==x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 579294988521352LLU;
	int16_t x78 = INT16_MIN;
	volatile uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;

	t19 = ((x77==x78)==(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 15600U;
	int8_t x82 = INT8_MAX;
	uint32_t x83 = UINT32_MAX;
	int8_t x84 = INT8_MIN;

	t20 = ((x81==x82)==(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = 1;
	static int16_t x86 = INT16_MIN;
	int64_t x87 = -3906819650721LL;
	uint32_t x88 = 229750U;

	t21 = ((x85==x86)==(x87==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 706664717548LLU;
	uint8_t x90 = 4U;
	int8_t x91 = 0;
	uint8_t x92 = 1U;
	int32_t t22 = 5898010;

	t22 = ((x89==x90)==(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = -760LL;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 81793;

	t23 = ((x93==x94)==(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x97 = UINT16_MAX;
	int16_t x98 = -1;
	static uint16_t x99 = UINT16_MAX;
	uint32_t x100 = UINT32_MAX;
	static int32_t t24 = 15745;

	t24 = ((x97==x98)==(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x101 = 339430730012LLU;
	int64_t x102 = INT64_MIN;
	int16_t x103 = INT16_MIN;
	static uint16_t x104 = 66U;
	int32_t t25 = 1;

	t25 = ((x101==x102)==(x103==x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x105 = 249747798U;
	int8_t x106 = INT8_MIN;
	static uint32_t x108 = 1U;
	volatile int32_t t26 = -24;

	t26 = ((x105==x106)==(x107==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 4;
	static uint32_t x112 = UINT32_MAX;
	int32_t t27 = -4;

	t27 = ((x109==x110)==(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = 1641292455LL;
	static uint32_t x116 = UINT32_MAX;
	int32_t t28 = 200;

	t28 = ((x113==x114)==(x115==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MIN;
	volatile int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MAX;
	static uint64_t x120 = UINT64_MAX;

	t29 = ((x117==x118)==(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	volatile int32_t t30 = -229780;

	t30 = ((x121==x122)==(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 24U;
	int16_t x127 = -199;
	int8_t x128 = INT8_MAX;
	volatile int32_t t31 = 342083;

	t31 = ((x125==x126)==(x127==x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MAX;
	uint16_t x130 = 6U;
	int8_t x131 = 6;
	int32_t x132 = INT32_MAX;

	t32 = ((x129==x130)==(x131==x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 46090U;
	static int16_t x134 = INT16_MIN;
	static int64_t x135 = INT64_MIN;
	static int32_t x136 = -252220497;
	volatile int32_t t33 = -1;

	t33 = ((x133==x134)==(x135==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int64_t x138 = INT64_MAX;

	t34 = ((x137==x138)==(x139==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = 0LL;
	int8_t x143 = INT8_MIN;
	static uint64_t x144 = 32332670481266LLU;
	int32_t t35 = -6011176;

	t35 = ((x141==x142)==(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 266096LLU;
	volatile uint16_t x148 = 26U;

	t36 = ((x145==x146)==(x147==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	volatile uint32_t x150 = 63739U;
	int16_t x151 = INT16_MAX;
	int64_t x152 = INT64_MIN;
	int32_t t37 = -758;

	t37 = ((x149==x150)==(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = 21;
	volatile int16_t x154 = 111;
	int32_t x155 = INT32_MIN;
	int64_t x156 = INT64_MIN;
	static int32_t t38 = -3495254;

	t38 = ((x153==x154)==(x155==x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MAX;
	int64_t x158 = INT64_MAX;
	volatile int32_t x159 = -1;
	int64_t x160 = INT64_MIN;

	t39 = ((x157==x158)==(x159==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	static uint16_t x163 = 3U;
	int8_t x164 = -1;
	int32_t t40 = 1;

	t40 = ((x161==x162)==(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 111U;
	int32_t x166 = INT32_MIN;
	static int64_t x167 = INT64_MAX;
	int8_t x168 = INT8_MAX;
	volatile int32_t t41 = 64633293;

	t41 = ((x165==x166)==(x167==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 11;
	uint16_t x170 = 8729U;
	static int32_t x171 = INT32_MIN;
	static uint64_t x172 = 4156LLU;

	t42 = ((x169==x170)==(x171==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -27;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	int8_t x176 = -42;
	int32_t t43 = -1;

	t43 = ((x173==x174)==(x175==x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 105U;
	volatile uint64_t x179 = UINT64_MAX;
	int32_t x180 = -1;
	static volatile int32_t t44 = -29105216;

	t44 = ((x177==x178)==(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	static volatile int64_t x182 = INT64_MAX;
	uint64_t x183 = UINT64_MAX;
	volatile int32_t t45 = 457;

	t45 = ((x181==x182)==(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	volatile int64_t x186 = 3LL;
	static int8_t x187 = 7;
	int8_t x188 = -1;
	volatile int32_t t46 = 8528217;

	t46 = ((x185==x186)==(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = 0;
	int16_t x191 = INT16_MIN;
	volatile int32_t x192 = INT32_MIN;

	t47 = ((x189==x190)==(x191==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x193 = INT32_MAX;
	volatile int64_t x195 = -1LL;
	uint64_t x196 = 156704LLU;
	static int32_t t48 = -5;

	t48 = ((x193==x194)==(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 11415U;
	static int64_t x198 = 4380041071024120LL;
	int64_t x199 = -449207918044711LL;
	int32_t x200 = INT32_MIN;
	int32_t t49 = -22575015;

	t49 = ((x197==x198)==(x199==x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x202 = 8235U;
	volatile int64_t x203 = INT64_MAX;
	int64_t x204 = 55LL;

	t50 = ((x201==x202)==(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 17;
	int16_t x207 = 1;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -1;

	t51 = ((x205==x206)==(x207==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	volatile uint32_t x212 = 102773560U;
	static volatile int32_t t52 = 104723;

	t52 = ((x209==x210)==(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 607928U;
	int32_t x215 = INT32_MIN;
	volatile uint16_t x216 = 34U;
	int32_t t53 = -426904;

	t53 = ((x213==x214)==(x215==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	int8_t x219 = INT8_MIN;
	volatile int32_t x220 = 27;

	t54 = ((x217==x218)==(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MIN;
	uint8_t x223 = 3U;
	volatile uint64_t x224 = UINT64_MAX;

	t55 = ((x221==x222)==(x223==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = UINT32_MAX;
	static int64_t x227 = INT64_MAX;
	volatile int32_t x228 = -1;
	int32_t t56 = 3;

	t56 = ((x225==x226)==(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -94LL;
	volatile int8_t x231 = 0;
	static int8_t x232 = INT8_MAX;

	t57 = ((x229==x230)==(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	int8_t x234 = -10;
	int8_t x235 = INT8_MIN;
	uint64_t x236 = 3258537517LLU;
	static volatile int32_t t58 = 1;

	t58 = ((x233==x234)==(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MIN;
	int64_t x238 = 26447545508881LL;
	uint64_t x239 = 661838839199679031LLU;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t59 = -197318;

	t59 = ((x237==x238)==(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint32_t x242 = 30235127U;
	static uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t60 = -32;

	t60 = ((x241==x242)==(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 18;
	int32_t x246 = -306;
	int16_t x247 = -180;
	int32_t t61 = 13578500;

	t61 = ((x245==x246)==(x247==x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = 0;
	int8_t x250 = INT8_MAX;
	uint32_t x251 = 5993U;
	uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 36221943;

	t62 = ((x249==x250)==(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	static volatile uint64_t x254 = 271441778258LLU;
	static volatile int64_t x256 = INT64_MIN;
	int32_t t63 = -3397;

	t63 = ((x253==x254)==(x255==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	uint16_t x258 = 14602U;
	static int64_t x259 = -12LL;
	uint16_t x260 = UINT16_MAX;
	static volatile int32_t t64 = -110973;

	t64 = ((x257==x258)==(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 1176634540903LLU;
	static volatile int16_t x263 = 12;
	int64_t x264 = -1LL;
	volatile int32_t t65 = 427477;

	t65 = ((x261==x262)==(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MIN;
	uint8_t x266 = 5U;
	uint8_t x267 = UINT8_MAX;
	int64_t x268 = -1592064LL;
	volatile int32_t t66 = -3040;

	t66 = ((x265==x266)==(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -93605;
	uint16_t x271 = 1U;
	uint64_t x272 = 224861267582846LLU;
	volatile int32_t t67 = 41551;

	t67 = ((x269==x270)==(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x275 = 25900367LL;
	static int32_t x276 = -584464101;
	volatile int32_t t68 = 110711342;

	t68 = ((x273==x274)==(x275==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -349LL;
	int16_t x279 = INT16_MIN;
	static uint64_t x280 = 35688206571426LLU;
	volatile int32_t t69 = 14921420;

	t69 = ((x277==x278)==(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x283 = UINT8_MAX;
	int8_t x284 = -2;
	int32_t t70 = 491;

	t70 = ((x281==x282)==(x283==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = -1;
	uint8_t x287 = 13U;
	static int16_t x288 = 2;
	volatile int32_t t71 = 734352532;

	t71 = ((x285==x286)==(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MAX;
	uint8_t x290 = 8U;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = 0;
	volatile int32_t t72 = 652;

	t72 = ((x289==x290)==(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x293 = INT32_MAX;
	volatile uint16_t x296 = UINT16_MAX;

	t73 = ((x293==x294)==(x295==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 9;
	static int32_t x298 = -1260154;
	static volatile int16_t x299 = INT16_MIN;
	int64_t x300 = 3583415510403LL;
	volatile int32_t t74 = -5;

	t74 = ((x297==x298)==(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 422283U;
	volatile int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 274;

	t75 = ((x301==x302)==(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 2;
	uint32_t x306 = 27U;
	static uint64_t x307 = 234LLU;
	int32_t x308 = 806;
	int32_t t76 = -508846;

	t76 = ((x305==x306)==(x307==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	static int8_t x310 = -1;
	int32_t x311 = INT32_MIN;
	int32_t t77 = 3;

	t77 = ((x309==x310)==(x311==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	volatile int16_t x314 = -163;
	volatile uint32_t x315 = UINT32_MAX;
	volatile int32_t x316 = INT32_MAX;
	int32_t t78 = 35721;

	t78 = ((x313==x314)==(x315==x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 1U;
	static uint32_t x318 = 551299398U;
	int8_t x320 = 46;

	t79 = ((x317==x318)==(x319==x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 3U;
	int64_t x322 = -1822768834482683437LL;
	volatile int8_t x323 = 14;
	static int16_t x324 = INT16_MIN;
	int32_t t80 = -120415;

	t80 = ((x321==x322)==(x323==x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 33;
	int64_t x326 = INT64_MIN;
	uint8_t x328 = 6U;
	int32_t t81 = -312510;

	t81 = ((x325==x326)==(x327==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = -1LL;
	int64_t x331 = 26509744603LL;
	int16_t x332 = INT16_MAX;
	volatile int32_t t82 = -11;

	t82 = ((x329==x330)==(x331==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x334 = -4;
	int64_t x335 = INT64_MAX;
	uint32_t x336 = 8U;
	static volatile int32_t t83 = 16111287;

	t83 = ((x333==x334)==(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = INT32_MAX;
	int64_t x339 = 875563526756LL;
	uint32_t x340 = 58107575U;
	volatile int32_t t84 = -86643;

	t84 = ((x337==x338)==(x339==x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 477LL;
	volatile int64_t x342 = -3LL;
	int64_t x343 = -3LL;
	int32_t x344 = -1;
	static volatile int32_t t85 = -15696;

	t85 = ((x341==x342)==(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = UINT32_MAX;
	static uint32_t x346 = 30380U;
	static int32_t x347 = INT32_MIN;
	int16_t x348 = INT16_MAX;
	int32_t t86 = 1753;

	t86 = ((x345==x346)==(x347==x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	volatile int8_t x350 = 13;
	int16_t x352 = INT16_MIN;
	static int32_t t87 = -13573;

	t87 = ((x349==x350)==(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	uint32_t x354 = 7310283U;
	volatile int32_t x355 = 0;
	int16_t x356 = 6699;
	volatile int32_t t88 = 313115305;

	t88 = ((x353==x354)==(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 211721602U;
	int8_t x358 = -33;
	uint8_t x359 = 2U;
	int64_t x360 = INT64_MIN;
	volatile int32_t t89 = 1;

	t89 = ((x357==x358)==(x359==x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	uint8_t x362 = 16U;
	static int64_t x363 = INT64_MIN;
	uint16_t x364 = UINT16_MAX;

	t90 = ((x361==x362)==(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 8;
	volatile int32_t x366 = -1;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = 22585;

	t91 = ((x365==x366)==(x367==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 1U;
	uint16_t x370 = 883U;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = 987391650U;
	int32_t t92 = 58377580;

	t92 = ((x369==x370)==(x371==x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = 1690;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;

	t93 = ((x373==x374)==(x375==x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	uint64_t x378 = 73LLU;
	int64_t x379 = INT64_MIN;
	int8_t x380 = INT8_MAX;

	t94 = ((x377==x378)==(x379==x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 4765382314LLU;
	static int64_t x382 = INT64_MIN;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 84638505;

	t95 = ((x381==x382)==(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint8_t x385 = UINT8_MAX;
	int16_t x387 = INT16_MIN;
	static volatile int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 0;

	t96 = ((x385==x386)==(x387==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int32_t x391 = -2;
	static uint16_t x392 = 11435U;
	volatile int32_t t97 = -1970030;

	t97 = ((x389==x390)==(x391==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x393 = UINT32_MAX;
	int16_t x394 = INT16_MIN;
	uint16_t x395 = 5510U;
	static uint32_t x396 = UINT32_MAX;
	int32_t t98 = -49;

	t98 = ((x393==x394)==(x395==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MAX;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;

	t99 = ((x397==x398)==(x399==x400));

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

