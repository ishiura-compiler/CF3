#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1;
uint16_t x6 = 8623U;
int64_t x8 = -1LL;
static int16_t x14 = INT16_MAX;
int8_t x18 = -1;
volatile int32_t t4 = -1;
int64_t x27 = -17489LL;
int64_t x36 = INT64_MIN;
uint16_t x45 = UINT16_MAX;
int8_t x48 = 20;
uint8_t x53 = 23U;
uint32_t x62 = 60913U;
volatile uint32_t t15 = 13509U;
int32_t x69 = INT32_MIN;
static volatile uint8_t x71 = UINT8_MAX;
int8_t x75 = -1;
int16_t x76 = INT16_MIN;
int32_t x81 = INT32_MIN;
volatile uint16_t x82 = UINT16_MAX;
int32_t x88 = INT32_MIN;
int8_t x89 = 6;
volatile int64_t x91 = INT64_MIN;
int32_t x94 = 54903422;
int64_t x101 = INT64_MAX;
volatile int64_t x105 = -1LL;
int16_t x110 = INT16_MAX;
int16_t x111 = INT16_MAX;
uint16_t x116 = 1U;
int16_t x117 = INT16_MAX;
static volatile int64_t x120 = INT64_MAX;
static int32_t t29 = 508718;
volatile int32_t t30 = 5384764;
int8_t x125 = INT8_MIN;
uint32_t x129 = 3244819U;
static uint64_t x147 = 10255100LLU;
uint16_t x149 = 4U;
int16_t x150 = -1;
static uint8_t x151 = 53U;
volatile int64_t t38 = 199094283319194LL;
volatile int32_t x160 = INT32_MIN;
int32_t x161 = -1;
int64_t x163 = INT64_MAX;
int8_t x164 = -1;
volatile uint64_t t40 = UINT64_MAX;
static uint16_t x169 = 6682U;
int64_t x171 = INT64_MIN;
volatile int8_t x175 = -1;
uint8_t x178 = 23U;
int32_t x182 = INT32_MAX;
int32_t t45 = -43483;
int16_t x185 = INT16_MAX;
volatile int8_t x189 = INT8_MIN;
int64_t x191 = INT64_MIN;
static uint32_t x212 = 119677U;
uint32_t t52 = 15U;
static volatile int8_t x214 = INT8_MIN;
static volatile uint64_t t53 = UINT64_MAX;
static int16_t x222 = -408;
static int8_t x224 = -1;
static int8_t x227 = -1;
uint8_t x229 = UINT8_MAX;
uint32_t x237 = UINT32_MAX;
int8_t x239 = INT8_MIN;
volatile uint32_t t59 = UINT32_MAX;
int32_t x244 = 13114;
volatile uint16_t x245 = UINT16_MAX;
static int32_t x251 = -6;
uint32_t x253 = 402168782U;
static int64_t t64 = INT64_MAX;
static int32_t x272 = INT32_MAX;
int32_t x285 = -483;
volatile int8_t x288 = 1;
uint32_t t71 = 1217539U;
int8_t x295 = -1;
int32_t x297 = INT32_MIN;
int32_t x301 = INT32_MIN;
static int8_t x302 = INT8_MAX;
int32_t x307 = INT32_MAX;
int16_t x316 = INT16_MIN;
int16_t x324 = INT16_MIN;
uint16_t x327 = 558U;
static int64_t t81 = -1327913LL;
int8_t x330 = 0;
static uint32_t x332 = 3U;
uint16_t x335 = 1893U;
uint32_t t83 = 221U;
uint8_t x340 = 13U;
volatile int32_t t84 = 2307337;
volatile int16_t x346 = INT16_MIN;
uint64_t x348 = 44102119488LLU;
uint16_t x349 = 1474U;
static uint32_t x350 = 9668041U;
uint32_t t88 = 4729905U;
int64_t x361 = -1008LL;
uint8_t x373 = 76U;
int16_t x383 = -1;
uint64_t x387 = 48963377780570LLU;
static int16_t x389 = INT16_MAX;
int32_t x393 = 1428940;
volatile int32_t t98 = 51;


void f0(void) {
	volatile uint16_t x1 = 1812U;
	volatile int16_t x2 = 1;
	static int16_t x3 = INT16_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1-(x2*(x3==x4)));

	if (t0 != 1812) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 24004U;
	int8_t x7 = INT8_MAX;
	int32_t t1 = 11327;

	t1 = (x5-(x6*(x7==x8)));

	if (t1 != 24004) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int16_t x10 = 44;
	static int8_t x11 = -1;
	uint64_t x12 = 94963035LLU;
	volatile int32_t t2 = -2813;

	t2 = (x9-(x10*(x11==x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 355229000U;
	static volatile uint16_t x15 = 15U;
	volatile int16_t x16 = INT16_MAX;
	static uint32_t t3 = 208989411U;

	t3 = (x13-(x14*(x15==x16)));

	if (t3 != 355229000U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 5589174;
	volatile uint8_t x19 = 20U;
	int16_t x20 = -1;

	t4 = (x17-(x18*(x19==x20)));

	if (t4 != 5589174) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int32_t x22 = INT32_MIN;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -48056;

	t5 = (x21-(x22*(x23==x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 10U;
	int8_t x26 = -1;
	int32_t x28 = INT32_MIN;
	static volatile int32_t t6 = 1261;

	t6 = (x25-(x26*(x27==x28)));

	if (t6 != 10) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	int32_t x30 = INT32_MIN;
	volatile int32_t x31 = INT32_MIN;
	uint16_t x32 = 200U;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = (x29-(x30*(x31==x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	int8_t x34 = INT8_MAX;
	int8_t x35 = 20;
	int32_t t8 = -180664876;

	t8 = (x33-(x34*(x35==x36)));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static volatile uint32_t x38 = 2U;
	static uint8_t x39 = 1U;
	static volatile int16_t x40 = -1;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x37-(x38*(x39==x40)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 47U;
	int8_t x42 = -1;
	uint64_t x43 = 8LLU;
	uint8_t x44 = UINT8_MAX;
	volatile int32_t t10 = -87180510;

	t10 = (x41-(x42*(x43==x44)));

	if (t10 != 47) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 2U;
	int16_t x47 = 0;
	static volatile int32_t t11 = 1166984;

	t11 = (x45-(x46*(x47==x48)));

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = INT64_MIN;
	int16_t x50 = INT16_MAX;
	uint32_t x51 = 330297561U;
	int64_t x52 = INT64_MAX;
	static int64_t t12 = INT64_MIN;

	t12 = (x49-(x50*(x51==x52)));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x54 = 19;
	int32_t x55 = INT32_MIN;
	volatile uint32_t x56 = 7988U;
	int32_t t13 = 218702093;

	t13 = (x53-(x54*(x55==x56)));

	if (t13 != 23) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint8_t x58 = 50U;
	int64_t x59 = -1LL;
	volatile int8_t x60 = -1;
	int32_t t14 = 1738458;

	t14 = (x57-(x58*(x59==x60)));

	if (t14 != -178) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int8_t x63 = -1;
	uint32_t x64 = UINT32_MAX;

	t15 = (x61-(x62*(x63==x64)));

	if (t15 != 4294873615U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	volatile int32_t x66 = -1;
	uint8_t x67 = 109U;
	static volatile uint16_t x68 = UINT16_MAX;
	static int32_t t16 = INT32_MIN;

	t16 = (x65-(x66*(x67==x68)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 209106985LLU;
	int16_t x72 = -1;
	uint64_t t17 = 26729668LLU;

	t17 = (x69-(x70*(x71==x72)));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	uint8_t x74 = 66U;
	int32_t t18 = 1;

	t18 = (x73-(x74*(x75==x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x77 = INT8_MIN;
	int8_t x78 = -1;
	uint64_t x79 = 2LLU;
	volatile int64_t x80 = INT64_MAX;
	volatile int32_t t19 = 375426638;

	t19 = (x77-(x78*(x79==x80)));

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x83 = 415;
	int8_t x84 = INT8_MIN;
	int32_t t20 = INT32_MIN;

	t20 = (x81-(x82*(x83==x84)));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -5;
	volatile int8_t x86 = INT8_MAX;
	static int64_t x87 = INT64_MIN;
	static volatile int32_t t21 = 225;

	t21 = (x85-(x86*(x87==x88)));

	if (t21 != -5) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x90 = INT8_MAX;
	uint16_t x92 = 7360U;
	volatile int32_t t22 = -29;

	t22 = (x89-(x90*(x91==x92)));

	if (t22 != 6) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	int64_t x95 = 23LL;
	int16_t x96 = INT16_MIN;
	volatile int32_t t23 = -88314304;

	t23 = (x93-(x94*(x95==x96)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	uint8_t x98 = 1U;
	static uint64_t x99 = UINT64_MAX;
	int64_t x100 = -1LL;
	static int32_t t24 = 95294;

	t24 = (x97-(x98*(x99==x100)));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -1LL;
	uint16_t x103 = 3U;
	int64_t x104 = -836LL;
	int64_t t25 = INT64_MAX;

	t25 = (x101-(x102*(x103==x104)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -1237054LL;
	static uint32_t x107 = UINT32_MAX;
	volatile int8_t x108 = -1;
	static volatile int64_t t26 = -519003852740537LL;

	t26 = (x105-(x106*(x107==x108)));

	if (t26 != 1237053LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = 3;

	t27 = (x109-(x110*(x111==x112)));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 31U;
	volatile uint8_t x114 = UINT8_MAX;
	volatile int64_t x115 = -141667544409506210LL;
	static volatile int32_t t28 = -2316;

	t28 = (x113-(x114*(x115==x116)));

	if (t28 != 31) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = 9;
	static int8_t x119 = 4;

	t29 = (x117-(x118*(x119==x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	static int8_t x122 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = INT32_MIN;

	t30 = (x121-(x122*(x123==x124)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = 124LL;
	volatile int64_t x127 = -1LL;
	int8_t x128 = 15;
	volatile int64_t t31 = 4968054LL;

	t31 = (x125-(x126*(x127==x128)));

	if (t31 != -128LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 276893318026925256LLU;
	uint64_t x131 = 1870945LLU;
	volatile int32_t x132 = 1531529;
	volatile uint64_t t32 = 172910981816669LLU;

	t32 = (x129-(x130*(x131==x132)));

	if (t32 != 3244819LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 29U;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = -287539310;
	int32_t t33 = 20323;

	t33 = (x133-(x134*(x135==x136)));

	if (t33 != 29) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x137 = 438LLU;
	static volatile int32_t x138 = INT32_MIN;
	int16_t x139 = INT16_MAX;
	int64_t x140 = -1LL;
	static volatile uint64_t t34 = 23892663LLU;

	t34 = (x137-(x138*(x139==x140)));

	if (t34 != 438LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -20;
	int64_t x142 = INT64_MIN;
	int32_t x143 = INT32_MIN;
	volatile int32_t x144 = INT32_MIN;
	int64_t t35 = -1157988510757731726LL;

	t35 = (x141-(x142*(x143==x144)));

	if (t35 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = 113432516LL;
	uint8_t x146 = UINT8_MAX;
	uint64_t x148 = 148005545614723LLU;
	int64_t t36 = -7643281590214LL;

	t36 = (x145-(x146*(x147==x148)));

	if (t36 != 113432516LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x152 = 20U;
	static volatile int32_t t37 = 1030;

	t37 = (x149-(x150*(x151==x152)));

	if (t37 != 4) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 141260LL;
	int8_t x154 = 1;
	uint64_t x155 = 35768LLU;
	uint32_t x156 = 2028U;

	t38 = (x153-(x154*(x155==x156)));

	if (t38 != 141260LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 113LLU;
	int16_t x158 = INT16_MIN;
	static int32_t x159 = -1;
	uint64_t t39 = 187013240063259LLU;

	t39 = (x157-(x158*(x159==x160)));

	if (t39 != 113LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x162 = 2LLU;

	t40 = (x161-(x162*(x163==x164)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	static volatile int64_t x166 = INT64_MIN;
	uint8_t x167 = UINT8_MAX;
	uint32_t x168 = UINT32_MAX;
	volatile uint64_t t41 = UINT64_MAX;

	t41 = (x165-(x166*(x167==x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -1;
	static int32_t x172 = -1;
	volatile int32_t t42 = -20;

	t42 = (x169-(x170*(x171==x172)));

	if (t42 != 6682) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x173 = -1;
	int64_t x174 = -26921799571589537LL;
	uint32_t x176 = 11U;
	volatile int64_t t43 = 1458LL;

	t43 = (x173-(x174*(x175==x176)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = 1;
	volatile int64_t t44 = INT64_MAX;

	t44 = (x177-(x178*(x179==x180)));

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	static int16_t x183 = INT16_MAX;
	int16_t x184 = INT16_MIN;

	t45 = (x181-(x182*(x183==x184)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = INT64_MIN;
	int8_t x187 = INT8_MAX;
	uint8_t x188 = 0U;
	int64_t t46 = 332LL;

	t46 = (x185-(x186*(x187==x188)));

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = 1486U;
	int32_t x192 = -1;
	int32_t t47 = 74054987;

	t47 = (x189-(x190*(x191==x192)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = 128444662554573LLU;
	int16_t x194 = INT16_MIN;
	static int8_t x195 = INT8_MIN;
	int32_t x196 = 118;
	uint64_t t48 = 529913091LLU;

	t48 = (x193-(x194*(x195==x196)));

	if (t48 != 128444662554573LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = 31116355274LL;
	uint8_t x198 = UINT8_MAX;
	static uint16_t x199 = 6U;
	static int16_t x200 = -1168;
	volatile int64_t t49 = -14090LL;

	t49 = (x197-(x198*(x199==x200)));

	if (t49 != 31116355274LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = INT8_MAX;
	uint64_t x203 = 0LLU;
	uint64_t x204 = 477718367LLU;
	int32_t t50 = 0;

	t50 = (x201-(x202*(x203==x204)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -29;
	volatile int64_t x206 = INT64_MAX;
	volatile int16_t x207 = INT16_MIN;
	int16_t x208 = -1;
	int64_t t51 = -8322526LL;

	t51 = (x205-(x206*(x207==x208)));

	if (t51 != -29LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 210U;
	int32_t x210 = INT32_MIN;
	int8_t x211 = 0;

	t52 = (x209-(x210*(x211==x212)));

	if (t52 != 210U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	static int8_t x215 = -1;
	static volatile int16_t x216 = 215;

	t53 = (x213-(x214*(x215==x216)));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint32_t x218 = 243U;
	uint64_t x219 = UINT64_MAX;
	int32_t x220 = -1;
	static uint32_t t54 = 12142U;

	t54 = (x217-(x218*(x219==x220)));

	if (t54 != 2147483405U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1742;
	static uint8_t x223 = UINT8_MAX;
	volatile int32_t t55 = -257501;

	t55 = (x221-(x222*(x223==x224)));

	if (t55 != -1742) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 496785U;
	int8_t x226 = INT8_MIN;
	int64_t x228 = INT64_MIN;
	static volatile uint32_t t56 = 2502380U;

	t56 = (x225-(x226*(x227==x228)));

	if (t56 != 496785U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 425U;
	volatile uint64_t x231 = 232907200838LLU;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 23;

	t57 = (x229-(x230*(x231==x232)));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	volatile int64_t x234 = INT64_MAX;
	static uint16_t x235 = 4553U;
	uint16_t x236 = UINT16_MAX;
	int64_t t58 = 276436384LL;

	t58 = (x233-(x234*(x235==x236)));

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 13U;
	static uint32_t x240 = 185U;

	t59 = (x237-(x238*(x239==x240)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 12309U;
	volatile uint64_t x242 = UINT64_MAX;
	volatile int16_t x243 = INT16_MIN;
	static volatile uint64_t t60 = 6138923302016675168LLU;

	t60 = (x241-(x242*(x243==x244)));

	if (t60 != 12309LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 164U;
	uint16_t x247 = 19044U;
	static uint32_t x248 = 1148138U;
	volatile int32_t t61 = -1;

	t61 = (x245-(x246*(x247==x248)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 15172143122349324LL;
	int32_t x250 = -1;
	volatile uint16_t x252 = 1620U;
	static int64_t t62 = 11454298983LL;

	t62 = (x249-(x250*(x251==x252)));

	if (t62 != 15172143122349324LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x254 = INT8_MIN;
	int32_t x255 = INT32_MAX;
	static int32_t x256 = 1901;
	volatile uint32_t t63 = 25884675U;

	t63 = (x253-(x254*(x255==x256)));

	if (t63 != 402168782U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = -15863313439424LL;
	int32_t x259 = -205;
	static int8_t x260 = INT8_MIN;

	t64 = (x257-(x258*(x259==x260)));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MIN;
	static volatile int16_t x262 = INT16_MAX;
	int16_t x263 = INT16_MIN;
	static int8_t x264 = -1;
	int32_t t65 = 3833878;

	t65 = (x261-(x262*(x263==x264)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = 1;
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MIN;
	volatile uint8_t x268 = 5U;
	int64_t t66 = 27734161051917907LL;

	t66 = (x265-(x266*(x267==x268)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MAX;
	volatile uint8_t x270 = 15U;
	volatile int32_t x271 = -8247;
	int64_t t67 = INT64_MAX;

	t67 = (x269-(x270*(x271==x272)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 36U;
	static int64_t x275 = -7936631609LL;
	volatile int8_t x276 = INT8_MAX;
	volatile int32_t t68 = -477119406;

	t68 = (x273-(x274*(x275==x276)));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	volatile uint16_t x278 = 367U;
	static int8_t x279 = 2;
	int32_t x280 = -684724;
	volatile int32_t t69 = INT32_MAX;

	t69 = (x277-(x278*(x279==x280)));

	if (t69 != INT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = INT64_MAX;
	int8_t x282 = -1;
	int16_t x283 = INT16_MIN;
	uint16_t x284 = 232U;
	volatile int64_t t70 = INT64_MAX;

	t70 = (x281-(x282*(x283==x284)));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x286 = 474525U;
	int16_t x287 = INT16_MIN;

	t71 = (x285-(x286*(x287==x288)));

	if (t71 != 4294966813U) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -13159305443908797LL;
	volatile int8_t x290 = INT8_MAX;
	static int32_t x291 = -1;
	static volatile uint8_t x292 = UINT8_MAX;
	int64_t t72 = 2933067648390316042LL;

	t72 = (x289-(x290*(x291==x292)));

	if (t72 != -13159305443908797LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = INT8_MIN;
	int8_t x294 = INT8_MIN;
	uint8_t x296 = 24U;
	volatile int32_t t73 = 61622224;

	t73 = (x293-(x294*(x295==x296)));

	if (t73 != -128) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x298 = -5430;
	volatile int8_t x299 = -9;
	int32_t x300 = -1;
	volatile int32_t t74 = INT32_MIN;

	t74 = (x297-(x298*(x299==x300)));

	if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x303 = -1;
	uint64_t x304 = 28254582305540LLU;
	int32_t t75 = INT32_MIN;

	t75 = (x301-(x302*(x303==x304)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -1794;
	int32_t x306 = INT32_MIN;
	uint32_t x308 = 9318U;
	volatile int32_t t76 = -255972;

	t76 = (x305-(x306*(x307==x308)));

	if (t76 != -1794) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MAX;
	static int16_t x310 = INT16_MAX;
	static uint64_t x311 = UINT64_MAX;
	uint64_t x312 = UINT64_MAX;
	int32_t t77 = 260095474;

	t77 = (x309-(x310*(x311==x312)));

	if (t77 != 2147450880) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = -1;
	volatile int64_t t78 = INT64_MIN;

	t78 = (x313-(x314*(x315==x316)));

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x317 = INT64_MAX;
	int8_t x318 = INT8_MIN;
	volatile uint16_t x319 = 0U;
	int16_t x320 = 3;
	static int64_t t79 = INT64_MAX;

	t79 = (x317-(x318*(x319==x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 4;
	int8_t x322 = INT8_MIN;
	static volatile int64_t x323 = INT64_MIN;
	volatile int32_t t80 = 1619;

	t80 = (x321-(x322*(x323==x324)));

	if (t80 != 4) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 327394933270LL;
	volatile uint8_t x326 = 65U;
	uint32_t x328 = 3451977U;

	t81 = (x325-(x326*(x327==x328)));

	if (t81 != 327394933270LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 25;
	static volatile int8_t x331 = INT8_MIN;
	int32_t t82 = 5591;

	t82 = (x329-(x330*(x331==x332)));

	if (t82 != 25) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 68276453U;
	static volatile uint8_t x334 = 116U;
	int32_t x336 = INT32_MIN;

	t83 = (x333-(x334*(x335==x336)));

	if (t83 != 68276453U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x337 = 33U;
	int16_t x338 = INT16_MIN;
	static uint64_t x339 = 16660729783636LLU;

	t84 = (x337-(x338*(x339==x340)));

	if (t84 != 33) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x341 = INT8_MIN;
	uint32_t x342 = UINT32_MAX;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MIN;
	static volatile uint32_t t85 = 381960U;

	t85 = (x341-(x342*(x343==x344)));

	if (t85 != 4294967169U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -8;
	int16_t x347 = -5;
	volatile int32_t t86 = 853246795;

	t86 = (x345-(x346*(x347==x348)));

	if (t86 != -8) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = 321125517;
	int8_t x352 = INT8_MIN;
	volatile uint32_t t87 = 11U;

	t87 = (x349-(x350*(x351==x352)));

	if (t87 != 1474U) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = UINT64_MAX;
	int16_t x356 = -12;

	t88 = (x353-(x354*(x355==x356)));

	if (t88 != 2147483648U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = -51;
	uint64_t x358 = 54004406742LLU;
	volatile int64_t x359 = 247592925794963280LL;
	int16_t x360 = INT16_MIN;
	uint64_t t89 = 1093336LLU;

	t89 = (x357-(x358*(x359==x360)));

	if (t89 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = -23;
	int64_t x364 = -1LL;
	uint64_t t90 = 59341LLU;

	t90 = (x361-(x362*(x363==x364)));

	if (t90 != 18446744073709550608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 52U;
	int8_t x366 = 7;
	int8_t x367 = INT8_MIN;
	static volatile int8_t x368 = -1;
	volatile int32_t t91 = -202282658;

	t91 = (x365-(x366*(x367==x368)));

	if (t91 != 52) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int8_t x370 = INT8_MIN;
	static uint32_t x371 = UINT32_MAX;
	int32_t x372 = -1;
	int64_t t92 = -2989047772227LL;

	t92 = (x369-(x370*(x371==x372)));

	if (t92 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MAX;
	volatile uint64_t x375 = 5784115046254682LLU;
	static uint8_t x376 = UINT8_MAX;
	int32_t t93 = -984259400;

	t93 = (x373-(x374*(x375==x376)));

	if (t93 != 76) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MAX;
	static uint16_t x378 = UINT16_MAX;
	static volatile int16_t x379 = 10;
	int32_t x380 = INT32_MAX;
	int64_t t94 = INT64_MAX;

	t94 = (x377-(x378*(x379==x380)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	int32_t x382 = -992;
	int32_t x384 = INT32_MIN;
	volatile int64_t t95 = INT64_MAX;

	t95 = (x381-(x382*(x383==x384)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 39U;
	int32_t x386 = INT32_MIN;
	static volatile int32_t x388 = 477;
	volatile int32_t t96 = -576802236;

	t96 = (x385-(x386*(x387==x388)));

	if (t96 != 39) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = INT16_MIN;
	int32_t x391 = INT32_MIN;
	volatile int32_t x392 = -1;
	volatile int32_t t97 = 0;

	t97 = (x389-(x390*(x391==x392)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x394 = INT32_MAX;
	uint16_t x395 = UINT16_MAX;
	volatile int16_t x396 = 14238;

	t98 = (x393-(x394*(x395==x396)));

	if (t98 != 1428940) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	volatile int32_t x398 = INT32_MAX;
	uint16_t x399 = 27U;
	uint8_t x400 = 1U;
	static int64_t t99 = INT64_MIN;

	t99 = (x397-(x398*(x399==x400)));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

