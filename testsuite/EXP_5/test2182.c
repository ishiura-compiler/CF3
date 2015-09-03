#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x4 = 118451U;
int64_t t0 = -2LL;
static int16_t x14 = 2;
int16_t x15 = INT16_MIN;
uint16_t x17 = 12U;
uint8_t x22 = 1U;
int32_t x23 = INT32_MIN;
uint32_t x25 = 3226U;
uint16_t x30 = UINT16_MAX;
volatile uint16_t x33 = 231U;
volatile int16_t x35 = INT16_MAX;
int32_t x41 = INT32_MIN;
int8_t x42 = INT8_MAX;
volatile uint32_t t10 = 2294U;
uint32_t x59 = 57U;
uint8_t x64 = UINT8_MAX;
uint64_t x69 = 3382448120832855323LLU;
static uint64_t t17 = 12018LLU;
static volatile uint8_t x76 = 0U;
int32_t x80 = INT32_MIN;
uint64_t t19 = 3187137LLU;
uint32_t x81 = 124662U;
static volatile int16_t x87 = INT16_MIN;
int8_t x88 = -2;
int64_t x91 = INT64_MIN;
int64_t x94 = 996158417LL;
uint64_t t23 = 7363LLU;
volatile int64_t x102 = -1LL;
int64_t t25 = -31752LL;
volatile int32_t x105 = INT32_MAX;
volatile uint64_t t30 = 4LLU;
volatile uint16_t x127 = 19380U;
volatile int64_t x138 = INT64_MIN;
int32_t x139 = INT32_MIN;
volatile int8_t x140 = INT8_MAX;
int32_t x142 = -11845;
int8_t x153 = 0;
uint16_t x155 = 9924U;
int64_t t39 = 28255375LL;
volatile int64_t x161 = INT64_MIN;
static uint64_t x163 = 4001679LLU;
volatile uint64_t t40 = 36392040360086298LLU;
int32_t t41 = -10;
uint32_t x170 = 0U;
static uint8_t x172 = 4U;
static volatile uint32_t t42 = 200705U;
int8_t x173 = INT8_MIN;
static int64_t x188 = -8710LL;
int16_t x193 = -1;
static volatile uint8_t x194 = 33U;
int64_t t51 = 112861668007927090LL;
int64_t x209 = INT64_MIN;
int32_t x212 = -7859;
int32_t x221 = -78491983;
uint64_t t55 = 105453072101433LLU;
int64_t x227 = INT64_MAX;
uint8_t x230 = UINT8_MAX;
int16_t x231 = 510;
static volatile uint32_t t57 = 32U;
int32_t x236 = -1;
static uint8_t x244 = 98U;
int32_t t60 = 2;
volatile uint64_t x251 = 1872676291481537LLU;
int8_t x255 = -1;
uint32_t x261 = 1267181U;
volatile int64_t t65 = -28983210781LL;
int32_t x268 = INT32_MIN;
volatile int64_t t66 = 214389569798500978LL;
volatile uint64_t t67 = 332676201LLU;
static volatile int16_t x274 = -1;
int64_t x283 = -1LL;
volatile uint32_t x285 = 41U;
volatile int64_t x291 = -119673LL;
int8_t x305 = INT8_MAX;
int8_t x308 = INT8_MAX;
int16_t x309 = INT16_MIN;
uint32_t t77 = 11U;
int16_t x319 = 3053;
uint32_t x327 = 15836U;
uint16_t x329 = 16U;
volatile int64_t x332 = INT64_MIN;
uint16_t x334 = UINT16_MAX;
uint64_t t83 = 474747658467372LLU;
volatile uint32_t x339 = 446857U;
uint64_t t84 = 11064802810308189LLU;
int16_t x341 = -499;
uint8_t x343 = 4U;
static int8_t x346 = -1;
uint8_t x354 = UINT8_MAX;
static int16_t x358 = 0;
uint64_t x367 = 21LLU;
volatile int16_t x368 = -1;
volatile int64_t t92 = -274911LL;
uint64_t x373 = 8217LLU;
int64_t x376 = 35964344286056363LL;
int64_t x384 = 1925948774750LL;
int16_t x386 = 3;
volatile uint32_t x391 = UINT32_MAX;
uint32_t t97 = 130759474U;
static int64_t x395 = INT64_MIN;
uint8_t x398 = UINT8_MAX;


void f0(void) {
	volatile uint16_t x1 = 19022U;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -1LL;

	t0 = (x1&((x2^x3)|x4));

	if (t0 != 19022LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -424106218268LL;
	static int16_t x6 = 28;
	uint8_t x7 = UINT8_MAX;
	static volatile int16_t x8 = INT16_MIN;
	volatile int64_t t1 = -970LL;

	t1 = (x5&((x6^x7)|x8));

	if (t1 != -424106229536LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int64_t x10 = -30826339408LL;
	volatile int32_t x11 = INT32_MAX;
	volatile int8_t x12 = -1;
	int64_t t2 = 6041159667761LL;

	t2 = (x9&((x10^x11)|x12));

	if (t2 != 65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = 31537U;
	volatile uint64_t x16 = 6296LLU;
	uint64_t t3 = 1403571869LLU;

	t3 = (x13&((x14^x15)|x16));

	if (t3 != 6160LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x18 = -788LL;
	uint16_t x19 = 625U;
	int8_t x20 = INT8_MAX;
	int64_t t4 = -53947LL;

	t4 = (x17&((x18^x19)|x20));

	if (t4 != 12LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -3;
	static int16_t x24 = 1;
	volatile int32_t t5 = -501483009;

	t5 = (x21&((x22^x23)|x24));

	if (t5 != -2147483647) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int8_t x27 = 3;
	uint8_t x28 = 0U;
	uint32_t t6 = 4U;

	t6 = (x25&((x26^x27)|x28));

	if (t6 != 3202U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	volatile uint16_t x31 = 2U;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = 509681;

	t7 = (x29&((x30^x31)|x32));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = UINT64_MAX;
	int16_t x36 = 8307;
	volatile uint64_t t8 = 337776704LLU;

	t8 = (x33&((x34^x35)|x36));

	if (t8 != 99LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -3;
	static int16_t x38 = INT16_MIN;
	uint64_t x39 = UINT64_MAX;
	static int32_t x40 = INT32_MIN;
	volatile uint64_t t9 = 79168LLU;

	t9 = (x37&((x38^x39)|x40));

	if (t9 != 18446744071562100733LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x43 = INT32_MIN;
	static volatile uint32_t x44 = UINT32_MAX;

	t10 = (x41&((x42^x43)|x44));

	if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = -3;
	uint8_t x46 = 51U;
	static uint8_t x47 = UINT8_MAX;
	static int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -90997064052850LL;

	t11 = (x45&((x46^x47)|x48));

	if (t11 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 43;
	volatile int8_t x50 = INT8_MIN;
	uint8_t x51 = 3U;
	static uint64_t x52 = UINT64_MAX;
	volatile uint64_t t12 = 186811LLU;

	t12 = (x49&((x50^x51)|x52));

	if (t12 != 43LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	uint16_t x54 = 25819U;
	static uint16_t x55 = UINT16_MAX;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 2243584;

	t13 = (x53&((x54^x55)|x56));

	if (t13 != -2147450880) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	volatile int16_t x58 = -1;
	uint16_t x60 = 1U;
	volatile uint32_t t14 = 143U;

	t14 = (x57&((x58^x59)|x60));

	if (t14 != 4294934528U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 33U;
	static int16_t x62 = 449;
	static int64_t x63 = INT64_MIN;
	int64_t t15 = -4418940693923458LL;

	t15 = (x61&((x62^x63)|x64));

	if (t15 != 33LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	static uint32_t x66 = 6792U;
	uint16_t x67 = 7881U;
	int16_t x68 = -1;
	uint32_t t16 = UINT32_MAX;

	t16 = (x65&((x66^x67)|x68));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = INT16_MIN;
	uint32_t x71 = 94952U;
	uint64_t x72 = 21220249827LLU;

	t17 = (x69&((x70^x71)|x72));

	if (t17 != 17606508555LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int32_t x74 = INT32_MIN;
	uint64_t x75 = 2762336541227435LLU;
	static uint64_t t18 = 1566777145746LLU;

	t18 = (x73&((x74^x75)|x76));

	if (t18 != 9220609698981099947LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x78 = 29123782359922164LLU;
	int64_t x79 = 1595981LL;

	t19 = (x77&((x78^x79)|x80));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 1449520825U;
	int8_t x83 = -1;
	int16_t x84 = INT16_MIN;
	uint32_t t20 = 5655603U;

	t20 = (x81&((x82^x83)|x84));

	if (t20 != 98374U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -13316;
	uint64_t x86 = 46815867412098LLU;
	uint64_t t21 = 10LLU;

	t21 = (x85&((x86^x87)|x88));

	if (t21 != 18446744073709538300LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 771191415LLU;
	int8_t x90 = INT8_MIN;
	int8_t x92 = INT8_MIN;
	volatile uint64_t t22 = 17935719LLU;

	t22 = (x89&((x90^x91)|x92));

	if (t22 != 771191296LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = -38918082;
	uint64_t x95 = 0LLU;
	int64_t x96 = 738788014705LL;

	t23 = (x93&((x94^x95)|x96));

	if (t23 != 739692914736LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 65524LL;
	static int32_t x98 = 2933127;
	uint8_t x99 = 6U;
	int8_t x100 = -17;
	static int64_t t24 = -7LL;

	t24 = (x97&((x98^x99)|x100));

	if (t24 != 65508LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	int64_t x103 = 284890679848LL;
	int32_t x104 = INT32_MAX;

	t25 = (x101&((x102^x103)|x104));

	if (t25 != -283467874304LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x106 = UINT64_MAX;
	int64_t x107 = -255714375LL;
	static int16_t x108 = INT16_MIN;
	uint64_t t26 = 1LLU;

	t26 = (x105&((x106^x107)|x108));

	if (t26 != 2147476550LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 4048897;
	int32_t x110 = INT32_MIN;
	int64_t x111 = -1LL;
	volatile int16_t x112 = INT16_MIN;
	volatile int64_t t27 = 18279796613429547LL;

	t27 = (x109&((x110^x111)|x112));

	if (t27 != 4048897LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 8U;
	static volatile int8_t x114 = INT8_MIN;
	static int32_t x115 = -1;
	int16_t x116 = -1;
	volatile int32_t t28 = -47;

	t28 = (x113&((x114^x115)|x116));

	if (t28 != 8) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -28;
	uint8_t x118 = 127U;
	volatile int64_t x119 = -1LL;
	int16_t x120 = INT16_MAX;
	static int64_t t29 = 46744099008813657LL;

	t29 = (x117&((x118^x119)|x120));

	if (t29 != -28LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int16_t x122 = INT16_MAX;
	uint8_t x123 = UINT8_MAX;
	static uint64_t x124 = 369311LLU;

	t30 = (x121&((x122^x123)|x124));

	if (t30 != 32671LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static int16_t x126 = INT16_MIN;
	int8_t x128 = 0;
	static volatile int32_t t31 = 169;

	t31 = (x125&((x126^x127)|x128));

	if (t31 != 52) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	static int16_t x130 = INT16_MIN;
	int8_t x131 = -50;
	uint32_t x132 = UINT32_MAX;
	static volatile uint32_t t32 = 1927394761U;

	t32 = (x129&((x130^x131)|x132));

	if (t32 != 2147483647U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -4124;
	int8_t x134 = 0;
	int64_t x135 = -8LL;
	static int32_t x136 = -1;
	volatile int64_t t33 = 11783521545LL;

	t33 = (x133&((x134^x135)|x136));

	if (t33 != -4124LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile int64_t t34 = -1739721333890LL;

	t34 = (x137&((x138^x139)|x140));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = INT16_MIN;
	volatile int8_t x143 = INT8_MIN;
	static int64_t x144 = -1LL;
	int64_t t35 = 1225977123LL;

	t35 = (x141&((x142^x143)|x144));

	if (t35 != -32768LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 3;
	int32_t x146 = INT32_MIN;
	volatile int16_t x147 = INT16_MIN;
	uint32_t x148 = 180977027U;
	uint32_t t36 = 913U;

	t36 = (x145&((x146^x147)|x148));

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	uint32_t x150 = UINT32_MAX;
	int16_t x151 = -1;
	int64_t x152 = -1LL;
	int64_t t37 = 0LL;

	t37 = (x149&((x150^x151)|x152));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	int64_t x156 = INT64_MIN;
	int64_t t38 = -800621306367369LL;

	t38 = (x153&((x154^x155)|x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 26U;
	int64_t x158 = INT64_MIN;
	static volatile int32_t x159 = INT32_MIN;
	int16_t x160 = -1;

	t39 = (x157&((x158^x159)|x160));

	if (t39 != 26LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = 891133U;
	volatile uint16_t x164 = 51U;

	t40 = (x161&((x162^x163)|x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	int16_t x167 = 421;
	uint16_t x168 = 2641U;

	t41 = (x165&((x166^x167)|x168));

	if (t41 != -32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int16_t x171 = INT16_MAX;

	t42 = (x169&((x170^x171)|x172));

	if (t42 != 32767U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = UINT16_MAX;
	uint16_t x175 = UINT16_MAX;
	int16_t x176 = -453;
	volatile int32_t t43 = -510;

	t43 = (x173&((x174^x175)|x176));

	if (t43 != -512) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x177 = 17400754LL;
	volatile int16_t x178 = -7;
	volatile uint16_t x179 = 61U;
	static volatile int32_t x180 = 159497018;
	static int64_t t44 = 135255737243LL;

	t44 = (x177&((x178^x179)|x180));

	if (t44 != 17400754LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1796;
	uint8_t x182 = 1U;
	volatile int64_t x183 = INT64_MAX;
	static int32_t x184 = -1;
	int64_t t45 = 23LL;

	t45 = (x181&((x182^x183)|x184));

	if (t45 != -1796LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 7U;
	int64_t x186 = -1LL;
	static uint64_t x187 = 7783656813858982LLU;
	static volatile uint64_t t46 = 104987675055233LLU;

	t46 = (x185&((x186^x187)|x188));

	if (t46 != 3LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 1U;
	static uint32_t x190 = UINT32_MAX;
	int16_t x191 = 0;
	int16_t x192 = 26;
	static volatile uint32_t t47 = 155U;

	t47 = (x189&((x190^x191)|x192));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x195 = -1;
	uint16_t x196 = UINT16_MAX;
	static int32_t t48 = -1;

	t48 = (x193&((x194^x195)|x196));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = UINT16_MAX;
	uint32_t x198 = 110U;
	uint64_t x199 = UINT64_MAX;
	int64_t x200 = INT64_MAX;
	volatile uint64_t t49 = 53332447092LLU;

	t49 = (x197&((x198^x199)|x200));

	if (t49 != 65535LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = UINT32_MAX;
	int16_t x202 = INT16_MAX;
	int32_t x203 = INT32_MAX;
	int64_t x204 = 3118304917885496978LL;
	int64_t t50 = -101LL;

	t50 = (x201&((x202^x203)|x204));

	if (t50 != 2147462802LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1;
	int64_t x206 = -1LL;
	uint32_t x207 = 36U;
	static uint32_t x208 = 44U;

	t51 = (x205&((x206^x207)|x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = UINT64_MAX;
	int8_t x211 = INT8_MIN;
	uint64_t t52 = 130161673959543573LLU;

	t52 = (x209&((x210^x211)|x212));

	if (t52 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x213 = -9;
	uint64_t x214 = 1764696765163633031LLU;
	int32_t x215 = INT32_MAX;
	volatile uint8_t x216 = 97U;
	static uint64_t t53 = 3247LLU;

	t53 = (x213&((x214^x215)|x216));

	if (t53 != 1764696765705225841LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = INT8_MAX;
	uint32_t x218 = 81289U;
	int8_t x219 = 0;
	int32_t x220 = INT32_MAX;
	uint32_t t54 = 0U;

	t54 = (x217&((x218^x219)|x220));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	uint8_t x223 = 8U;
	volatile int32_t x224 = 3;

	t55 = (x221&((x222^x223)|x224));

	if (t55 != 18446744073631059633LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 1425303LLU;
	static int8_t x226 = INT8_MIN;
	int8_t x228 = 1;
	uint64_t t56 = 488684LLU;

	t56 = (x225&((x226^x227)|x228));

	if (t56 != 23LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 1008970U;
	int32_t x232 = -1;

	t57 = (x229&((x230^x231)|x232));

	if (t57 != 1008970U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = 0U;
	uint32_t x234 = 175188434U;
	int64_t x235 = INT64_MIN;
	static int64_t t58 = 30877200505505LL;

	t58 = (x233&((x234^x235)|x236));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x237 = 7U;
	volatile int32_t x238 = INT32_MAX;
	int32_t x239 = -4;
	int16_t x240 = INT16_MIN;
	int32_t t59 = -606;

	t59 = (x237&((x238^x239)|x240));

	if (t59 != 3) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	uint16_t x242 = UINT16_MAX;
	uint8_t x243 = 72U;

	t60 = (x241&((x242^x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	uint32_t x246 = 9U;
	static volatile int32_t x247 = INT32_MIN;
	uint16_t x248 = 1727U;
	static volatile int64_t t61 = 972LL;

	t61 = (x245&((x246^x247)|x248));

	if (t61 != 2147485375LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	volatile uint32_t x250 = 13320758U;
	int32_t x252 = -3164;
	volatile uint64_t t62 = 277121LLU;

	t62 = (x249&((x250^x251)|x252));

	if (t62 != 119LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = INT64_MIN;
	static int32_t x254 = 903893219;
	volatile int32_t x256 = -2487264;
	volatile int64_t t63 = INT64_MIN;

	t63 = (x253&((x254^x255)|x256));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x257 = 28215545565635LLU;
	uint32_t x258 = UINT32_MAX;
	int64_t x259 = 26LL;
	static int32_t x260 = -1;
	uint64_t t64 = 16764021142LLU;

	t64 = (x257&((x258^x259)|x260));

	if (t64 != 28215545565635LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x262 = 1576709188LL;
	volatile int32_t x263 = INT32_MIN;
	static int8_t x264 = INT8_MIN;

	t65 = (x261&((x262^x263)|x264));

	if (t65 != 1267140LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	static int32_t x266 = -1;
	uint8_t x267 = 22U;

	t66 = (x265&((x266^x267)|x268));

	if (t66 != -23LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -13281;
	uint64_t x270 = UINT64_MAX;
	int16_t x271 = 11;
	static int16_t x272 = INT16_MIN;

	t67 = (x269&((x270^x271)|x272));

	if (t67 != 18446744073709538324LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile uint64_t x276 = 20796133LLU;
	volatile uint64_t t68 = 3503282680053870808LLU;

	t68 = (x273&((x274^x275)|x276));

	if (t68 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 1727;
	uint16_t x278 = 67U;
	int32_t x279 = 429878;
	int64_t x280 = -542LL;
	volatile int64_t t69 = -1330LL;

	t69 = (x277&((x278^x279)|x280));

	if (t69 != 1719LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -1LL;
	volatile int16_t x282 = INT16_MAX;
	static volatile int32_t x284 = INT32_MIN;
	static volatile int64_t t70 = -8LL;

	t70 = (x281&((x282^x283)|x284));

	if (t70 != -32768LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 497U;
	int32_t x287 = INT32_MIN;
	volatile int32_t x288 = INT32_MIN;
	volatile uint32_t t71 = 7U;

	t71 = (x285&((x286^x287)|x288));

	if (t71 != 33U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = 1;
	uint32_t x290 = 3013320U;
	static int16_t x292 = INT16_MIN;
	static volatile int64_t t72 = 0LL;

	t72 = (x289&((x290^x291)|x292));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = -1LL;
	int64_t x295 = -129748972LL;
	int16_t x296 = -1;
	int64_t t73 = 3651910347797328LL;

	t73 = (x293&((x294^x295)|x296));

	if (t73 != -2147483648LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = INT8_MIN;
	int32_t x298 = -51;
	uint16_t x299 = 149U;
	int64_t x300 = -111LL;
	int64_t t74 = 877LL;

	t74 = (x297&((x298^x299)|x300));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	int32_t x302 = -1;
	int64_t x303 = INT64_MIN;
	static volatile int64_t x304 = -1LL;
	int64_t t75 = 629381752LL;

	t75 = (x301&((x302^x303)|x304));

	if (t75 != 32767LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = 20LL;
	int16_t x307 = 5;
	static volatile int64_t t76 = 55047778431LL;

	t76 = (x305&((x306^x307)|x308));

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x310 = 12U;
	uint16_t x311 = 4635U;
	uint16_t x312 = 28U;

	t77 = (x309&((x310^x311)|x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = UINT64_MAX;
	static uint32_t x314 = 14942000U;
	int8_t x315 = INT8_MIN;
	static volatile uint64_t x316 = 5007270LLU;
	uint64_t t78 = 42LLU;

	t78 = (x313&((x314^x315)|x316));

	if (t78 != 4284245942LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -13650;
	static uint64_t x318 = 216334LLU;
	volatile int8_t x320 = INT8_MAX;
	uint64_t t79 = 9776109890558LLU;

	t79 = (x317&((x318^x319)|x320));

	if (t79 != 213678LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 86U;
	int32_t x322 = INT32_MIN;
	static int8_t x323 = INT8_MIN;
	static int32_t x324 = 5358;
	static int32_t t80 = 3028;

	t80 = (x321&((x322^x323)|x324));

	if (t80 != 70) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 58U;
	int64_t x326 = INT64_MAX;
	uint32_t x328 = 350850U;
	volatile int64_t t81 = 34819803565022LL;

	t81 = (x325&((x326^x327)|x328));

	if (t81 != 34LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = 35736122720LLU;
	int64_t x331 = INT64_MIN;
	static uint64_t t82 = 2297854556640300LLU;

	t82 = (x329&((x330^x331)|x332));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int8_t x335 = INT8_MIN;
	uint64_t x336 = UINT64_MAX;

	t83 = (x333&((x334^x335)|x336));

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = 3965893124761803LLU;
	volatile uint16_t x338 = UINT16_MAX;
	uint64_t x340 = 13LLU;

	t84 = (x337&((x338^x339)|x340));

	if (t84 != 141387LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x342 = -46;
	int16_t x344 = -130;
	int32_t t85 = -16047;

	t85 = (x341&((x342^x343)|x344));

	if (t85 != -500) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	int8_t x347 = INT8_MIN;
	int32_t x348 = -122996;
	volatile int32_t t86 = INT32_MIN;

	t86 = (x345&((x346^x347)|x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MAX;
	uint32_t x350 = UINT32_MAX;
	uint8_t x351 = 56U;
	uint16_t x352 = 960U;
	static volatile uint32_t t87 = 131892744U;

	t87 = (x349&((x350^x351)|x352));

	if (t87 != 71U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 2U;
	uint8_t x355 = 11U;
	int32_t x356 = INT32_MAX;
	int32_t t88 = 4355;

	t88 = (x353&((x354^x355)|x356));

	if (t88 != 2) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x359 = 2U;
	uint16_t x360 = 1U;
	int64_t t89 = 805910784624438LL;

	t89 = (x357&((x358^x359)|x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -25541;
	int64_t x362 = INT64_MIN;
	uint64_t x363 = 12204007LLU;
	int8_t x364 = INT8_MIN;
	static volatile uint64_t t90 = 722913865819LLU;

	t90 = (x361&((x362^x363)|x364));

	if (t90 != 18446744073709526051LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 29U;
	static int16_t x366 = INT16_MIN;
	uint64_t t91 = 135944403432135193LLU;

	t91 = (x365&((x366^x367)|x368));

	if (t91 != 29LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -8LL;
	int64_t x370 = INT64_MIN;
	static int16_t x371 = 1490;
	uint32_t x372 = 2546U;

	t92 = (x369&((x370^x371)|x372));

	if (t92 != -9223372036854772240LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x374 = INT8_MAX;
	int64_t x375 = 738833423315LL;
	uint64_t t93 = 32834775834LLU;

	t93 = (x373&((x374^x375)|x376));

	if (t93 != 9LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -1;
	uint32_t x378 = UINT32_MAX;
	uint64_t x379 = 14LLU;
	int8_t x380 = INT8_MIN;
	uint64_t t94 = 241446LLU;

	t94 = (x377&((x378^x379)|x380));

	if (t94 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1732;
	int8_t x382 = INT8_MIN;
	volatile int64_t x383 = -1LL;
	volatile int64_t t95 = -3534872027LL;

	t95 = (x381&((x382^x383)|x384));

	if (t95 != 1925948774716LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	static int8_t x387 = 58;
	uint16_t x388 = UINT16_MAX;
	int32_t t96 = -33;

	t96 = (x385&((x386^x387)|x388));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = 3U;
	int16_t x390 = INT16_MIN;
	int32_t x392 = 15467317;

	t97 = (x389&((x390^x391)|x392));

	if (t97 != 3U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int64_t x394 = -1LL;
	int32_t x396 = INT32_MAX;
	int64_t t98 = INT64_MAX;

	t98 = (x393&((x394^x395)|x396));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x397 = INT32_MIN;
	int32_t x399 = INT32_MIN;
	int32_t x400 = -8054;
	volatile int32_t t99 = INT32_MIN;

	t99 = (x397&((x398^x399)|x400));

	if (t99 != INT32_MIN) { NG(); } else { ; }
	
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

