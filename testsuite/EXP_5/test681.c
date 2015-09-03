#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x3 = 3285033512502134494LL;
static int64_t x7 = -1LL;
static uint32_t x9 = UINT32_MAX;
int16_t x10 = INT16_MIN;
static volatile int64_t t3 = -26291LL;
static int8_t x25 = -1;
int32_t x31 = INT32_MIN;
volatile int32_t x35 = -1;
static int16_t x41 = INT16_MAX;
static uint32_t x45 = 2U;
uint64_t x47 = UINT64_MAX;
uint64_t t13 = 2000582560137LLU;
int64_t x57 = INT64_MIN;
uint8_t x60 = 5U;
int16_t x64 = 1;
int64_t t15 = 145905872052976LL;
int32_t x65 = -1;
int16_t x67 = INT16_MIN;
int16_t x69 = INT16_MAX;
int32_t x88 = INT32_MAX;
int64_t x95 = 450680083056LL;
uint32_t x98 = 1049312171U;
volatile int16_t x104 = 2855;
int32_t x116 = INT32_MIN;
static uint32_t x122 = 3867039U;
int32_t t29 = -26;
volatile int64_t t31 = 196134516LL;
static int32_t x139 = -606;
uint64_t x140 = 861LLU;
int64_t x155 = INT64_MIN;
uint64_t t35 = 2240899LLU;
int64_t x157 = INT64_MAX;
volatile int64_t t36 = -218629000LL;
static uint32_t x162 = 0U;
static uint16_t x165 = 374U;
uint16_t x166 = 31432U;
uint8_t x175 = UINT8_MAX;
volatile int32_t x182 = INT32_MIN;
static uint8_t x188 = 11U;
static volatile uint8_t x190 = UINT8_MAX;
volatile int32_t x192 = INT32_MIN;
volatile int64_t t44 = -2663792360101103854LL;
int64_t t46 = -5955LL;
uint16_t x209 = 18U;
static int32_t x223 = 60;
int32_t x227 = -2173;
static uint16_t x229 = 264U;
volatile uint64_t x244 = UINT64_MAX;
volatile uint64_t t56 = 28859112535LLU;
volatile uint8_t x251 = 112U;
int16_t x253 = 15;
volatile uint32_t x255 = UINT32_MAX;
int64_t t59 = -157LL;
static volatile int32_t t61 = 8865;
int8_t x265 = INT8_MIN;
int32_t x266 = INT32_MIN;
uint8_t x269 = UINT8_MAX;
int8_t x272 = -1;
volatile int64_t t63 = 36602LL;
volatile uint64_t t64 = 250188LLU;
static int32_t x278 = -311273060;
static int32_t t65 = 136428541;
int64_t x283 = INT64_MAX;
uint64_t x291 = 46849671LLU;
int8_t x293 = INT8_MIN;
volatile uint64_t x295 = 3LLU;
static uint64_t t68 = 435488755619LLU;
volatile int32_t t69 = -1870425;
int8_t x301 = INT8_MIN;
static volatile int64_t t71 = 743955LL;
volatile int64_t t72 = -4LL;
uint32_t x316 = UINT32_MAX;
int16_t x317 = 24;
uint16_t x319 = 117U;
uint32_t x320 = 477783269U;
static volatile int8_t x321 = INT8_MIN;
volatile int32_t t75 = 942326;
static int32_t t76 = 3824;
volatile int8_t x337 = INT8_MIN;
int16_t x340 = -1;
int64_t x355 = INT64_MIN;
int16_t x358 = 1;
volatile int8_t x359 = INT8_MAX;
uint8_t x360 = 1U;
volatile int16_t x363 = INT16_MIN;
volatile int64_t x367 = 90431057LL;
uint32_t x371 = UINT32_MAX;
uint16_t x374 = UINT16_MAX;
uint16_t x376 = UINT16_MAX;
static volatile uint32_t x378 = UINT32_MAX;
int32_t x389 = INT32_MIN;
uint8_t x391 = UINT8_MAX;
int32_t x395 = -1;
volatile int64_t t92 = -4808585LL;
volatile int8_t x407 = INT8_MIN;
static uint64_t x414 = UINT64_MAX;
int64_t x419 = -751995787254653649LL;
volatile int64_t t96 = -69826351054362780LL;
static int64_t x427 = -34488330LL;
static uint32_t x432 = 71767358U;
static uint16_t x435 = 3159U;
uint32_t t99 = 110513U;


void f0(void) {
	static volatile int32_t x1 = -35;
	volatile int32_t x2 = 311;
	volatile int64_t x4 = -1LL;
	static volatile int64_t t0 = 16672185LL;

	t0 = (x1%((x2%x3)+x4));

	if (t0 != -35LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = INT16_MIN;
	int32_t x6 = 4296;
	int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -1450LL;

	t1 = (x5%((x6%x7)+x8));

	if (t1 != -32768LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x11 = 19516225151LLU;
	uint32_t x12 = UINT32_MAX;
	uint64_t t2 = 38578LLU;

	t2 = (x9%((x10%x11)+x12));

	if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 1U;
	uint8_t x14 = 43U;
	int64_t x15 = -31LL;
	int16_t x16 = 8982;

	t3 = (x13%((x14%x15)+x16));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	int64_t x18 = 19657053433LL;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = -4LL;
	int64_t t4 = -2LL;

	t4 = (x17%((x18%x19)+x20));

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static int8_t x22 = -1;
	int16_t x23 = 322;
	int16_t x24 = INT16_MAX;
	static int64_t t5 = 12LL;

	t5 = (x21%((x22%x23)+x24));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -134213039LL;
	int8_t x27 = INT8_MAX;
	uint64_t x28 = 71LLU;
	uint64_t t6 = 2041LLU;

	t6 = (x25%((x26%x27)+x28));

	if (t6 != 2LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	volatile int64_t x30 = 2577824128LL;
	uint32_t x32 = 57U;
	static volatile int64_t t7 = -918514558LL;

	t7 = (x29%((x30%x31)+x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int8_t x34 = -1;
	int8_t x36 = INT8_MAX;
	int32_t t8 = -232;

	t8 = (x33%((x34%x35)+x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int64_t x38 = 4245576333145309719LL;
	int16_t x39 = INT16_MIN;
	static volatile int32_t x40 = INT32_MAX;
	volatile int64_t t9 = -10750LL;

	t9 = (x37%((x38%x39)+x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x42 = 38599U;
	uint16_t x43 = 3U;
	static int32_t x44 = INT32_MIN;
	volatile uint32_t t10 = 4201U;

	t10 = (x41%((x42%x43)+x44));

	if (t10 != 32767U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x46 = INT16_MIN;
	int16_t x48 = INT16_MIN;
	uint64_t t11 = 24500330558LLU;

	t11 = (x45%((x46%x47)+x48));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 1U;
	volatile int32_t x50 = 906682396;
	int16_t x51 = INT16_MIN;
	static int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 310428251;

	t12 = (x49%((x50%x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x53 = 29373352LLU;
	volatile uint16_t x54 = UINT16_MAX;
	volatile int64_t x55 = -1LL;
	int8_t x56 = -56;

	t13 = (x53%((x54%x55)+x56));

	if (t13 != 29373352LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MAX;
	volatile int64_t t14 = -1085470501LL;

	t14 = (x57%((x58%x59)+x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	int16_t x62 = INT16_MIN;
	static int16_t x63 = -1;

	t15 = (x61%((x62%x63)+x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	int64_t x68 = INT64_MAX;
	volatile int64_t t16 = -14906474819535LL;

	t16 = (x65%((x66%x67)+x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	static int64_t x71 = -568020459169977LL;
	int8_t x72 = -1;
	static volatile int64_t t17 = 0LL;

	t17 = (x69%((x70%x71)+x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -120;
	volatile int16_t x78 = INT16_MAX;
	int64_t x79 = -1LL;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t18 = 1010766LL;

	t18 = (x77%((x78%x79)+x80));

	if (t18 != -120LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x85 = UINT8_MAX;
	uint32_t x86 = 16630079U;
	volatile uint64_t x87 = UINT64_MAX;
	static uint64_t t19 = 27912359663LLU;

	t19 = (x85%((x86%x87)+x88));

	if (t19 != 255LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 198571608LLU;
	static volatile int64_t x90 = INT64_MAX;
	static uint32_t x91 = 1U;
	uint32_t x92 = 200U;
	uint64_t t20 = 59517822LLU;

	t20 = (x89%((x90%x91)+x92));

	if (t20 != 8LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x93 = UINT64_MAX;
	int64_t x94 = INT64_MAX;
	static volatile uint16_t x96 = UINT16_MAX;
	static uint64_t t21 = 133671111714740LLU;

	t21 = (x93%((x94%x95)+x96));

	if (t21 != 56815659685LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x97 = 11408081LLU;
	volatile int16_t x99 = -1;
	uint16_t x100 = 1U;
	volatile uint64_t t22 = 910567692883161122LLU;

	t22 = (x97%((x98%x99)+x100));

	if (t22 != 11408081LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 4190265585545651LLU;
	uint64_t x102 = 3625308104LLU;
	int32_t x103 = -508;
	uint64_t t23 = 9024413746LLU;

	t23 = (x101%((x102%x103)+x104));

	if (t23 != 667938927LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = 46567277709LL;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -1LL;
	volatile int64_t t24 = -7820LL;

	t24 = (x105%((x106%x107)+x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 26U;
	uint8_t x110 = 57U;
	int64_t x111 = 35LL;
	int32_t x112 = INT32_MIN;
	static int64_t t25 = -2281077404LL;

	t25 = (x109%((x110%x111)+x112));

	if (t25 != 26LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	static uint8_t x114 = UINT8_MAX;
	volatile int16_t x115 = INT16_MAX;
	static int32_t t26 = 16;

	t26 = (x113%((x114%x115)+x116));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = 13763;
	static uint16_t x118 = 16659U;
	volatile int16_t x119 = -1;
	volatile uint8_t x120 = UINT8_MAX;
	int32_t t27 = -600;

	t27 = (x117%((x118%x119)+x120));

	if (t27 != 248) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	volatile int64_t t28 = 625858885LL;

	t28 = (x121%((x122%x123)+x124));

	if (t28 != 4294967295LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = 29364650;
	static uint8_t x126 = UINT8_MAX;
	static uint8_t x127 = 4U;
	int8_t x128 = -1;

	t29 = (x125%((x126%x127)+x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -1;
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;
	static volatile int64_t t30 = -11970735LL;

	t30 = (x129%((x130%x131)+x132));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = 3086909U;
	int8_t x135 = 6;
	int64_t x136 = -22885LL;

	t31 = (x133%((x134%x135)+x136));

	if (t31 != 127LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x137 = UINT32_MAX;
	volatile int8_t x138 = INT8_MIN;
	static uint64_t t32 = 878788197594LLU;

	t32 = (x137%((x138%x139)+x140));

	if (t32 != 707LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 9034166055025944417LLU;
	volatile int8_t x142 = INT8_MIN;
	volatile int32_t x143 = 6342184;
	int32_t x144 = INT32_MAX;
	volatile uint64_t t33 = 19265LLU;

	t33 = (x141%((x142%x143)+x144));

	if (t33 != 1380248624LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = INT64_MAX;
	volatile int32_t x146 = -1;
	uint16_t x147 = 142U;
	int16_t x148 = 349;
	int64_t t34 = -1223954589204557472LL;

	t34 = (x145%((x146%x147)+x148));

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x153 = UINT8_MAX;
	static uint64_t x154 = UINT64_MAX;
	uint16_t x156 = 9U;

	t35 = (x153%((x154%x155)+x156));

	if (t35 != 255LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x158 = INT32_MAX;
	uint16_t x159 = 24055U;
	int8_t x160 = INT8_MIN;

	t36 = (x157%((x158%x159)+x160));

	if (t36 != 11263LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x161 = INT64_MIN;
	static int64_t x163 = INT64_MIN;
	uint8_t x164 = 3U;
	volatile int64_t t37 = 2LL;

	t37 = (x161%((x162%x163)+x164));

	if (t37 != -2LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x167 = 689550050U;
	int16_t x168 = -3269;
	uint32_t t38 = 5U;

	t38 = (x165%((x166%x167)+x168));

	if (t38 != 374U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x169 = UINT8_MAX;
	uint8_t x170 = 47U;
	int16_t x171 = INT16_MIN;
	uint32_t x172 = 1U;
	uint32_t t39 = 2466970U;

	t39 = (x169%((x170%x171)+x172));

	if (t39 != 15U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 0U;
	int16_t x174 = -244;
	int64_t x176 = 2480940LL;
	volatile int64_t t40 = -1145060750LL;

	t40 = (x173%((x174%x175)+x176));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = UINT64_MAX;
	int16_t x178 = INT16_MIN;
	volatile uint64_t x179 = 2358294780234LLU;
	uint8_t x180 = UINT8_MAX;
	volatile uint64_t t41 = 459LLU;

	t41 = (x177%((x178%x179)+x180));

	if (t41 != 85335751021LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x181 = INT16_MIN;
	int8_t x183 = -1;
	uint64_t x184 = 240591255213524LLU;
	volatile uint64_t t42 = 93LLU;

	t42 = (x181%((x182%x183)+x184));

	if (t42 != 131353978206720LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -1;
	volatile int8_t x186 = INT8_MIN;
	static int8_t x187 = 16;
	int32_t t43 = -1522;

	t43 = (x185%((x186%x187)+x188));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int64_t x191 = INT64_MAX;

	t44 = (x189%((x190%x191)+x192));

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 63681533090505178LLU;
	uint32_t x194 = 0U;
	int64_t x195 = -8943122531LL;
	uint8_t x196 = UINT8_MAX;
	volatile uint64_t t45 = 1411716595LLU;

	t45 = (x193%((x194%x195)+x196));

	if (t45 != 148LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x201 = -1LL;
	int16_t x202 = INT16_MIN;
	int32_t x203 = 39;
	int64_t x204 = -1288171LL;

	t46 = (x201%((x202%x203)+x204));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x205 = 201791869274837LL;
	uint32_t x206 = 2U;
	uint8_t x207 = 68U;
	int8_t x208 = INT8_MIN;
	int64_t t47 = 21LL;

	t47 = (x205%((x206%x207)+x208));

	if (t47 != 1426726727LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x210 = INT32_MAX;
	static volatile uint8_t x211 = 30U;
	int8_t x212 = -1;
	volatile int32_t t48 = -718024428;

	t48 = (x209%((x210%x211)+x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -3545969395289LL;
	uint8_t x214 = 72U;
	int64_t x215 = -57536LL;
	volatile int16_t x216 = INT16_MIN;
	int64_t t49 = -1LL;

	t49 = (x213%((x214%x215)+x216));

	if (t49 != -14177LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x217 = 939810970LL;
	uint32_t x218 = UINT32_MAX;
	int16_t x219 = INT16_MIN;
	uint64_t x220 = 50526275224560727LLU;
	uint64_t t50 = 9331207LLU;

	t50 = (x217%((x218%x219)+x220));

	if (t50 != 939810970LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 13U;
	uint32_t x222 = UINT32_MAX;
	uint32_t x224 = 1254470260U;
	volatile uint32_t t51 = 10736762U;

	t51 = (x221%((x222%x223)+x224));

	if (t51 != 13U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = -1;
	static int16_t x226 = -185;
	int8_t x228 = -1;
	static volatile int32_t t52 = -168834;

	t52 = (x225%((x226%x227)+x228));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x230 = INT32_MAX;
	int64_t x231 = -1LL;
	uint16_t x232 = 615U;
	volatile int64_t t53 = -649850200335152848LL;

	t53 = (x229%((x230%x231)+x232));

	if (t53 != 264LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x233 = INT16_MAX;
	int32_t x234 = 120900335;
	int64_t x235 = 339755LL;
	uint32_t x236 = 9228383U;
	volatile int64_t t54 = -83LL;

	t54 = (x233%((x234%x235)+x236));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x237 = INT8_MIN;
	int16_t x238 = 88;
	int64_t x239 = INT64_MIN;
	int16_t x240 = INT16_MIN;
	volatile int64_t t55 = 453276144LL;

	t55 = (x237%((x238%x239)+x240));

	if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x241 = 2857;
	static int16_t x242 = 401;
	uint32_t x243 = 12241U;

	t56 = (x241%((x242%x243)+x244));

	if (t56 != 57LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = INT32_MAX;
	int8_t x246 = INT8_MAX;
	int32_t x247 = INT32_MAX;
	uint16_t x248 = 0U;
	static int32_t t57 = 97459;

	t57 = (x245%((x246%x247)+x248));

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = 4288;
	uint8_t x250 = 15U;
	volatile uint64_t x252 = 633448LLU;
	volatile uint64_t t58 = 50725192037LLU;

	t58 = (x249%((x250%x251)+x252));

	if (t58 != 4288LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x254 = -1LL;
	static int8_t x256 = -49;

	t59 = (x253%((x254%x255)+x256));

	if (t59 != 15LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x257 = -1;
	int16_t x258 = INT16_MAX;
	int8_t x259 = INT8_MAX;
	int32_t x260 = 3317045;
	static volatile int32_t t60 = -152698398;

	t60 = (x257%((x258%x259)+x260));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = 21;
	uint8_t x262 = 80U;
	int16_t x263 = INT16_MIN;
	int16_t x264 = -1;

	t61 = (x261%((x262%x263)+x264));

	if (t61 != 21) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x267 = -1;
	uint32_t x268 = UINT32_MAX;
	volatile uint32_t t62 = 4080U;

	t62 = (x265%((x266%x267)+x268));

	if (t62 != 4294967168U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x270 = -1LL;
	volatile int8_t x271 = INT8_MAX;

	t63 = (x269%((x270%x271)+x272));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = UINT16_MAX;
	static uint32_t x274 = 55762U;
	uint64_t x275 = 98LLU;
	uint16_t x276 = 96U;

	t64 = (x273%((x274%x275)+x276));

	if (t64 != 63LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = 5;
	static int16_t x279 = 6341;
	volatile uint16_t x280 = 22822U;

	t65 = (x277%((x278%x279)+x280));

	if (t65 != 5) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x281 = 1;
	int8_t x282 = -1;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t66 = 3279305249905878667LLU;

	t66 = (x281%((x282%x283)+x284));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = -1;
	volatile uint32_t x290 = UINT32_MAX;
	int8_t x292 = INT8_MAX;
	static volatile uint64_t t67 = 260285451361625653LLU;

	t67 = (x289%((x290%x291)+x292));

	if (t67 != 8767677LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x294 = -1LL;
	uint32_t x296 = 1815685U;

	t68 = (x293%((x294%x295)+x296));

	if (t68 != 1160803LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x297 = 428U;
	int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	volatile int32_t x300 = -1;

	t69 = (x297%((x298%x299)+x300));

	if (t69 != 41) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x302 = -7;
	uint8_t x303 = UINT8_MAX;
	int64_t x304 = -1LL;
	static volatile int64_t t70 = 41LL;

	t70 = (x301%((x302%x303)+x304));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x305 = UINT8_MAX;
	int64_t x306 = INT64_MIN;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MIN;

	t71 = (x305%((x306%x307)+x308));

	if (t71 != 255LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x309 = -15;
	volatile int64_t x310 = -1LL;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MIN;

	t72 = (x309%((x310%x311)+x312));

	if (t72 != -15LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x313 = 108209864LLU;
	uint16_t x314 = 0U;
	int8_t x315 = INT8_MIN;
	volatile uint64_t t73 = 421383873582556LLU;

	t73 = (x313%((x314%x315)+x316));

	if (t73 != 108209864LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x318 = 0U;
	volatile uint32_t t74 = 137U;

	t74 = (x317%((x318%x319)+x320));

	if (t74 != 24U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x322 = INT16_MIN;
	static int32_t x323 = -1;
	static int8_t x324 = INT8_MIN;

	t75 = (x321%((x322%x323)+x324));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = INT32_MAX;
	int16_t x332 = INT16_MAX;

	t76 = (x329%((x330%x331)+x332));

	if (t76 != 255) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = INT64_MAX;
	int8_t x334 = 3;
	uint16_t x335 = UINT16_MAX;
	uint64_t x336 = 86150250237148062LLU;
	uint64_t t77 = 1902750592LLU;

	t77 = (x333%((x334%x335)+x336));

	if (t77 != 5295261479932852LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x338 = -6;
	int64_t x339 = -1LL;
	int64_t t78 = 52829968326244LL;

	t78 = (x337%((x338%x339)+x340));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x345 = 4U;
	int16_t x346 = -10976;
	int32_t x347 = INT32_MAX;
	uint64_t x348 = UINT64_MAX;
	uint64_t t79 = 5535LLU;

	t79 = (x345%((x346%x347)+x348));

	if (t79 != 4LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x349 = 9;
	static int16_t x350 = 0;
	int64_t x351 = INT64_MIN;
	static int16_t x352 = -404;
	int64_t t80 = 21345976761LL;

	t80 = (x349%((x350%x351)+x352));

	if (t80 != 9LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = -27131834063970LL;
	static uint32_t x356 = 4U;
	int64_t t81 = 9269561402205962LL;

	t81 = (x353%((x354%x355)+x356));

	if (t81 != 13574145789971LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x357 = INT8_MIN;
	int32_t t82 = -6868265;

	t82 = (x357%((x358%x359)+x360));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x361 = 2;
	int32_t x362 = INT32_MIN;
	uint8_t x364 = 3U;
	volatile int32_t t83 = -1025352;

	t83 = (x361%((x362%x363)+x364));

	if (t83 != 2) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = INT64_MIN;
	uint64_t x366 = 98181793LLU;
	volatile int64_t x368 = INT64_MAX;
	uint64_t t84 = 150206980600966LLU;

	t84 = (x365%((x366%x367)+x368));

	if (t84 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x369 = 172;
	int64_t x370 = INT64_MIN;
	int64_t x372 = -1LL;
	volatile int64_t t85 = -569308413543568LL;

	t85 = (x369%((x370%x371)+x372));

	if (t85 != 172LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x373 = 25144824U;
	uint64_t x375 = 211001181LLU;
	uint64_t t86 = 697483LLU;

	t86 = (x373%((x374%x375)+x376));

	if (t86 != 110454LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MIN;
	int32_t x379 = INT32_MIN;
	int64_t x380 = -1LL;
	volatile int64_t t87 = -1455422680775LL;

	t87 = (x377%((x378%x379)+x380));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = 41198933;
	int64_t x382 = INT64_MIN;
	static volatile uint8_t x383 = 19U;
	volatile int8_t x384 = INT8_MIN;
	static int64_t t88 = -116420861LL;

	t88 = (x381%((x382%x383)+x384));

	if (t88 != 69LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = 3391U;
	static int64_t x386 = -1LL;
	volatile uint16_t x387 = 8385U;
	int8_t x388 = INT8_MAX;
	volatile int64_t t89 = -7336230322LL;

	t89 = (x385%((x386%x387)+x388));

	if (t89 != 115LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x390 = INT8_MIN;
	volatile uint16_t x392 = 140U;
	volatile int32_t t90 = 6851;

	t90 = (x389%((x390%x391)+x392));

	if (t90 != -8) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = 1565U;
	volatile int32_t x394 = INT32_MAX;
	uint16_t x396 = UINT16_MAX;
	volatile int32_t t91 = -61142174;

	t91 = (x393%((x394%x395)+x396));

	if (t91 != 1565) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = INT64_MIN;
	static uint16_t x398 = 2U;
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = -1;

	t92 = (x397%((x398%x399)+x400));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = 122U;
	int16_t x402 = INT16_MIN;
	int32_t x403 = INT32_MAX;
	volatile uint32_t x404 = UINT32_MAX;
	static volatile uint32_t t93 = 5553U;

	t93 = (x401%((x402%x403)+x404));

	if (t93 != 122U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x405 = -7028;
	int16_t x406 = INT16_MIN;
	volatile uint8_t x408 = 1U;
	volatile int32_t t94 = 251;

	t94 = (x405%((x406%x407)+x408));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x413 = INT32_MAX;
	int64_t x415 = -1LL;
	int32_t x416 = -1;
	volatile uint64_t t95 = 1978048LLU;

	t95 = (x413%((x414%x415)+x416));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = -1;
	static int64_t x418 = INT64_MIN;
	int8_t x420 = INT8_MAX;

	t96 = (x417%((x418%x419)+x420));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x425 = -1;
	uint64_t x426 = UINT64_MAX;
	volatile int32_t x428 = INT32_MIN;
	volatile uint64_t t97 = 1168518273964403LLU;

	t97 = (x425%((x426%x427)+x428));

	if (t97 != 2112995318LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x429 = UINT8_MAX;
	int16_t x430 = -11707;
	uint64_t x431 = 60344385767LLU;
	volatile uint64_t t98 = 0LLU;

	t98 = (x429%((x430%x431)+x432));

	if (t98 != 255LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = -1;
	static int32_t x434 = INT32_MAX;
	uint32_t x436 = UINT32_MAX;

	t99 = (x433%((x434%x435)+x436));

	if (t99 != 1263U) { NG(); } else { ; }
	
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

