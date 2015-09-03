#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -5804343;
uint16_t x5 = 9385U;
uint8_t x9 = UINT8_MAX;
static volatile int8_t x17 = -1;
uint8_t x19 = 68U;
volatile uint8_t x23 = 68U;
uint32_t x28 = 30U;
uint16_t x29 = 5U;
static int8_t x31 = -1;
static volatile int32_t t7 = -549;
static int8_t x35 = 1;
uint32_t x36 = UINT32_MAX;
volatile int32_t t10 = 91;
int8_t x51 = INT8_MIN;
static volatile int32_t t13 = -351;
uint64_t x68 = UINT64_MAX;
int32_t t15 = 191495;
static uint32_t t17 = 255U;
volatile int32_t x98 = 5357;
int32_t t22 = -123686348;
static volatile int64_t t23 = INT64_MIN;
int32_t x114 = -31672;
volatile int32_t t27 = -8139225;
int16_t x128 = INT16_MIN;
uint64_t t28 = 1651683149378LLU;
volatile uint8_t x130 = 39U;
volatile uint64_t x137 = 555533574285LLU;
static int8_t x140 = -1;
uint64_t x142 = 340676966249LLU;
int16_t x145 = INT16_MIN;
int16_t x148 = INT16_MIN;
volatile int32_t t34 = 374234;
static volatile uint8_t x157 = 100U;
volatile int32_t x163 = -17158816;
volatile int32_t t36 = 21192757;
uint8_t x167 = UINT8_MAX;
uint64_t x170 = 93865324109545LLU;
static volatile int32_t t38 = 5894;
int64_t x173 = INT64_MIN;
int32_t x174 = INT32_MAX;
int16_t x176 = -1;
int8_t x179 = 2;
uint64_t x188 = 1110440LLU;
static int16_t x202 = -1;
int32_t t46 = -13685;
uint32_t t47 = UINT32_MAX;
static int16_t x213 = INT16_MAX;
uint64_t x215 = 8241434640426511LLU;
volatile int32_t x220 = 81466;
int32_t t50 = -990974208;
uint64_t x223 = 194540LLU;
volatile int32_t t51 = -221;
uint64_t x226 = UINT64_MAX;
volatile int8_t x236 = -1;
int16_t x240 = INT16_MAX;
volatile int32_t t56 = -5033755;
int16_t x246 = -34;
int32_t t57 = -319;
int8_t x250 = INT8_MIN;
uint64_t x251 = 243248286149035785LLU;
int8_t x252 = INT8_MAX;
static volatile int32_t t59 = 359071;
static int16_t x260 = -15;
uint32_t x268 = UINT32_MAX;
int32_t t62 = 148;
static int32_t t63 = -2849145;
static int16_t x273 = -1;
int32_t x281 = -688851;
uint8_t x284 = 9U;
static volatile int32_t t66 = -1;
volatile uint16_t x285 = UINT16_MAX;
uint8_t x291 = UINT8_MAX;
uint64_t x297 = 3041507820666063462LLU;
static uint64_t x300 = UINT64_MAX;
volatile uint16_t x303 = 14U;
static int8_t x309 = INT8_MIN;
static uint32_t x317 = UINT32_MAX;
int64_t x320 = -2419591170LL;
int16_t x322 = -1;
volatile int32_t t76 = 25;
int16_t x330 = INT16_MIN;
static int16_t x334 = INT16_MIN;
int8_t x335 = -1;
int32_t x336 = INT32_MIN;
volatile uint16_t x350 = UINT16_MAX;
static int8_t x351 = -1;
static int16_t x352 = -1;
int8_t x357 = 3;
int16_t x361 = INT16_MAX;
uint64_t x363 = 82LLU;
int8_t x364 = INT8_MAX;
volatile int16_t x367 = -1;
int16_t x368 = -1;
volatile uint64_t t87 = 82LLU;
volatile uint64_t x381 = 1003173658207979654LLU;
int16_t x383 = 1;
int32_t x385 = -1;
volatile uint32_t x386 = UINT32_MAX;
int64_t x394 = 17807159LL;
static int64_t x396 = -1LL;
volatile int32_t t91 = -477238;
static uint8_t x403 = 5U;
uint64_t x410 = 3812143828LLU;
static int32_t t95 = 199082519;
static int16_t x418 = INT16_MAX;
int32_t x421 = INT32_MIN;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	uint64_t x3 = UINT64_MAX;
	volatile int64_t x4 = -1LL;

	t0 = (x1^((x2+x3)<x4));

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -2627;
	int16_t x7 = INT16_MIN;
	static int64_t x8 = INT64_MAX;
	volatile int32_t t1 = -820199;

	t1 = (x5^((x6+x7)<x8));

	if (t1 != 9384) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x10 = 152263397U;
	uint32_t x11 = 9083U;
	int64_t x12 = -437474836860LL;
	volatile int32_t t2 = 21707;

	t2 = (x9^((x10+x11)<x12));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int16_t x14 = -1;
	uint8_t x15 = 49U;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -492;

	t3 = (x13^((x14+x15)<x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MAX;
	volatile int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -64382;

	t4 = (x17^((x18+x19)<x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 3728U;
	int16_t x22 = -382;
	int8_t x24 = INT8_MAX;
	static int32_t t5 = 0;

	t5 = (x21^((x22+x23)<x24));

	if (t5 != 3729) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 1;
	uint64_t x26 = UINT64_MAX;
	volatile int32_t x27 = -1;
	static volatile int32_t t6 = -217;

	t6 = (x25^((x26+x27)<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x30 = INT16_MIN;
	int32_t x32 = INT32_MAX;

	t7 = (x29^((x30+x31)<x32));

	if (t7 != 4) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int16_t x34 = -1;
	volatile int64_t t8 = -3236888LL;

	t8 = (x33^((x34+x35)<x36));

	if (t8 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 10U;
	static int32_t x38 = 44630;
	volatile uint16_t x39 = 20867U;
	uint64_t x40 = UINT64_MAX;
	static volatile int32_t t9 = 910;

	t9 = (x37^((x38+x39)<x40));

	if (t9 != 11) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint32_t x42 = 197571U;
	int16_t x43 = INT16_MAX;
	uint8_t x44 = 2U;

	t10 = (x41^((x42+x43)<x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -1LL;
	volatile uint32_t x50 = UINT32_MAX;
	volatile int16_t x52 = 336;
	int64_t t11 = -15251551363994473LL;

	t11 = (x49^((x50+x51)<x52));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 4020659279598LLU;
	static int16_t x54 = -136;
	int32_t x55 = 67918354;
	volatile uint8_t x56 = 2U;
	volatile uint64_t t12 = 37190129987919910LLU;

	t12 = (x53^((x54+x55)<x56));

	if (t12 != 4020659279598LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	static int64_t x58 = INT64_MIN;
	uint64_t x59 = 10LLU;
	uint8_t x60 = 46U;

	t13 = (x57^((x58+x59)<x60));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int32_t x62 = -795;
	int16_t x63 = INT16_MIN;
	volatile int32_t x64 = INT32_MIN;
	int32_t t14 = INT32_MIN;

	t14 = (x61^((x62+x63)<x64));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	volatile int32_t x66 = INT32_MIN;
	volatile int64_t x67 = INT64_MAX;

	t15 = (x65^((x66+x67)<x68));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MAX;
	int32_t x70 = 249690;
	int64_t x71 = -447259LL;
	int16_t x72 = -3563;
	volatile int32_t t16 = 676282;

	t16 = (x69^((x70+x71)<x72));

	if (t16 != 126) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x73 = 423U;
	static uint32_t x74 = 847778027U;
	int8_t x75 = -1;
	volatile int8_t x76 = INT8_MIN;

	t17 = (x73^((x74+x75)<x76));

	if (t17 != 422U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x77 = -8243302404LL;
	static int64_t x78 = INT64_MAX;
	volatile int32_t x79 = -237;
	static volatile uint64_t x80 = UINT64_MAX;
	int64_t t18 = -423768524053225LL;

	t18 = (x77^((x78+x79)<x80));

	if (t18 != -8243302403LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	uint64_t x82 = 550944383285135LLU;
	int8_t x83 = INT8_MIN;
	uint32_t x84 = 2U;
	volatile int32_t t19 = -304;

	t19 = (x81^((x82+x83)<x84));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x85 = 0U;
	volatile uint8_t x86 = 23U;
	static int32_t x87 = INT32_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile uint32_t t20 = 14746174U;

	t20 = (x85^((x86+x87)<x88));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int8_t x89 = INT8_MAX;
	uint16_t x90 = UINT16_MAX;
	uint32_t x91 = 68U;
	static int16_t x92 = -8;
	volatile int32_t t21 = 7485321;

	t21 = (x89^((x90+x91)<x92));

	if (t21 != 126) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x97 = -1;
	int64_t x99 = INT64_MIN;
	static volatile int8_t x100 = INT8_MIN;

	t22 = (x97^((x98+x99)<x100));

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = INT64_MIN;
	static int16_t x106 = -1;
	int16_t x107 = 265;
	volatile uint8_t x108 = UINT8_MAX;

	t23 = (x105^((x106+x107)<x108));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 31U;
	uint8_t x110 = 4U;
	uint32_t x111 = 61257521U;
	int16_t x112 = INT16_MAX;
	static volatile int32_t t24 = -977;

	t24 = (x109^((x110+x111)<x112));

	if (t24 != 31) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 48LLU;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MIN;
	volatile uint64_t t25 = 565170998LLU;

	t25 = (x113^((x114+x115)<x116));

	if (t25 != 48LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = -10;
	uint16_t x118 = 117U;
	volatile uint32_t x119 = 1943903U;
	uint32_t x120 = 63704192U;
	static int32_t t26 = 5116980;

	t26 = (x117^((x118+x119)<x120));

	if (t26 != -9) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	int32_t x122 = -1;
	volatile int8_t x123 = -1;
	int8_t x124 = -1;

	t27 = (x121^((x122+x123)<x124));

	if (t27 != -127) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = 17LLU;
	volatile uint8_t x126 = 7U;
	int32_t x127 = 4150;

	t28 = (x125^((x126+x127)<x128));

	if (t28 != 17LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = -3;
	static int64_t x131 = 40369375366LL;
	int64_t x132 = -255046LL;
	int32_t t29 = -32803;

	t29 = (x129^((x130+x131)<x132));

	if (t29 != -3) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x133 = 1658U;
	int16_t x134 = INT16_MIN;
	static volatile int8_t x135 = -5;
	static volatile int8_t x136 = -1;
	volatile int32_t t30 = -3005849;

	t30 = (x133^((x134+x135)<x136));

	if (t30 != 1659) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x138 = INT64_MIN;
	volatile uint16_t x139 = UINT16_MAX;
	static volatile uint64_t t31 = 14LLU;

	t31 = (x137^((x138+x139)<x140));

	if (t31 != 555533574284LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x141 = INT8_MIN;
	int32_t x143 = -1;
	volatile int16_t x144 = -328;
	volatile int32_t t32 = -4;

	t32 = (x141^((x142+x143)<x144));

	if (t32 != -127) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x146 = UINT32_MAX;
	int8_t x147 = -1;
	int32_t t33 = 229734;

	t33 = (x145^((x146+x147)<x148));

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -1;
	static uint8_t x154 = UINT8_MAX;
	uint64_t x155 = 6LLU;
	volatile uint16_t x156 = 3U;

	t34 = (x153^((x154+x155)<x156));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x158 = 15361U;
	static volatile int16_t x159 = 310;
	uint16_t x160 = 105U;
	static int32_t t35 = -6;

	t35 = (x157^((x158+x159)<x160));

	if (t35 != 100) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = 16;
	static int64_t x162 = INT64_MAX;
	int64_t x164 = -3487463912364227667LL;

	t36 = (x161^((x162+x163)<x164));

	if (t36 != 16) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x165 = 51460741U;
	uint64_t x166 = 10872417988LLU;
	int16_t x168 = INT16_MIN;
	volatile uint32_t t37 = 1U;

	t37 = (x165^((x166+x167)<x168));

	if (t37 != 51460740U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -75;
	uint64_t x171 = 2845275288574303567LLU;
	int32_t x172 = 217;

	t38 = (x169^((x170+x171)<x172));

	if (t38 != -75) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x175 = 109U;
	static int64_t t39 = 3462LL;

	t39 = (x173^((x174+x175)<x176));

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = 68321U;
	uint16_t x178 = 84U;
	int8_t x180 = -1;
	volatile uint32_t t40 = 10571437U;

	t40 = (x177^((x178+x179)<x180));

	if (t40 != 68321U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = 18883118U;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	uint64_t x184 = UINT64_MAX;
	uint32_t t41 = 720U;

	t41 = (x181^((x182+x183)<x184));

	if (t41 != 18883119U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	uint8_t x186 = 30U;
	volatile uint32_t x187 = 19864U;
	volatile int64_t t42 = -191429377926764LL;

	t42 = (x185^((x186+x187)<x188));

	if (t42 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MIN;
	int32_t x190 = INT32_MIN;
	uint16_t x191 = 0U;
	volatile uint32_t x192 = UINT32_MAX;
	int32_t t43 = -3;

	t43 = (x189^((x190+x191)<x192));

	if (t43 != -32767) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x193 = 455;
	int16_t x194 = INT16_MIN;
	int64_t x195 = -1LL;
	static int64_t x196 = INT64_MIN;
	static int32_t t44 = -443869349;

	t44 = (x193^((x194+x195)<x196));

	if (t44 != 455) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x197 = INT32_MAX;
	static uint16_t x198 = 6012U;
	static volatile int32_t x199 = INT32_MIN;
	int64_t x200 = INT64_MIN;
	int32_t t45 = INT32_MAX;

	t45 = (x197^((x198+x199)<x200));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x201 = 10U;
	int16_t x203 = 406;
	static int32_t x204 = -1;

	t46 = (x201^((x202+x203)<x204));

	if (t46 != 10) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = 24;
	uint8_t x207 = 80U;
	int16_t x208 = 0;

	t47 = (x205^((x206+x207)<x208));

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x209 = 114327U;
	uint16_t x210 = 1U;
	static uint64_t x211 = 5595LLU;
	static volatile int8_t x212 = -5;
	uint32_t t48 = 0U;

	t48 = (x209^((x210+x211)<x212));

	if (t48 != 114326U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x214 = INT16_MAX;
	volatile uint32_t x216 = UINT32_MAX;
	int32_t t49 = -75444;

	t49 = (x213^((x214+x215)<x216));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = -1;
	int32_t x218 = INT32_MAX;
	uint64_t x219 = 736700241LLU;

	t50 = (x217^((x218+x219)<x220));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int32_t x222 = INT32_MIN;
	uint32_t x224 = 1471U;

	t51 = (x221^((x222+x223)<x224));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x225 = 243430196998LLU;
	uint16_t x227 = 3U;
	static volatile int32_t x228 = INT32_MIN;
	static volatile uint64_t t52 = 90366LLU;

	t52 = (x225^((x226+x227)<x228));

	if (t52 != 243430196999LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -32;
	static uint64_t x230 = UINT64_MAX;
	volatile int16_t x231 = INT16_MIN;
	volatile int8_t x232 = 3;
	static volatile int32_t t53 = -56553;

	t53 = (x229^((x230+x231)<x232));

	if (t53 != -32) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = 785568552LL;
	static int64_t x234 = INT64_MIN;
	uint16_t x235 = 3583U;
	static volatile int64_t t54 = 8752585943266908LL;

	t54 = (x233^((x234+x235)<x236));

	if (t54 != 785568553LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -42832LL;
	int8_t x238 = -25;
	uint64_t x239 = UINT64_MAX;
	static volatile int64_t t55 = 3817367355LL;

	t55 = (x237^((x238+x239)<x240));

	if (t55 != -42832LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	int16_t x242 = -1;
	volatile uint16_t x243 = 1U;
	int32_t x244 = INT32_MIN;

	t56 = (x241^((x242+x243)<x244));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x245 = 9U;
	static int16_t x247 = INT16_MAX;
	volatile int64_t x248 = INT64_MIN;

	t57 = (x245^((x246+x247)<x248));

	if (t57 != 9) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint8_t x249 = 3U;
	int32_t t58 = -85069606;

	t58 = (x249^((x250+x251)<x252));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x253 = INT16_MIN;
	static volatile int32_t x254 = -1;
	int32_t x255 = -846298;
	uint16_t x256 = 3U;

	t59 = (x253^((x254+x255)<x256));

	if (t59 != -32767) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	int16_t x258 = INT16_MIN;
	static uint32_t x259 = UINT32_MAX;
	static volatile int64_t t60 = -254LL;

	t60 = (x257^((x258+x259)<x260));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x261 = 5U;
	static int32_t x262 = 1;
	static int64_t x263 = INT64_MIN;
	int64_t x264 = INT64_MIN;
	int32_t t61 = -2308637;

	t61 = (x261^((x262+x263)<x264));

	if (t61 != 5) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x265 = 35;
	volatile uint16_t x266 = 4819U;
	static uint8_t x267 = 13U;

	t62 = (x265^((x266+x267)<x268));

	if (t62 != 34) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = 5;
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MIN;
	int64_t x272 = INT64_MIN;

	t63 = (x269^((x270+x271)<x272));

	if (t63 != 5) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x274 = -173;
	volatile int8_t x275 = -1;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t64 = -439307;

	t64 = (x273^((x274+x275)<x276));

	if (t64 != -2) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x277 = UINT32_MAX;
	int32_t x278 = INT32_MIN;
	uint32_t x279 = 21788U;
	static int32_t x280 = -1;
	uint32_t t65 = 1464U;

	t65 = (x277^((x278+x279)<x280));

	if (t65 != 4294967294U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x282 = INT8_MIN;
	uint16_t x283 = 828U;

	t66 = (x281^((x282+x283)<x284));

	if (t66 != -688851) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x286 = INT16_MIN;
	static int64_t x287 = -1LL;
	uint8_t x288 = 0U;
	static volatile int32_t t67 = -25;

	t67 = (x285^((x286+x287)<x288));

	if (t67 != 65534) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x289 = 946LLU;
	int64_t x290 = 443705LL;
	int64_t x292 = INT64_MAX;
	static uint64_t t68 = 64801LLU;

	t68 = (x289^((x290+x291)<x292));

	if (t68 != 947LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x293 = INT16_MAX;
	uint8_t x294 = UINT8_MAX;
	volatile int32_t x295 = -52491;
	int8_t x296 = -1;
	volatile int32_t t69 = 125866883;

	t69 = (x293^((x294+x295)<x296));

	if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x298 = INT64_MAX;
	uint64_t x299 = 11303967236638114LLU;
	volatile uint64_t t70 = 16LLU;

	t70 = (x297^((x298+x299)<x300));

	if (t70 != 3041507820666063463LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x301 = 2864249LL;
	volatile int32_t x302 = INT32_MIN;
	int8_t x304 = 37;
	volatile int64_t t71 = -117658669304886LL;

	t71 = (x301^((x302+x303)<x304));

	if (t71 != 2864248LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MAX;
	uint32_t x306 = 29569228U;
	uint64_t x307 = 753246LLU;
	int64_t x308 = INT64_MAX;
	volatile int32_t t72 = -263561058;

	t72 = (x305^((x306+x307)<x308));

	if (t72 != 2147483646) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x310 = INT64_MAX;
	int32_t x311 = -1;
	int32_t x312 = INT32_MIN;
	volatile int32_t t73 = 8;

	t73 = (x309^((x310+x311)<x312));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = 3;
	int8_t x314 = 7;
	uint64_t x315 = 1263901LLU;
	volatile int32_t x316 = -1;
	static int32_t t74 = -795;

	t74 = (x313^((x314+x315)<x316));

	if (t74 != 2) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x318 = -23;
	uint32_t x319 = 2425002U;
	static volatile uint32_t t75 = UINT32_MAX;

	t75 = (x317^((x318+x319)<x320));

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x321 = 22U;
	int64_t x323 = INT64_MAX;
	static int32_t x324 = -1;

	t76 = (x321^((x322+x323)<x324));

	if (t76 != 22) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MAX;
	uint32_t x326 = 62993U;
	int32_t x327 = INT32_MAX;
	static int32_t x328 = INT32_MAX;
	volatile int32_t t77 = -1726;

	t77 = (x325^((x326+x327)<x328));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x329 = -482848714;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = 56125LL;
	int32_t t78 = 444163;

	t78 = (x329^((x330+x331)<x332));

	if (t78 != -482848713) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = UINT8_MAX;
	volatile int32_t t79 = -3936367;

	t79 = (x333^((x334+x335)<x336));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = INT16_MAX;
	volatile int64_t x338 = INT64_MAX;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MAX;
	int32_t t80 = -2740411;

	t80 = (x337^((x338+x339)<x340));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = -1;
	static uint32_t x343 = 26420U;
	uint64_t x344 = UINT64_MAX;
	int32_t t81 = 891;

	t81 = (x341^((x342+x343)<x344));

	if (t81 != -32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = 10805811220086LL;
	int64_t t82 = -408585526LL;

	t82 = (x349^((x350+x351)<x352));

	if (t82 != 10805811220086LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x358 = UINT64_MAX;
	static int16_t x359 = 79;
	int16_t x360 = INT16_MIN;
	volatile int32_t t83 = 705806130;

	t83 = (x357^((x358+x359)<x360));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x362 = 56U;
	volatile int32_t t84 = 4931;

	t84 = (x361^((x362+x363)<x364));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x365 = -1;
	int16_t x366 = INT16_MIN;
	int32_t t85 = 241;

	t85 = (x365^((x366+x367)<x368));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x373 = 12831U;
	uint32_t x374 = UINT32_MAX;
	int16_t x375 = -1;
	int16_t x376 = INT16_MIN;
	static volatile int32_t t86 = -78849932;

	t86 = (x373^((x374+x375)<x376));

	if (t86 != 12831) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x377 = 425837LLU;
	volatile int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	int32_t x380 = 821;

	t87 = (x377^((x378+x379)<x380));

	if (t87 != 425836LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x382 = 32992104368039238LLU;
	static uint8_t x384 = UINT8_MAX;
	volatile uint64_t t88 = 2LLU;

	t88 = (x381^((x382+x383)<x384));

	if (t88 != 1003173658207979654LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x387 = 1886784370LLU;
	volatile uint32_t x388 = 9U;
	static int32_t t89 = 2864;

	t89 = (x385^((x386+x387)<x388));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = UINT8_MAX;
	int16_t x390 = 293;
	uint32_t x391 = UINT32_MAX;
	uint16_t x392 = 21500U;
	int32_t t90 = 8;

	t90 = (x389^((x390+x391)<x392));

	if (t90 != 254) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x393 = 49149;
	static int64_t x395 = INT64_MIN;

	t91 = (x393^((x394+x395)<x396));

	if (t91 != 49148) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x401 = UINT16_MAX;
	uint8_t x402 = 6U;
	static uint16_t x404 = UINT16_MAX;
	volatile int32_t t92 = 0;

	t92 = (x401^((x402+x403)<x404));

	if (t92 != 65534) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x405 = INT32_MIN;
	static uint8_t x406 = 27U;
	uint16_t x407 = 3U;
	volatile int32_t x408 = INT32_MIN;
	volatile int32_t t93 = INT32_MIN;

	t93 = (x405^((x406+x407)<x408));

	if (t93 != INT32_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x409 = 1534;
	volatile uint16_t x411 = UINT16_MAX;
	int16_t x412 = INT16_MIN;
	volatile int32_t t94 = 38;

	t94 = (x409^((x410+x411)<x412));

	if (t94 != 1535) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = INT32_MAX;
	static int64_t x414 = -3782130531039LL;
	int32_t x415 = INT32_MAX;
	volatile int8_t x416 = INT8_MAX;

	t95 = (x413^((x414+x415)<x416));

	if (t95 != 2147483646) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = -4;
	volatile int16_t x419 = -1;
	volatile int32_t x420 = INT32_MIN;
	int32_t t96 = 1;

	t96 = (x417^((x418+x419)<x420));

	if (t96 != -4) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MIN;
	static int32_t x424 = 0;
	static volatile int32_t t97 = -103;

	t97 = (x421^((x422+x423)<x424));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x425 = INT64_MIN;
	static uint16_t x426 = UINT16_MAX;
	static uint8_t x427 = 1U;
	int16_t x428 = -1;
	static int64_t t98 = INT64_MIN;

	t98 = (x425^((x426+x427)<x428));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x429 = 0;
	uint32_t x430 = 178U;
	uint32_t x431 = 920879600U;
	static volatile int8_t x432 = 11;
	int32_t t99 = 6;

	t99 = (x429^((x430+x431)<x432));

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

