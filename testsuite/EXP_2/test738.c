#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = -1;
uint8_t x6 = UINT8_MAX;
static int16_t x7 = INT16_MAX;
static int8_t x18 = INT8_MIN;
int32_t t2 = 2;
int16_t x21 = INT16_MIN;
volatile int64_t x22 = INT64_MAX;
int64_t x23 = 8036LL;
uint8_t x24 = 36U;
int32_t x33 = -1;
volatile uint8_t x45 = UINT8_MAX;
uint8_t x46 = UINT8_MAX;
int8_t x47 = INT8_MAX;
int32_t t8 = -6357073;
int16_t x50 = -4457;
volatile uint16_t x51 = 31U;
int32_t t9 = -2594;
int32_t x54 = 20;
int16_t x55 = INT16_MIN;
int32_t t11 = -107628;
volatile int16_t x63 = -133;
int8_t x64 = 8;
uint32_t x74 = 22933U;
uint32_t x76 = 956441U;
int32_t t14 = 31;
int64_t x77 = 2607LL;
volatile uint8_t x80 = 7U;
int16_t x82 = 27;
volatile int8_t x87 = INT8_MIN;
int32_t x88 = -934523705;
static uint32_t x91 = 13U;
volatile int8_t x97 = -1;
uint64_t x100 = 1092740139614LLU;
volatile uint8_t x106 = 54U;
volatile int16_t x116 = 31;
int32_t t23 = -1172292;
volatile uint16_t x123 = 13U;
volatile int32_t t26 = 118;
volatile uint64_t x142 = 12LLU;
uint64_t x146 = 76LLU;
int32_t t29 = -10214332;
static uint16_t x158 = 3679U;
volatile int32_t x170 = INT32_MIN;
int64_t x180 = INT64_MAX;
int32_t t35 = -3347197;
uint64_t x181 = 241328895271897LLU;
uint8_t x182 = 123U;
uint16_t x183 = UINT16_MAX;
int8_t x187 = INT8_MIN;
int64_t x189 = -327926731LL;
uint64_t x192 = 53LLU;
int64_t x193 = INT64_MIN;
int32_t x195 = -6438668;
int32_t t39 = 84767404;
int8_t x207 = INT8_MIN;
volatile int16_t x218 = -1;
int32_t x233 = -1;
uint32_t x241 = 194U;
int16_t x242 = -6;
volatile int32_t t48 = 1;
int8_t x255 = INT8_MAX;
volatile int8_t x256 = INT8_MIN;
static int32_t x264 = INT32_MIN;
int8_t x269 = -11;
int32_t x285 = -1;
int64_t x286 = 155298493667LL;
uint64_t x294 = 2061042347018668LLU;
int32_t x299 = INT32_MIN;
volatile uint16_t x303 = 335U;
volatile int16_t x310 = -1;
int16_t x311 = INT16_MIN;
int8_t x312 = -1;
int8_t x321 = INT8_MAX;
volatile int8_t x322 = INT8_MIN;
uint64_t x334 = 4718213LLU;
static int32_t t65 = -2162183;
uint8_t x338 = 2U;
uint64_t x347 = 27264LLU;
static volatile int16_t x349 = 156;
int32_t x353 = INT32_MIN;
uint32_t x355 = 325U;
int32_t t70 = -755643;
volatile int32_t x358 = INT32_MIN;
int32_t t71 = 196104052;
volatile uint8_t x361 = UINT8_MAX;
int16_t x367 = INT16_MAX;
volatile uint64_t x368 = 8787216928897865LLU;
volatile uint16_t x369 = 61U;
static uint16_t x378 = 1497U;
int32_t x384 = INT32_MAX;
uint16_t x400 = UINT16_MAX;
int32_t t82 = -45;
int32_t t83 = 25148;
static int32_t t84 = -4;
int8_t x429 = -1;
int64_t x431 = INT64_MAX;
int16_t x442 = -1;
static uint8_t x445 = 6U;
static uint8_t x448 = UINT8_MAX;
uint8_t x464 = UINT8_MAX;
int16_t x465 = INT16_MIN;
uint16_t x473 = UINT16_MAX;
int16_t x487 = INT16_MIN;
uint8_t x491 = 92U;
int32_t t96 = 825296;
int16_t x493 = INT16_MIN;
int64_t x494 = INT64_MIN;
static uint16_t x495 = UINT16_MAX;
static int16_t x507 = INT16_MAX;
volatile int32_t t99 = 341691711;


void f0(void) {
	static int16_t x1 = -12511;
	uint32_t x2 = 6914U;
	int32_t x3 = 112611865;
	static int64_t x4 = INT64_MIN;
	int32_t t0 = 16351;

	t0 = ((x1%(x2%x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x8 = 365;
	int32_t t1 = 129629;

	t1 = ((x5%(x6%x7))<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 86208661U;
	static int32_t x19 = INT32_MAX;
	uint8_t x20 = 1U;

	t2 = ((x17%(x18%x19))<=x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t t3 = -3;

	t3 = ((x21%(x22%x23))<=x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x25 = 386764LLU;
	static int32_t x26 = 1040923755;
	int8_t x27 = 20;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t4 = -219429048;

	t4 = ((x25%(x26%x27))<=x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x30 = INT8_MAX;
	volatile uint8_t x31 = 22U;
	volatile int8_t x32 = 4;
	int32_t t5 = -11562169;

	t5 = ((x29%(x30%x31))<=x32);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x34 = -1;
	int64_t x35 = INT64_MIN;
	static uint32_t x36 = 47558U;
	int32_t t6 = -24;

	t6 = ((x33%(x34%x35))<=x36);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = INT32_MAX;
	static int32_t x42 = INT32_MIN;
	int16_t x43 = -10;
	static uint32_t x44 = 13250529U;
	int32_t t7 = -878432838;

	t7 = ((x41%(x42%x43))<=x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x48 = -1LL;

	t8 = ((x45%(x46%x47))<=x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 30673985544074LLU;
	int16_t x52 = INT16_MAX;

	t9 = ((x49%(x50%x51))<=x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x53 = INT32_MAX;
	int8_t x56 = INT8_MIN;
	static int32_t t10 = -150050;

	t10 = ((x53%(x54%x55))<=x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MAX;
	uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MIN;
	static volatile int8_t x60 = INT8_MIN;

	t11 = ((x57%(x58%x59))<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 14U;
	int16_t x62 = -1;
	volatile int32_t t12 = 52;

	t12 = ((x61%(x62%x63))<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = INT32_MIN;
	static int16_t x71 = INT16_MAX;
	int32_t x72 = INT32_MIN;
	int32_t t13 = 2299;

	t13 = ((x69%(x70%x71))<=x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x73 = INT64_MIN;
	static uint64_t x75 = 3374170LLU;

	t14 = ((x73%(x74%x75))<=x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = -1LL;
	uint8_t x79 = 22U;
	volatile int32_t t15 = -379420;

	t15 = ((x77%(x78%x79))<=x80);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x81 = -1;
	static uint16_t x83 = 12U;
	int16_t x84 = 782;
	volatile int32_t t16 = 0;

	t16 = ((x81%(x82%x83))<=x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x85 = INT16_MIN;
	int32_t x86 = -1;
	volatile int32_t t17 = 2134;

	t17 = ((x85%(x86%x87))<=x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	int32_t x90 = INT32_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t18 = 1192;

	t18 = ((x89%(x90%x91))<=x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x98 = -30;
	int64_t x99 = -10928991116LL;
	static volatile int32_t t19 = -1;

	t19 = ((x97%(x98%x99))<=x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x101 = -1;
	int8_t x102 = INT8_MAX;
	uint64_t x103 = 2117103LLU;
	static uint64_t x104 = UINT64_MAX;
	volatile int32_t t20 = -24924;

	t20 = ((x101%(x102%x103))<=x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = INT32_MIN;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MIN;
	int32_t t21 = -91699112;

	t21 = ((x105%(x106%x107))<=x108);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = 29844527LL;
	int32_t x111 = INT32_MIN;
	static uint32_t x112 = UINT32_MAX;
	int32_t t22 = 5155537;

	t22 = ((x109%(x110%x111))<=x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = 1;
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = 309046367LLU;

	t23 = ((x113%(x114%x115))<=x116);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -1LL;
	static uint32_t x118 = 42U;
	volatile int64_t x119 = INT64_MIN;
	int16_t x120 = INT16_MAX;
	volatile int32_t t24 = 23460;

	t24 = ((x117%(x118%x119))<=x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x121 = 246U;
	int64_t x122 = INT64_MIN;
	uint32_t x124 = 7U;
	int32_t t25 = 30805;

	t25 = ((x121%(x122%x123))<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = UINT16_MAX;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = 86872LLU;

	t26 = ((x129%(x130%x131))<=x132);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MAX;
	volatile int32_t x134 = INT32_MIN;
	int64_t x135 = -92747043LL;
	static int32_t x136 = INT32_MIN;
	volatile int32_t t27 = 0;

	t27 = ((x133%(x134%x135))<=x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x141 = -5968;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;
	volatile int32_t t28 = -140128655;

	t28 = ((x141%(x142%x143))<=x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	int16_t x147 = -1;
	static int8_t x148 = INT8_MIN;

	t29 = ((x145%(x146%x147))<=x148);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x153 = -401LL;
	int16_t x154 = INT16_MAX;
	int64_t x155 = INT64_MIN;
	int16_t x156 = -10683;
	static int32_t t30 = 386063;

	t30 = ((x153%(x154%x155))<=x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = -28;
	uint32_t x159 = 1488U;
	uint64_t x160 = 290LLU;
	volatile int32_t t31 = -290;

	t31 = ((x157%(x158%x159))<=x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x161 = INT8_MIN;
	int64_t x162 = -79963090402118409LL;
	volatile int64_t x163 = 13328362367451066LL;
	int32_t x164 = INT32_MIN;
	int32_t t32 = 947335079;

	t32 = ((x161%(x162%x163))<=x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x169 = -773;
	volatile int32_t x171 = INT32_MAX;
	uint16_t x172 = 1016U;
	int32_t t33 = 63;

	t33 = ((x169%(x170%x171))<=x172);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x173 = UINT8_MAX;
	static volatile int16_t x174 = INT16_MAX;
	volatile int8_t x175 = -2;
	int64_t x176 = INT64_MIN;
	volatile int32_t t34 = -14693;

	t34 = ((x173%(x174%x175))<=x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1;
	uint8_t x178 = 55U;
	uint8_t x179 = 26U;

	t35 = ((x177%(x178%x179))<=x180);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x184 = -1;
	int32_t t36 = 1128136;

	t36 = ((x181%(x182%x183))<=x184);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = 1771U;
	volatile int16_t x186 = 6;
	int32_t x188 = -1;
	int32_t t37 = 11;

	t37 = ((x185%(x186%x187))<=x188);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x190 = 13966;
	int64_t x191 = -607LL;
	volatile int32_t t38 = -7882965;

	t38 = ((x189%(x190%x191))<=x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x194 = 3942;
	uint32_t x196 = 202505U;

	t39 = ((x193%(x194%x195))<=x196);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x205 = 198LLU;
	static volatile int8_t x206 = INT8_MAX;
	volatile int64_t x208 = -15LL;
	volatile int32_t t40 = -1187;

	t40 = ((x205%(x206%x207))<=x208);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x209 = UINT32_MAX;
	int32_t x210 = INT32_MIN;
	uint32_t x211 = 110U;
	uint16_t x212 = 18U;
	int32_t t41 = 141676151;

	t41 = ((x209%(x210%x211))<=x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = INT16_MAX;
	int64_t x214 = 140431643434530347LL;
	uint8_t x215 = UINT8_MAX;
	int32_t x216 = -83;
	static volatile int32_t t42 = 833881638;

	t42 = ((x213%(x214%x215))<=x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x217 = INT64_MIN;
	volatile int32_t x219 = 3441682;
	int16_t x220 = 4172;
	int32_t t43 = 7;

	t43 = ((x217%(x218%x219))<=x220);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x221 = INT16_MIN;
	volatile int8_t x222 = -1;
	int32_t x223 = 915321332;
	volatile int32_t x224 = INT32_MAX;
	int32_t t44 = 22552611;

	t44 = ((x221%(x222%x223))<=x224);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x225 = -1LL;
	int32_t x226 = INT32_MIN;
	volatile uint16_t x227 = UINT16_MAX;
	static int8_t x228 = -19;
	int32_t t45 = 7;

	t45 = ((x225%(x226%x227))<=x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x234 = INT16_MIN;
	int8_t x235 = INT8_MAX;
	int64_t x236 = INT64_MAX;
	int32_t t46 = -31198124;

	t46 = ((x233%(x234%x235))<=x236);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x237 = UINT64_MAX;
	uint16_t x238 = 249U;
	int64_t x239 = 10438758871484LL;
	static volatile uint32_t x240 = 123195302U;
	static volatile int32_t t47 = 639;

	t47 = ((x237%(x238%x239))<=x240);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x243 = INT64_MAX;
	static uint32_t x244 = 4145440U;

	t48 = ((x241%(x242%x243))<=x244);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x249 = UINT8_MAX;
	volatile int8_t x250 = -62;
	static int32_t x251 = 147113;
	uint8_t x252 = 0U;
	static int32_t t49 = -813317;

	t49 = ((x249%(x250%x251))<=x252);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x253 = 3;
	int32_t x254 = -1;
	int32_t t50 = 2;

	t50 = ((x253%(x254%x255))<=x256);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x261 = INT8_MAX;
	int8_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	static int32_t t51 = -11400;

	t51 = ((x261%(x262%x263))<=x264);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x265 = UINT16_MAX;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 14304649U;
	volatile uint8_t x268 = 0U;
	static int32_t t52 = 1539812;

	t52 = ((x265%(x266%x267))<=x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x270 = INT8_MIN;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = 1653;
	static int32_t t53 = 46;

	t53 = ((x269%(x270%x271))<=x272);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x277 = -1;
	volatile int16_t x278 = INT16_MIN;
	static volatile uint8_t x279 = 66U;
	volatile uint8_t x280 = 81U;
	volatile int32_t t54 = 610;

	t54 = ((x277%(x278%x279))<=x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x287 = UINT16_MAX;
	static int16_t x288 = -1;
	static int32_t t55 = 700431266;

	t55 = ((x285%(x286%x287))<=x288);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x293 = 80;
	int32_t x295 = INT32_MAX;
	static int64_t x296 = -29053686171985094LL;
	volatile int32_t t56 = -82011;

	t56 = ((x293%(x294%x295))<=x296);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x298 = -1LL;
	int16_t x300 = INT16_MIN;
	int32_t t57 = -116934625;

	t57 = ((x297%(x298%x299))<=x300);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x301 = INT16_MAX;
	int8_t x302 = INT8_MAX;
	static uint16_t x304 = 17U;
	int32_t t58 = -2426342;

	t58 = ((x301%(x302%x303))<=x304);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x305 = -1;
	int16_t x306 = -13;
	int16_t x307 = -1844;
	volatile int32_t x308 = INT32_MAX;
	volatile int32_t t59 = -1794310;

	t59 = ((x305%(x306%x307))<=x308);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x309 = 1U;
	int32_t t60 = 60023;

	t60 = ((x309%(x310%x311))<=x312);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x313 = 2171U;
	volatile int8_t x314 = INT8_MIN;
	static int64_t x315 = INT64_MIN;
	static int64_t x316 = -1LL;
	int32_t t61 = 16860804;

	t61 = ((x313%(x314%x315))<=x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x317 = 448U;
	volatile int16_t x318 = INT16_MIN;
	int8_t x319 = INT8_MAX;
	static uint32_t x320 = 1139486196U;
	volatile int32_t t62 = -440709;

	t62 = ((x317%(x318%x319))<=x320);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MAX;
	int32_t t63 = -154495;

	t63 = ((x321%(x322%x323))<=x324);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = 7250930LL;
	uint32_t x326 = 221651U;
	int32_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile int32_t t64 = -120386291;

	t64 = ((x325%(x326%x327))<=x328);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 106U;
	uint8_t x335 = 28U;
	int16_t x336 = -2330;

	t65 = ((x333%(x334%x335))<=x336);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x337 = INT64_MAX;
	uint16_t x339 = 552U;
	volatile int64_t x340 = INT64_MIN;
	static volatile int32_t t66 = 3106;

	t66 = ((x337%(x338%x339))<=x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x341 = 16U;
	int16_t x342 = INT16_MAX;
	int16_t x343 = INT16_MIN;
	static uint16_t x344 = 4840U;
	volatile int32_t t67 = -6602;

	t67 = ((x341%(x342%x343))<=x344);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x345 = -1LL;
	uint16_t x346 = UINT16_MAX;
	volatile int64_t x348 = 552LL;
	static int32_t t68 = 21;

	t68 = ((x345%(x346%x347))<=x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x350 = 25761143U;
	static int64_t x351 = INT64_MIN;
	static uint32_t x352 = 31033254U;
	volatile int32_t t69 = -1;

	t69 = ((x349%(x350%x351))<=x352);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x354 = INT32_MIN;
	int8_t x356 = INT8_MIN;

	t70 = ((x353%(x354%x355))<=x356);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x357 = UINT16_MAX;
	volatile uint32_t x359 = 28994U;
	int8_t x360 = INT8_MIN;

	t71 = ((x357%(x358%x359))<=x360);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x362 = UINT32_MAX;
	int32_t x363 = INT32_MIN;
	uint16_t x364 = 4U;
	int32_t t72 = 1027540;

	t72 = ((x361%(x362%x363))<=x364);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x365 = 5001LLU;
	int8_t x366 = -17;
	int32_t t73 = -20;

	t73 = ((x365%(x366%x367))<=x368);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x370 = 5347U;
	static int32_t x371 = -1005;
	uint8_t x372 = 63U;
	volatile int32_t t74 = -34180;

	t74 = ((x369%(x370%x371))<=x372);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x377 = -44LL;
	static int8_t x379 = INT8_MIN;
	static volatile int64_t x380 = INT64_MIN;
	int32_t t75 = -1581;

	t75 = ((x377%(x378%x379))<=x380);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x381 = 7112003341344LLU;
	int8_t x382 = INT8_MIN;
	int8_t x383 = INT8_MAX;
	volatile int32_t t76 = 848116;

	t76 = ((x381%(x382%x383))<=x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x385 = -63LL;
	int16_t x386 = -3;
	uint16_t x387 = 4U;
	volatile int64_t x388 = 153012975637847LL;
	volatile int32_t t77 = 24415230;

	t77 = ((x385%(x386%x387))<=x388);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x389 = -1;
	int32_t x390 = INT32_MIN;
	static volatile int8_t x391 = INT8_MAX;
	uint64_t x392 = 357252866757LLU;
	static volatile int32_t t78 = -16;

	t78 = ((x389%(x390%x391))<=x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x397 = -6;
	int32_t x398 = INT32_MAX;
	uint32_t x399 = 1467478297U;
	int32_t t79 = -692662846;

	t79 = ((x397%(x398%x399))<=x400);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x401 = INT32_MIN;
	static int64_t x402 = -1LL;
	uint64_t x403 = 3185LLU;
	volatile int32_t x404 = 9077;
	int32_t t80 = -205113;

	t80 = ((x401%(x402%x403))<=x404);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = -1;
	volatile int32_t x410 = INT32_MIN;
	uint8_t x411 = 36U;
	int8_t x412 = 6;
	static int32_t t81 = 251;

	t81 = ((x409%(x410%x411))<=x412);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x418 = INT32_MIN;
	uint32_t x419 = 457411U;
	uint64_t x420 = 897281002321549LLU;

	t82 = ((x417%(x418%x419))<=x420);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x421 = INT32_MIN;
	uint32_t x422 = 152468841U;
	int32_t x423 = -1;
	int8_t x424 = -1;

	t83 = ((x421%(x422%x423))<=x424);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 369965802U;
	uint16_t x426 = 1163U;
	static int32_t x427 = INT32_MAX;
	static uint8_t x428 = 2U;

	t84 = ((x425%(x426%x427))<=x428);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x430 = 6497032U;
	int64_t x432 = INT64_MAX;
	volatile int32_t t85 = -502581;

	t85 = ((x429%(x430%x431))<=x432);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x433 = -1LL;
	int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	volatile int64_t x436 = INT64_MAX;
	static int32_t t86 = 3831;

	t86 = ((x433%(x434%x435))<=x436);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x441 = 274243LLU;
	int32_t x443 = INT32_MIN;
	int16_t x444 = -1;
	int32_t t87 = 165;

	t87 = ((x441%(x442%x443))<=x444);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x446 = -1;
	int8_t x447 = 48;
	static int32_t t88 = -20781138;

	t88 = ((x445%(x446%x447))<=x448);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x449 = -1LL;
	static uint32_t x450 = UINT32_MAX;
	volatile int64_t x451 = INT64_MIN;
	int16_t x452 = INT16_MIN;
	volatile int32_t t89 = 0;

	t89 = ((x449%(x450%x451))<=x452);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x457 = 1096655072024782161LLU;
	uint64_t x458 = 6996961177898097196LLU;
	volatile int8_t x459 = INT8_MIN;
	volatile int64_t x460 = -3179901922132LL;
	volatile int32_t t90 = -36;

	t90 = ((x457%(x458%x459))<=x460);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x461 = INT16_MAX;
	volatile int8_t x462 = -46;
	uint16_t x463 = UINT16_MAX;
	static int32_t t91 = -11;

	t91 = ((x461%(x462%x463))<=x464);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x466 = -1;
	uint16_t x467 = UINT16_MAX;
	int8_t x468 = INT8_MIN;
	volatile int32_t t92 = 1192920;

	t92 = ((x465%(x466%x467))<=x468);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x474 = INT64_MAX;
	volatile uint8_t x475 = 104U;
	uint64_t x476 = 2LLU;
	volatile int32_t t93 = 41;

	t93 = ((x473%(x474%x475))<=x476);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x481 = 127;
	int16_t x482 = INT16_MIN;
	int64_t x483 = INT64_MAX;
	uint16_t x484 = UINT16_MAX;
	volatile int32_t t94 = -738;

	t94 = ((x481%(x482%x483))<=x484);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x485 = 0U;
	int32_t x486 = -207831;
	uint32_t x488 = 47724U;
	volatile int32_t t95 = -77;

	t95 = ((x485%(x486%x487))<=x488);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x489 = -1;
	static int64_t x490 = INT64_MIN;
	volatile int64_t x492 = 30817LL;

	t96 = ((x489%(x490%x491))<=x492);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x496 = -113;
	volatile int32_t t97 = 340717350;

	t97 = ((x493%(x494%x495))<=x496);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x501 = 3U;
	int16_t x502 = INT16_MAX;
	uint8_t x503 = 2U;
	int8_t x504 = INT8_MAX;
	static int32_t t98 = -42;

	t98 = ((x501%(x502%x503))<=x504);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x505 = -4;
	static volatile uint32_t x506 = 48533U;
	int64_t x508 = INT64_MAX;

	t99 = ((x505%(x506%x507))<=x508);

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

