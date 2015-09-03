#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 28033U;
uint16_t x7 = UINT16_MAX;
int32_t x8 = INT32_MAX;
int64_t x26 = INT64_MAX;
volatile int8_t x40 = 3;
int16_t x48 = -1;
volatile int16_t x53 = INT16_MAX;
int32_t x55 = INT32_MAX;
uint8_t x85 = 52U;
volatile int8_t x87 = INT8_MIN;
static int8_t x91 = INT8_MIN;
uint8_t x95 = 3U;
volatile int32_t t20 = -104436339;
static uint64_t x104 = 889250825349142361LLU;
int32_t x110 = INT32_MIN;
int32_t x112 = INT32_MAX;
static volatile uint32_t x120 = UINT32_MAX;
static uint64_t t28 = 282417345LLU;
uint64_t x129 = 1266423696LLU;
uint8_t x131 = 124U;
static int32_t x134 = 150147;
volatile int8_t x139 = -29;
volatile uint64_t t31 = 2LLU;
static int32_t x145 = INT32_MIN;
int8_t x148 = INT8_MAX;
uint8_t x153 = 57U;
int64_t x157 = -1LL;
static int16_t x160 = INT16_MAX;
int16_t x164 = INT16_MIN;
static volatile uint32_t t36 = 15943U;
volatile uint8_t x165 = 6U;
int16_t x169 = INT16_MIN;
volatile int64_t x175 = INT64_MIN;
int64_t x177 = INT64_MIN;
volatile int8_t x183 = INT8_MIN;
volatile int64_t t41 = 33607752378LL;
int64_t x186 = INT64_MIN;
int64_t x187 = -14673791224204LL;
volatile uint64_t t43 = 55622969330031290LLU;
static volatile uint8_t x195 = 24U;
uint16_t x199 = 160U;
int32_t x200 = INT32_MIN;
int64_t t46 = -294363374970836280LL;
volatile int64_t x205 = INT64_MIN;
int32_t x206 = INT32_MAX;
volatile uint32_t x212 = 7736U;
int32_t x213 = INT32_MAX;
uint64_t x215 = 17744147832LLU;
int64_t x219 = INT64_MIN;
int64_t x221 = 17761LL;
int64_t x232 = -24746105082795LL;
int8_t x236 = INT8_MAX;
static int8_t x239 = INT8_MIN;
static uint32_t x240 = 16652069U;
volatile int64_t x245 = INT64_MAX;
static int16_t x250 = 15422;
static volatile int32_t x252 = INT32_MIN;
static volatile int16_t x259 = -6;
uint8_t x266 = 16U;
int64_t x277 = -1LL;
uint64_t t64 = 8504312850280LLU;
int16_t x288 = INT16_MAX;
volatile uint64_t t66 = 219704LLU;
static int8_t x291 = 3;
int64_t t67 = 2667070271309576456LL;
uint32_t x297 = 7513870U;
int16_t x298 = -1;
uint64_t t68 = 125LLU;
int32_t x301 = -1;
int8_t x306 = INT8_MIN;
volatile int32_t x307 = INT32_MIN;
static uint32_t x308 = 21U;
static uint16_t x309 = 12249U;
uint64_t x310 = UINT64_MAX;
volatile int16_t x312 = 86;
uint64_t t71 = 41270LLU;
static volatile uint8_t x314 = UINT8_MAX;
int32_t x320 = INT32_MAX;
volatile uint16_t x331 = 30U;
volatile uint8_t x332 = UINT8_MAX;
volatile uint64_t t75 = 3164487LLU;
int16_t x340 = INT16_MIN;
uint16_t x352 = 8169U;
volatile int32_t t78 = 53973;
uint16_t x353 = 1223U;
int64_t x354 = INT64_MIN;
uint8_t x357 = UINT8_MAX;
static uint16_t x363 = 15568U;
static uint64_t x365 = UINT64_MAX;
uint64_t x366 = 29735531935785LLU;
volatile uint64_t x367 = 2278LLU;
uint64_t x371 = 27301309LLU;
volatile int8_t x387 = INT8_MIN;
uint16_t x399 = UINT16_MAX;
volatile int64_t t87 = -30344LL;
int32_t x411 = INT32_MIN;
int32_t x420 = INT32_MAX;
volatile int64_t x422 = 241313406996LL;
uint8_t x423 = UINT8_MAX;
uint16_t x424 = UINT16_MAX;
volatile uint16_t x426 = 219U;
int64_t x434 = -3781881853LL;
int64_t x439 = INT64_MIN;
volatile uint64_t t99 = 195894244408LLU;


void f0(void) {
	uint16_t x6 = 3U;
	int32_t t0 = -1516277;

	t0 = (((x5%x6)%x7)-x8);

	if (t0 != -2147483646) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	int64_t x11 = INT64_MIN;
	static volatile int32_t x12 = -1;
	int64_t t1 = -13801LL;

	t1 = (((x9%x10)%x11)-x12);

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 17U;
	volatile uint16_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	int32_t x16 = INT32_MIN;
	volatile uint32_t t2 = 1219266607U;

	t2 = (((x13%x14)%x15)-x16);

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	static volatile uint64_t x18 = UINT64_MAX;
	uint64_t x19 = 3LLU;
	int64_t x20 = -1LL;
	volatile uint64_t t3 = 947721213315LLU;

	t3 = (((x17%x18)%x19)-x20);

	if (t3 != 2LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	volatile int32_t x23 = INT32_MIN;
	uint32_t x24 = UINT32_MAX;
	int64_t t4 = 5700867025649LL;

	t4 = (((x21%x22)%x23)-x24);

	if (t4 != -4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = 2065873;
	volatile int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MAX;
	static int64_t t5 = -918LL;

	t5 = (((x25%x26)%x27)-x28);

	if (t5 != -46LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 16U;
	uint16_t x34 = 24965U;
	static int16_t x35 = -8788;
	int8_t x36 = -12;
	static int32_t t6 = -1;

	t6 = (((x33%x34)%x35)-x36);

	if (t6 != 28) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = -1237;
	static int64_t x38 = INT64_MIN;
	volatile uint8_t x39 = 26U;
	int64_t t7 = -41978984688322904LL;

	t7 = (((x37%x38)%x39)-x40);

	if (t7 != -18LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -10751;
	static int8_t x42 = INT8_MIN;
	int16_t x43 = -28;
	volatile int32_t x44 = 50837339;
	static int32_t t8 = -1;

	t8 = (((x41%x42)%x43)-x44);

	if (t8 != -50837354) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	volatile int64_t x46 = INT64_MIN;
	static volatile uint8_t x47 = UINT8_MAX;
	int64_t t9 = -3808007066705836500LL;

	t9 = (((x45%x46)%x47)-x48);

	if (t9 != -127LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 2994465;
	uint64_t x50 = 2493796694690398575LLU;
	int8_t x51 = INT8_MAX;
	static int64_t x52 = -103296LL;
	uint64_t t10 = 76370269LLU;

	t10 = (((x49%x50)%x51)-x52);

	if (t10 != 103355LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x54 = INT8_MAX;
	volatile int8_t x56 = INT8_MIN;
	int32_t t11 = 305888;

	t11 = (((x53%x54)%x55)-x56);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int16_t x58 = INT16_MAX;
	uint8_t x59 = UINT8_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t12 = 245U;

	t12 = (((x57%x58)%x59)-x60);

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = -1053435847;
	uint32_t x66 = 1878U;
	uint16_t x67 = 5U;
	static int64_t x68 = -1LL;
	volatile int64_t t13 = 8976LL;

	t13 = (((x65%x66)%x67)-x68);

	if (t13 != 5LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 44868LLU;
	uint8_t x70 = UINT8_MAX;
	uint64_t x71 = 3751122376415LLU;
	int8_t x72 = INT8_MIN;
	volatile uint64_t t14 = 34972900666837506LLU;

	t14 = (((x69%x70)%x71)-x72);

	if (t14 != 371LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -42;
	volatile int64_t x74 = -331028439382985LL;
	uint32_t x75 = 13473422U;
	volatile uint16_t x76 = 17681U;
	volatile int64_t t15 = -436889969915328659LL;

	t15 = (((x73%x74)%x75)-x76);

	if (t15 != -17723LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = INT8_MIN;
	static int32_t x78 = INT32_MIN;
	volatile uint64_t x79 = 8LLU;
	uint8_t x80 = 7U;
	uint64_t t16 = 6370LLU;

	t16 = (((x77%x78)%x79)-x80);

	if (t16 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	static int32_t x82 = 13714;
	volatile int8_t x83 = INT8_MIN;
	int64_t x84 = 501393777064LL;
	volatile int64_t t17 = -698687419LL;

	t17 = (((x81%x82)%x83)-x84);

	if (t17 != -501393777065LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x86 = 248U;
	static int64_t x88 = -20538LL;
	int64_t t18 = -4451777845LL;

	t18 = (((x85%x86)%x87)-x88);

	if (t18 != 20590LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x89 = UINT8_MAX;
	volatile int8_t x90 = -1;
	uint64_t x92 = UINT64_MAX;
	static volatile uint64_t t19 = 78840457LLU;

	t19 = (((x89%x90)%x91)-x92);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MAX;
	uint8_t x96 = 1U;

	t20 = (((x93%x94)%x95)-x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x97 = -1;
	int32_t x98 = INT32_MAX;
	int64_t x99 = INT64_MIN;
	static uint16_t x100 = 29U;
	volatile int64_t t21 = -5473LL;

	t21 = (((x97%x98)%x99)-x100);

	if (t21 != -30LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = 4;
	int32_t x102 = -1;
	volatile uint8_t x103 = 6U;
	uint64_t t22 = 0LLU;

	t22 = (((x101%x102)%x103)-x104);

	if (t22 != 17557493248360409255LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MAX;
	int16_t x106 = -1;
	volatile int8_t x107 = -1;
	int8_t x108 = -1;
	static volatile int32_t t23 = 504374;

	t23 = (((x105%x106)%x107)-x108);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 1910U;
	volatile uint16_t x111 = 55U;
	static volatile uint32_t t24 = 3350179U;

	t24 = (((x109%x110)%x111)-x112);

	if (t24 != 2147483689U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 13U;
	static int64_t x114 = -134569326065LL;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = INT8_MAX;
	int64_t t25 = -375596915530LL;

	t25 = (((x113%x114)%x115)-x116);

	if (t25 != -114LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = 1U;
	uint8_t x118 = 103U;
	int64_t x119 = INT64_MIN;
	volatile int64_t t26 = 124319LL;

	t26 = (((x117%x118)%x119)-x120);

	if (t26 != -4294967294LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x121 = 191U;
	int8_t x122 = INT8_MAX;
	static int16_t x123 = -1;
	int16_t x124 = INT16_MIN;
	int32_t t27 = -88725793;

	t27 = (((x121%x122)%x123)-x124);

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x125 = INT64_MIN;
	int16_t x126 = INT16_MIN;
	static int8_t x127 = -3;
	uint64_t x128 = 46471103LLU;

	t28 = (((x125%x126)%x127)-x128);

	if (t28 != 18446744073663080513LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x130 = INT8_MIN;
	uint64_t x132 = 27LLU;
	uint64_t t29 = 125545528340LLU;

	t29 = (((x129%x130)%x131)-x132);

	if (t29 != 13LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x133 = 1695393LLU;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = INT16_MIN;
	uint64_t t30 = 46484661LLU;

	t30 = (((x133%x134)%x135)-x136);

	if (t30 != 76544LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = 6235223987016011099LLU;
	int32_t x140 = INT32_MIN;

	t31 = (((x137%x138)%x139)-x140);

	if (t31 != 2988148051986248357LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 1040465U;
	int64_t x142 = 1884569202947248LL;
	volatile int32_t x143 = INT32_MIN;
	int8_t x144 = -1;
	volatile int64_t t32 = -14LL;

	t32 = (((x141%x142)%x143)-x144);

	if (t32 != 1040466LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x146 = INT8_MAX;
	int32_t x147 = INT32_MIN;
	int32_t t33 = 60822;

	t33 = (((x145%x146)%x147)-x148);

	if (t33 != -135) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x154 = INT32_MIN;
	int32_t x155 = INT32_MIN;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t34 = 95691;

	t34 = (((x153%x154)%x155)-x156);

	if (t34 != -65478) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x158 = UINT64_MAX;
	uint8_t x159 = 12U;
	volatile uint64_t t35 = 313982LLU;

	t35 = (((x157%x158)%x159)-x160);

	if (t35 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x161 = INT32_MAX;
	int16_t x162 = 2;
	uint32_t x163 = 89851U;

	t36 = (((x161%x162)%x163)-x164);

	if (t36 != 32769U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x166 = -2;
	static uint32_t x167 = UINT32_MAX;
	volatile uint8_t x168 = UINT8_MAX;
	uint32_t t37 = 1763787572U;

	t37 = (((x165%x166)%x167)-x168);

	if (t37 != 4294967041U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x170 = 3U;
	volatile int64_t x171 = -1LL;
	volatile int8_t x172 = 16;
	volatile int64_t t38 = -3738150337789168LL;

	t38 = (((x169%x170)%x171)-x172);

	if (t38 != -16LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x173 = 297535591U;
	uint32_t x174 = UINT32_MAX;
	static int64_t x176 = INT64_MAX;
	int64_t t39 = -42127LL;

	t39 = (((x173%x174)%x175)-x176);

	if (t39 != -9223372036557240216LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x178 = INT16_MAX;
	uint16_t x179 = 3U;
	int8_t x180 = INT8_MIN;
	int64_t t40 = 1074898591675120526LL;

	t40 = (((x177%x178)%x179)-x180);

	if (t40 != 126LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = 13U;
	volatile uint32_t x182 = 242U;
	int64_t x184 = -1LL;

	t41 = (((x181%x182)%x183)-x184);

	if (t41 != 14LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	int8_t x188 = -1;
	int64_t t42 = -19LL;

	t42 = (((x185%x186)%x187)-x188);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MAX;
	int64_t x190 = -35218829013951LL;
	volatile uint64_t x191 = 337LLU;
	int64_t x192 = INT64_MAX;

	t43 = (((x189%x190)%x191)-x192);

	if (t43 != 9223372036854775887LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MAX;
	static uint16_t x194 = UINT16_MAX;
	int64_t x196 = -48758112LL;
	static int64_t t44 = 5974LL;

	t44 = (((x193%x194)%x195)-x196);

	if (t44 != 48758119LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x197 = 0;
	uint64_t x198 = 14LLU;
	volatile uint64_t t45 = 4349466120641616LLU;

	t45 = (((x197%x198)%x199)-x200);

	if (t45 != 2147483648LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = 50;
	int64_t x202 = 246066757016LL;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = INT16_MIN;

	t46 = (((x201%x202)%x203)-x204);

	if (t46 != 32818LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x207 = INT16_MIN;
	static int8_t x208 = 21;
	static int64_t t47 = -35361840134LL;

	t47 = (((x205%x206)%x207)-x208);

	if (t47 != -23LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	uint8_t x210 = 1U;
	static uint8_t x211 = 6U;
	int64_t t48 = -1088LL;

	t48 = (((x209%x210)%x211)-x212);

	if (t48 != -7736LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x214 = 21U;
	uint32_t x216 = UINT32_MAX;
	uint64_t t49 = 2LLU;

	t49 = (((x213%x214)%x215)-x216);

	if (t49 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x217 = -1;
	uint64_t x218 = UINT64_MAX;
	volatile int16_t x220 = INT16_MAX;
	uint64_t t50 = 7848461672813LLU;

	t50 = (((x217%x218)%x219)-x220);

	if (t50 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x222 = 22464526U;
	static int8_t x223 = INT8_MIN;
	int8_t x224 = -1;
	volatile int64_t t51 = 26301118187591888LL;

	t51 = (((x221%x222)%x223)-x224);

	if (t51 != 98LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = -1589557943083361LL;
	int64_t x230 = INT64_MIN;
	int16_t x231 = -2;
	volatile int64_t t52 = 28LL;

	t52 = (((x229%x230)%x231)-x232);

	if (t52 != 24746105082794LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x233 = 12U;
	int16_t x234 = -1;
	volatile int8_t x235 = INT8_MIN;
	int32_t t53 = -27388;

	t53 = (((x233%x234)%x235)-x236);

	if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x237 = INT8_MIN;
	volatile int16_t x238 = INT16_MAX;
	static volatile uint32_t t54 = 260406U;

	t54 = (((x237%x238)%x239)-x240);

	if (t54 != 4278315227U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -1;
	int8_t x242 = -1;
	uint8_t x243 = 9U;
	uint16_t x244 = 0U;
	int32_t t55 = 29634;

	t55 = (((x241%x242)%x243)-x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x246 = 1U;
	volatile int16_t x247 = INT16_MIN;
	static int16_t x248 = -1;
	static volatile int64_t t56 = -5295736LL;

	t56 = (((x245%x246)%x247)-x248);

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = 22885U;
	int64_t x251 = -52349512345294181LL;
	volatile int64_t t57 = -16651528556093214LL;

	t57 = (((x249%x250)%x251)-x252);

	if (t57 != 2147491111LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x253 = -1;
	int64_t x254 = INT64_MAX;
	uint16_t x255 = 6843U;
	static int8_t x256 = INT8_MIN;
	static int64_t t58 = 31LL;

	t58 = (((x253%x254)%x255)-x256);

	if (t58 != 127LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = 130738154358017247LL;
	int64_t x258 = 16159090695LL;
	static int8_t x260 = INT8_MIN;
	int64_t t59 = 15156225148269LL;

	t59 = (((x257%x258)%x259)-x260);

	if (t59 != 128LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x261 = 119LLU;
	static uint64_t x262 = 12787279868512LLU;
	int32_t x263 = -1;
	volatile int64_t x264 = INT64_MIN;
	uint64_t t60 = 2241LLU;

	t60 = (((x261%x262)%x263)-x264);

	if (t60 != 9223372036854775927LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 756249279U;
	static int8_t x267 = INT8_MIN;
	int8_t x268 = INT8_MIN;
	uint32_t t61 = 3128315U;

	t61 = (((x265%x266)%x267)-x268);

	if (t61 != 143U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x269 = INT16_MIN;
	volatile int64_t x270 = -1LL;
	int32_t x271 = INT32_MIN;
	volatile uint16_t x272 = 53U;
	volatile int64_t t62 = -959LL;

	t62 = (((x269%x270)%x271)-x272);

	if (t62 != -53LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = 57U;
	int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	int64_t x276 = INT64_MAX;
	int64_t t63 = 4266537394153658179LL;

	t63 = (((x273%x274)%x275)-x276);

	if (t63 != -9223372036854775750LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x278 = INT16_MIN;
	static uint64_t x279 = 605LLU;
	volatile uint16_t x280 = 3U;

	t64 = (((x277%x278)%x279)-x280);

	if (t64 != 452LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x281 = 20U;
	int16_t x282 = INT16_MAX;
	int32_t x283 = -1;
	int32_t x284 = 234120233;
	int32_t t65 = 105;

	t65 = (((x281%x282)%x283)-x284);

	if (t65 != -234120233) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x285 = UINT16_MAX;
	int8_t x286 = -30;
	uint64_t x287 = 990760455231LLU;

	t66 = (((x285%x286)%x287)-x288);

	if (t66 != 18446744073709518864LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x289 = -1LL;
	uint16_t x290 = 6345U;
	static int32_t x292 = -898550199;

	t67 = (((x289%x290)%x291)-x292);

	if (t67 != 898550198LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x299 = INT64_MAX;
	volatile uint64_t x300 = UINT64_MAX;

	t68 = (((x297%x298)%x299)-x300);

	if (t68 != 7513871LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x302 = INT64_MIN;
	volatile int64_t x303 = INT64_MAX;
	static volatile int8_t x304 = INT8_MIN;
	int64_t t69 = -166764300698415LL;

	t69 = (((x301%x302)%x303)-x304);

	if (t69 != 127LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = 1;
	uint32_t t70 = 0U;

	t70 = (((x305%x306)%x307)-x308);

	if (t70 != 4294967276U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x311 = 4;

	t71 = (((x309%x310)%x311)-x312);

	if (t71 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x313 = -455180491894339827LL;
	int8_t x315 = -1;
	static volatile uint64_t x316 = 5LLU;
	uint64_t t72 = 1856LLU;

	t72 = (((x313%x314)%x315)-x316);

	if (t72 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = -14030429165050514LL;
	uint32_t x318 = 1U;
	int64_t x319 = INT64_MIN;
	volatile int64_t t73 = 47010379LL;

	t73 = (((x317%x318)%x319)-x320);

	if (t73 != -2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -2;
	static volatile int16_t x330 = -11292;
	int32_t t74 = -1;

	t74 = (((x329%x330)%x331)-x332);

	if (t74 != -257) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 42U;
	volatile int64_t x334 = INT64_MIN;
	volatile int64_t x335 = -1LL;
	uint64_t x336 = 996398712LLU;

	t75 = (((x333%x334)%x335)-x336);

	if (t75 != 18446744072713152904LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x337 = 51U;
	uint64_t x338 = 363896LLU;
	int16_t x339 = -1;
	uint64_t t76 = 30572566LLU;

	t76 = (((x337%x338)%x339)-x340);

	if (t76 != 32819LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = INT32_MAX;
	volatile int32_t x346 = -1484;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = INT32_MIN;
	uint64_t t77 = 98669LLU;

	t77 = (((x345%x346)%x347)-x348);

	if (t77 != 2147484251LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = 1U;
	int32_t x350 = -46674214;
	int8_t x351 = INT8_MAX;

	t78 = (((x349%x350)%x351)-x352);

	if (t78 != -8168) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x355 = 15085U;
	int8_t x356 = -1;
	volatile int64_t t79 = -1009913401746LL;

	t79 = (((x353%x354)%x355)-x356);

	if (t79 != 1224LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x358 = 17;
	uint64_t x359 = UINT64_MAX;
	static int64_t x360 = INT64_MAX;
	uint64_t t80 = 1664134LLU;

	t80 = (((x357%x358)%x359)-x360);

	if (t80 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint32_t x361 = 596635U;
	int16_t x362 = 5;
	int8_t x364 = INT8_MAX;
	static volatile uint32_t t81 = 2U;

	t81 = (((x361%x362)%x363)-x364);

	if (t81 != 4294967169U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x368 = 3256794U;
	volatile uint64_t t82 = 2235LLU;

	t82 = (((x365%x366)%x367)-x368);

	if (t82 != 18446744073706295153LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x369 = INT32_MIN;
	static int16_t x370 = -244;
	static uint16_t x372 = 16922U;
	volatile uint64_t t83 = 1015438246600186078LLU;

	t83 = (((x369%x370)%x371)-x372);

	if (t83 != 3170928LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	static uint16_t x375 = 67U;
	int64_t x376 = -3789685LL;
	int64_t t84 = 13458621153071LL;

	t84 = (((x373%x374)%x375)-x376);

	if (t84 != 3789684LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = INT64_MAX;
	static int8_t x386 = INT8_MIN;
	int16_t x388 = -1;
	volatile int64_t t85 = -721820076LL;

	t85 = (((x385%x386)%x387)-x388);

	if (t85 != 128LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x393 = 14U;
	static uint8_t x394 = UINT8_MAX;
	int64_t x395 = -1LL;
	uint8_t x396 = 3U;
	int64_t t86 = 3752984862796LL;

	t86 = (((x393%x394)%x395)-x396);

	if (t86 != -3LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x397 = INT64_MIN;
	uint8_t x398 = 4U;
	int32_t x400 = -17862;

	t87 = (((x397%x398)%x399)-x400);

	if (t87 != 17862LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x405 = INT64_MAX;
	uint16_t x406 = 1624U;
	int64_t x407 = 4530LL;
	uint64_t x408 = 7261595181LLU;
	volatile uint64_t t88 = 2738LLU;

	t88 = (((x405%x406)%x407)-x408);

	if (t88 != 18446744066447957954LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x409 = INT32_MIN;
	volatile int32_t x410 = INT32_MIN;
	uint32_t x412 = UINT32_MAX;
	uint32_t t89 = 103U;

	t89 = (((x409%x410)%x411)-x412);

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x413 = UINT16_MAX;
	static int16_t x414 = -1;
	uint32_t x415 = 873943817U;
	int32_t x416 = -1;
	volatile uint32_t t90 = 156U;

	t90 = (((x413%x414)%x415)-x416);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x417 = INT32_MAX;
	static int32_t x418 = 624035469;
	int64_t x419 = INT64_MIN;
	int64_t t91 = 28125LL;

	t91 = (((x417%x418)%x419)-x420);

	if (t91 != -1872106407LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = 10U;
	int64_t t92 = -21258052606712LL;

	t92 = (((x421%x422)%x423)-x424);

	if (t92 != -65525LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x425 = INT32_MAX;
	uint64_t x427 = 1555693910LLU;
	volatile uint16_t x428 = 57U;
	uint64_t t93 = 2867371793550412LLU;

	t93 = (((x425%x426)%x427)-x428);

	if (t93 != 31LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x429 = INT16_MIN;
	int32_t x430 = -1;
	static int16_t x431 = INT16_MIN;
	static volatile int64_t x432 = INT64_MAX;
	volatile int64_t t94 = 15230857LL;

	t94 = (((x429%x430)%x431)-x432);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x433 = UINT64_MAX;
	int8_t x435 = -7;
	volatile uint32_t x436 = UINT32_MAX;
	uint64_t t95 = 1234LLU;

	t95 = (((x433%x434)%x435)-x436);

	if (t95 != 18446744073196466173LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x437 = INT16_MAX;
	int64_t x438 = INT64_MAX;
	int16_t x440 = INT16_MIN;
	volatile int64_t t96 = 1122LL;

	t96 = (((x437%x438)%x439)-x440);

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x441 = UINT64_MAX;
	uint64_t x442 = 29173056LLU;
	int32_t x443 = -18993;
	volatile int32_t x444 = -1;
	uint64_t t97 = 76242574065LLU;

	t97 = (((x441%x442)%x443)-x444);

	if (t97 != 27806080LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x445 = -92050;
	int8_t x446 = -32;
	uint32_t x447 = 47876320U;
	static uint8_t x448 = 37U;
	uint32_t t98 = 371521643U;

	t98 = (((x445%x446)%x447)-x448);

	if (t98 != 33974761U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x449 = INT8_MIN;
	static volatile int16_t x450 = -397;
	static uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MAX;

	t99 = (((x449%x450)%x451)-x452);

	if (t99 != 18446744071562067841LLU) { NG(); } else { ; }
	
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

