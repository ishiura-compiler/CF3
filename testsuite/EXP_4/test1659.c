#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = -1;
uint8_t x3 = UINT8_MAX;
volatile uint16_t x5 = 18087U;
int64_t x7 = -431932736041LL;
volatile int32_t t1 = 123;
static int8_t x15 = INT8_MIN;
volatile int16_t x20 = INT16_MIN;
int8_t x21 = INT8_MIN;
volatile int32_t t7 = 947;
static volatile uint16_t x42 = 13299U;
uint16_t x43 = 3098U;
static int32_t x50 = -3734;
static int64_t x51 = INT64_MIN;
uint64_t x55 = 9564018315LLU;
int64_t x57 = INT64_MIN;
uint32_t x60 = 59U;
int64_t x63 = 50921219LL;
uint8_t x65 = UINT8_MAX;
static volatile int8_t x69 = INT8_MAX;
int8_t x72 = INT8_MAX;
volatile int32_t t17 = 0;
int64_t x79 = -1507149840221LL;
static int32_t t21 = 6428687;
volatile int8_t x89 = 30;
static volatile int64_t x90 = INT64_MAX;
int64_t x104 = 1465070LL;
volatile int32_t t25 = -1;
int8_t x105 = 3;
volatile int32_t t26 = 31771539;
static int16_t x111 = 2086;
uint32_t x120 = 12609U;
static int16_t x122 = INT16_MAX;
int32_t t31 = -154;
static int64_t x130 = INT64_MIN;
volatile uint64_t x133 = 86192178545LLU;
int32_t x134 = 65;
volatile int64_t x137 = 16LL;
uint32_t x141 = 269740U;
int8_t x145 = 1;
static uint16_t x149 = 2695U;
static int64_t x151 = INT64_MIN;
volatile uint64_t x163 = 530182830568LLU;
static int32_t x167 = INT32_MAX;
volatile int64_t x170 = -17473822LL;
volatile int8_t x171 = INT8_MAX;
uint16_t x176 = UINT16_MAX;
volatile int32_t x177 = INT32_MIN;
uint32_t x179 = 126U;
int16_t x182 = -14826;
int32_t t45 = -3;
int64_t x188 = INT64_MIN;
volatile int32_t t46 = -50589020;
int32_t t47 = 75417258;
uint8_t x194 = UINT8_MAX;
static int64_t x197 = INT64_MIN;
static int32_t t49 = -46638;
int8_t x203 = INT8_MIN;
static int8_t x205 = 1;
int32_t t51 = 0;
volatile int8_t x209 = -1;
int32_t x210 = INT32_MIN;
int16_t x212 = INT16_MIN;
int16_t x213 = -2;
int16_t x219 = INT16_MIN;
static int32_t x227 = 596660;
int8_t x234 = INT8_MIN;
volatile int32_t t58 = -1;
int32_t t59 = 13;
int32_t x246 = 8610065;
int16_t x254 = INT16_MAX;
uint8_t x260 = 14U;
int32_t t64 = -478;
int32_t x263 = 1319522;
int8_t x278 = INT8_MAX;
static int16_t x282 = -199;
volatile int32_t t70 = 5735;
int32_t t71 = 290389;
volatile uint8_t x290 = 13U;
int32_t x292 = -7959132;
int32_t t72 = 2;
int64_t x301 = 441701531123LL;
uint8_t x304 = 107U;
volatile int32_t t75 = -39;
volatile int32_t t76 = -99129318;
static int8_t x309 = INT8_MIN;
static volatile int16_t x313 = -1;
static int8_t x318 = 11;
uint8_t x323 = 10U;
volatile int32_t x325 = -923154;
uint16_t x327 = 1550U;
uint32_t x329 = 462606217U;
volatile int32_t t82 = 0;
volatile int32_t x333 = INT32_MAX;
int16_t x334 = INT16_MIN;
volatile int64_t x338 = -2245168373173113905LL;
volatile int32_t x339 = INT32_MAX;
int8_t x342 = 1;
volatile int32_t t86 = 35462180;
static volatile int16_t x351 = 835;
int16_t x353 = INT16_MIN;
uint16_t x363 = UINT16_MAX;
static volatile int8_t x367 = 1;
int32_t x368 = INT32_MIN;
int64_t x373 = -18068275LL;
static int16_t x375 = 141;
int32_t x383 = INT32_MAX;
uint16_t x394 = UINT16_MAX;
uint16_t x395 = UINT16_MAX;


void f0(void) {
	volatile int16_t x2 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	static int32_t t0 = -126032;

	t0 = (x1==(x2&(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 6;
	uint8_t x8 = 2U;

	t1 = (x5==(x6&(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint16_t x10 = UINT16_MAX;
	int16_t x11 = INT16_MIN;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 7;

	t2 = (x9==(x10&(x11<=x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 842557966884696245LL;
	volatile uint32_t x14 = 13U;
	int32_t x16 = INT32_MIN;
	int32_t t3 = 168911154;

	t3 = (x13==(x14&(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static uint8_t x18 = 20U;
	int16_t x19 = 0;
	int32_t t4 = -59375728;

	t4 = (x17==(x18&(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = INT32_MAX;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = 322U;
	volatile int32_t t5 = -1;

	t5 = (x21==(x22&(x23<=x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 3U;
	int16_t x26 = INT16_MAX;
	int8_t x27 = INT8_MIN;
	volatile uint64_t x28 = 78LLU;
	int32_t t6 = 30380820;

	t6 = (x25==(x26&(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	static volatile int64_t x30 = -1016257066LL;
	uint64_t x31 = 214914782457LLU;
	int8_t x32 = -1;

	t7 = (x29==(x30&(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = INT64_MIN;
	uint16_t x35 = UINT16_MAX;
	static volatile int32_t x36 = INT32_MIN;
	int32_t t8 = -54260;

	t8 = (x33==(x34&(x35<=x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 10U;
	volatile uint32_t x38 = 1U;
	static volatile int32_t x39 = 931989084;
	static volatile int32_t x40 = 861413690;
	static volatile int32_t t9 = -319525080;

	t9 = (x37==(x38&(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	static volatile int16_t x44 = INT16_MAX;
	static volatile int32_t t10 = -36;

	t10 = (x41==(x42&(x43<=x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MIN;
	volatile int8_t x47 = -1;
	static volatile int32_t x48 = -1;
	int32_t t11 = 1627;

	t11 = (x45==(x46&(x47<=x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 2355;
	uint32_t x52 = 15447883U;
	int32_t t12 = 12384832;

	t12 = (x49==(x50&(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 7098U;
	int16_t x54 = 0;
	volatile uint32_t x56 = 1228227U;
	volatile int32_t t13 = -65669;

	t13 = (x53==(x54&(x55<=x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MIN;
	int64_t x59 = -1LL;
	volatile int32_t t14 = -3;

	t14 = (x57==(x58&(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	int8_t x62 = -1;
	int32_t x64 = 27953979;
	volatile int32_t t15 = 7464;

	t15 = (x61==(x62&(x63<=x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x66 = 4023U;
	volatile int32_t x67 = 0;
	uint64_t x68 = 3957637968141527014LLU;
	int32_t t16 = 0;

	t16 = (x65==(x66&(x67<=x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 22LLU;
	int64_t x71 = 630104LL;

	t17 = (x69==(x70&(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	uint32_t x74 = UINT32_MAX;
	static uint16_t x75 = 5U;
	int16_t x76 = -1;
	volatile int32_t t18 = -213;

	t18 = (x73==(x74&(x75<=x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 2033607492915648063LLU;
	static uint16_t x78 = UINT16_MAX;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t19 = -14763;

	t19 = (x77==(x78&(x79<=x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = 8;
	uint64_t x82 = UINT64_MAX;
	volatile int8_t x83 = 1;
	int8_t x84 = -1;
	volatile int32_t t20 = 208695;

	t20 = (x81==(x82&(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int8_t x86 = -3;
	int32_t x87 = INT32_MAX;
	volatile int64_t x88 = INT64_MAX;

	t21 = (x85==(x86&(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x91 = 1281550444701LL;
	volatile int32_t x92 = INT32_MIN;
	int32_t t22 = 899;

	t22 = (x89==(x90&(x91<=x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -43;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = -15;
	static int8_t x96 = INT8_MIN;
	int32_t t23 = -26644968;

	t23 = (x93==(x94&(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 20;
	uint16_t x98 = 1U;
	static int16_t x99 = INT16_MIN;
	volatile int64_t x100 = INT64_MAX;
	static volatile int32_t t24 = 197108467;

	t24 = (x97==(x98&(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = -1;
	static uint32_t x102 = 28U;
	int32_t x103 = INT32_MAX;

	t25 = (x101==(x102&(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = -1LL;
	volatile int32_t x107 = -1;
	uint8_t x108 = UINT8_MAX;

	t26 = (x105==(x106&(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int32_t x110 = INT32_MAX;
	volatile int16_t x112 = INT16_MAX;
	volatile int32_t t27 = -446;

	t27 = (x109==(x110&(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	uint64_t x114 = 1849364LLU;
	volatile uint32_t x115 = UINT32_MAX;
	uint64_t x116 = 82461931403188LLU;
	int32_t t28 = -101051711;

	t28 = (x113==(x114&(x115<=x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	static int32_t x118 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	int32_t t29 = 12;

	t29 = (x117==(x118&(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	uint16_t x123 = 291U;
	uint8_t x124 = 3U;
	volatile int32_t t30 = 1;

	t30 = (x121==(x122&(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int8_t x126 = -1;
	static int8_t x127 = -3;
	int8_t x128 = -25;

	t31 = (x125==(x126&(x127<=x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	int32_t x131 = INT32_MIN;
	volatile uint8_t x132 = 106U;
	static int32_t t32 = 23096;

	t32 = (x129==(x130&(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x135 = INT16_MAX;
	volatile int64_t x136 = INT64_MIN;
	static int32_t t33 = -32239263;

	t33 = (x133==(x134&(x135<=x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x138 = INT8_MAX;
	int64_t x139 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = -62;

	t34 = (x137==(x138&(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int64_t x144 = 677715644558654422LL;
	int32_t t35 = 371000;

	t35 = (x141==(x142&(x143<=x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 42995800665LLU;
	int16_t x147 = INT16_MIN;
	static int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -369;

	t36 = (x145==(x146&(x147<=x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = UINT16_MAX;
	uint32_t x152 = 1535U;
	static int32_t t37 = 79;

	t37 = (x149==(x150&(x151<=x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 8489344156965LL;
	int64_t x154 = INT64_MIN;
	int8_t x155 = -1;
	int64_t x156 = INT64_MIN;
	int32_t t38 = -33;

	t38 = (x153==(x154&(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	static uint32_t x158 = UINT32_MAX;
	uint8_t x159 = 80U;
	int8_t x160 = 0;
	int32_t t39 = -127115895;

	t39 = (x157==(x158&(x159<=x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = -1;
	int8_t x162 = 58;
	int32_t x164 = INT32_MIN;
	volatile int32_t t40 = -2770;

	t40 = (x161==(x162&(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint8_t x166 = 7U;
	uint64_t x168 = UINT64_MAX;
	int32_t t41 = -7666160;

	t41 = (x165==(x166&(x167<=x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 4492LL;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t42 = 96185;

	t42 = (x169==(x170&(x171<=x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x173 = INT32_MAX;
	static volatile uint32_t x174 = 160569914U;
	uint16_t x175 = 2U;
	volatile int32_t t43 = 1797461;

	t43 = (x173==(x174&(x175<=x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = 3829834U;
	static volatile int64_t x180 = 1753997737557LL;
	int32_t t44 = -152;

	t44 = (x177==(x178&(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 4U;
	int8_t x183 = INT8_MAX;
	uint64_t x184 = UINT64_MAX;

	t45 = (x181==(x182&(x183<=x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	uint64_t x186 = UINT64_MAX;
	uint32_t x187 = UINT32_MAX;

	t46 = (x185==(x186&(x187<=x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 338348207U;
	uint64_t x190 = UINT64_MAX;
	static volatile int64_t x191 = INT64_MAX;
	int8_t x192 = 6;

	t47 = (x189==(x190&(x191<=x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = -1LL;
	int32_t t48 = 6;

	t48 = (x193==(x194&(x195<=x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	int64_t x199 = -1LL;
	int64_t x200 = INT64_MIN;

	t49 = (x197==(x198&(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 1U;
	int8_t x202 = -2;
	int8_t x204 = INT8_MIN;
	int32_t t50 = -1;

	t50 = (x201==(x202&(x203<=x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x206 = INT32_MIN;
	int8_t x207 = -1;
	uint8_t x208 = 105U;

	t51 = (x205==(x206&(x207<=x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x211 = -1LL;
	int32_t t52 = 314838;

	t52 = (x209==(x210&(x211<=x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MAX;
	static int32_t t53 = 5624997;

	t53 = (x213==(x214&(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x217 = UINT16_MAX;
	uint16_t x218 = UINT16_MAX;
	int8_t x220 = INT8_MIN;
	int32_t t54 = 2532;

	t54 = (x217==(x218&(x219<=x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 2625127U;
	int8_t x222 = -1;
	static int64_t x223 = 2228094932LL;
	volatile uint16_t x224 = 991U;
	int32_t t55 = -44812;

	t55 = (x221==(x222&(x223<=x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -202830749;
	int64_t x226 = -1LL;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 86835767;

	t56 = (x225==(x226&(x227<=x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x229 = 3911058048LLU;
	volatile int8_t x230 = -1;
	volatile uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 123017306U;
	static volatile int32_t t57 = -5870;

	t57 = (x229==(x230&(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = -10733;
	int8_t x235 = 57;
	int32_t x236 = 16436833;

	t58 = (x233==(x234&(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = -1;
	int64_t x238 = 9187LL;
	uint16_t x239 = 551U;
	volatile uint32_t x240 = 3U;

	t59 = (x237==(x238&(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 88U;
	static int16_t x242 = INT16_MAX;
	int64_t x243 = INT64_MIN;
	int16_t x244 = INT16_MAX;
	volatile int32_t t60 = -1;

	t60 = (x241==(x242&(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	static int8_t x247 = INT8_MAX;
	volatile int16_t x248 = -975;
	int32_t t61 = 40;

	t61 = (x245==(x246&(x247<=x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int32_t x250 = -1;
	int8_t x251 = INT8_MIN;
	int32_t x252 = 693524;
	int32_t t62 = -141;

	t62 = (x249==(x250&(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = 1;
	int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -1138;

	t63 = (x253==(x254&(x255<=x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = 7U;
	int64_t x258 = -1574697LL;
	int8_t x259 = INT8_MIN;

	t64 = (x257==(x258&(x259<=x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = 2;
	volatile int16_t x262 = INT16_MIN;
	int16_t x264 = INT16_MAX;
	int32_t t65 = 4;

	t65 = (x261==(x262&(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 10U;
	static int64_t x266 = -1LL;
	int8_t x267 = 2;
	static int16_t x268 = INT16_MIN;
	volatile int32_t t66 = 3105;

	t66 = (x265==(x266&(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -29;
	int16_t x270 = -1;
	int64_t x271 = INT64_MIN;
	uint8_t x272 = 4U;
	volatile int32_t t67 = 377118;

	t67 = (x269==(x270&(x271<=x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	static volatile int64_t x274 = INT64_MAX;
	int32_t x275 = -97;
	volatile uint16_t x276 = UINT16_MAX;
	int32_t t68 = 246;

	t68 = (x273==(x274&(x275<=x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int64_t x279 = 13921034717272LL;
	static uint64_t x280 = 1299440014541202LLU;
	volatile int32_t t69 = 1;

	t69 = (x277==(x278&(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = 0;
	volatile int32_t x283 = -2;
	uint8_t x284 = 2U;

	t70 = (x281==(x282&(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = -1087083967736312LL;
	uint32_t x286 = UINT32_MAX;
	volatile int8_t x287 = 9;
	int32_t x288 = 138;

	t71 = (x285==(x286&(x287<=x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	uint64_t x291 = 20LLU;

	t72 = (x289==(x290&(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int8_t x294 = -1;
	volatile uint64_t x295 = 16067156LLU;
	int8_t x296 = -1;
	int32_t t73 = 413;

	t73 = (x293==(x294&(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MAX;
	volatile uint8_t x298 = 121U;
	int16_t x299 = -1;
	volatile uint8_t x300 = UINT8_MAX;
	int32_t t74 = -1;

	t74 = (x297==(x298&(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x302 = UINT64_MAX;
	int64_t x303 = -1LL;

	t75 = (x301==(x302&(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 71803LLU;
	int8_t x306 = INT8_MAX;
	uint8_t x307 = 1U;
	uint16_t x308 = 3U;

	t76 = (x305==(x306&(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x310 = UINT32_MAX;
	volatile int64_t x311 = -539739693926411LL;
	volatile int8_t x312 = 28;
	volatile int32_t t77 = 108220;

	t77 = (x309==(x310&(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x314 = INT32_MIN;
	static int8_t x315 = INT8_MAX;
	int8_t x316 = -1;
	int32_t t78 = -4;

	t78 = (x313==(x314&(x315<=x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 2324201947102LLU;
	volatile int32_t x319 = INT32_MIN;
	int64_t x320 = INT64_MAX;
	volatile int32_t t79 = -5;

	t79 = (x317==(x318&(x319<=x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = 4968LL;
	static uint16_t x322 = 173U;
	int16_t x324 = INT16_MAX;
	int32_t t80 = 18;

	t80 = (x321==(x322&(x323<=x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x326 = 2LLU;
	volatile int32_t x328 = INT32_MIN;
	volatile int32_t t81 = 3445102;

	t81 = (x325==(x326&(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = 7816U;
	uint32_t x331 = 15813U;
	uint8_t x332 = 0U;

	t82 = (x329==(x330&(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x335 = INT32_MAX;
	uint16_t x336 = 1U;
	int32_t t83 = -3;

	t83 = (x333==(x334&(x335<=x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	volatile int32_t x340 = INT32_MIN;
	int32_t t84 = 86;

	t84 = (x337==(x338&(x339<=x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x341 = 6208017217LLU;
	static int32_t x343 = INT32_MIN;
	int32_t x344 = 1575;
	int32_t t85 = -7982;

	t85 = (x341==(x342&(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -16565756;
	uint16_t x346 = 1U;
	int32_t x347 = INT32_MIN;
	int16_t x348 = -1;

	t86 = (x345==(x346&(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -50844;
	static int16_t x350 = INT16_MIN;
	volatile int8_t x352 = 0;
	volatile int32_t t87 = 504;

	t87 = (x349==(x350&(x351<=x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x354 = UINT64_MAX;
	volatile uint32_t x355 = 578401852U;
	int32_t x356 = 30448603;
	static volatile int32_t t88 = -78;

	t88 = (x353==(x354&(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	int32_t x358 = -104;
	uint8_t x359 = 5U;
	volatile uint32_t x360 = UINT32_MAX;
	int32_t t89 = -987434101;

	t89 = (x357==(x358&(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 1323075;

	t90 = (x361==(x362&(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 14U;
	static uint8_t x366 = 0U;
	static volatile int32_t t91 = 3;

	t91 = (x365==(x366&(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 7U;
	uint16_t x370 = 1U;
	int64_t x371 = 52351796678292LL;
	uint16_t x372 = 8156U;
	int32_t t92 = -1;

	t92 = (x369==(x370&(x371<=x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = INT8_MAX;
	static int64_t x376 = -1058522121321637140LL;
	volatile int32_t t93 = 54212379;

	t93 = (x373==(x374&(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MIN;
	static int32_t x379 = -1;
	static uint16_t x380 = 4U;
	volatile int32_t t94 = 4264;

	t94 = (x377==(x378&(x379<=x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = 1814U;
	static uint16_t x384 = 0U;
	static volatile int32_t t95 = -1;

	t95 = (x381==(x382&(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = INT64_MIN;
	int16_t x386 = -1;
	volatile int32_t x387 = 512115;
	uint16_t x388 = 1694U;
	volatile int32_t t96 = 689704;

	t96 = (x385==(x386&(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 142497271777867219LLU;
	static int64_t x390 = 242561173624LL;
	int64_t x391 = INT64_MIN;
	int16_t x392 = -13;
	volatile int32_t t97 = -53076;

	t97 = (x389==(x390&(x391<=x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 15194157920719142LLU;
	volatile int32_t x396 = 3;
	int32_t t98 = -7818632;

	t98 = (x393==(x394&(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	volatile uint64_t x398 = 2LLU;
	int32_t x399 = -490836;
	int8_t x400 = INT8_MIN;
	int32_t t99 = -3376666;

	t99 = (x397==(x398&(x399<=x400)));

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

