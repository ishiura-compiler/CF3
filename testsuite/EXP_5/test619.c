#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 97660U;
static int32_t t0 = 18844;
volatile int32_t t1 = 7408;
volatile int32_t x12 = INT32_MIN;
int64_t x21 = 3729577833674LL;
int16_t x24 = -1;
int32_t x25 = 5820893;
uint32_t x27 = 2367561U;
int8_t x30 = -1;
static volatile int32_t t7 = 7020828;
volatile int64_t x35 = INT64_MIN;
int8_t x47 = -1;
int16_t x53 = INT16_MAX;
static uint16_t x63 = UINT16_MAX;
volatile int64_t x71 = INT64_MAX;
int8_t x74 = -1;
uint32_t x76 = 86U;
volatile int32_t t19 = -58261;
volatile int32_t x81 = INT32_MIN;
int64_t x84 = -1LL;
uint32_t x93 = 5824U;
uint32_t x103 = 27412U;
static volatile uint16_t x105 = UINT16_MAX;
volatile uint32_t x106 = 238430204U;
int16_t x108 = INT16_MAX;
volatile int32_t t25 = -767;
uint64_t x109 = UINT64_MAX;
static volatile uint16_t x120 = 955U;
volatile int32_t t28 = 5186128;
int64_t x122 = -1188156LL;
int8_t x131 = INT8_MAX;
int64_t x132 = INT64_MIN;
static int32_t t32 = -5190;
int64_t x137 = INT64_MIN;
volatile int32_t t33 = 302;
static int16_t x141 = INT16_MAX;
static uint32_t x146 = UINT32_MAX;
int32_t x147 = 34940;
int32_t x150 = 60772033;
int8_t x159 = -37;
int16_t x172 = 6366;
static int64_t x173 = INT64_MIN;
int64_t x177 = INT64_MIN;
int16_t x184 = INT16_MIN;
static volatile int16_t x186 = -1;
int8_t x195 = -1;
static int64_t x201 = 629247409LL;
static int64_t x207 = INT64_MIN;
static int16_t x209 = INT16_MIN;
int64_t x213 = INT64_MAX;
static uint16_t x218 = 26286U;
int32_t t53 = -49199276;
int16_t x225 = -1;
uint8_t x228 = UINT8_MAX;
uint32_t x232 = UINT32_MAX;
static int32_t x235 = -511;
int32_t t56 = -1;
uint8_t x238 = 19U;
uint64_t x242 = 0LLU;
volatile uint64_t x243 = 96570LLU;
volatile int8_t x244 = -4;
int8_t x253 = -3;
int32_t t62 = 155736162;
static volatile uint64_t x261 = 859892943LLU;
uint64_t x280 = 205LLU;
int16_t x282 = -1;
int32_t x284 = INT32_MIN;
int32_t t68 = 337347387;
static int64_t x285 = -287LL;
int16_t x286 = -1;
uint64_t x298 = 19240692476349621LLU;
int8_t x299 = -3;
uint32_t x300 = UINT32_MAX;
int8_t x301 = -1;
uint16_t x302 = 26U;
int32_t t73 = -42317;
int8_t x308 = -1;
static volatile uint8_t x312 = 2U;
static volatile int32_t t75 = 66;
static uint64_t x313 = 22326068LLU;
uint16_t x315 = UINT16_MAX;
uint16_t x318 = 3U;
int32_t x327 = INT32_MIN;
static volatile int32_t t79 = -89;
int64_t x336 = 6LL;
int8_t x339 = INT8_MAX;
int32_t t82 = 5877;
volatile uint64_t x343 = UINT64_MAX;
static volatile int32_t t84 = 1;
volatile int16_t x354 = -1;
uint8_t x360 = UINT8_MAX;
int32_t x361 = INT32_MAX;
int64_t x364 = -1LL;
int32_t t88 = 888446;
static int32_t t90 = 349941647;
int16_t x380 = INT16_MAX;
uint16_t x398 = UINT16_MAX;
int64_t x403 = -1LL;
int32_t x404 = 0;
int8_t x410 = INT8_MIN;


void f0(void) {
	int64_t x2 = INT64_MAX;
	int32_t x3 = -3682516;
	int32_t x4 = -1;

	t0 = (x1==((x2/x3)<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MAX;
	static uint16_t x6 = UINT16_MAX;
	volatile uint64_t x7 = 9804LLU;
	volatile int16_t x8 = -1;

	t1 = (x5==((x6/x7)<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MIN;
	uint8_t x10 = UINT8_MAX;
	int16_t x11 = -1;
	int32_t t2 = -32987466;

	t2 = (x9==((x10/x11)<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 93338U;
	volatile int32_t x14 = -1;
	static int16_t x15 = INT16_MIN;
	static int32_t x16 = 0;
	static int32_t t3 = -119631;

	t3 = (x13==((x14/x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = -1;
	static volatile uint64_t x18 = UINT64_MAX;
	uint16_t x19 = 5593U;
	int8_t x20 = 13;
	int32_t t4 = -1;

	t4 = (x17==((x18/x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x22 = 7U;
	int32_t x23 = INT32_MIN;
	int32_t t5 = -1;

	t5 = (x21==((x22/x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x26 = 1U;
	int16_t x28 = 60;
	int32_t t6 = -725;

	t6 = (x25==((x26/x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int64_t x31 = INT64_MAX;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29==((x30/x31)<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	volatile int8_t x34 = -5;
	uint8_t x36 = 3U;
	volatile int32_t t8 = 26251;

	t8 = (x33==((x34/x35)<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MAX;
	volatile int8_t x38 = -1;
	static int8_t x39 = 3;
	volatile uint8_t x40 = UINT8_MAX;
	static volatile int32_t t9 = -46565956;

	t9 = (x37==((x38/x39)<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 2U;
	static int32_t x42 = INT32_MIN;
	int16_t x43 = 130;
	int8_t x44 = 8;
	int32_t t10 = 16005707;

	t10 = (x41==((x42/x43)<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x45 = -1;
	int8_t x46 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 0;

	t11 = (x45==((x46/x47)<x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 79U;
	static int64_t x50 = INT64_MIN;
	int8_t x51 = 1;
	int16_t x52 = 118;
	volatile int32_t t12 = 0;

	t12 = (x49==((x50/x51)<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = 47948LLU;
	int32_t x55 = -1;
	static volatile int32_t x56 = 43566;
	volatile int32_t t13 = -34996;

	t13 = (x53==((x54/x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int8_t x58 = -1;
	int8_t x59 = -13;
	volatile int16_t x60 = 1;
	static int32_t t14 = 224370312;

	t14 = (x57==((x58/x59)<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint32_t x62 = 252U;
	volatile uint64_t x64 = 3694429180155687011LLU;
	volatile int32_t t15 = 6532;

	t15 = (x61==((x62/x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int64_t x66 = -1LL;
	int16_t x67 = INT16_MAX;
	uint32_t x68 = 1548U;
	static int32_t t16 = 184349750;

	t16 = (x65==((x66/x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -2389;
	int64_t x70 = INT64_MIN;
	static int32_t x72 = INT32_MAX;
	int32_t t17 = 1506;

	t17 = (x69==((x70/x71)<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 10U;
	volatile uint64_t x75 = UINT64_MAX;
	volatile int32_t t18 = -244063419;

	t18 = (x73==((x74/x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 10;
	volatile int64_t x78 = INT64_MAX;
	static int64_t x79 = -1LL;
	int32_t x80 = INT32_MIN;

	t19 = (x77==((x78/x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x82 = INT8_MIN;
	static int16_t x83 = -1;
	int32_t t20 = -2642022;

	t20 = (x81==((x82/x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = 13;
	uint64_t x87 = UINT64_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -1404;

	t21 = (x85==((x86/x87)<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = INT8_MAX;
	volatile uint8_t x95 = 1U;
	int8_t x96 = INT8_MIN;
	int32_t t22 = 8;

	t22 = (x93==((x94/x95)<x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = INT64_MAX;
	static int32_t x98 = INT32_MIN;
	static int16_t x99 = INT16_MIN;
	int16_t x100 = INT16_MAX;
	int32_t t23 = -959431521;

	t23 = (x97==((x98/x99)<x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MIN;
	uint64_t x104 = 1250709LLU;
	int32_t t24 = -1;

	t24 = (x101==((x102/x103)<x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x107 = INT32_MIN;

	t25 = (x105==((x106/x107)<x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = UINT8_MAX;
	int16_t x111 = -5;
	uint16_t x112 = UINT16_MAX;
	static int32_t t26 = 874;

	t26 = (x109==((x110/x111)<x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x113 = 367098448U;
	uint16_t x114 = 1184U;
	int32_t x115 = INT32_MAX;
	uint64_t x116 = 3792075664799LLU;
	volatile int32_t t27 = -29158423;

	t27 = (x113==((x114/x115)<x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 162861069851LLU;
	int8_t x118 = -2;
	uint64_t x119 = 1685LLU;

	t28 = (x117==((x118/x119)<x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = -1;
	volatile int16_t x123 = 127;
	int32_t x124 = -1;
	volatile int32_t t29 = 60611103;

	t29 = (x121==((x122/x123)<x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 100135LLU;
	int8_t x126 = -1;
	int16_t x127 = INT16_MAX;
	uint32_t x128 = 420517942U;
	static volatile int32_t t30 = 1529;

	t30 = (x125==((x126/x127)<x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = -1;
	uint8_t x130 = 6U;
	int32_t t31 = -84;

	t31 = (x129==((x130/x131)<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = -118LL;
	static uint16_t x135 = UINT16_MAX;
	static volatile int32_t x136 = INT32_MIN;

	t32 = (x133==((x134/x135)<x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x138 = INT8_MIN;
	volatile uint32_t x139 = 539412U;
	uint64_t x140 = UINT64_MAX;

	t33 = (x137==((x138/x139)<x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x142 = 464074532;
	uint16_t x143 = 21644U;
	int8_t x144 = INT8_MIN;
	int32_t t34 = -5;

	t34 = (x141==((x142/x143)<x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -14;
	int64_t x148 = INT64_MIN;
	volatile int32_t t35 = -326790;

	t35 = (x145==((x146/x147)<x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = 1;
	static int32_t x151 = INT32_MIN;
	uint8_t x152 = 0U;
	int32_t t36 = -1;

	t36 = (x149==((x150/x151)<x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = -8;
	int64_t x154 = INT64_MAX;
	int32_t x155 = INT32_MIN;
	int16_t x156 = -1;
	int32_t t37 = 209;

	t37 = (x153==((x154/x155)<x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	int64_t x158 = 8493774085LL;
	int8_t x160 = -1;
	int32_t t38 = -27372;

	t38 = (x157==((x158/x159)<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = 1965;
	int8_t x166 = INT8_MAX;
	int64_t x167 = INT64_MAX;
	int16_t x168 = -1;
	static int32_t t39 = 26635929;

	t39 = (x165==((x166/x167)<x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x169 = INT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int32_t x171 = 242;
	int32_t t40 = -296254514;

	t40 = (x169==((x170/x171)<x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x174 = 1U;
	uint16_t x175 = UINT16_MAX;
	uint16_t x176 = UINT16_MAX;
	int32_t t41 = 422785430;

	t41 = (x173==((x174/x175)<x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MIN;
	uint8_t x179 = 5U;
	uint64_t x180 = UINT64_MAX;
	volatile int32_t t42 = 603559;

	t42 = (x177==((x178/x179)<x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	volatile int16_t x182 = INT16_MIN;
	uint32_t x183 = 11U;
	static int32_t t43 = 2;

	t43 = (x181==((x182/x183)<x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x185 = INT64_MAX;
	volatile uint64_t x187 = 29115964LLU;
	volatile int64_t x188 = INT64_MIN;
	volatile int32_t t44 = 3;

	t44 = (x185==((x186/x187)<x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x189 = 447;
	volatile int16_t x190 = -1;
	static volatile int16_t x191 = INT16_MIN;
	int8_t x192 = INT8_MIN;
	int32_t t45 = -892;

	t45 = (x189==((x190/x191)<x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MAX;
	int16_t x194 = -3;
	int32_t x196 = INT32_MAX;
	volatile int32_t t46 = -833658107;

	t46 = (x193==((x194/x195)<x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 324056522862341407LLU;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t47 = 86;

	t47 = (x197==((x198/x199)<x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint64_t x202 = 339845484LLU;
	uint8_t x203 = 2U;
	int64_t x204 = INT64_MIN;
	volatile int32_t t48 = 374;

	t48 = (x201==((x202/x203)<x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	int32_t t49 = -33188247;

	t49 = (x205==((x206/x207)<x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x210 = -17784;
	uint64_t x211 = 25LLU;
	int8_t x212 = -25;
	int32_t t50 = -31349057;

	t50 = (x209==((x210/x211)<x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x214 = INT32_MIN;
	int32_t x215 = INT32_MIN;
	int16_t x216 = -1;
	volatile int32_t t51 = -13;

	t51 = (x213==((x214/x215)<x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x217 = 6U;
	uint16_t x219 = 5U;
	uint8_t x220 = 4U;
	volatile int32_t t52 = 389804945;

	t52 = (x217==((x218/x219)<x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	static int32_t x223 = -1;
	uint8_t x224 = 28U;

	t53 = (x221==((x222/x223)<x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x226 = -30287LL;
	int32_t x227 = -1;
	static volatile int32_t t54 = -1817;

	t54 = (x225==((x226/x227)<x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MAX;
	static int32_t x230 = -1;
	int32_t x231 = INT32_MIN;
	static int32_t t55 = 9782;

	t55 = (x229==((x230/x231)<x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MIN;
	uint16_t x234 = 465U;
	int32_t x236 = INT32_MAX;

	t56 = (x233==((x234/x235)<x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	static uint8_t x239 = UINT8_MAX;
	int32_t x240 = INT32_MAX;
	volatile int32_t t57 = 1002141;

	t57 = (x237==((x238/x239)<x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x241 = 342583276315288802LLU;
	int32_t t58 = 1691323;

	t58 = (x241==((x242/x243)<x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	volatile int32_t x248 = -23365;
	static volatile int32_t t59 = -783274;

	t59 = (x245==((x246/x247)<x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = -1;
	int32_t x250 = INT32_MAX;
	volatile int32_t x251 = INT32_MAX;
	uint8_t x252 = 87U;
	volatile int32_t t60 = 1022292692;

	t60 = (x249==((x250/x251)<x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x254 = 0;
	static int32_t x255 = INT32_MIN;
	static uint16_t x256 = 27U;
	volatile int32_t t61 = -4061;

	t61 = (x253==((x254/x255)<x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = -939;
	volatile int16_t x258 = INT16_MAX;
	int16_t x259 = -4101;
	static int64_t x260 = INT64_MIN;

	t62 = (x257==((x258/x259)<x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x262 = -421722;
	volatile int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MIN;
	volatile int32_t t63 = 30;

	t63 = (x261==((x262/x263)<x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = 396;
	static int8_t x266 = 1;
	int32_t x267 = -1;
	static int16_t x268 = INT16_MIN;
	int32_t t64 = -1;

	t64 = (x265==((x266/x267)<x268));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x269 = -5119;
	int16_t x270 = INT16_MIN;
	static int8_t x271 = 24;
	uint64_t x272 = UINT64_MAX;
	int32_t t65 = -228272181;

	t65 = (x269==((x270/x271)<x272));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = 244LL;
	int64_t x274 = -57795030820LL;
	volatile uint64_t x275 = UINT64_MAX;
	static int64_t x276 = INT64_MIN;
	static volatile int32_t t66 = 26;

	t66 = (x273==((x274/x275)<x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x277 = UINT32_MAX;
	static uint64_t x278 = 441LLU;
	int8_t x279 = INT8_MIN;
	static volatile int32_t t67 = 24103;

	t67 = (x277==((x278/x279)<x280));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x281 = 3U;
	volatile int16_t x283 = 171;

	t68 = (x281==((x282/x283)<x284));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x287 = -4384544899469LL;
	static int64_t x288 = 135762769960LL;
	int32_t t69 = -4;

	t69 = (x285==((x286/x287)<x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = -1;
	int16_t x290 = -213;
	static uint32_t x291 = 1875819U;
	uint32_t x292 = UINT32_MAX;
	volatile int32_t t70 = -54;

	t70 = (x289==((x290/x291)<x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 46959336928693124LLU;
	int16_t x294 = INT16_MIN;
	uint16_t x295 = UINT16_MAX;
	int8_t x296 = INT8_MAX;
	int32_t t71 = 1230791;

	t71 = (x293==((x294/x295)<x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x297 = 242U;
	volatile int32_t t72 = 130791284;

	t72 = (x297==((x298/x299)<x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x303 = INT8_MAX;
	uint32_t x304 = 6116539U;

	t73 = (x301==((x302/x303)<x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x305 = 4LL;
	static int32_t x306 = -9;
	uint16_t x307 = 42U;
	volatile int32_t t74 = 5093;

	t74 = (x305==((x306/x307)<x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = INT64_MIN;
	int64_t x311 = INT64_MIN;

	t75 = (x309==((x310/x311)<x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x314 = INT8_MIN;
	uint64_t x316 = 33512503LLU;
	static int32_t t76 = -23993;

	t76 = (x313==((x314/x315)<x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = 24U;
	int32_t x319 = -1;
	int32_t x320 = -1;
	static int32_t t77 = -7152;

	t77 = (x317==((x318/x319)<x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x321 = 27U;
	int32_t x322 = -88230;
	int8_t x323 = -1;
	int32_t x324 = 13;
	static volatile int32_t t78 = -74;

	t78 = (x321==((x322/x323)<x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = 177;
	volatile uint8_t x326 = UINT8_MAX;
	static int32_t x328 = INT32_MIN;

	t79 = (x325==((x326/x327)<x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x329 = UINT64_MAX;
	int64_t x330 = -1LL;
	uint64_t x331 = 167LLU;
	uint64_t x332 = 60979LLU;
	volatile int32_t t80 = -3654375;

	t80 = (x329==((x330/x331)<x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x333 = 1U;
	volatile uint64_t x334 = 485LLU;
	static int32_t x335 = INT32_MAX;
	static int32_t t81 = -561;

	t81 = (x333==((x334/x335)<x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = -6;
	static int32_t x338 = 23;
	volatile int8_t x340 = -1;

	t82 = (x337==((x338/x339)<x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x341 = 249066617802441LLU;
	volatile int16_t x342 = 8271;
	int16_t x344 = 119;
	int32_t t83 = 21248850;

	t83 = (x341==((x342/x343)<x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x345 = -1;
	uint8_t x346 = UINT8_MAX;
	static uint32_t x347 = 5546444U;
	int16_t x348 = INT16_MIN;

	t84 = (x345==((x346/x347)<x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x349 = INT8_MAX;
	static uint32_t x350 = 39373U;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -552LL;
	int32_t t85 = -115825;

	t85 = (x349==((x350/x351)<x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x353 = 1;
	int64_t x355 = 1977486314LL;
	int16_t x356 = INT16_MIN;
	int32_t t86 = 2;

	t86 = (x353==((x354/x355)<x356));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x357 = INT64_MIN;
	static int8_t x358 = INT8_MIN;
	int32_t x359 = INT32_MIN;
	int32_t t87 = -7208;

	t87 = (x357==((x358/x359)<x360));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x362 = UINT8_MAX;
	volatile uint64_t x363 = 9315LLU;

	t88 = (x361==((x362/x363)<x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x365 = INT8_MAX;
	volatile int64_t x366 = 3400873043LL;
	static int32_t x367 = INT32_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t89 = -1165;

	t89 = (x365==((x366/x367)<x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MIN;
	static int16_t x370 = INT16_MAX;
	int8_t x371 = INT8_MIN;
	int64_t x372 = -1LL;

	t90 = (x369==((x370/x371)<x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x373 = INT16_MIN;
	int16_t x374 = -446;
	int32_t x375 = -1;
	static uint32_t x376 = UINT32_MAX;
	int32_t t91 = -12895807;

	t91 = (x373==((x374/x375)<x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = -113;
	static uint8_t x378 = 0U;
	static volatile int32_t x379 = INT32_MIN;
	volatile int32_t t92 = 22483;

	t92 = (x377==((x378/x379)<x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x385 = INT32_MIN;
	volatile int64_t x386 = INT64_MAX;
	int64_t x387 = 885487LL;
	volatile uint8_t x388 = UINT8_MAX;
	volatile int32_t t93 = -1009588;

	t93 = (x385==((x386/x387)<x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 154;
	static int32_t x390 = INT32_MIN;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = -1;
	static int32_t t94 = 96546;

	t94 = (x389==((x390/x391)<x392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	int64_t x396 = INT64_MAX;
	int32_t t95 = -32;

	t95 = (x393==((x394/x395)<x396));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x397 = -1;
	int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MIN;
	int32_t t96 = -603;

	t96 = (x397==((x398/x399)<x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x401 = UINT16_MAX;
	static uint64_t x402 = 55219902071863LLU;
	static int32_t t97 = -442;

	t97 = (x401==((x402/x403)<x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = 39475;
	volatile int8_t x406 = -1;
	int32_t x407 = -23;
	volatile uint16_t x408 = 1U;
	int32_t t98 = 800494764;

	t98 = (x405==((x406/x407)<x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x409 = 27U;
	static int64_t x411 = INT64_MAX;
	volatile int64_t x412 = INT64_MAX;
	volatile int32_t t99 = 459531082;

	t99 = (x409==((x410/x411)<x412));

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

