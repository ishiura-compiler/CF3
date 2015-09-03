#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
uint32_t x7 = 6U;
volatile int32_t t2 = -247;
int32_t x24 = -1;
static int16_t x25 = -9913;
static int64_t x26 = 118651410LL;
uint16_t x28 = 174U;
volatile uint64_t x29 = 513976LLU;
static volatile uint64_t x31 = 1542257893LLU;
volatile int8_t x36 = INT8_MIN;
uint64_t x43 = UINT64_MAX;
int64_t x44 = INT64_MIN;
volatile int32_t t9 = 1150;
int32_t t10 = 21648;
volatile uint64_t x50 = UINT64_MAX;
int8_t x53 = INT8_MAX;
int16_t x66 = -1;
volatile uint32_t x68 = 29U;
int64_t x73 = -114LL;
int64_t x74 = INT64_MAX;
volatile uint16_t x77 = 12U;
int32_t x79 = INT32_MIN;
uint64_t x80 = 3LLU;
int32_t t15 = 2091140;
int32_t t17 = 14825571;
uint32_t x92 = 1502079U;
static int64_t x94 = INT64_MIN;
uint16_t x95 = UINT16_MAX;
volatile uint8_t x97 = 2U;
volatile uint64_t x100 = 27399393256124707LLU;
uint32_t x102 = UINT32_MAX;
static uint16_t x107 = UINT16_MAX;
static int32_t t22 = -119;
static int64_t x110 = 31992157LL;
int64_t x111 = 2309LL;
volatile uint64_t x112 = UINT64_MAX;
volatile int8_t x120 = 0;
static uint64_t x122 = UINT64_MAX;
int32_t x129 = 300;
int16_t x135 = -1;
volatile int8_t x136 = -7;
uint16_t x140 = 12671U;
uint64_t x143 = 1118509461313650LLU;
int16_t x144 = -1;
static int16_t x146 = INT16_MIN;
int8_t x148 = 1;
int8_t x149 = INT8_MIN;
volatile int16_t x153 = INT16_MAX;
volatile int64_t x161 = INT64_MAX;
volatile int8_t x166 = -13;
int64_t x167 = 2169842329263LL;
int16_t x168 = -1;
int32_t t37 = 20;
int32_t x178 = -2505178;
volatile int8_t x180 = INT8_MAX;
uint64_t x186 = 76427LLU;
volatile int32_t t40 = -119334;
uint8_t x194 = 14U;
uint8_t x199 = 3U;
int32_t t43 = -444;
volatile int16_t x203 = -1;
volatile int64_t x205 = INT64_MAX;
int16_t x210 = INT16_MAX;
static volatile int32_t t48 = -135327;
int16_t x228 = 1;
volatile int32_t t52 = -19995558;
uint64_t x249 = UINT64_MAX;
static int8_t x251 = INT8_MIN;
int8_t x253 = 0;
int64_t x260 = INT64_MIN;
int32_t x262 = -253;
static int32_t t56 = 0;
int16_t x265 = -55;
int64_t x272 = -1810LL;
int32_t t58 = 6;
uint8_t x274 = 16U;
uint64_t x282 = 603820639762LLU;
static int8_t x285 = INT8_MIN;
int16_t x287 = -19;
int16_t x288 = 202;
volatile int8_t x292 = -31;
volatile int32_t x296 = 2456;
volatile int32_t x301 = 0;
volatile int32_t t65 = 8709;
volatile int32_t t68 = 11403;
static int64_t x319 = INT64_MIN;
int8_t x324 = -1;
int32_t x325 = INT32_MIN;
uint64_t x327 = 443540013787LLU;
static int32_t t72 = 97;
volatile uint8_t x340 = UINT8_MAX;
int32_t t74 = 662;
uint16_t x352 = UINT16_MAX;
int32_t x357 = INT32_MIN;
static int32_t x364 = -914233;
uint16_t x365 = UINT16_MAX;
uint32_t x368 = UINT32_MAX;
int64_t x388 = INT64_MAX;
int8_t x391 = -1;
volatile int32_t t83 = -1299;
int16_t x401 = 0;
int32_t t87 = 715199;
volatile uint64_t x410 = 7130238118800960649LLU;
uint16_t x420 = UINT16_MAX;
volatile uint16_t x428 = 1U;
int8_t x434 = INT8_MAX;
int8_t x437 = INT8_MIN;
volatile int64_t x443 = INT64_MAX;
int16_t x446 = -1;
static uint32_t x447 = 5U;
static volatile int64_t x456 = 116549763LL;


void f0(void) {
	uint64_t x1 = 984170973514084891LLU;
	static int64_t x3 = INT64_MIN;
	int64_t x4 = INT64_MAX;
	volatile int32_t t0 = 914334;

	t0 = (x1<=(x2/(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 31859179U;
	int16_t x6 = INT16_MIN;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -10840;

	t1 = (x5<=(x6/(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = 44U;
	int64_t x14 = -1LL;
	volatile int32_t x15 = INT32_MAX;
	int64_t x16 = -1LL;

	t2 = (x13<=(x14/(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 83U;
	static int64_t x18 = INT64_MIN;
	uint32_t x19 = 115U;
	static volatile int64_t x20 = -174461052281LL;
	volatile int32_t t3 = 18;

	t3 = (x17<=(x18/(x19+x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	int8_t x22 = INT8_MIN;
	volatile uint64_t x23 = 109660392160LLU;
	static volatile int32_t t4 = -199;

	t4 = (x21<=(x22/(x23+x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x27 = UINT8_MAX;
	volatile int32_t t5 = -18964;

	t5 = (x25<=(x26/(x27+x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x30 = -1;
	int16_t x32 = INT16_MIN;
	int32_t t6 = -4446428;

	t6 = (x29<=(x30/(x31+x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x33 = 842215U;
	uint8_t x34 = 7U;
	int8_t x35 = -1;
	volatile int32_t t7 = -31862;

	t7 = (x33<=(x34/(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -1;
	static int16_t x38 = -1;
	static int16_t x39 = INT16_MAX;
	static int16_t x40 = -1;
	static volatile int32_t t8 = -6429;

	t8 = (x37<=(x38/(x39+x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = 55;
	int32_t x42 = INT32_MIN;

	t9 = (x41<=(x42/(x43+x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = -17;
	uint64_t x46 = 4614262122249122447LLU;
	int16_t x47 = INT16_MIN;
	int32_t x48 = -36;

	t10 = (x45<=(x46/(x47+x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MIN;
	static uint64_t x51 = 1LLU;
	int32_t x52 = INT32_MIN;
	int32_t t11 = 451;

	t11 = (x49<=(x50/(x51+x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = 12;
	int8_t x55 = INT8_MAX;
	uint16_t x56 = 184U;
	int32_t t12 = 4872636;

	t12 = (x53<=(x54/(x55+x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 7U;
	int64_t x67 = INT64_MIN;
	static volatile int32_t t13 = -240648148;

	t13 = (x65<=(x66/(x67+x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x75 = -5;
	int8_t x76 = -3;
	int32_t t14 = 0;

	t14 = (x73<=(x74/(x75+x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = INT64_MIN;

	t15 = (x77<=(x78/(x79+x80)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -2;
	static int16_t x82 = INT16_MIN;
	volatile int32_t x83 = -1;
	int8_t x84 = -1;
	volatile int32_t t16 = 6473;

	t16 = (x81<=(x82/(x83+x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x85 = UINT16_MAX;
	volatile int16_t x86 = INT16_MIN;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;

	t17 = (x85<=(x86/(x87+x88)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x89 = UINT64_MAX;
	int16_t x90 = -15168;
	int32_t x91 = INT32_MIN;
	static int32_t t18 = 63;

	t18 = (x89<=(x90/(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 0U;
	uint32_t x96 = 2134036U;
	static volatile int32_t t19 = 97;

	t19 = (x93<=(x94/(x95+x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x98 = -1LL;
	volatile uint32_t x99 = 921U;
	volatile int32_t t20 = 373777;

	t20 = (x97<=(x98/(x99+x100)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x101 = 95679369003860LLU;
	volatile int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MAX;
	int32_t t21 = -4935;

	t21 = (x101<=(x102/(x103+x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x105 = 88237230LLU;
	static uint64_t x106 = 37368775588942766LLU;
	int32_t x108 = 433623324;

	t22 = (x105<=(x106/(x107+x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = 7;
	int32_t t23 = -8381430;

	t23 = (x109<=(x110/(x111+x112)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = -11;
	int32_t x115 = 170086;
	int8_t x116 = INT8_MIN;
	int32_t t24 = 33;

	t24 = (x113<=(x114/(x115+x116)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = INT32_MAX;
	volatile int32_t x118 = 79;
	int16_t x119 = -1;
	int32_t t25 = 1;

	t25 = (x117<=(x118/(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = INT16_MIN;
	uint16_t x123 = 10558U;
	int16_t x124 = INT16_MAX;
	int32_t t26 = 419074333;

	t26 = (x121<=(x122/(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x125 = UINT8_MAX;
	uint64_t x126 = 343977614LLU;
	int16_t x127 = INT16_MAX;
	uint64_t x128 = UINT64_MAX;
	static int32_t t27 = -21336;

	t27 = (x125<=(x126/(x127+x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x130 = UINT64_MAX;
	volatile int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MAX;
	volatile int32_t t28 = 1;

	t28 = (x129<=(x130/(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -1;
	static int8_t x134 = INT8_MAX;
	int32_t t29 = -50400741;

	t29 = (x133<=(x134/(x135+x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x137 = UINT16_MAX;
	volatile int64_t x138 = -1LL;
	int16_t x139 = INT16_MIN;
	static volatile int32_t t30 = -13;

	t30 = (x137<=(x138/(x139+x140)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	volatile int16_t x142 = INT16_MAX;
	volatile int32_t t31 = -1135534;

	t31 = (x141<=(x142/(x143+x144)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x147 = 1U;
	int32_t t32 = 645418149;

	t32 = (x145<=(x146/(x147+x148)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x150 = INT16_MIN;
	volatile uint16_t x151 = 1U;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = 1009587;

	t33 = (x149<=(x150/(x151+x152)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x154 = 10248U;
	volatile int8_t x155 = -10;
	int16_t x156 = 465;
	int32_t t34 = 1;

	t34 = (x153<=(x154/(x155+x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x162 = INT32_MIN;
	int16_t x163 = -5;
	uint32_t x164 = 3239U;
	int32_t t35 = 328459048;

	t35 = (x161<=(x162/(x163+x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x165 = UINT32_MAX;
	volatile int32_t t36 = 21046;

	t36 = (x165<=(x166/(x167+x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	static int64_t x171 = INT64_MIN;
	uint16_t x172 = 3U;

	t37 = (x169<=(x170/(x171+x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 6722U;
	int16_t x174 = INT16_MIN;
	volatile int8_t x175 = INT8_MIN;
	static volatile int16_t x176 = -7;
	int32_t t38 = 1397138;

	t38 = (x173<=(x174/(x175+x176)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x177 = 29;
	int64_t x179 = INT64_MIN;
	static int32_t t39 = 6943220;

	t39 = (x177<=(x178/(x179+x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint32_t x187 = 7236750U;
	int8_t x188 = INT8_MIN;

	t40 = (x185<=(x186/(x187+x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x189 = -1;
	volatile int8_t x190 = INT8_MAX;
	static int8_t x191 = -1;
	uint16_t x192 = UINT16_MAX;
	static volatile int32_t t41 = -92735;

	t41 = (x189<=(x190/(x191+x192)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = INT64_MAX;
	uint64_t x195 = 124030LLU;
	int64_t x196 = -1LL;
	int32_t t42 = 2433253;

	t42 = (x193<=(x194/(x195+x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x197 = UINT64_MAX;
	int8_t x198 = 1;
	int8_t x200 = INT8_MAX;

	t43 = (x197<=(x198/(x199+x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x201 = -1;
	int8_t x202 = -1;
	static uint32_t x204 = UINT32_MAX;
	int32_t t44 = -13;

	t44 = (x201<=(x202/(x203+x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x206 = 303;
	uint16_t x207 = 1U;
	int64_t x208 = -4390374517455060LL;
	int32_t t45 = 37687;

	t45 = (x205<=(x206/(x207+x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x209 = INT8_MIN;
	int16_t x211 = INT16_MAX;
	volatile uint16_t x212 = 14760U;
	int32_t t46 = -1720827;

	t46 = (x209<=(x210/(x211+x212)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x217 = INT32_MAX;
	int32_t x218 = INT32_MIN;
	int8_t x219 = -33;
	uint64_t x220 = UINT64_MAX;
	volatile int32_t t47 = -206;

	t47 = (x217<=(x218/(x219+x220)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x221 = 517109181U;
	int16_t x222 = -1546;
	uint16_t x223 = UINT16_MAX;
	static int32_t x224 = 41234;

	t48 = (x221<=(x222/(x223+x224)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = UINT32_MAX;
	int32_t x226 = INT32_MAX;
	int64_t x227 = INT64_MIN;
	int32_t t49 = -1;

	t49 = (x225<=(x226/(x227+x228)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MAX;
	uint64_t x235 = 4927744239380238037LLU;
	volatile uint16_t x236 = 3119U;
	static volatile int32_t t50 = 13;

	t50 = (x233<=(x234/(x235+x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x241 = -9395109580126LL;
	volatile uint64_t x242 = UINT64_MAX;
	static uint16_t x243 = 4317U;
	int32_t x244 = INT32_MIN;
	int32_t t51 = -1413530;

	t51 = (x241<=(x242/(x243+x244)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = -1;
	uint8_t x246 = 6U;
	int8_t x247 = -1;
	volatile uint32_t x248 = 90338U;

	t52 = (x245<=(x246/(x247+x248)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x250 = -1LL;
	int16_t x252 = -1;
	volatile int32_t t53 = 14;

	t53 = (x249<=(x250/(x251+x252)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x254 = INT64_MIN;
	uint64_t x255 = 2884644503LLU;
	uint64_t x256 = 1983193735454LLU;
	static int32_t t54 = -180;

	t54 = (x253<=(x254/(x255+x256)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x257 = 3298;
	uint32_t x258 = UINT32_MAX;
	uint8_t x259 = UINT8_MAX;
	volatile int32_t t55 = -7;

	t55 = (x257<=(x258/(x259+x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x261 = -1;
	volatile uint8_t x263 = 1U;
	volatile uint64_t x264 = 581943689971916575LLU;

	t56 = (x261<=(x262/(x263+x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x266 = 1U;
	uint16_t x267 = 20U;
	int64_t x268 = INT64_MIN;
	static int32_t t57 = -63981466;

	t57 = (x265<=(x266/(x267+x268)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -398298846LL;
	uint32_t x270 = 1U;
	volatile int32_t x271 = INT32_MIN;

	t58 = (x269<=(x270/(x271+x272)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MIN;
	int64_t x275 = -220937646LL;
	int32_t x276 = 1447676;
	volatile int32_t t59 = 2103;

	t59 = (x273<=(x274/(x275+x276)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x277 = -2151;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = UINT32_MAX;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t60 = -117729;

	t60 = (x277<=(x278/(x279+x280)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = -1;
	uint8_t x283 = 52U;
	int32_t x284 = -1;
	int32_t t61 = -327;

	t61 = (x281<=(x282/(x283+x284)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x286 = INT8_MAX;
	volatile int32_t t62 = -11705;

	t62 = (x285<=(x286/(x287+x288)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = INT16_MAX;
	int64_t x291 = 1LL;
	int32_t t63 = -40092;

	t63 = (x289<=(x290/(x291+x292)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = -9058102042450234LL;
	volatile int16_t x294 = -5;
	static int16_t x295 = INT16_MIN;
	volatile int32_t t64 = -68128;

	t64 = (x293<=(x294/(x295+x296)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x302 = 1009;
	int16_t x303 = 3437;
	volatile uint8_t x304 = 40U;

	t65 = (x301<=(x302/(x303+x304)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = INT32_MIN;
	static volatile int16_t x306 = INT16_MIN;
	uint16_t x307 = UINT16_MAX;
	static uint16_t x308 = UINT16_MAX;
	int32_t t66 = -6;

	t66 = (x305<=(x306/(x307+x308)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x309 = INT32_MIN;
	static uint32_t x310 = 840U;
	int32_t x311 = INT32_MIN;
	uint16_t x312 = 47U;
	static volatile int32_t t67 = -838843;

	t67 = (x309<=(x310/(x311+x312)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint16_t x313 = 560U;
	uint64_t x314 = 1177401625038699LLU;
	uint16_t x315 = UINT16_MAX;
	uint64_t x316 = UINT64_MAX;

	t68 = (x313<=(x314/(x315+x316)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = 105;
	volatile uint32_t x320 = UINT32_MAX;
	int32_t t69 = 28;

	t69 = (x317<=(x318/(x319+x320)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = INT16_MIN;
	static volatile int8_t x322 = -1;
	volatile uint8_t x323 = 47U;
	int32_t t70 = 0;

	t70 = (x321<=(x322/(x323+x324)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x326 = UINT64_MAX;
	int32_t x328 = -1;
	int32_t t71 = -42507926;

	t71 = (x325<=(x326/(x327+x328)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	int32_t x336 = INT32_MAX;

	t72 = (x333<=(x334/(x335+x336)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x337 = -1;
	int16_t x338 = INT16_MIN;
	static volatile uint16_t x339 = 3622U;
	static int32_t t73 = 672431722;

	t73 = (x337<=(x338/(x339+x340)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	int32_t x347 = INT32_MIN;
	static volatile uint32_t x348 = 0U;

	t74 = (x345<=(x346/(x347+x348)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = 1586U;
	uint16_t x351 = UINT16_MAX;
	volatile int32_t t75 = -5;

	t75 = (x349<=(x350/(x351+x352)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x353 = 9512785;
	int32_t x354 = 60451092;
	static int16_t x355 = -1;
	volatile int64_t x356 = -4528152141544LL;
	int32_t t76 = 7836465;

	t76 = (x353<=(x354/(x355+x356)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x358 = -186370062586LL;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = 1964U;
	volatile int32_t t77 = -28;

	t77 = (x357<=(x358/(x359+x360)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x361 = 131LLU;
	int64_t x362 = INT64_MIN;
	static uint32_t x363 = UINT32_MAX;
	int32_t t78 = -13269635;

	t78 = (x361<=(x362/(x363+x364)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x366 = -5;
	int64_t x367 = INT64_MIN;
	volatile int32_t t79 = 11414;

	t79 = (x365<=(x366/(x367+x368)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x369 = 13355803293LLU;
	int32_t x370 = -7166;
	volatile int32_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int32_t t80 = -131065;

	t80 = (x369<=(x370/(x371+x372)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x381 = -1;
	uint16_t x382 = 2U;
	static int16_t x383 = INT16_MIN;
	int8_t x384 = -1;
	volatile int32_t t81 = 49112;

	t81 = (x381<=(x382/(x383+x384)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x385 = UINT64_MAX;
	static volatile uint8_t x386 = 25U;
	int8_t x387 = INT8_MIN;
	int32_t t82 = 28556298;

	t82 = (x385<=(x386/(x387+x388)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x389 = -1LL;
	int32_t x390 = -1;
	static volatile uint32_t x392 = 12U;

	t83 = (x389<=(x390/(x391+x392)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x393 = -1;
	int64_t x394 = -1LL;
	static volatile int32_t x395 = 1;
	int8_t x396 = INT8_MAX;
	int32_t t84 = 43603110;

	t84 = (x393<=(x394/(x395+x396)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x397 = 255LLU;
	uint16_t x398 = 0U;
	int64_t x399 = -6882871589312130LL;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t85 = -15295177;

	t85 = (x397<=(x398/(x399+x400)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x402 = 3U;
	int32_t x403 = INT32_MIN;
	int32_t x404 = INT32_MAX;
	int32_t t86 = 25;

	t86 = (x401<=(x402/(x403+x404)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = 4073343;
	int16_t x406 = INT16_MIN;
	static uint8_t x407 = 12U;
	int16_t x408 = 1;

	t87 = (x405<=(x406/(x407+x408)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x409 = 112U;
	int32_t x411 = -3156;
	uint32_t x412 = 405179340U;
	static int32_t t88 = -220832606;

	t88 = (x409<=(x410/(x411+x412)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x417 = UINT8_MAX;
	static uint8_t x418 = UINT8_MAX;
	int16_t x419 = -1;
	static int32_t t89 = 68433432;

	t89 = (x417<=(x418/(x419+x420)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x425 = -4118LL;
	int16_t x426 = -1;
	int16_t x427 = INT16_MAX;
	volatile int32_t t90 = 209915632;

	t90 = (x425<=(x426/(x427+x428)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x433 = 343104U;
	uint64_t x435 = UINT64_MAX;
	static int64_t x436 = -15968348423LL;
	int32_t t91 = 255424;

	t91 = (x433<=(x434/(x435+x436)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x438 = INT64_MAX;
	static int16_t x439 = INT16_MAX;
	int64_t x440 = -427620LL;
	int32_t t92 = -6;

	t92 = (x437<=(x438/(x439+x440)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x441 = INT16_MIN;
	int64_t x442 = -29LL;
	static int16_t x444 = -1;
	static int32_t t93 = -7922;

	t93 = (x441<=(x442/(x443+x444)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x445 = INT8_MIN;
	uint8_t x448 = UINT8_MAX;
	int32_t t94 = -48824209;

	t94 = (x445<=(x446/(x447+x448)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x449 = -379721929053LL;
	uint64_t x450 = 883LLU;
	uint8_t x451 = 78U;
	static uint16_t x452 = 0U;
	static volatile int32_t t95 = 73;

	t95 = (x449<=(x450/(x451+x452)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = INT32_MIN;
	static volatile int8_t x454 = INT8_MIN;
	static int64_t x455 = -1LL;
	int32_t t96 = -9;

	t96 = (x453<=(x454/(x455+x456)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x457 = INT16_MIN;
	int32_t x458 = INT32_MIN;
	int64_t x459 = 308LL;
	static uint64_t x460 = 48103122045032LLU;
	volatile int32_t t97 = -283;

	t97 = (x457<=(x458/(x459+x460)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x461 = -18;
	static int64_t x462 = INT64_MIN;
	int64_t x463 = INT64_MIN;
	int8_t x464 = 0;
	volatile int32_t t98 = -576892623;

	t98 = (x461<=(x462/(x463+x464)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x465 = 6U;
	int32_t x466 = INT32_MIN;
	int8_t x467 = INT8_MAX;
	int32_t x468 = -1;
	volatile int32_t t99 = -3;

	t99 = (x465<=(x466/(x467+x468)));

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

