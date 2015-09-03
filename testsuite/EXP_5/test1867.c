#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
volatile int32_t t0 = -3;
int32_t t1 = -24;
static int8_t x17 = 1;
volatile int32_t x21 = INT32_MIN;
static uint16_t x23 = 0U;
int64_t x26 = -1LL;
int16_t x33 = INT16_MIN;
int32_t x35 = -34;
int32_t x39 = INT32_MIN;
static int16_t x40 = INT16_MIN;
uint8_t x41 = 8U;
static uint64_t x43 = UINT64_MAX;
int8_t x45 = 50;
volatile int32_t t9 = 1781892;
volatile uint32_t x65 = 693U;
static int16_t x66 = -7606;
static int64_t x68 = -1LL;
int8_t x69 = INT8_MIN;
static uint8_t x71 = 19U;
int16_t x72 = -1;
static int64_t x81 = INT64_MIN;
static int8_t x82 = 7;
int8_t x86 = INT8_MIN;
int32_t t18 = 1;
int16_t x90 = INT16_MIN;
static volatile int16_t x92 = -280;
int16_t x98 = INT16_MAX;
uint32_t x99 = 2386U;
int16_t x100 = 12;
static int32_t x107 = INT32_MIN;
int64_t x108 = 311LL;
int32_t t23 = 3839206;
int32_t x111 = -86872951;
uint16_t x113 = 393U;
volatile int32_t x119 = 0;
uint16_t x122 = 6460U;
int32_t t27 = 11994118;
static int8_t x126 = -15;
static volatile int64_t x127 = INT64_MIN;
volatile int16_t x131 = 0;
uint16_t x139 = 2412U;
int8_t x142 = INT8_MIN;
static int8_t x147 = 53;
volatile int8_t x155 = 1;
uint8_t x159 = 5U;
uint8_t x167 = 53U;
int32_t x168 = 30;
int32_t t37 = -465;
static int32_t t38 = -50009;
static volatile int32_t t39 = -6;
static int64_t x181 = -5837769783LL;
static volatile int32_t x200 = 3733716;
uint8_t x205 = 65U;
int8_t x218 = 8;
uint64_t x220 = 79555219137702LLU;
uint8_t x225 = UINT8_MAX;
volatile int32_t x228 = -1;
int32_t x248 = INT32_MAX;
static uint64_t x255 = UINT64_MAX;
int8_t x259 = 0;
static int32_t t59 = -977;
static uint16_t x272 = 18657U;
int32_t t60 = 24;
volatile int32_t t62 = 18481;
static int16_t x286 = -1;
int32_t t64 = -10783;
static uint32_t x292 = UINT32_MAX;
int64_t x294 = -1LL;
volatile int16_t x300 = INT16_MIN;
int32_t t67 = -15;
int32_t t68 = -5606;
int8_t x311 = -39;
int32_t x316 = INT32_MAX;
int64_t x317 = -1LL;
volatile int16_t x319 = INT16_MIN;
volatile uint64_t x321 = 244872478LLU;
int64_t x322 = INT64_MIN;
volatile int64_t x323 = 156876374743455LL;
static volatile int32_t t72 = 321;
static int64_t x325 = INT64_MIN;
int16_t x327 = -14;
volatile int32_t t75 = -294720121;
int64_t x340 = 126433999519LL;
int16_t x350 = INT16_MIN;
static int16_t x357 = -52;
uint16_t x363 = UINT16_MAX;
int32_t t82 = 228;
int16_t x367 = INT16_MIN;
int32_t t83 = -12293780;
int16_t x369 = -1;
int16_t x373 = INT16_MAX;
volatile int64_t x382 = INT64_MIN;
int16_t x387 = INT16_MIN;
int16_t x391 = -1;
int64_t x407 = -1LL;
volatile int16_t x408 = INT16_MIN;
int32_t t93 = 32330;
int64_t x413 = INT64_MIN;
volatile uint16_t x416 = UINT16_MAX;
static volatile uint8_t x419 = 2U;
static int32_t t95 = 966;
uint64_t x421 = 15334983642LLU;
int64_t x423 = INT64_MAX;
int32_t x429 = INT32_MIN;
int32_t t98 = -1078;
uint8_t x433 = UINT8_MAX;
int32_t x434 = -1;
int64_t x435 = 172333LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int8_t x3 = INT8_MIN;
	volatile int32_t x4 = INT32_MAX;

	t0 = (x1==((x2|x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -45662;
	int32_t x6 = -1;
	static int64_t x7 = INT64_MAX;
	int8_t x8 = INT8_MIN;

	t1 = (x5==((x6|x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = 43975LLU;
	volatile int64_t x10 = INT64_MAX;
	int16_t x11 = -1;
	static int64_t x12 = 29963292152850802LL;
	static int32_t t2 = 86;

	t2 = (x9==((x10|x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x18 = INT32_MAX;
	int16_t x19 = INT16_MIN;
	static volatile uint8_t x20 = 58U;
	volatile int32_t t3 = -25;

	t3 = (x17==((x18|x19)+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x22 = UINT16_MAX;
	uint8_t x24 = UINT8_MAX;
	static volatile int32_t t4 = -3;

	t4 = (x21==((x22|x23)+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	static int32_t x27 = INT32_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t5 = 45;

	t5 = (x25==((x26|x27)+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x34 = -56;
	int8_t x36 = 46;
	volatile int32_t t6 = 10;

	t6 = (x33==((x34|x35)+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = INT64_MAX;
	int64_t x38 = INT64_MIN;
	volatile int32_t t7 = 10904;

	t7 = (x37==((x38|x39)+x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x42 = 30956888316434100LLU;
	int32_t x44 = -1;
	volatile int32_t t8 = -2;

	t8 = (x41==((x42|x43)+x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x46 = INT16_MIN;
	int32_t x47 = -1;
	uint32_t x48 = 12743707U;

	t9 = (x45==((x46|x47)+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = 2U;
	int32_t x54 = -74831;
	volatile uint16_t x55 = 1627U;
	int32_t x56 = -373574137;
	volatile int32_t t10 = -181182;

	t10 = (x53==((x54|x55)+x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = 31;
	int32_t x58 = -1;
	static int32_t x59 = -1;
	int32_t x60 = -151638;
	int32_t t11 = -42984;

	t11 = (x57==((x58|x59)+x60));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -1;
	static int32_t x62 = 118;
	volatile uint32_t x63 = UINT32_MAX;
	volatile uint32_t x64 = 86U;
	int32_t t12 = 154923432;

	t12 = (x61==((x62|x63)+x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x67 = INT32_MIN;
	volatile int32_t t13 = -26;

	t13 = (x65==((x66|x67)+x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x70 = INT32_MAX;
	int32_t t14 = 5232957;

	t14 = (x69==((x70|x71)+x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	uint16_t x74 = UINT16_MAX;
	static int8_t x75 = -1;
	volatile int64_t x76 = INT64_MAX;
	int32_t t15 = 3;

	t15 = (x73==((x74|x75)+x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x77 = INT64_MAX;
	uint8_t x78 = UINT8_MAX;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = 33359U;
	static int32_t t16 = -3611600;

	t16 = (x77==((x78|x79)+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x83 = 0U;
	static int32_t x84 = -15593008;
	volatile int32_t t17 = 30911;

	t17 = (x81==((x82|x83)+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = -332428886496302624LL;
	static int64_t x87 = INT64_MAX;
	volatile int8_t x88 = -1;

	t18 = (x85==((x86|x87)+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	int64_t x91 = INT64_MIN;
	int32_t t19 = 231677203;

	t19 = (x89==((x90|x91)+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	static int32_t x94 = 7636;
	uint16_t x95 = 0U;
	int16_t x96 = -1;
	int32_t t20 = -911;

	t20 = (x93==((x94|x95)+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x97 = UINT64_MAX;
	static volatile int32_t t21 = 9270;

	t21 = (x97==((x98|x99)+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	int64_t x102 = INT64_MIN;
	volatile int16_t x103 = INT16_MIN;
	int8_t x104 = -14;
	volatile int32_t t22 = 43791;

	t22 = (x101==((x102|x103)+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -42432886;
	static uint16_t x106 = UINT16_MAX;

	t23 = (x105==((x106|x107)+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x109 = -1;
	int16_t x110 = 8;
	static int32_t x112 = -183;
	volatile int32_t t24 = 28494813;

	t24 = (x109==((x110|x111)+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = INT8_MAX;
	static uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 8051393350827648LLU;
	volatile int32_t t25 = 884615;

	t25 = (x113==((x114|x115)+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x117 = INT16_MAX;
	int16_t x118 = -3;
	int8_t x120 = -1;
	static volatile int32_t t26 = 53214;

	t26 = (x117==((x118|x119)+x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x121 = INT64_MIN;
	int64_t x123 = 19333211955758LL;
	volatile uint8_t x124 = UINT8_MAX;

	t27 = (x121==((x122|x123)+x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x125 = 2U;
	static int16_t x128 = 11;
	int32_t t28 = -1;

	t28 = (x125==((x126|x127)+x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x129 = UINT8_MAX;
	volatile int16_t x130 = -1;
	int8_t x132 = -1;
	int32_t t29 = 1;

	t29 = (x129==((x130|x131)+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = -813923;
	static volatile uint32_t x134 = 459774U;
	int16_t x135 = 22;
	int32_t x136 = INT32_MAX;
	volatile int32_t t30 = 64885899;

	t30 = (x133==((x134|x135)+x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = -20;
	uint16_t x138 = 10807U;
	int16_t x140 = -1;
	static int32_t t31 = 58765708;

	t31 = (x137==((x138|x139)+x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -6;
	static int16_t x143 = -712;
	int16_t x144 = INT16_MIN;
	volatile int32_t t32 = -43598288;

	t32 = (x141==((x142|x143)+x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	int64_t x146 = 197LL;
	static int32_t x148 = INT32_MIN;
	int32_t t33 = -92952931;

	t33 = (x145==((x146|x147)+x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x149 = 1647770827577LLU;
	int32_t x150 = INT32_MIN;
	int32_t x151 = 11;
	int8_t x152 = -1;
	volatile int32_t t34 = -18320;

	t34 = (x149==((x150|x151)+x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = 5U;
	int32_t x154 = INT32_MAX;
	int32_t x156 = -1;
	int32_t t35 = -1815314;

	t35 = (x153==((x154|x155)+x156));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x157 = 67825960237587723LL;
	volatile int32_t x158 = INT32_MIN;
	volatile uint8_t x160 = UINT8_MAX;
	int32_t t36 = -4;

	t36 = (x157==((x158|x159)+x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x165 = 1969U;
	uint64_t x166 = 1124664704471718505LLU;

	t37 = (x165==((x166|x167)+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	volatile uint32_t x170 = 12112U;
	int8_t x171 = INT8_MAX;
	int16_t x172 = -87;

	t38 = (x169==((x170|x171)+x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MIN;
	volatile int8_t x174 = 0;
	int32_t x175 = INT32_MAX;
	int8_t x176 = INT8_MIN;

	t39 = (x173==((x174|x175)+x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x182 = 21U;
	static volatile int64_t x183 = INT64_MIN;
	int8_t x184 = 0;
	volatile int32_t t40 = 65545110;

	t40 = (x181==((x182|x183)+x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = -1;
	int32_t x186 = -715;
	static volatile int16_t x187 = INT16_MIN;
	uint8_t x188 = 2U;
	volatile int32_t t41 = -895;

	t41 = (x185==((x186|x187)+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = INT8_MIN;
	static volatile int32_t x190 = -4231994;
	uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 233U;
	int32_t t42 = -2509;

	t42 = (x189==((x190|x191)+x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x193 = 0;
	int32_t x194 = 103020696;
	int64_t x195 = INT64_MIN;
	int32_t x196 = 4;
	volatile int32_t t43 = -885047;

	t43 = (x193==((x194|x195)+x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x197 = INT64_MAX;
	uint32_t x198 = 7374U;
	int8_t x199 = 5;
	int32_t t44 = 13;

	t44 = (x197==((x198|x199)+x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x201 = 1653U;
	static volatile int64_t x202 = -1LL;
	static int16_t x203 = INT16_MAX;
	static uint32_t x204 = 82481087U;
	int32_t t45 = -3427;

	t45 = (x201==((x202|x203)+x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x206 = INT32_MAX;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MIN;
	int32_t t46 = -457054;

	t46 = (x205==((x206|x207)+x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = -5765;
	volatile int16_t x210 = INT16_MAX;
	uint8_t x211 = 1U;
	int64_t x212 = INT64_MIN;
	static volatile int32_t t47 = 3113908;

	t47 = (x209==((x210|x211)+x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -81;
	static int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MIN;
	volatile int32_t t48 = 114;

	t48 = (x213==((x214|x215)+x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x217 = 9925;
	volatile int16_t x219 = 0;
	static int32_t t49 = -30040565;

	t49 = (x217==((x218|x219)+x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x226 = 124U;
	volatile int8_t x227 = -2;
	static volatile int32_t t50 = 166;

	t50 = (x225==((x226|x227)+x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x233 = 115776838;
	int64_t x234 = 1345681LL;
	uint32_t x235 = 124U;
	static uint16_t x236 = 6U;
	volatile int32_t t51 = 288;

	t51 = (x233==((x234|x235)+x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = INT32_MIN;
	int8_t x239 = -6;
	static int64_t x240 = 1236556028372624334LL;
	volatile int32_t t52 = -1151;

	t52 = (x237==((x238|x239)+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x241 = INT32_MIN;
	static int64_t x242 = -14LL;
	int32_t x243 = 4510;
	volatile uint64_t x244 = UINT64_MAX;
	int32_t t53 = -1018;

	t53 = (x241==((x242|x243)+x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = -15135138231660LL;
	uint8_t x246 = 11U;
	int8_t x247 = -1;
	int32_t t54 = 0;

	t54 = (x245==((x246|x247)+x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x250 = 7U;
	int32_t x251 = 417840965;
	int16_t x252 = INT16_MIN;
	static volatile int32_t t55 = 972353225;

	t55 = (x249==((x250|x251)+x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x253 = 1139443817LLU;
	int32_t x254 = INT32_MIN;
	uint8_t x256 = 58U;
	int32_t t56 = -62292;

	t56 = (x253==((x254|x255)+x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 1379LLU;
	int64_t x258 = -3997989412LL;
	int64_t x260 = -1LL;
	int32_t t57 = 0;

	t57 = (x257==((x258|x259)+x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = 9685604LL;
	static int32_t x262 = -1;
	int8_t x263 = INT8_MAX;
	int32_t x264 = INT32_MAX;
	static int32_t t58 = 300173812;

	t58 = (x261==((x262|x263)+x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x265 = INT64_MIN;
	static int64_t x266 = -1LL;
	uint64_t x267 = 313518223LLU;
	int16_t x268 = 263;

	t59 = (x265==((x266|x267)+x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x269 = 10U;
	static int16_t x270 = INT16_MAX;
	int16_t x271 = -1396;

	t60 = (x269==((x270|x271)+x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x273 = INT32_MAX;
	int64_t x274 = INT64_MIN;
	uint64_t x275 = UINT64_MAX;
	static volatile int16_t x276 = INT16_MAX;
	int32_t t61 = 63590532;

	t61 = (x273==((x274|x275)+x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x277 = 118U;
	int16_t x278 = -98;
	volatile uint16_t x279 = UINT16_MAX;
	static int8_t x280 = INT8_MIN;

	t62 = (x277==((x278|x279)+x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x281 = 121U;
	int32_t x282 = INT32_MIN;
	static int64_t x283 = -1766925253888LL;
	int8_t x284 = INT8_MIN;
	int32_t t63 = 1457;

	t63 = (x281==((x282|x283)+x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x285 = 44524503;
	uint8_t x287 = UINT8_MAX;
	int64_t x288 = -253LL;

	t64 = (x285==((x286|x287)+x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x289 = INT8_MIN;
	int32_t x290 = INT32_MAX;
	int8_t x291 = 1;
	static volatile int32_t t65 = 79307468;

	t65 = (x289==((x290|x291)+x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = 18U;
	static int32_t x295 = INT32_MIN;
	uint64_t x296 = UINT64_MAX;
	volatile int32_t t66 = -1;

	t66 = (x293==((x294|x295)+x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x297 = -1;
	int32_t x298 = 7;
	int8_t x299 = 1;

	t67 = (x297==((x298|x299)+x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = 3;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	static int16_t x304 = -1;

	t68 = (x301==((x302|x303)+x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = 6707939U;
	static int8_t x310 = -1;
	static int8_t x312 = INT8_MIN;
	int32_t t69 = 67;

	t69 = (x309==((x310|x311)+x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = 11711;
	int64_t x314 = INT64_MAX;
	int8_t x315 = -20;
	volatile int32_t t70 = 130343;

	t70 = (x313==((x314|x315)+x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x318 = 4U;
	static uint16_t x320 = 4608U;
	int32_t t71 = 1;

	t71 = (x317==((x318|x319)+x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x324 = -53;

	t72 = (x321==((x322|x323)+x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x326 = -51;
	static volatile int16_t x328 = 1170;
	volatile int32_t t73 = -12716;

	t73 = (x325==((x326|x327)+x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x329 = 52U;
	int64_t x330 = -1LL;
	int16_t x331 = -28;
	int16_t x332 = -1;
	int32_t t74 = 55455;

	t74 = (x329==((x330|x331)+x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 358U;
	uint8_t x334 = 44U;
	int8_t x335 = 11;
	static uint16_t x336 = UINT16_MAX;

	t75 = (x333==((x334|x335)+x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x337 = 1U;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = -1;
	int32_t t76 = 417292562;

	t76 = (x337==((x338|x339)+x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = INT8_MAX;
	int64_t x342 = -1LL;
	static volatile int16_t x343 = 13058;
	volatile int64_t x344 = -1LL;
	static int32_t t77 = 8212;

	t77 = (x341==((x342|x343)+x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x345 = 0;
	static uint16_t x346 = 1U;
	volatile int16_t x347 = -5;
	static uint64_t x348 = 69701938617743LLU;
	int32_t t78 = -8;

	t78 = (x345==((x346|x347)+x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x349 = INT16_MIN;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MAX;
	int32_t t79 = -13;

	t79 = (x349==((x350|x351)+x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -10LL;
	volatile int32_t x354 = -1;
	static uint32_t x355 = 5431U;
	uint8_t x356 = UINT8_MAX;
	volatile int32_t t80 = -275503603;

	t80 = (x353==((x354|x355)+x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x358 = 255097439U;
	static int64_t x359 = INT64_MIN;
	static uint16_t x360 = 0U;
	static int32_t t81 = 6226569;

	t81 = (x357==((x358|x359)+x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x361 = INT32_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MIN;

	t82 = (x361==((x362|x363)+x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MAX;
	uint16_t x366 = UINT16_MAX;
	int32_t x368 = 298478020;

	t83 = (x365==((x366|x367)+x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x370 = 868088306846059749LLU;
	int16_t x371 = -127;
	static volatile int16_t x372 = INT16_MIN;
	int32_t t84 = 15367574;

	t84 = (x369==((x370|x371)+x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = 253538873LLU;
	static volatile int32_t t85 = 120;

	t85 = (x373==((x374|x375)+x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	volatile int8_t x379 = -1;
	uint8_t x380 = 13U;
	volatile int32_t t86 = -3972834;

	t86 = (x377==((x378|x379)+x380));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MIN;
	int32_t x383 = INT32_MIN;
	uint8_t x384 = 3U;
	volatile int32_t t87 = 34;

	t87 = (x381==((x382|x383)+x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x385 = UINT16_MAX;
	int32_t x386 = 0;
	volatile uint16_t x388 = 1U;
	int32_t t88 = -894304;

	t88 = (x385==((x386|x387)+x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = 38257;
	static int16_t x392 = -14881;
	static int32_t t89 = 3;

	t89 = (x389==((x390|x391)+x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = INT64_MAX;
	int8_t x398 = INT8_MIN;
	uint32_t x399 = 668U;
	static int8_t x400 = -1;
	int32_t t90 = 22850688;

	t90 = (x397==((x398|x399)+x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x401 = -1;
	uint64_t x402 = 203378311133LLU;
	uint64_t x403 = 66231462401791LLU;
	int64_t x404 = -3384LL;
	volatile int32_t t91 = 3;

	t91 = (x401==((x402|x403)+x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x405 = 408805U;
	static int8_t x406 = INT8_MIN;
	volatile int32_t t92 = -66;

	t92 = (x405==((x406|x407)+x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x409 = INT8_MAX;
	volatile uint32_t x410 = 719458128U;
	uint16_t x411 = UINT16_MAX;
	static uint16_t x412 = UINT16_MAX;

	t93 = (x409==((x410|x411)+x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x414 = 3;
	volatile int8_t x415 = INT8_MAX;
	volatile int32_t t94 = -7229058;

	t94 = (x413==((x414|x415)+x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x417 = 2U;
	int16_t x418 = INT16_MIN;
	int16_t x420 = -146;

	t95 = (x417==((x418|x419)+x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x422 = UINT64_MAX;
	volatile int16_t x424 = INT16_MIN;
	int32_t t96 = -154178573;

	t96 = (x421==((x422|x423)+x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = INT8_MAX;
	uint32_t x426 = 365829755U;
	uint32_t x427 = 398831648U;
	uint64_t x428 = 1021971683298146223LLU;
	int32_t t97 = 2384955;

	t97 = (x425==((x426|x427)+x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x430 = INT32_MIN;
	volatile int8_t x431 = 1;
	uint64_t x432 = 8051LLU;

	t98 = (x429==((x430|x431)+x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x436 = 913505395830LL;
	int32_t t99 = 60537420;

	t99 = (x433==((x434|x435)+x436));

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

