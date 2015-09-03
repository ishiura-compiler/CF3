#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int16_t x9 = INT16_MAX;
int8_t x11 = INT8_MIN;
static int16_t x12 = 49;
volatile uint64_t x13 = 1LLU;
uint64_t t3 = 6667477473712263LLU;
int16_t x18 = INT16_MIN;
static uint32_t x22 = UINT32_MAX;
uint8_t x24 = 2U;
int8_t x39 = INT8_MAX;
volatile int32_t t10 = 635966;
int64_t x56 = 5891670799824994LL;
volatile int16_t x60 = INT16_MAX;
uint32_t t13 = 1174947200U;
uint32_t x73 = 53431U;
int16_t x86 = INT16_MIN;
int32_t x91 = -130929;
static uint32_t x93 = 59482U;
int32_t x97 = -1;
int64_t x102 = -1LL;
static int32_t x106 = -1;
int8_t x122 = -1;
int64_t x124 = INT64_MIN;
uint64_t t27 = 5048025798346038LLU;
int64_t x127 = -107LL;
int32_t t31 = 1368;
uint32_t x147 = 78390U;
uint32_t t33 = 90612U;
int64_t x151 = INT64_MIN;
int8_t x153 = -1;
static int8_t x155 = INT8_MIN;
uint64_t x156 = UINT64_MAX;
uint64_t t35 = 12280481499871LLU;
int64_t x160 = -30173781LL;
volatile int16_t x161 = 1;
volatile int64_t t37 = 387895LL;
int64_t t42 = 0LL;
int64_t x191 = INT64_MIN;
int32_t x192 = -1;
int16_t x197 = INT16_MAX;
uint32_t x198 = UINT32_MAX;
static uint8_t x199 = 5U;
int16_t x200 = INT16_MAX;
volatile uint32_t t46 = 26954328U;
uint64_t t48 = 2023737730204LLU;
int64_t x215 = -1048438LL;
int32_t x221 = -1;
uint64_t x223 = 3851357025842LLU;
uint16_t x226 = 25043U;
static volatile int32_t x236 = -13369;
static uint64_t x241 = UINT64_MAX;
uint64_t x256 = 22758872LLU;
int32_t x259 = -1;
uint32_t x265 = 6492726U;
int16_t x267 = INT16_MIN;
uint64_t x268 = UINT64_MAX;
volatile int32_t x269 = INT32_MIN;
int8_t x270 = INT8_MIN;
volatile int32_t t64 = 3454137;
int64_t x285 = INT64_MIN;
static int32_t x288 = INT32_MIN;
static int64_t x290 = INT64_MIN;
int16_t x297 = 1;
volatile int64_t x299 = INT64_MIN;
volatile int32_t x302 = INT32_MIN;
int8_t x307 = 35;
volatile uint32_t t72 = 64U;
volatile uint64_t t73 = 184172762LLU;
uint32_t x323 = 5432U;
volatile uint64_t t76 = 26LLU;
static volatile uint64_t x330 = 15591487LLU;
volatile uint64_t t78 = 60763260267LLU;
uint64_t x344 = 3700901090748434LLU;
int64_t x350 = INT64_MIN;
uint64_t x352 = 9554709955859LLU;
static uint64_t t82 = 14LLU;
int64_t x356 = -235LL;
int64_t x363 = -605504452997LL;
uint64_t t86 = 414128057LLU;
int64_t x372 = 10503801791944201LL;
int16_t x388 = 15370;
volatile uint8_t x392 = 1U;
uint32_t x396 = UINT32_MAX;
volatile uint64_t t93 = 276063210890680178LLU;
int8_t x401 = INT8_MAX;
uint64_t t95 = 11391LLU;
volatile uint32_t x416 = 2589901U;
int64_t x421 = -218768LL;


void f0(void) {
	uint16_t x1 = 2U;
	int16_t x3 = -1;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = 5;

	t0 = (x1-(x2|(x3^x4)));

	if (t0 != 65538) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 58119;
	int32_t x6 = INT32_MIN;
	int32_t x7 = -39689;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = -122835717LL;

	t1 = (x5-(x6|(x7^x8)));

	if (t1 != 97808LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = 2;
	volatile int32_t t2 = -1;

	t2 = (x9-(x10|(x11^x12)));

	if (t2 != 32844) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -53;
	uint16_t x15 = 486U;
	volatile uint64_t x16 = 483153238255415407LLU;

	t3 = (x13-(x14|(x15^x16)));

	if (t3 != 54LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -11612;
	volatile uint64_t x19 = 113481889LLU;
	volatile int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = 2628994898LLU;

	t4 = (x17-(x18|(x19^x20)));

	if (t4 != 14851LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1;
	static int8_t x23 = INT8_MIN;
	static volatile uint32_t t5 = 0U;

	t5 = (x21-(x22|(x23^x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 801303126394898LL;
	int8_t x26 = 0;
	int8_t x27 = -7;
	uint8_t x28 = 41U;
	volatile int64_t t6 = 511850LL;

	t6 = (x25-(x26|(x27^x28)));

	if (t6 != 801303126394946LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	static int32_t x30 = INT32_MAX;
	uint8_t x31 = UINT8_MAX;
	uint32_t x32 = 2383164U;
	static uint32_t t7 = 263U;

	t7 = (x29-(x30|(x31^x32)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 199168LLU;
	static int16_t x34 = -1;
	uint16_t x35 = 176U;
	uint32_t x36 = UINT32_MAX;
	volatile uint64_t t8 = 697226272LLU;

	t8 = (x33-(x34|(x35^x36)));

	if (t8 != 18446744069414783489LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	uint16_t x38 = UINT16_MAX;
	static int16_t x40 = -1;
	int32_t t9 = -78384;

	t9 = (x37-(x38|(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int16_t x42 = -1;
	static int32_t x43 = -1;
	volatile int16_t x44 = -1;

	t10 = (x41-(x42|(x43^x44)));

	if (t10 != -2147483647) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MAX;
	int8_t x47 = INT8_MAX;
	int32_t x48 = -1012282;
	static int32_t t11 = 37217;

	t11 = (x45-(x46|(x47^x48)));

	if (t11 != 65536) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile int8_t x54 = -4;
	int32_t x55 = 23;
	volatile uint64_t t12 = 754913LLU;

	t12 = (x53-(x54|(x55^x56)));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x57 = INT8_MIN;
	int32_t x58 = -35344;
	uint32_t x59 = 31845U;

	t13 = (x57-(x58|(x59^x60)));

	if (t13 != 34694U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	uint16_t x62 = 14U;
	int64_t x63 = 153LL;
	int8_t x64 = INT8_MAX;
	volatile int64_t t14 = 88403495LL;

	t14 = (x61-(x62|(x63^x64)));

	if (t14 != 32529LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = 3;
	volatile uint8_t x66 = 12U;
	uint32_t x67 = 127819694U;
	int16_t x68 = -1;
	uint32_t t15 = 300U;

	t15 = (x65-(x66|(x67^x68)));

	if (t15 != 127819686U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = UINT8_MAX;
	static uint16_t x70 = 97U;
	int16_t x71 = INT16_MIN;
	volatile uint16_t x72 = 1989U;
	static volatile int32_t t16 = -182044702;

	t16 = (x69-(x70|(x71^x72)));

	if (t16 != 31002) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x74 = 2;
	uint32_t x75 = 761531643U;
	uint16_t x76 = UINT16_MAX;
	uint32_t t17 = 16U;

	t17 = (x73-(x74|(x75^x76)));

	if (t17 != 3533430193U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 40;
	volatile int64_t x82 = INT64_MIN;
	volatile int32_t x83 = -1;
	uint32_t x84 = 94894U;
	int64_t t18 = 0LL;

	t18 = (x81-(x82|(x83^x84)));

	if (t18 != 9223372032559903447LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MIN;
	int64_t x87 = -98578368413998218LL;
	int8_t x88 = -1;
	int64_t t19 = -112LL;

	t19 = (x85-(x86|(x87^x88)));

	if (t19 != -9223372036854750345LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 285709652193432532LLU;
	int8_t x90 = -1;
	int64_t x92 = INT64_MIN;
	volatile uint64_t t20 = 29666939323393LLU;

	t20 = (x89-(x90|(x91^x92)));

	if (t20 != 285709652193432533LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = -1;
	static int8_t x95 = INT8_MAX;
	int8_t x96 = -1;
	static uint32_t t21 = 2508821U;

	t21 = (x93-(x94|(x95^x96)));

	if (t21 != 59483U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x98 = -979853;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = UINT32_MAX;
	volatile uint32_t t22 = 267690648U;

	t22 = (x97-(x98|(x99^x100)));

	if (t22 != 979852U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = -1;
	volatile int16_t x103 = 3;
	volatile int8_t x104 = -1;
	static int64_t t23 = 929051172163339LL;

	t23 = (x101-(x102|(x103^x104)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = -1;
	static int16_t x107 = INT16_MIN;
	static uint8_t x108 = 8U;
	volatile int32_t t24 = 42583979;

	t24 = (x105-(x106|(x107^x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x109 = INT32_MIN;
	static volatile int8_t x110 = -1;
	uint32_t x111 = 166324U;
	uint8_t x112 = 0U;
	volatile uint32_t t25 = 4795718U;

	t25 = (x109-(x110|(x111^x112)));

	if (t25 != 2147483649U) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x117 = 19827;
	uint16_t x118 = 194U;
	int64_t x119 = 261713256334LL;
	volatile uint64_t x120 = 54LLU;
	volatile uint64_t t26 = 1126062910355LLU;

	t26 = (x117-(x118|(x119^x120)));

	if (t26 != 18446743811996315001LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	uint64_t x123 = UINT64_MAX;

	t27 = (x121-(x122|(x123^x124)));

	if (t27 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x125 = UINT64_MAX;
	int32_t x126 = INT32_MIN;
	int8_t x128 = INT8_MAX;
	static uint64_t t28 = 17580LLU;

	t28 = (x125-(x126|(x127^x128)));

	if (t28 != 21LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = -1;
	int32_t x130 = INT32_MIN;
	volatile uint64_t x131 = 199LLU;
	uint8_t x132 = UINT8_MAX;
	volatile uint64_t t29 = 704LLU;

	t29 = (x129-(x130|(x131^x132)));

	if (t29 != 2147483591LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = UINT8_MAX;
	volatile int8_t x134 = -7;
	int32_t x135 = INT32_MAX;
	uint32_t x136 = 2104338569U;
	volatile uint32_t t30 = 414U;

	t30 = (x133-(x134|(x135^x136)));

	if (t30 != 256U) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = -1;
	int8_t x138 = -1;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MAX;

	t31 = (x137-(x138|(x139^x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = -5;
	int16_t x142 = INT16_MAX;
	uint16_t x143 = 0U;
	uint16_t x144 = 15U;
	int32_t t32 = -2749;

	t32 = (x141-(x142|(x143^x144)));

	if (t32 != -32772) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x145 = UINT32_MAX;
	static uint32_t x146 = 47358U;
	int8_t x148 = INT8_MIN;

	t33 = (x145-(x146|(x147^x148)));

	if (t33 != 66049U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x149 = 6U;
	int64_t x150 = 1741524535552424LL;
	int8_t x152 = -1;
	volatile int64_t t34 = 3009624074LL;

	t34 = (x149-(x150|(x151^x152)));

	if (t34 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x154 = INT16_MIN;

	t35 = (x153-(x154|(x155^x156)));

	if (t35 != 32640LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	int8_t x158 = 0;
	uint16_t x159 = 42U;
	volatile int64_t t36 = -29496207075002LL;

	t36 = (x157-(x158|(x159^x160)));

	if (t36 != -9223372036824601985LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -54879141;

	t37 = (x161-(x162|(x163^x164)));

	if (t37 != 9223372036799896614LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -14115;
	volatile int64_t x166 = 264681847687472LL;
	uint64_t x167 = 35754342236210811LLU;
	volatile int64_t x168 = -1LL;
	uint64_t t38 = 837376LLU;

	t38 = (x165-(x166|(x167^x168)));

	if (t38 != 35754196207144745LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = -1;
	static int16_t x170 = INT16_MAX;
	uint32_t x171 = 865019U;
	static volatile int32_t x172 = INT32_MIN;
	uint32_t t39 = 112399899U;

	t39 = (x169-(x170|(x171^x172)));

	if (t39 != 2146598912U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = -479840905;
	int64_t x174 = -945898143445LL;
	int8_t x175 = -1;
	uint32_t x176 = 731U;
	int64_t t40 = 42554741415301LL;

	t40 = (x173-(x174|(x175^x176)));

	if (t40 != 944412964936LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = -50;
	uint32_t x178 = 864960U;
	volatile uint32_t x179 = 45U;
	uint64_t x180 = UINT64_MAX;
	static volatile uint64_t t41 = 282610893513302159LLU;

	t41 = (x177-(x178|(x179^x180)));

	if (t41 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MAX;
	uint8_t x182 = 88U;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -1LL;

	t42 = (x181-(x182|(x183^x184)));

	if (t42 != -2147483520LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = 2;
	int8_t x186 = INT8_MIN;
	static int8_t x187 = -59;
	volatile int32_t x188 = -48337736;
	volatile int32_t t43 = -18812;

	t43 = (x185-(x186|(x187^x188)));

	if (t43 != 5) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -1;
	volatile uint32_t x190 = UINT32_MAX;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x189-(x190|(x191^x192)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x193 = -1;
	int64_t x194 = -41445086014LL;
	static int64_t x195 = INT64_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t45 = 2523235931789183213LL;

	t45 = (x193-(x194|(x195^x196)));

	if (t45 != 41445086013LL) { NG(); } else { ; }
	
}

void f46(void) {


	t46 = (x197-(x198|(x199^x200)));

	if (t46 != 32768U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 1919U;
	volatile uint16_t x202 = 6739U;
	int64_t x203 = INT64_MAX;
	int16_t x204 = 0;
	volatile int64_t t47 = -197896LL;

	t47 = (x201-(x202|(x203^x204)));

	if (t47 != -9223372036854773888LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int16_t x206 = -11;
	volatile int8_t x207 = INT8_MIN;
	uint64_t x208 = UINT64_MAX;

	t48 = (x205-(x206|(x207^x208)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -76;
	volatile int8_t x210 = INT8_MAX;
	volatile uint32_t x211 = 417204121U;
	volatile int16_t x212 = INT16_MIN;
	static volatile uint32_t t49 = 201637U;

	t49 = (x209-(x210|(x211^x212)));

	if (t49 != 417232821U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x213 = 372LLU;
	int8_t x214 = INT8_MIN;
	static int64_t x216 = INT64_MIN;
	static uint64_t t50 = 57078282297491LLU;

	t50 = (x213-(x214|(x215^x216)));

	if (t50 != 490LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x217 = INT8_MAX;
	volatile uint8_t x218 = 106U;
	static int64_t x219 = -1LL;
	int32_t x220 = -1;
	volatile int64_t t51 = 61325103579580LL;

	t51 = (x217-(x218|(x219^x220)));

	if (t51 != 21LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x222 = INT8_MAX;
	uint32_t x224 = UINT32_MAX;
	volatile uint64_t t52 = 6186230LLU;

	t52 = (x221-(x222|(x223^x224)));

	if (t52 != 18446740224190215680LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = INT8_MIN;
	int64_t x227 = INT64_MIN;
	static int64_t x228 = INT64_MIN;
	int64_t t53 = -2035407376016LL;

	t53 = (x225-(x226|(x227^x228)));

	if (t53 != -25171LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x229 = INT8_MIN;
	static volatile int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	int32_t x232 = -87;
	volatile uint64_t t54 = 1238495691519741793LLU;

	t54 = (x229-(x230|(x231^x232)));

	if (t54 != 32554LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x233 = UINT32_MAX;
	int16_t x234 = INT16_MIN;
	int16_t x235 = INT16_MIN;
	uint32_t t55 = 117219123U;

	t55 = (x233-(x234|(x235^x236)));

	if (t55 != 13368U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = 32051408;
	int64_t x238 = 2209129824615175LL;
	volatile uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;
	uint64_t t56 = 9746317110060LLU;

	t56 = (x237-(x238|(x239^x240)));

	if (t56 != 18444534943916987849LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x242 = -1;
	int8_t x243 = -20;
	int64_t x244 = -1LL;
	static volatile uint64_t t57 = 62876LLU;

	t57 = (x241-(x242|(x243^x244)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -56;
	int64_t x247 = INT64_MAX;
	static uint32_t x248 = UINT32_MAX;
	int64_t t58 = 1LL;

	t58 = (x245-(x246|(x247^x248)));

	if (t58 != 4294967351LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x249 = 428U;
	int16_t x250 = INT16_MIN;
	static int32_t x251 = -62341498;
	int8_t x252 = INT8_MIN;
	volatile uint32_t t59 = 11589U;

	t59 = (x249-(x250|(x251^x252)));

	if (t59 != 16550U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x253 = INT16_MIN;
	int32_t x254 = INT32_MIN;
	int16_t x255 = INT16_MAX;
	uint64_t t60 = 4042294426608LLU;

	t60 = (x253-(x254|(x255^x256)));

	if (t60 != 2124695001LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = INT32_MIN;
	static uint32_t x258 = 5U;
	int64_t x260 = 40100318040952929LL;
	volatile int64_t t61 = -26013LL;

	t61 = (x257-(x258|(x259^x260)));

	if (t61 != 40100315893469281LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MAX;
	volatile int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MAX;
	int64_t x264 = -1LL;
	volatile int64_t t62 = -3590131421722LL;

	t62 = (x261-(x262|(x263^x264)));

	if (t62 != 32895LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x266 = UINT16_MAX;
	static volatile uint64_t t63 = 9LLU;

	t63 = (x265-(x266|(x267^x268)));

	if (t63 != 6427191LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x271 = INT16_MIN;
	uint8_t x272 = UINT8_MAX;

	t64 = (x269-(x270|(x271^x272)));

	if (t64 != -2147483647) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x277 = -1;
	uint8_t x278 = 0U;
	volatile int8_t x279 = INT8_MAX;
	volatile int8_t x280 = 2;
	volatile int32_t t65 = -991;

	t65 = (x277-(x278|(x279^x280)));

	if (t65 != -126) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x281 = INT64_MIN;
	uint16_t x282 = 42U;
	static int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MAX;
	static volatile int64_t t66 = -191809LL;

	t66 = (x281-(x282|(x283^x284)));

	if (t66 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x286 = -8079;
	int8_t x287 = INT8_MIN;
	int64_t t67 = 466330867834LL;

	t67 = (x285-(x286|(x287^x288)));

	if (t67 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x289 = 4U;
	static int32_t x291 = 836721745;
	uint8_t x292 = 3U;
	int64_t t68 = -1789418LL;

	t68 = (x289-(x290|(x291^x292)));

	if (t68 != 9223372036018054066LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = -1;
	int32_t x294 = -1;
	static uint16_t x295 = 91U;
	uint16_t x296 = UINT16_MAX;
	volatile int32_t t69 = -1847;

	t69 = (x293-(x294|(x295^x296)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x298 = 23493607623173LLU;
	volatile int16_t x300 = INT16_MAX;
	volatile uint64_t t70 = 570330012998432020LLU;

	t70 = (x297-(x298|(x299^x300)));

	if (t70 != 9223348543247122434LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -4643;
	uint64_t t71 = 4LLU;

	t71 = (x301-(x302|(x303^x304)));

	if (t71 != 2147455522LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MIN;
	uint32_t x306 = 68285150U;
	int16_t x308 = INT16_MIN;

	t72 = (x305-(x306|(x307^x308)));

	if (t72 != 3201U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x309 = -1LL;
	uint64_t x310 = UINT64_MAX;
	uint32_t x311 = UINT32_MAX;
	volatile uint32_t x312 = 1589U;

	t73 = (x309-(x310|(x311^x312)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = -10893;
	static uint8_t x314 = 1U;
	int32_t x315 = -82706239;
	volatile int64_t x316 = -8373181964LL;
	volatile int64_t t74 = -1815539869679354944LL;

	t74 = (x313-(x314|(x315^x316)));

	if (t74 != -8455293890LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = 4081;
	uint8_t x318 = 1U;
	static volatile uint8_t x319 = 2U;
	static int8_t x320 = 8;
	static volatile int32_t t75 = -6;

	t75 = (x317-(x318|(x319^x320)));

	if (t75 != 4070) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = 81306764396LLU;
	volatile int64_t x322 = -68069879614618LL;
	volatile int8_t x324 = -1;

	t76 = (x321-(x322|(x323^x324)));

	if (t76 != 68147948472453LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = 0;
	uint16_t x326 = 12U;
	int64_t x327 = INT64_MAX;
	static int64_t x328 = 1070358478321LL;
	static int64_t t77 = -3922393899LL;

	t77 = (x325-(x326|(x327^x328)));

	if (t77 != -9223370966496297486LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = -1;
	volatile int64_t x331 = -8264411992948LL;
	int64_t x332 = -1LL;

	t78 = (x329-(x330|(x331^x332)));

	if (t78 != 18446735809286505600LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x337 = 6073795307693LLU;
	int64_t x338 = 233968384895LL;
	volatile int64_t x339 = -1LL;
	volatile uint32_t x340 = UINT32_MAX;
	uint64_t t79 = 14186243481513860LLU;

	t79 = (x337-(x338|(x339^x340)));

	if (t79 != 6076050124078LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MAX;
	int16_t x342 = INT16_MAX;
	static int16_t x343 = INT16_MIN;
	static volatile uint64_t t80 = 528889289626LLU;

	t80 = (x341-(x342|(x343^x344)));

	if (t80 != 9227072937945497600LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	volatile int16_t x347 = INT16_MIN;
	static volatile int32_t x348 = -1;
	volatile int32_t t81 = -59846;

	t81 = (x345-(x346|(x347^x348)));

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x349 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;

	t82 = (x349-(x350|(x351^x352)));

	if (t82 != 9552562472212LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x353 = INT8_MIN;
	uint8_t x354 = 31U;
	static int16_t x355 = 700;
	volatile int64_t t83 = 1LL;

	t83 = (x353-(x354|(x355^x356)));

	if (t83 != 449LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x357 = 236U;
	int64_t x358 = -264LL;
	int8_t x359 = INT8_MIN;
	uint64_t x360 = 175LLU;
	uint64_t t84 = 16153110069102LLU;

	t84 = (x357-(x358|(x359^x360)));

	if (t84 != 237LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MAX;
	int32_t x362 = INT32_MAX;
	uint8_t x364 = 0U;
	int64_t t85 = 1459LL;

	t85 = (x361-(x362|(x363^x364)));

	if (t85 != 605590388736LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint64_t x365 = 11LLU;
	int32_t x366 = INT32_MAX;
	static uint16_t x367 = 3U;
	static volatile int32_t x368 = INT32_MAX;

	t86 = (x365-(x366|(x367^x368)));

	if (t86 != 18446744071562067980LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x369 = 12U;
	static volatile uint16_t x370 = 666U;
	volatile uint8_t x371 = UINT8_MAX;
	int64_t t87 = -127304033840296LL;

	t87 = (x369-(x370|(x371^x372)));

	if (t87 != -10503801791944434LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = 54;
	int64_t x374 = -65684014LL;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;
	volatile int64_t t88 = -26471671838LL;

	t88 = (x373-(x374|(x375^x376)));

	if (t88 != 65667127LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x377 = -7;
	int64_t x378 = INT64_MIN;
	uint32_t x379 = 23330U;
	volatile int64_t x380 = INT64_MAX;
	int64_t t89 = -25LL;

	t89 = (x377-(x378|(x379^x380)));

	if (t89 != 23324LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x381 = 30LLU;
	static uint64_t x382 = UINT64_MAX;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = 1161;
	uint64_t t90 = 4708086735173LLU;

	t90 = (x381-(x382|(x383^x384)));

	if (t90 != 31LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 3954433853033LLU;
	int64_t x386 = INT64_MAX;
	uint64_t x387 = 876115716908234LLU;
	volatile uint64_t t91 = 939811LLU;

	t91 = (x385-(x386|(x387^x388)));

	if (t91 != 9223375991288628842LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x389 = 3346U;
	int32_t x390 = 4;
	volatile int16_t x391 = INT16_MAX;
	int32_t t92 = 28;

	t92 = (x389-(x390|(x391^x392)));

	if (t92 != -29420) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x393 = UINT64_MAX;
	int32_t x394 = INT32_MAX;
	int16_t x395 = -1;

	t93 = (x393-(x394|(x395^x396)));

	if (t93 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x397 = 3U;
	uint8_t x398 = UINT8_MAX;
	volatile int32_t x399 = INT32_MAX;
	int16_t x400 = INT16_MAX;
	int32_t t94 = 1;

	t94 = (x397-(x398|(x399^x400)));

	if (t94 != -2147451132) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x402 = UINT32_MAX;
	volatile uint64_t x403 = 2824613LLU;
	volatile uint32_t x404 = 1U;

	t95 = (x401-(x402|(x403^x404)));

	if (t95 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x405 = UINT8_MAX;
	int16_t x406 = -3194;
	static int8_t x407 = 1;
	static int8_t x408 = -8;
	static volatile int32_t t96 = -9193;

	t96 = (x405-(x406|(x407^x408)));

	if (t96 != 256) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x413 = UINT32_MAX;
	int8_t x414 = 13;
	uint32_t x415 = UINT32_MAX;
	volatile uint32_t t97 = 1U;

	t97 = (x413-(x414|(x415^x416)));

	if (t97 != 2589888U) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x417 = -1LL;
	static int8_t x418 = INT8_MIN;
	volatile uint16_t x419 = UINT16_MAX;
	int16_t x420 = INT16_MAX;
	volatile int64_t t98 = -3558022401783428850LL;

	t98 = (x417-(x418|(x419^x420)));

	if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x422 = INT8_MIN;
	int64_t x423 = -1LL;
	volatile int64_t x424 = INT64_MIN;
	int64_t t99 = 756231426164349LL;

	t99 = (x421-(x422|(x423^x424)));

	if (t99 != -218767LL) { NG(); } else { ; }
	
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

