#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x9 = INT16_MIN;
volatile int32_t t5 = -59428;
volatile int64_t x25 = 1112933LL;
int32_t t8 = -45125782;
uint64_t x37 = 2317372114LLU;
int32_t t9 = -66;
uint16_t x42 = 95U;
int32_t t11 = 921220;
volatile uint32_t x53 = 94U;
volatile int16_t x59 = -1;
int8_t x63 = 1;
int8_t x66 = 6;
volatile int64_t x67 = INT64_MIN;
int32_t x69 = -1;
static volatile int8_t x70 = 15;
int64_t x74 = 18376145666033LL;
static volatile uint16_t x80 = 62U;
int64_t x88 = INT64_MIN;
static int32_t x89 = INT32_MIN;
uint8_t x91 = 5U;
volatile uint64_t x98 = 11974331930LLU;
static uint64_t x100 = 149071LLU;
static int64_t x101 = -1LL;
int64_t x102 = 1LL;
uint64_t x113 = 14342542630075LLU;
int8_t x118 = -1;
volatile uint16_t x121 = UINT16_MAX;
uint16_t x122 = 1169U;
static int16_t x126 = -3;
static int32_t t31 = -1928236;
int64_t x132 = -31LL;
int32_t x138 = INT32_MAX;
int32_t x139 = 3;
int32_t x142 = -71210177;
int8_t x144 = 2;
int64_t x147 = -1LL;
uint16_t x153 = UINT16_MAX;
uint64_t x170 = 2752076640688138LLU;
static uint64_t x177 = 10LLU;
volatile int32_t t44 = -233056565;
volatile int32_t t45 = -801098359;
static volatile int32_t x187 = 9;
uint32_t x189 = 433532U;
volatile uint32_t x193 = UINT32_MAX;
int64_t x194 = INT64_MIN;
uint32_t x195 = UINT32_MAX;
int8_t x199 = INT8_MIN;
static uint16_t x200 = 8U;
int16_t x202 = INT16_MIN;
volatile uint32_t x203 = 15503857U;
static int16_t x207 = -55;
uint64_t x223 = 176LLU;
uint8_t x225 = 0U;
int32_t x235 = INT32_MIN;
int32_t t59 = -4086669;
int32_t x242 = -22;
volatile int32_t t60 = 0;
volatile int16_t x245 = 170;
int64_t x251 = -1LL;
int64_t x252 = -1LL;
int32_t t63 = -1;
int64_t x258 = -154LL;
int8_t x259 = INT8_MIN;
int64_t x262 = INT64_MIN;
static int16_t x263 = INT16_MIN;
int64_t x265 = INT64_MIN;
int8_t x266 = INT8_MAX;
volatile uint16_t x275 = UINT16_MAX;
volatile int8_t x277 = -1;
static int16_t x279 = 1156;
int64_t x287 = 2401947210508LL;
volatile uint64_t x289 = 1545LLU;
static volatile int16_t x290 = 1651;
int64_t x296 = -129414401024LL;
static volatile int32_t t75 = 4243;
static uint8_t x307 = UINT8_MAX;
static uint32_t x312 = UINT32_MAX;
int32_t x316 = -13614109;
int32_t x320 = -1;
volatile int32_t t79 = -25371510;
static uint16_t x323 = 25765U;
volatile int8_t x326 = INT8_MIN;
volatile int32_t x327 = INT32_MIN;
int16_t x328 = -1;
int32_t x335 = -1;
static int32_t x336 = -1;
int32_t x337 = -72253300;
volatile int32_t x338 = -1;
int32_t x344 = 145681709;
static volatile int32_t t86 = -12705;
uint64_t x353 = 557344239331701LLU;
uint8_t x361 = 70U;
static volatile int32_t t90 = 58769517;
int8_t x365 = -1;
volatile int32_t t91 = -266448;
volatile uint64_t x370 = 9439333LLU;
volatile int16_t x373 = INT16_MIN;
volatile uint16_t x374 = 751U;
int16_t x375 = -13207;
volatile int32_t t94 = 0;
int8_t x384 = -1;
int8_t x385 = 53;
volatile uint64_t x388 = 25752LLU;
static int32_t t96 = 1;
int8_t x393 = -1;
volatile uint16_t x400 = 2198U;


void f0(void) {
	static volatile uint8_t x1 = 8U;
	uint8_t x2 = 28U;
	int8_t x3 = INT8_MIN;
	volatile int16_t x4 = INT16_MAX;
	int32_t t0 = 80131304;

	t0 = (x1<(x2==(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	uint32_t x6 = 522231605U;
	volatile uint8_t x7 = 1U;
	static uint64_t x8 = 15112847745336085LLU;
	int32_t t1 = -1;

	t1 = (x5<(x6==(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	uint64_t x11 = 30LLU;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 54;

	t2 = (x9<(x10==(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -1;
	volatile int8_t x14 = 0;
	volatile uint16_t x15 = 2U;
	int16_t x16 = INT16_MIN;
	int32_t t3 = 5182370;

	t3 = (x13<(x14==(x15<=x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static int8_t x18 = 3;
	int8_t x19 = INT8_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 1;

	t4 = (x17<(x18==(x19<=x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 77U;
	int64_t x22 = INT64_MIN;
	static volatile uint64_t x23 = UINT64_MAX;
	int8_t x24 = -3;

	t5 = (x21<(x22==(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 66U;
	volatile int32_t x27 = -850;
	int64_t x28 = -1LL;
	int32_t t6 = -122955448;

	t6 = (x25<(x26==(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = 2159;
	volatile int32_t x31 = INT32_MAX;
	uint16_t x32 = 20U;
	static int32_t t7 = -4;

	t7 = (x29<(x30==(x31<=x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 1264761U;
	int64_t x34 = INT64_MIN;
	int64_t x35 = 143431684547LL;
	static uint16_t x36 = 26807U;

	t8 = (x33<(x34==(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	static int64_t x39 = -15LL;
	uint8_t x40 = UINT8_MAX;

	t9 = (x37<(x38==(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x43 = INT8_MAX;
	static int16_t x44 = -11557;
	int32_t t10 = 93902830;

	t10 = (x41<(x42==(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 13U;
	static int64_t x46 = INT64_MAX;
	static uint16_t x47 = 79U;
	static int16_t x48 = -1;

	t11 = (x45<(x46==(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int64_t x50 = -1LL;
	volatile int64_t x51 = -84566LL;
	static uint16_t x52 = 126U;
	volatile int32_t t12 = -3;

	t12 = (x49<(x50==(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint32_t x54 = UINT32_MAX;
	uint8_t x55 = 54U;
	volatile int16_t x56 = INT16_MIN;
	int32_t t13 = 45856;

	t13 = (x53<(x54==(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint16_t x58 = 1U;
	int8_t x60 = 1;
	volatile int32_t t14 = 161764108;

	t14 = (x57<(x58==(x59<=x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -31927276;
	static int64_t x62 = INT64_MAX;
	int32_t x64 = INT32_MIN;
	int32_t t15 = -400;

	t15 = (x61<(x62==(x63<=x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1U;
	uint64_t x68 = 356LLU;
	int32_t t16 = -1846942;

	t16 = (x65<(x66==(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = INT32_MIN;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = 1780;

	t17 = (x69<(x70==(x71<=x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = 4LL;
	uint64_t x75 = 5714867349337548LLU;
	int64_t x76 = -1LL;
	volatile int32_t t18 = 784941;

	t18 = (x73<(x74==(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 78U;
	int8_t x78 = INT8_MIN;
	int16_t x79 = 0;
	int32_t t19 = -242590;

	t19 = (x77<(x78==(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = -1;
	uint16_t x82 = 2U;
	volatile int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	int32_t t20 = 718;

	t20 = (x81<(x82==(x83<=x84)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	uint64_t x86 = UINT64_MAX;
	volatile uint16_t x87 = UINT16_MAX;
	static volatile int32_t t21 = 0;

	t21 = (x85<(x86==(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = -153;
	static uint64_t x92 = 584LLU;
	int32_t t22 = -52805881;

	t22 = (x89<(x90==(x91<=x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = INT16_MIN;
	uint8_t x95 = UINT8_MAX;
	volatile int8_t x96 = 1;
	volatile int32_t t23 = 16336;

	t23 = (x93<(x94==(x95<=x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static volatile int32_t t24 = -15433;

	t24 = (x97<(x98==(x99<=x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x103 = UINT8_MAX;
	int64_t x104 = -147370930127372830LL;
	int32_t t25 = -21227539;

	t25 = (x101<(x102==(x103<=x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	static int32_t x106 = -66065;
	int16_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 110666574;

	t26 = (x105<(x106==(x107<=x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -2;
	static volatile int64_t x110 = INT64_MAX;
	static int16_t x111 = 1;
	volatile int16_t x112 = -1;
	volatile int32_t t27 = -80191340;

	t27 = (x109<(x110==(x111<=x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x114 = -1LL;
	volatile int8_t x115 = 6;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 153;

	t28 = (x113<(x114==(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 5U;
	static volatile int8_t x119 = -30;
	int32_t x120 = -7247373;
	int32_t t29 = -4;

	t29 = (x117<(x118==(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x123 = -420LL;
	int8_t x124 = INT8_MAX;
	int32_t t30 = 14935785;

	t30 = (x121<(x122==(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 33215154U;
	static int16_t x127 = 2845;
	int16_t x128 = INT16_MIN;

	t31 = (x125<(x126==(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = INT32_MIN;
	static uint8_t x130 = UINT8_MAX;
	static volatile uint8_t x131 = UINT8_MAX;
	volatile int32_t t32 = -7;

	t32 = (x129<(x130==(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 137U;
	int16_t x134 = 0;
	volatile int32_t x135 = INT32_MIN;
	int64_t x136 = INT64_MIN;
	volatile int32_t t33 = 6809;

	t33 = (x133<(x134==(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = -112279;
	int64_t x140 = INT64_MIN;
	volatile int32_t t34 = -2165614;

	t34 = (x137<(x138==(x139<=x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 319U;
	int64_t x143 = INT64_MIN;
	int32_t t35 = 206994658;

	t35 = (x141<(x142==(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	int64_t x146 = INT64_MIN;
	uint64_t x148 = 2134LLU;
	int32_t t36 = 525;

	t36 = (x145<(x146==(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	static int16_t x150 = 2;
	int64_t x151 = INT64_MIN;
	int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 2166217;

	t37 = (x149<(x150==(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = -1LL;
	int32_t x155 = INT32_MIN;
	uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = -2927;

	t38 = (x153<(x154==(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 5766196LLU;
	static volatile int8_t x158 = INT8_MAX;
	int64_t x159 = -17498162298318LL;
	static uint16_t x160 = UINT16_MAX;
	volatile int32_t t39 = -12728;

	t39 = (x157<(x158==(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -17;
	int64_t x162 = -247463544072LL;
	int32_t x163 = INT32_MIN;
	int8_t x164 = -1;
	static volatile int32_t t40 = 77;

	t40 = (x161<(x162==(x163<=x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 17U;
	uint32_t x166 = 52502989U;
	int64_t x167 = 2159LL;
	static volatile int64_t x168 = 98LL;
	int32_t t41 = 7422;

	t41 = (x165<(x166==(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile int64_t x171 = INT64_MIN;
	uint32_t x172 = 40930U;
	int32_t t42 = 288;

	t42 = (x169<(x170==(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile int32_t x174 = INT32_MIN;
	static int64_t x175 = INT64_MIN;
	volatile uint16_t x176 = 101U;
	int32_t t43 = 43884146;

	t43 = (x173<(x174==(x175<=x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x178 = INT32_MIN;
	static uint8_t x179 = UINT8_MAX;
	static int32_t x180 = -2814;

	t44 = (x177<(x178==(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static uint8_t x182 = UINT8_MAX;
	int32_t x183 = 124609973;
	volatile int8_t x184 = INT8_MAX;

	t45 = (x181<(x182==(x183<=x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int64_t x186 = INT64_MAX;
	uint32_t x188 = UINT32_MAX;
	int32_t t46 = -23;

	t46 = (x185<(x186==(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x190 = 1052U;
	static uint32_t x191 = 822286U;
	uint8_t x192 = 0U;
	int32_t t47 = -680796687;

	t47 = (x189<(x190==(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x196 = 366803676U;
	int32_t t48 = 180435;

	t48 = (x193<(x194==(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = 4;
	uint16_t x198 = 19U;
	static int32_t t49 = -15868;

	t49 = (x197<(x198==(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = INT8_MIN;
	int8_t x204 = -1;
	volatile int32_t t50 = -1047728740;

	t50 = (x201<(x202==(x203<=x204)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = 30;
	volatile uint64_t x206 = 1746LLU;
	uint32_t x208 = 143U;
	static volatile int32_t t51 = -104508;

	t51 = (x205<(x206==(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint16_t x210 = 1945U;
	static int32_t x211 = -1;
	uint64_t x212 = 23065116040244916LLU;
	int32_t t52 = 1;

	t52 = (x209<(x210==(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	volatile int8_t x214 = INT8_MAX;
	volatile int8_t x215 = INT8_MIN;
	uint32_t x216 = 331947U;
	int32_t t53 = -26649358;

	t53 = (x213<(x214==(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MIN;
	volatile uint16_t x219 = 1U;
	volatile int8_t x220 = INT8_MAX;
	volatile int32_t t54 = 398133732;

	t54 = (x217<(x218==(x219<=x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -100239421209043868LL;
	int64_t x222 = INT64_MAX;
	volatile int64_t x224 = INT64_MAX;
	static volatile int32_t t55 = -1;

	t55 = (x221<(x222==(x223<=x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -1;
	uint8_t x227 = UINT8_MAX;
	static volatile uint64_t x228 = 641LLU;
	static volatile int32_t t56 = 7;

	t56 = (x225<(x226==(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 19;
	uint64_t x230 = 4024205610687003LLU;
	int16_t x231 = INT16_MAX;
	static int8_t x232 = INT8_MIN;
	volatile int32_t t57 = 0;

	t57 = (x229<(x230==(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x233 = 11;
	uint32_t x234 = 12U;
	int32_t x236 = INT32_MIN;
	volatile int32_t t58 = 2463;

	t58 = (x233<(x234==(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = 57423112U;
	int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MIN;

	t59 = (x237<(x238==(x239<=x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = 106158;
	int16_t x243 = -1;
	static int64_t x244 = INT64_MIN;

	t60 = (x241<(x242==(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x246 = INT32_MAX;
	int16_t x247 = -1;
	volatile uint64_t x248 = UINT64_MAX;
	int32_t t61 = -147290;

	t61 = (x245<(x246==(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = 227538722;
	uint16_t x250 = 4U;
	static volatile int32_t t62 = 40260;

	t62 = (x249<(x250==(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = 14;
	volatile int16_t x254 = 4;
	volatile int32_t x255 = INT32_MIN;
	int8_t x256 = 41;

	t63 = (x253<(x254==(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 0U;
	uint8_t x260 = UINT8_MAX;
	volatile int32_t t64 = 14589351;

	t64 = (x257<(x258==(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 2806U;
	volatile int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -823651210;

	t65 = (x261<(x262==(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x267 = UINT16_MAX;
	int8_t x268 = INT8_MAX;
	int32_t t66 = -1929092;

	t66 = (x265<(x266==(x267<=x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = 1385632;
	static uint64_t x270 = UINT64_MAX;
	volatile int8_t x271 = 54;
	static int32_t x272 = INT32_MIN;
	int32_t t67 = 33518901;

	t67 = (x269<(x270==(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 192759750;
	uint64_t x274 = 96LLU;
	volatile uint16_t x276 = 8U;
	static volatile int32_t t68 = 250232928;

	t68 = (x273<(x274==(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = INT8_MAX;
	int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = 1660705;

	t69 = (x277<(x278==(x279<=x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = 11U;
	int16_t x282 = INT16_MIN;
	static int8_t x283 = 32;
	uint8_t x284 = UINT8_MAX;
	int32_t t70 = -797180817;

	t70 = (x281<(x282==(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -26;
	int64_t x286 = INT64_MIN;
	uint8_t x288 = 3U;
	volatile int32_t t71 = -751712;

	t71 = (x285<(x286==(x287<=x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x291 = 29U;
	int8_t x292 = -1;
	static int32_t t72 = 1;

	t72 = (x289<(x290==(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int32_t x294 = INT32_MAX;
	uint8_t x295 = 44U;
	int32_t t73 = -7139182;

	t73 = (x293<(x294==(x295<=x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = -1053979620LL;
	int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MAX;
	uint32_t x300 = 1U;
	volatile int32_t t74 = -42;

	t74 = (x297<(x298==(x299<=x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = UINT16_MAX;
	int8_t x302 = INT8_MIN;
	int8_t x303 = 3;
	int64_t x304 = -1LL;

	t75 = (x301<(x302==(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 1069748249903929LLU;
	uint32_t x306 = 79762258U;
	uint64_t x308 = 7LLU;
	volatile int32_t t76 = -15;

	t76 = (x305<(x306==(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 10U;
	uint32_t x310 = 2505U;
	uint64_t x311 = UINT64_MAX;
	int32_t t77 = -29215;

	t77 = (x309<(x310==(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MAX;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = INT8_MAX;
	int32_t t78 = -3;

	t78 = (x313<(x314==(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MAX;
	int64_t x319 = -49LL;

	t79 = (x317<(x318==(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 15230;
	uint8_t x322 = UINT8_MAX;
	int16_t x324 = INT16_MAX;
	volatile int32_t t80 = 22;

	t80 = (x321<(x322==(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MAX;
	int32_t t81 = -3571;

	t81 = (x325<(x326==(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	uint64_t x330 = UINT64_MAX;
	static uint16_t x331 = 103U;
	int32_t x332 = INT32_MIN;
	int32_t t82 = 125655015;

	t82 = (x329<(x330==(x331<=x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = 0;
	static uint32_t x334 = UINT32_MAX;
	static int32_t t83 = 135023807;

	t83 = (x333<(x334==(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x339 = INT8_MIN;
	static uint8_t x340 = 1U;
	int32_t t84 = 518923;

	t84 = (x337<(x338==(x339<=x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x341 = 3U;
	uint64_t x342 = 16259313173LLU;
	int8_t x343 = INT8_MIN;
	int32_t t85 = -401054;

	t85 = (x341<(x342==(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = -1LL;
	int32_t x346 = 230;
	uint8_t x347 = UINT8_MAX;
	volatile int8_t x348 = 13;

	t86 = (x345<(x346==(x347<=x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x349 = 982U;
	volatile int64_t x350 = 20LL;
	int8_t x351 = 52;
	static int64_t x352 = -1LL;
	static int32_t t87 = -9234291;

	t87 = (x349<(x350==(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x354 = 1;
	uint64_t x355 = 107LLU;
	uint64_t x356 = 8224417512128LLU;
	int32_t t88 = 0;

	t88 = (x353<(x354==(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	volatile int16_t x359 = -3521;
	static int8_t x360 = -1;
	int32_t t89 = 301;

	t89 = (x357<(x358==(x359<=x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x362 = 113611U;
	int16_t x363 = 1;
	volatile int8_t x364 = -1;

	t90 = (x361<(x362==(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x366 = INT32_MIN;
	static int64_t x367 = INT64_MIN;
	uint8_t x368 = 44U;

	t91 = (x365<(x366==(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x371 = INT8_MAX;
	uint16_t x372 = 6083U;
	volatile int32_t t92 = 382;

	t92 = (x369<(x370==(x371<=x372)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x376 = 47U;
	int32_t t93 = 181898;

	t93 = (x373<(x374==(x375<=x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MAX;
	volatile uint64_t x378 = 48038LLU;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;

	t94 = (x377<(x378==(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x381 = -1;
	int32_t x382 = INT32_MIN;
	volatile int64_t x383 = INT64_MIN;
	int32_t t95 = 1;

	t95 = (x381<(x382==(x383<=x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x386 = -206;
	volatile int8_t x387 = INT8_MIN;

	t96 = (x385<(x386==(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MAX;
	uint16_t x390 = UINT16_MAX;
	int16_t x391 = INT16_MIN;
	int32_t x392 = -2985;
	volatile int32_t t97 = -199565;

	t97 = (x389<(x390==(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -1;
	uint32_t x395 = UINT32_MAX;
	uint64_t x396 = 7448762LLU;
	int32_t t98 = -2957;

	t98 = (x393<(x394==(x395<=x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = INT8_MAX;
	int64_t x398 = 0LL;
	int8_t x399 = INT8_MIN;
	static volatile int32_t t99 = 23;

	t99 = (x397<(x398==(x399<=x400)));

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

