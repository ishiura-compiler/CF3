#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MIN;
int32_t x3 = -113121;
uint16_t x5 = 98U;
int64_t x10 = 3576029481696518323LL;
int16_t x11 = -33;
volatile int16_t x17 = -7;
static int64_t x21 = 732427251557172974LL;
volatile int64_t t5 = 2667808999733LL;
static uint8_t x25 = UINT8_MAX;
static int64_t x30 = -106902572LL;
volatile uint64_t x34 = UINT64_MAX;
static volatile uint64_t t8 = UINT64_MAX;
uint64_t x46 = 1LLU;
int64_t x47 = 107236877LL;
uint16_t x50 = UINT16_MAX;
int64_t x52 = -1LL;
uint32_t x53 = UINT32_MAX;
uint8_t x59 = 50U;
static uint64_t x63 = 58835315032632760LLU;
uint16_t x64 = 12435U;
int8_t x67 = INT8_MIN;
int32_t x70 = -34281;
int16_t x72 = INT16_MIN;
int8_t x80 = 1;
static uint32_t t19 = UINT32_MAX;
volatile int32_t x85 = INT32_MIN;
int32_t t21 = -3331;
int32_t x90 = -114;
int16_t x92 = INT16_MIN;
volatile int64_t t22 = 10998462455266117LL;
uint32_t x94 = 887764594U;
int64_t x95 = -261086696094384LL;
uint32_t x96 = UINT32_MAX;
static volatile int32_t x97 = INT32_MIN;
volatile int32_t t24 = INT32_MIN;
int32_t t25 = -1;
int64_t x105 = 7333689063460LL;
volatile uint32_t t27 = 22554530U;
static int16_t x117 = -834;
static int16_t x129 = INT16_MIN;
int64_t x134 = INT64_MIN;
int8_t x137 = INT8_MIN;
static uint16_t x139 = UINT16_MAX;
int32_t x145 = -12693;
int8_t x154 = -1;
int16_t x163 = INT16_MIN;
uint32_t x165 = 9U;
uint64_t x171 = 35124645758144LLU;
int64_t x173 = INT64_MIN;
volatile int8_t x174 = 18;
volatile int32_t x175 = -1;
static uint32_t x176 = 134U;
int16_t x177 = 1462;
volatile uint64_t t45 = 37160LLU;
int64_t t47 = -9LL;
volatile int64_t x194 = INT64_MAX;
uint64_t x196 = UINT64_MAX;
int64_t t48 = 31967943387816518LL;
int64_t x199 = -3649600832076LL;
int64_t x200 = -1LL;
static int64_t t49 = -74647727937144LL;
volatile uint64_t t51 = UINT64_MAX;
volatile int32_t t52 = -16;
volatile int8_t x214 = INT8_MIN;
static volatile uint32_t t54 = UINT32_MAX;
int64_t x221 = -1LL;
int64_t x222 = INT64_MIN;
uint64_t x224 = UINT64_MAX;
volatile int64_t t55 = -1LL;
static volatile int8_t x230 = 1;
int8_t x249 = INT8_MIN;
int32_t x250 = INT32_MAX;
static volatile uint8_t x257 = 26U;
static volatile int64_t t66 = 65191796LL;
static int16_t x277 = 1;
int64_t x279 = INT64_MAX;
int64_t x282 = -1LL;
volatile int64_t t70 = 197807311562LL;
uint32_t x286 = 0U;
uint64_t x289 = 6175243LLU;
int8_t x291 = 1;
uint8_t x292 = 6U;
uint16_t x295 = 1U;
static uint32_t x300 = 1U;
int8_t x304 = INT8_MIN;
static volatile int32_t t75 = -107;
static int32_t x313 = INT32_MAX;
uint32_t x315 = 2310U;
volatile int8_t x318 = INT8_MIN;
static int32_t t79 = 8532754;
int64_t x323 = 8886098LL;
volatile uint64_t t81 = UINT64_MAX;
int32_t x337 = 7;
uint8_t x343 = 15U;
int8_t x346 = INT8_MIN;
int8_t x358 = INT8_MIN;
static int8_t x362 = -1;
int64_t x363 = INT64_MIN;
uint64_t x365 = 34348114LLU;
static int16_t x371 = -1438;
volatile uint8_t x375 = 2U;
static int8_t x380 = 53;
volatile int32_t t94 = 14892583;
uint64_t x382 = 1120LLU;
int32_t x386 = -3;
int8_t x387 = 48;
int16_t x392 = -1;
static uint16_t x394 = 0U;
int64_t x397 = 7784867298839LL;


void f0(void) {
	static int8_t x2 = -1;
	static int16_t x4 = 0;
	volatile int32_t t0 = -87;

	t0 = (x1|(x2|(x3<x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x6 = -1;
	volatile uint32_t x7 = 21U;
	static uint32_t x8 = UINT32_MAX;
	static volatile int32_t t1 = 5;

	t1 = (x5|(x6|(x7<x8)));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	uint8_t x12 = 1U;
	volatile int64_t t2 = 72060LL;

	t2 = (x9|(x10|(x11<x12)));

	if (t2 != -5647342555158257485LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = INT8_MIN;
	uint32_t x14 = 102U;
	int64_t x15 = INT64_MAX;
	int8_t x16 = -38;
	volatile uint32_t t3 = 59U;

	t3 = (x13|(x14|(x15<x16)));

	if (t3 != 4294967270U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = -1;
	int32_t x19 = INT32_MIN;
	int32_t x20 = -993496657;
	int32_t t4 = 4063988;

	t4 = (x17|(x18|(x19<x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 1937U;
	static volatile uint64_t x23 = 1160936420LLU;
	int32_t x24 = -1;

	t5 = (x21|(x22|(x23<x24)));

	if (t5 != 732427251557173247LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x26 = INT64_MAX;
	volatile int32_t x27 = -1;
	uint64_t x28 = 140540486403690732LLU;
	int64_t t6 = INT64_MAX;

	t6 = (x25|(x26|(x27<x28)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = UINT32_MAX;
	int16_t x31 = 40;
	uint32_t x32 = 65313291U;
	static int64_t t7 = 118553309077716718LL;

	t7 = (x29|(x30|(x31<x32)));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = -1;
	uint16_t x35 = 47U;
	uint8_t x36 = UINT8_MAX;

	t8 = (x33|(x34|(x35<x36)));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	int32_t x38 = INT32_MIN;
	uint8_t x39 = 6U;
	uint32_t x40 = 2890U;
	int64_t t9 = -11LL;

	t9 = (x37|(x38|(x39<x40)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 0LLU;
	uint16_t x42 = 78U;
	volatile int32_t x43 = 816;
	uint8_t x44 = UINT8_MAX;
	uint64_t t10 = 191815914257LLU;

	t10 = (x41|(x42|(x43<x44)));

	if (t10 != 78LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x48 = INT64_MIN;
	uint64_t t11 = UINT64_MAX;

	t11 = (x45|(x46|(x47<x48)));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x51 = UINT32_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49|(x50|(x51<x52)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = 210951LL;
	static volatile int8_t x55 = INT8_MIN;
	int64_t x56 = 3LL;
	static int64_t t13 = 22064839874LL;

	t13 = (x53|(x54|(x55<x56)));

	if (t13 != 4294967295LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 1U;
	uint32_t x58 = 1U;
	volatile int8_t x60 = -1;
	static volatile uint32_t t14 = 23008U;

	t14 = (x57|(x58|(x59<x60)));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static int64_t x62 = -1LL;
	int64_t t15 = -2969LL;

	t15 = (x61|(x62|(x63<x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 10U;
	int64_t x66 = -1LL;
	uint8_t x68 = 2U;
	int64_t t16 = 2321099496LL;

	t16 = (x65|(x66|(x67<x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int32_t x71 = -1;
	int32_t t17 = 22238101;

	t17 = (x69|(x70|(x71<x72)));

	if (t17 != -34281) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	uint64_t x74 = UINT64_MAX;
	uint8_t x75 = 40U;
	static uint32_t x76 = 57665U;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x73|(x74|(x75<x76)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	uint8_t x78 = 12U;
	uint64_t x79 = 28303029263256LLU;

	t19 = (x77|(x78|(x79<x80)));

	if (t19 != UINT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x81 = 18U;
	int8_t x82 = INT8_MIN;
	static int8_t x83 = -1;
	uint64_t x84 = UINT64_MAX;
	static volatile int32_t t20 = 0;

	t20 = (x81|(x82|(x83<x84)));

	if (t20 != -110) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -3;
	volatile int16_t x87 = INT16_MIN;
	int32_t x88 = -1;

	t21 = (x85|(x86|(x87<x88)));

	if (t21 != -3) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	volatile int64_t x91 = -404451729364850LL;

	t22 = (x89|(x90|(x91<x92)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = 251780889U;
	volatile uint32_t t23 = 56U;

	t23 = (x93|(x94|(x95<x96)));

	if (t23 != 1072430971U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x98 = INT32_MIN;
	uint8_t x99 = 27U;
	int64_t x100 = -1LL;

	t24 = (x97|(x98|(x99<x100)));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 10;
	volatile int16_t x102 = INT16_MAX;
	static uint32_t x103 = 1U;
	int16_t x104 = -1;

	t25 = (x101|(x102|(x103<x104)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x106 = 2933;
	int16_t x107 = -1;
	static int64_t x108 = INT64_MIN;
	int64_t t26 = -2651920758381261LL;

	t26 = (x105|(x106|(x107<x108)));

	if (t26 != 7333689064309LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 0U;
	static volatile uint16_t x110 = UINT16_MAX;
	static int16_t x111 = -1;
	uint32_t x112 = 3960U;

	t27 = (x109|(x110|(x111<x112)));

	if (t27 != 65535U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int64_t x114 = INT64_MAX;
	int64_t x115 = -1LL;
	volatile uint32_t x116 = 9U;
	static volatile int64_t t28 = -1655139LL;

	t28 = (x113|(x114|(x115<x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x118 = -1;
	uint64_t x119 = 216457189LLU;
	static uint8_t x120 = UINT8_MAX;
	int32_t t29 = 67890471;

	t29 = (x117|(x118|(x119<x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = -384917918127954LL;
	uint8_t x122 = UINT8_MAX;
	volatile int8_t x123 = INT8_MIN;
	uint32_t x124 = 9416U;
	static volatile int64_t t30 = -12022955811049LL;

	t30 = (x121|(x122|(x123<x124)));

	if (t30 != -384917918127873LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = UINT32_MAX;
	volatile int64_t t31 = -240681835161086LL;

	t31 = (x125|(x126|(x127<x128)));

	if (t31 != -127LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = 3603964LL;
	volatile int64_t x131 = INT64_MIN;
	int8_t x132 = 15;
	volatile int64_t t32 = -187247298604051LL;

	t32 = (x129|(x130|(x131<x132)));

	if (t32 != -515LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int8_t x135 = 3;
	uint16_t x136 = 177U;
	volatile int64_t t33 = 30008702983831447LL;

	t33 = (x133|(x134|(x135<x136)));

	if (t33 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x138 = INT16_MAX;
	static int16_t x140 = INT16_MIN;
	int32_t t34 = -514458;

	t34 = (x137|(x138|(x139<x140)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x141 = 22688560731219809LLU;
	int32_t x142 = INT32_MIN;
	int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MAX;
	volatile uint64_t t35 = 1LLU;

	t35 = (x141|(x142|(x143<x144)));

	if (t35 != 18446744072415176545LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	int32_t x147 = INT32_MIN;
	uint32_t x148 = 1939U;
	volatile int32_t t36 = -30038;

	t36 = (x145|(x146|(x147<x148)));

	if (t36 != -21) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MAX;
	static int8_t x150 = INT8_MIN;
	uint16_t x151 = 31U;
	uint8_t x152 = 0U;
	int32_t t37 = 609784;

	t37 = (x149|(x150|(x151<x152)));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	static uint64_t x155 = 12LLU;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t38 = -726528634;

	t38 = (x153|(x154|(x155<x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x157 = UINT32_MAX;
	volatile uint64_t x158 = 5688486151849017LLU;
	int32_t x159 = INT32_MIN;
	volatile uint64_t x160 = 244118548306513LLU;
	volatile uint64_t t39 = 1LLU;

	t39 = (x157|(x158|(x159<x160)));

	if (t39 != 5688486615056383LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = INT16_MIN;
	int32_t x162 = -1;
	uint32_t x164 = UINT32_MAX;
	int32_t t40 = 5105;

	t40 = (x161|(x162|(x163<x164)));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MIN;
	uint64_t x167 = UINT64_MAX;
	volatile int32_t x168 = INT32_MAX;
	uint32_t t41 = 1601U;

	t41 = (x165|(x166|(x167<x168)));

	if (t41 != 4294967177U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 4887U;
	int32_t x170 = 158664;
	volatile int8_t x172 = INT8_MIN;
	int32_t t42 = 1378;

	t42 = (x169|(x170|(x171<x172)));

	if (t42 != 162783) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t t43 = -4416931LL;

	t43 = (x173|(x174|(x175<x176)));

	if (t43 != -9223372036854775790LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x178 = 760177;
	int64_t x179 = -3LL;
	static volatile uint16_t x180 = 6442U;
	volatile int32_t t44 = -196457;

	t44 = (x177|(x178|(x179<x180)));

	if (t44 != 761335) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = 175452113788LLU;
	uint32_t x182 = 223344U;
	int32_t x183 = INT32_MIN;
	static int32_t x184 = 4;

	t45 = (x181|(x182|(x183<x184)));

	if (t45 != 175452187517LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	volatile uint32_t x186 = 414109U;
	static int8_t x187 = -1;
	volatile int32_t x188 = INT32_MIN;
	static volatile int64_t t46 = -45595158646305LL;

	t46 = (x185|(x186|(x187<x188)));

	if (t46 != -9223372036854361699LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = UINT32_MAX;
	int64_t x190 = INT64_MIN;
	static uint8_t x191 = 47U;
	int16_t x192 = -1;

	t47 = (x189|(x190|(x191<x192)));

	if (t47 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	int8_t x195 = INT8_MIN;

	t48 = (x193|(x194|(x195<x196)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = 13127739LL;

	t49 = (x197|(x198|(x199<x200)));

	if (t49 != -69LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 10591867665186111LLU;
	int64_t x202 = INT64_MIN;
	int8_t x203 = -12;
	int64_t x204 = -387LL;
	volatile uint64_t t50 = 5963536572LLU;

	t50 = (x201|(x202|(x203<x204)));

	if (t50 != 9233963904519961919LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 2U;
	uint64_t x206 = UINT64_MAX;
	volatile int64_t x207 = -126507352794873LL;
	int64_t x208 = 155701LL;

	t51 = (x205|(x206|(x207<x208)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -2080;
	volatile int32_t x210 = INT32_MIN;
	uint8_t x211 = UINT8_MAX;
	int8_t x212 = INT8_MIN;

	t52 = (x209|(x210|(x211<x212)));

	if (t52 != -2080) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	static int64_t x215 = INT64_MIN;
	int64_t x216 = 6185LL;
	static int32_t t53 = -36025648;

	t53 = (x213|(x214|(x215<x216)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x217 = UINT32_MAX;
	int16_t x218 = 3680;
	int64_t x219 = INT64_MIN;
	int32_t x220 = -48;

	t54 = (x217|(x218|(x219<x220)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x223 = INT64_MAX;

	t55 = (x221|(x222|(x223<x224)));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	int32_t x226 = INT32_MAX;
	int8_t x227 = -1;
	uint32_t x228 = 203U;
	static int32_t t56 = INT32_MAX;

	t56 = (x225|(x226|(x227<x228)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	static int8_t x231 = -1;
	static volatile int16_t x232 = INT16_MIN;
	int32_t t57 = 31280155;

	t57 = (x229|(x230|(x231<x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -1;
	int32_t x234 = -256015;
	volatile uint16_t x235 = 7U;
	int32_t x236 = INT32_MIN;
	int32_t t58 = -53021;

	t58 = (x233|(x234|(x235<x236)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = 199;
	static int16_t x239 = -1;
	int32_t x240 = -1070;
	int32_t t59 = -1013;

	t59 = (x237|(x238|(x239<x240)));

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 3572U;
	int32_t x242 = INT32_MIN;
	static int32_t x243 = -1;
	static int16_t x244 = -1;
	uint32_t t60 = 23717U;

	t60 = (x241|(x242|(x243<x244)));

	if (t60 != 2147487220U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int16_t x246 = 0;
	int8_t x247 = INT8_MAX;
	uint16_t x248 = UINT16_MAX;
	volatile int64_t t61 = 24LL;

	t61 = (x245|(x246|(x247<x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x251 = 103U;
	volatile int32_t x252 = INT32_MIN;
	int32_t t62 = -7280561;

	t62 = (x249|(x250|(x251<x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MAX;
	static uint64_t x254 = UINT64_MAX;
	uint8_t x255 = 72U;
	int64_t x256 = INT64_MIN;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x253|(x254|(x255<x256)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x258 = -1;
	int32_t x259 = -1;
	int16_t x260 = -1;
	int32_t t64 = -1278418;

	t64 = (x257|(x258|(x259<x260)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	int32_t x262 = -169;
	int16_t x263 = -14;
	volatile int16_t x264 = INT16_MIN;
	int32_t t65 = 117;

	t65 = (x261|(x262|(x263<x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = INT64_MAX;
	int32_t x266 = -209304;
	uint64_t x267 = 176LLU;
	uint32_t x268 = UINT32_MAX;

	t66 = (x265|(x266|(x267<x268)));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 1;
	int32_t x270 = INT32_MAX;
	static volatile int32_t x271 = 2;
	int64_t x272 = INT64_MAX;
	volatile int32_t t67 = INT32_MAX;

	t67 = (x269|(x270|(x271<x272)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x273 = 813LL;
	static int16_t x274 = -152;
	int16_t x275 = INT16_MIN;
	uint8_t x276 = 31U;
	int64_t t68 = -5378698235LL;

	t68 = (x273|(x274|(x275<x276)));

	if (t68 != -147LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = -5;
	int16_t x280 = INT16_MAX;
	int32_t t69 = 2;

	t69 = (x277|(x278|(x279<x280)));

	if (t69 != -5) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x281 = 3165U;
	uint8_t x283 = 20U;
	int8_t x284 = -12;

	t70 = (x281|(x282|(x283<x284)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	int8_t x287 = -1;
	static int32_t x288 = INT32_MIN;
	volatile uint32_t t71 = UINT32_MAX;

	t71 = (x285|(x286|(x287<x288)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	uint64_t t72 = 2811LLU;

	t72 = (x289|(x290|(x291<x292)));

	if (t72 != 18446744073709533707LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = INT16_MAX;
	int8_t x294 = INT8_MAX;
	int8_t x296 = -1;
	volatile int32_t t73 = -30352;

	t73 = (x293|(x294|(x295<x296)));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	int8_t x298 = INT8_MIN;
	static uint32_t x299 = 279U;
	static int32_t t74 = -677;

	t74 = (x297|(x298|(x299<x300)));

	if (t74 != -127) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = -1;
	int8_t x302 = 28;
	int64_t x303 = INT64_MIN;

	t75 = (x301|(x302|(x303<x304)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -3;
	int32_t t76 = 18575215;

	t76 = (x305|(x306|(x307<x308)));

	if (t76 != -2147418113) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	volatile int32_t x310 = INT32_MAX;
	uint32_t x311 = UINT32_MAX;
	int8_t x312 = 10;
	volatile int32_t t77 = INT32_MAX;

	t77 = (x309|(x310|(x311<x312)));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = 13720U;
	int16_t x316 = -1002;
	int32_t t78 = INT32_MAX;

	t78 = (x313|(x314|(x315<x316)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = UINT8_MAX;
	static volatile uint8_t x319 = 26U;
	int64_t x320 = INT64_MAX;

	t79 = (x317|(x318|(x319<x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = INT8_MIN;
	static int16_t x324 = -1;
	static int32_t t80 = 800173182;

	t80 = (x321|(x322|(x323<x324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	static uint64_t x326 = UINT64_MAX;
	uint32_t x327 = 1576054758U;
	int64_t x328 = INT64_MIN;

	t81 = (x325|(x326|(x327<x328)));

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 37U;
	uint32_t x330 = 800U;
	uint16_t x331 = 5U;
	int8_t x332 = INT8_MAX;
	uint32_t t82 = 1U;

	t82 = (x329|(x330|(x331<x332)));

	if (t82 != 805U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = UINT8_MAX;
	static volatile int32_t x334 = -27736165;
	static int16_t x335 = INT16_MIN;
	int64_t x336 = -1LL;
	volatile int32_t t83 = -15;

	t83 = (x333|(x334|(x335<x336)));

	if (t83 != -27736065) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x338 = 9U;
	uint64_t x339 = 3450826867LLU;
	static int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = -883676155;

	t84 = (x337|(x338|(x339<x340)));

	if (t84 != 15) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static volatile int32_t x342 = INT32_MIN;
	volatile uint16_t x344 = 7U;
	volatile int32_t t85 = 734392583;

	t85 = (x341|(x342|(x343<x344)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = -3;
	uint32_t x347 = 5912U;
	static int16_t x348 = INT16_MAX;
	static int32_t t86 = -1714;

	t86 = (x345|(x346|(x347<x348)));

	if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 79808882597687LLU;
	static int32_t x350 = INT32_MAX;
	uint32_t x351 = 0U;
	int8_t x352 = 7;
	uint64_t t87 = 2452676LLU;

	t87 = (x349|(x350|(x351<x352)));

	if (t87 != 79809082294271LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MIN;
	uint64_t x354 = UINT64_MAX;
	int16_t x355 = -233;
	int64_t x356 = INT64_MIN;
	uint64_t t88 = UINT64_MAX;

	t88 = (x353|(x354|(x355<x356)));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int64_t x359 = -1LL;
	int8_t x360 = INT8_MAX;
	static volatile int32_t t89 = 2;

	t89 = (x357|(x358|(x359<x360)));

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 7038225727463LLU;
	int64_t x364 = 215215LL;
	static volatile uint64_t t90 = UINT64_MAX;

	t90 = (x361|(x362|(x363<x364)));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = 23U;
	int32_t x367 = INT32_MAX;
	volatile int64_t x368 = INT64_MAX;
	volatile uint64_t t91 = 610533LLU;

	t91 = (x365|(x366|(x367<x368)));

	if (t91 != 34348119LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x369 = 150187990524567526LLU;
	static int64_t x370 = INT64_MIN;
	int32_t x372 = -1;
	static volatile uint64_t t92 = 251712628772890LLU;

	t92 = (x369|(x370|(x371<x372)));

	if (t92 != 9373560027379343335LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MIN;
	volatile int8_t x376 = INT8_MIN;
	volatile int64_t t93 = 0LL;

	t93 = (x373|(x374|(x375<x376)));

	if (t93 != -32768LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 1;
	volatile int16_t x378 = INT16_MAX;
	static volatile int32_t x379 = -255634984;

	t94 = (x377|(x378|(x379<x380)));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int32_t x383 = 473;
	volatile int8_t x384 = INT8_MAX;
	uint64_t t95 = 70333262519340017LLU;

	t95 = (x381|(x382|(x383<x384)));

	if (t95 != 9223372036854776928LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = UINT8_MAX;
	int16_t x388 = 387;
	static int32_t t96 = -11;

	t96 = (x385|(x386|(x387<x388)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x389 = INT32_MIN;
	int32_t x390 = -1;
	uint16_t x391 = UINT16_MAX;
	volatile int32_t t97 = -8408491;

	t97 = (x389|(x390|(x391<x392)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = -4586;
	int8_t x395 = 15;
	int64_t x396 = INT64_MAX;
	static int32_t t98 = -1;

	t98 = (x393|(x394|(x395<x396)));

	if (t98 != -4585) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 199989430U;
	int16_t x399 = 1;
	uint8_t x400 = UINT8_MAX;
	int64_t t99 = -214LL;

	t99 = (x397|(x398|(x399<x400)));

	if (t99 != 7784896659127LL) { NG(); } else { ; }
	
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

