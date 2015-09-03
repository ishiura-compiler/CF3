#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = INT16_MIN;
int32_t x8 = -1;
static int32_t t1 = -2611;
static int32_t x9 = -1;
uint16_t x10 = 11522U;
static uint8_t x23 = 113U;
volatile int32_t t7 = 288;
int32_t x41 = INT32_MIN;
static volatile int64_t x43 = -1LL;
int64_t x46 = INT64_MAX;
static uint32_t x51 = 12018U;
int16_t x55 = -1;
static int64_t x59 = -419472359400778LL;
static volatile int32_t x64 = INT32_MIN;
int8_t x65 = 1;
static int16_t x74 = INT16_MAX;
volatile int32_t t17 = -43229001;
uint16_t x82 = 0U;
static uint32_t x84 = UINT32_MAX;
int32_t x85 = INT32_MAX;
static volatile int16_t x88 = INT16_MIN;
volatile int32_t t22 = -8727;
volatile uint8_t x108 = 7U;
uint16_t x111 = UINT16_MAX;
static uint32_t x112 = UINT32_MAX;
volatile int32_t t25 = 65156;
uint64_t x114 = UINT64_MAX;
uint8_t x116 = 54U;
int32_t t26 = 185;
int32_t t28 = -1;
int64_t x127 = -1LL;
int32_t x130 = INT32_MAX;
int16_t x133 = 6701;
int16_t x134 = -1354;
int16_t x136 = 1;
volatile int32_t t33 = -26;
int32_t t34 = 7315189;
volatile int16_t x157 = INT16_MAX;
static volatile int16_t x159 = INT16_MIN;
int8_t x164 = -1;
static int32_t t37 = -4783;
static volatile int16_t x175 = INT16_MIN;
static int32_t t39 = -5046062;
uint16_t x177 = UINT16_MAX;
int16_t x179 = -1;
int8_t x181 = 1;
int32_t x185 = INT32_MIN;
int32_t x188 = 50204539;
volatile int64_t x192 = -3476235311067310592LL;
int32_t x194 = -332;
int16_t x197 = INT16_MIN;
int16_t x199 = -1;
static volatile int32_t t45 = 8867189;
volatile int32_t t46 = 704132;
int64_t x210 = 3720527869293LL;
volatile int32_t t48 = 10774903;
int16_t x213 = -1;
uint64_t x216 = 430594520673LLU;
static int32_t t49 = -1438617;
static int8_t x219 = -3;
int64_t x220 = INT64_MIN;
int32_t t50 = 860841;
uint32_t x227 = 3U;
uint8_t x231 = 9U;
volatile int32_t t53 = -5395464;
int8_t x242 = -1;
static int64_t x250 = INT64_MIN;
uint16_t x252 = UINT16_MAX;
uint32_t x255 = UINT32_MAX;
static int32_t x256 = INT32_MAX;
int16_t x259 = INT16_MAX;
volatile uint16_t x260 = 189U;
volatile int64_t x264 = INT64_MIN;
static volatile int32_t t61 = 133;
int16_t x272 = INT16_MIN;
int8_t x283 = INT8_MIN;
volatile int16_t x284 = INT16_MIN;
uint8_t x286 = 0U;
static volatile int32_t t67 = -1;
static int16_t x293 = -1;
volatile int16_t x295 = INT16_MAX;
int16_t x300 = INT16_MIN;
static volatile int32_t t72 = -1;
volatile uint32_t x313 = UINT32_MAX;
int16_t x315 = -1;
int16_t x319 = INT16_MIN;
static volatile int32_t t74 = -946489;
static uint8_t x323 = 30U;
int8_t x325 = -1;
static volatile int32_t t76 = 190005;
volatile int32_t t77 = 808914;
static int64_t x335 = INT64_MIN;
int64_t x339 = -1582088LL;
static uint32_t x344 = 3510U;
uint64_t x346 = 194747969909LLU;
volatile int32_t t82 = -5;
int8_t x354 = -1;
int32_t t83 = 963873;
int8_t x362 = INT8_MIN;
int64_t x366 = -1LL;
int64_t x367 = -126957108555LL;
volatile int32_t t85 = 2525;
int32_t x371 = INT32_MIN;
static uint64_t x372 = UINT64_MAX;
volatile uint16_t x381 = UINT16_MAX;
int32_t t89 = 9;
volatile uint8_t x387 = 79U;
uint32_t x389 = 11513658U;
int8_t x395 = INT8_MAX;
static volatile uint8_t x401 = 31U;
volatile int8_t x404 = 54;
static uint64_t x406 = UINT64_MAX;
uint64_t x410 = 5789264333LLU;
int16_t x416 = INT16_MIN;
int8_t x418 = 31;
volatile int32_t t99 = 43209;


void f0(void) {
	int8_t x1 = -1;
	static int16_t x3 = INT16_MAX;
	int16_t x4 = 1565;
	int32_t t0 = -104;

	t0 = (x1==(x2+(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -1;
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;

	t1 = (x5==(x6+(x7&x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = INT8_MAX;
	static volatile int8_t x12 = INT8_MIN;
	volatile int32_t t2 = -45;

	t2 = (x9==(x10+(x11&x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x17 = -1LL;
	int64_t x18 = INT64_MIN;
	static volatile uint64_t x19 = UINT64_MAX;
	uint64_t x20 = 1445LLU;
	static volatile int32_t t3 = 553877917;

	t3 = (x17==(x18+(x19&x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MAX;
	int16_t x24 = INT16_MIN;
	volatile int32_t t4 = 884394;

	t4 = (x21==(x22+(x23&x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 930U;
	int8_t x26 = INT8_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = 1817783275705700047LL;
	int32_t t5 = 100;

	t5 = (x25==(x26+(x27&x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x29 = 1486690133LLU;
	uint16_t x30 = 22U;
	int64_t x31 = -1LL;
	int8_t x32 = -18;
	int32_t t6 = 25;

	t6 = (x29==(x30+(x31&x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 12U;
	uint64_t x38 = UINT64_MAX;
	volatile int16_t x39 = INT16_MAX;
	static int32_t x40 = INT32_MAX;

	t7 = (x37==(x38+(x39&x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MIN;
	volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t8 = -4904716;

	t8 = (x41==(x42+(x43&x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 8U;
	int64_t x47 = INT64_MIN;
	int16_t x48 = 5;
	int32_t t9 = 41;

	t9 = (x45==(x46+(x47&x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = -1;
	int16_t x52 = 6235;
	int32_t t10 = 255;

	t10 = (x49==(x50+(x51&x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x53 = UINT32_MAX;
	int16_t x54 = -1;
	int64_t x56 = 0LL;
	volatile int32_t t11 = 1;

	t11 = (x53==(x54+(x55&x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = -1;
	static int16_t x58 = INT16_MIN;
	static uint8_t x60 = UINT8_MAX;
	int32_t t12 = -38864688;

	t12 = (x57==(x58+(x59&x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	volatile int16_t x62 = -15;
	static uint32_t x63 = 15U;
	static int32_t t13 = -898924379;

	t13 = (x61==(x62+(x63&x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x66 = 4U;
	int8_t x67 = INT8_MAX;
	volatile uint8_t x68 = UINT8_MAX;
	int32_t t14 = 415396;

	t14 = (x65==(x66+(x67&x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = 1;
	int8_t x70 = 0;
	int64_t x71 = -1LL;
	volatile int32_t x72 = 10365807;
	volatile int32_t t15 = -863895;

	t15 = (x69==(x70+(x71&x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = INT16_MAX;
	uint8_t x75 = UINT8_MAX;
	int32_t x76 = -1;
	int32_t t16 = -162275;

	t16 = (x73==(x74+(x75&x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 0U;
	uint16_t x78 = 352U;
	int64_t x79 = INT64_MIN;
	volatile uint32_t x80 = 35632U;

	t17 = (x77==(x78+(x79&x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x81 = INT8_MAX;
	int8_t x83 = INT8_MAX;
	int32_t t18 = 318046082;

	t18 = (x81==(x82+(x83&x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x86 = 100LLU;
	int16_t x87 = INT16_MIN;
	static int32_t t19 = 12;

	t19 = (x85==(x86+(x87&x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x89 = 5040;
	uint32_t x90 = 70U;
	static int32_t x91 = -170965207;
	int32_t x92 = -539365;
	static volatile int32_t t20 = -6586067;

	t20 = (x89==(x90+(x91&x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = -326;
	static int8_t x94 = INT8_MIN;
	volatile int16_t x95 = 707;
	static uint16_t x96 = 17677U;
	static volatile int32_t t21 = -32;

	t21 = (x93==(x94+(x95&x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x98 = INT16_MIN;
	static int32_t x99 = -1;
	uint8_t x100 = UINT8_MAX;

	t22 = (x97==(x98+(x99&x100)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x101 = 13801U;
	uint32_t x102 = 5U;
	int32_t x103 = -1;
	uint64_t x104 = 1130745839952366989LLU;
	static volatile int32_t t23 = -330349736;

	t23 = (x101==(x102+(x103&x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = 0;
	uint64_t x106 = 39714498434LLU;
	volatile uint16_t x107 = 145U;
	volatile int32_t t24 = 11061;

	t24 = (x105==(x106+(x107&x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	volatile uint8_t x110 = 89U;

	t25 = (x109==(x110+(x111&x112)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x113 = INT16_MIN;
	int16_t x115 = INT16_MIN;

	t26 = (x113==(x114+(x115&x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x117 = -24;
	int8_t x118 = -16;
	volatile uint16_t x119 = UINT16_MAX;
	volatile int64_t x120 = INT64_MIN;
	int32_t t27 = -5;

	t27 = (x117==(x118+(x119&x120)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	volatile int64_t x122 = -1LL;
	int8_t x123 = INT8_MAX;
	int64_t x124 = -225050810LL;

	t28 = (x121==(x122+(x123&x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x125 = INT16_MIN;
	static int64_t x126 = -1LL;
	volatile uint16_t x128 = 4U;
	volatile int32_t t29 = 30738;

	t29 = (x125==(x126+(x127&x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x129 = INT16_MIN;
	volatile int16_t x131 = -1;
	int16_t x132 = INT16_MIN;
	static int32_t t30 = 1;

	t30 = (x129==(x130+(x131&x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x135 = 2U;
	int32_t t31 = 117313;

	t31 = (x133==(x134+(x135&x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x137 = 11897064U;
	int64_t x138 = -1239607LL;
	int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t32 = 9991;

	t32 = (x137==(x138+(x139&x140)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MIN;
	int8_t x147 = 29;
	uint64_t x148 = UINT64_MAX;

	t33 = (x145==(x146+(x147&x148)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x149 = INT8_MIN;
	static volatile int16_t x150 = INT16_MIN;
	int64_t x151 = INT64_MAX;
	static int64_t x152 = INT64_MIN;

	t34 = (x149==(x150+(x151&x152)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = 5U;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	int16_t x156 = 32;
	int32_t t35 = -316935700;

	t35 = (x153==(x154+(x155&x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x158 = 9981267LLU;
	int8_t x160 = -6;
	int32_t t36 = 0;

	t36 = (x157==(x158+(x159&x160)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = -1;
	int16_t x162 = INT16_MAX;
	int32_t x163 = -2205286;

	t37 = (x161==(x162+(x163&x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x169 = -1;
	int32_t x170 = -1;
	volatile uint32_t x171 = UINT32_MAX;
	int16_t x172 = 151;
	volatile int32_t t38 = 2;

	t38 = (x169==(x170+(x171&x172)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = 7203131;
	int64_t x174 = -1LL;
	int32_t x176 = -1;

	t39 = (x173==(x174+(x175&x176)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x178 = INT64_MIN;
	int16_t x180 = 0;
	int32_t t40 = 8134947;

	t40 = (x177==(x178+(x179&x180)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = 0;
	static int64_t x183 = INT64_MAX;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t41 = 0;

	t41 = (x181==(x182+(x183&x184)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x186 = 15U;
	static uint8_t x187 = 122U;
	int32_t t42 = -181199697;

	t42 = (x185==(x186+(x187&x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x189 = UINT32_MAX;
	uint32_t x190 = UINT32_MAX;
	volatile int64_t x191 = INT64_MIN;
	int32_t t43 = -3;

	t43 = (x189==(x190+(x191&x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	volatile int16_t x195 = 20;
	int32_t x196 = INT32_MAX;
	volatile int32_t t44 = 4865;

	t44 = (x193==(x194+(x195&x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x198 = 13236389U;
	int32_t x200 = 7;

	t45 = (x197==(x198+(x199&x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MIN;
	uint32_t x202 = 1095535743U;
	int8_t x203 = -1;
	int32_t x204 = INT32_MIN;

	t46 = (x201==(x202+(x203&x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x205 = INT8_MAX;
	int16_t x206 = -73;
	int8_t x207 = INT8_MAX;
	uint32_t x208 = 3864225U;
	volatile int32_t t47 = 45;

	t47 = (x205==(x206+(x207&x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x209 = -50;
	uint64_t x211 = UINT64_MAX;
	int32_t x212 = INT32_MIN;

	t48 = (x209==(x210+(x211&x212)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x214 = INT16_MIN;
	uint32_t x215 = UINT32_MAX;

	t49 = (x213==(x214+(x215&x216)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = UINT32_MAX;
	uint64_t x218 = 5505294681282375333LLU;

	t50 = (x217==(x218+(x219&x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x221 = INT16_MIN;
	int16_t x222 = -1;
	volatile uint16_t x223 = 6U;
	uint32_t x224 = 10370989U;
	static int32_t t51 = -1;

	t51 = (x221==(x222+(x223&x224)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = -1;
	uint32_t x226 = UINT32_MAX;
	static int16_t x228 = INT16_MAX;
	static int32_t t52 = -11081;

	t52 = (x225==(x226+(x227&x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = UINT16_MAX;
	volatile uint8_t x230 = UINT8_MAX;
	static uint64_t x232 = 181645905647LLU;

	t53 = (x229==(x230+(x231&x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x233 = -59;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = 837937230621LLU;
	int8_t x236 = 0;
	volatile int32_t t54 = -57;

	t54 = (x233==(x234+(x235&x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = -21;
	uint8_t x238 = 2U;
	int8_t x239 = INT8_MIN;
	int16_t x240 = INT16_MAX;
	static volatile int32_t t55 = 1530870;

	t55 = (x237==(x238+(x239&x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MAX;
	static uint8_t x243 = 1U;
	int8_t x244 = INT8_MAX;
	volatile int32_t t56 = -389;

	t56 = (x241==(x242+(x243&x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MAX;
	uint8_t x246 = 1U;
	static uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MIN;
	volatile int32_t t57 = 48;

	t57 = (x245==(x246+(x247&x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = INT8_MIN;
	int8_t x251 = -11;
	volatile int32_t t58 = 17;

	t58 = (x249==(x250+(x251&x252)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MAX;
	int32_t x254 = -178;
	static volatile int32_t t59 = 14;

	t59 = (x253==(x254+(x255&x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x257 = 888684;
	int8_t x258 = INT8_MAX;
	int32_t t60 = 70195;

	t60 = (x257==(x258+(x259&x260)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -154926LL;
	uint16_t x262 = 6005U;
	static uint8_t x263 = UINT8_MAX;

	t61 = (x261==(x262+(x263&x264)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = 8;
	int64_t x267 = INT64_MIN;
	uint32_t x268 = UINT32_MAX;
	static int32_t t62 = -24645993;

	t62 = (x265==(x266+(x267&x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x269 = INT64_MIN;
	uint32_t x270 = 3317U;
	int64_t x271 = INT64_MIN;
	static int32_t t63 = -52;

	t63 = (x269==(x270+(x271&x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	int16_t x274 = -38;
	static int64_t x275 = -1LL;
	static volatile uint16_t x276 = UINT16_MAX;
	static volatile int32_t t64 = 7;

	t64 = (x273==(x274+(x275&x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x281 = -4087;
	static int8_t x282 = -6;
	volatile int32_t t65 = 196315;

	t65 = (x281==(x282+(x283&x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = INT64_MIN;
	uint8_t x287 = 36U;
	static volatile int8_t x288 = -55;
	int32_t t66 = -9300137;

	t66 = (x285==(x286+(x287&x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = 4U;
	uint32_t x290 = 2654560U;
	uint16_t x291 = 3129U;
	int32_t x292 = INT32_MIN;

	t67 = (x289==(x290+(x291&x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x294 = -289LL;
	volatile uint32_t x296 = 61939U;
	int32_t t68 = 225236;

	t68 = (x293==(x294+(x295&x296)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x297 = UINT32_MAX;
	int32_t x298 = INT32_MIN;
	static uint8_t x299 = UINT8_MAX;
	volatile int32_t t69 = -2258610;

	t69 = (x297==(x298+(x299&x300)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x301 = -1;
	uint64_t x302 = 46241006811934693LLU;
	uint8_t x303 = 17U;
	static uint64_t x304 = 724862060680601LLU;
	int32_t t70 = -5583813;

	t70 = (x301==(x302+(x303&x304)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x305 = 1595U;
	static uint64_t x306 = UINT64_MAX;
	int32_t x307 = INT32_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t71 = 250;

	t71 = (x305==(x306+(x307&x308)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x309 = 34142LL;
	int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = UINT16_MAX;

	t72 = (x309==(x310+(x311&x312)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x314 = INT64_MAX;
	static int64_t x316 = -3573538505LL;
	int32_t t73 = 536063452;

	t73 = (x313==(x314+(x315&x316)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = INT64_MAX;
	static int64_t x318 = 14329201029LL;
	int64_t x320 = INT64_MIN;

	t74 = (x317==(x318+(x319&x320)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	int16_t x324 = 143;
	volatile int32_t t75 = 49878;

	t75 = (x321==(x322+(x323&x324)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x326 = -1;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = 1629356487183LLU;

	t76 = (x325==(x326+(x327&x328)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 44797753952778301LLU;
	int8_t x330 = INT8_MIN;
	static int64_t x331 = INT64_MIN;
	uint32_t x332 = UINT32_MAX;

	t77 = (x329==(x330+(x331&x332)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = INT32_MIN;
	uint32_t x334 = 7621U;
	static int16_t x336 = INT16_MIN;
	volatile int32_t t78 = 422;

	t78 = (x333==(x334+(x335&x336)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 5U;
	int64_t x340 = INT64_MAX;
	int32_t t79 = -482307190;

	t79 = (x337==(x338+(x339&x340)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MAX;
	static int16_t x342 = -1;
	volatile int8_t x343 = INT8_MAX;
	volatile int32_t t80 = 20301;

	t80 = (x341==(x342+(x343&x344)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x345 = INT32_MAX;
	int16_t x347 = INT16_MIN;
	int8_t x348 = INT8_MIN;
	int32_t t81 = -2757847;

	t81 = (x345==(x346+(x347&x348)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = 1LLU;
	static int8_t x350 = INT8_MAX;
	static int8_t x351 = INT8_MAX;
	static int8_t x352 = -1;

	t82 = (x349==(x350+(x351&x352)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x353 = 0U;
	volatile int32_t x355 = 0;
	static volatile uint8_t x356 = UINT8_MAX;

	t83 = (x353==(x354+(x355&x356)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x361 = 26U;
	int8_t x363 = -6;
	int8_t x364 = -1;
	int32_t t84 = -128628857;

	t84 = (x361==(x362+(x363&x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x365 = 1908U;
	int8_t x368 = -1;

	t85 = (x365==(x366+(x367&x368)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x369 = INT32_MIN;
	uint16_t x370 = 255U;
	static int32_t t86 = 3906358;

	t86 = (x369==(x370+(x371&x372)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = INT64_MIN;
	int32_t x374 = INT32_MIN;
	uint8_t x375 = 18U;
	uint8_t x376 = UINT8_MAX;
	static int32_t t87 = -20;

	t87 = (x373==(x374+(x375&x376)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x378 = 12U;
	volatile int32_t x379 = INT32_MIN;
	static uint16_t x380 = UINT16_MAX;
	static int32_t t88 = -9611;

	t88 = (x377==(x378+(x379&x380)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x382 = 15U;
	uint8_t x383 = 11U;
	static volatile int64_t x384 = INT64_MAX;

	t89 = (x381==(x382+(x383&x384)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x385 = 0U;
	static volatile uint32_t x386 = 9437283U;
	uint8_t x388 = UINT8_MAX;
	static int32_t t90 = 125;

	t90 = (x385==(x386+(x387&x388)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x390 = UINT32_MAX;
	volatile int8_t x391 = INT8_MAX;
	uint64_t x392 = 31030993LLU;
	volatile int32_t t91 = 143;

	t91 = (x389==(x390+(x391&x392)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = -1LL;
	uint8_t x394 = UINT8_MAX;
	int16_t x396 = -247;
	static int32_t t92 = 166621614;

	t92 = (x393==(x394+(x395&x396)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x397 = INT16_MIN;
	static uint64_t x398 = 8522315LLU;
	uint32_t x399 = 0U;
	static int8_t x400 = INT8_MIN;
	static int32_t t93 = -579951008;

	t93 = (x397==(x398+(x399&x400)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x402 = 33U;
	int64_t x403 = INT64_MIN;
	volatile int32_t t94 = 721573;

	t94 = (x401==(x402+(x403&x404)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x405 = INT32_MAX;
	int64_t x407 = INT64_MAX;
	int64_t x408 = -200013LL;
	volatile int32_t t95 = 10052348;

	t95 = (x405==(x406+(x407&x408)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = 93U;
	int8_t x411 = 1;
	uint16_t x412 = 63U;
	volatile int32_t t96 = -3247;

	t96 = (x409==(x410+(x411&x412)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x413 = 44U;
	static int64_t x414 = INT64_MAX;
	int8_t x415 = -1;
	static int32_t t97 = -9;

	t97 = (x413==(x414+(x415&x416)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x417 = -1;
	volatile int64_t x419 = INT64_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t98 = -1;

	t98 = (x417==(x418+(x419&x420)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x421 = -6;
	int8_t x422 = INT8_MAX;
	volatile uint32_t x423 = 16U;
	int16_t x424 = -1;

	t99 = (x421==(x422+(x423&x424)));

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

