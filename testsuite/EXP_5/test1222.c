#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = UINT32_MAX;
int64_t x3 = -1LL;
static uint64_t x7 = UINT64_MAX;
int64_t x10 = -3738206635757520389LL;
static volatile int8_t x12 = INT8_MIN;
uint64_t t2 = UINT64_MAX;
uint16_t x15 = 58U;
int64_t x18 = INT64_MAX;
static volatile uint32_t x26 = UINT32_MAX;
int64_t x32 = INT64_MIN;
int64_t t7 = -33404262094LL;
int8_t x34 = INT8_MIN;
int8_t x42 = INT8_MAX;
static int32_t x44 = INT32_MAX;
volatile int32_t t10 = 6;
uint32_t x46 = 2975667U;
int64_t x51 = -1LL;
static int64_t x60 = 518936725LL;
volatile int64_t t14 = 1670969895LL;
int32_t x65 = INT32_MIN;
volatile int32_t t16 = INT32_MIN;
int16_t x70 = 1;
int8_t x78 = -1;
volatile int32_t x81 = INT32_MIN;
uint8_t x86 = 1U;
static int8_t x89 = INT8_MIN;
volatile int32_t t23 = -42324411;
volatile uint64_t x98 = 1300777277LLU;
volatile int64_t x108 = INT64_MIN;
int16_t x111 = INT16_MIN;
int8_t x114 = 1;
uint32_t x115 = UINT32_MAX;
static int64_t t29 = INT64_MIN;
int32_t x121 = -1;
int16_t x122 = -1;
volatile int8_t x123 = INT8_MIN;
volatile uint64_t x124 = 113LLU;
uint8_t x126 = 6U;
int32_t x127 = INT32_MIN;
volatile uint32_t t31 = 709443818U;
int16_t x131 = INT16_MAX;
static int32_t t33 = 164;
int32_t x137 = -1;
static uint16_t x154 = UINT16_MAX;
uint32_t x158 = UINT32_MAX;
uint16_t x160 = UINT16_MAX;
int64_t x162 = -1LL;
int64_t x163 = -5210476LL;
volatile int16_t x167 = INT16_MIN;
int32_t t43 = 6763;
int8_t x183 = -52;
volatile int16_t x187 = -1;
uint8_t x189 = UINT8_MAX;
int16_t x195 = INT16_MIN;
int32_t x196 = -1;
uint64_t x203 = 1497699739059340777LLU;
volatile int64_t t52 = -1113031284543112284LL;
int8_t x218 = INT8_MAX;
uint16_t x219 = UINT16_MAX;
uint16_t x224 = 0U;
uint32_t x231 = 13529302U;
uint32_t x236 = UINT32_MAX;
int16_t x238 = -3;
uint64_t x240 = 27425961930499078LLU;
uint32_t x242 = 8836U;
volatile int64_t x243 = INT64_MIN;
uint64_t x244 = 3776614170760LLU;
int64_t x253 = INT64_MAX;
int8_t x257 = INT8_MIN;
static int16_t x259 = 9;
int64_t x260 = -1LL;
uint32_t x264 = UINT32_MAX;
uint16_t x271 = UINT16_MAX;
int8_t x279 = 1;
int8_t x280 = -1;
uint16_t x285 = 54U;
volatile int32_t t72 = -66967984;
uint32_t x298 = 43U;
int16_t x308 = INT16_MAX;
int16_t x317 = INT16_MIN;
int8_t x318 = INT8_MIN;
volatile int8_t x323 = INT8_MIN;
int16_t x330 = INT16_MIN;
volatile uint32_t x331 = 2216968U;
int16_t x342 = INT16_MAX;
int8_t x349 = INT8_MAX;
volatile int64_t t89 = INT64_MIN;
int64_t x361 = 9873338267LL;
volatile uint16_t x370 = UINT16_MAX;
volatile int16_t x371 = 216;
uint64_t t92 = 234897564LLU;
uint32_t x375 = UINT32_MAX;
int32_t t95 = -19869194;
int8_t x389 = INT8_MIN;
int8_t x397 = INT8_MIN;
volatile uint32_t x399 = UINT32_MAX;
static volatile int32_t t99 = -192710;


void f0(void) {
	int16_t x1 = -1;
	static volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1^((x2==x3)*x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 28U;
	volatile int64_t x6 = INT64_MIN;
	int16_t x8 = -179;
	int32_t t1 = 16041;

	t1 = (x5^((x6==x7)*x8));

	if (t1 != 28) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int64_t x11 = INT64_MIN;

	t2 = (x9^((x10==x11)*x12));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	static uint8_t x14 = UINT8_MAX;
	int8_t x16 = -1;
	volatile int32_t t3 = INT32_MIN;

	t3 = (x13^((x14==x15)*x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MIN;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17^((x18==x19)*x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = 18;
	uint8_t x22 = 24U;
	uint32_t x23 = 2069491U;
	int64_t x24 = -1LL;
	volatile int64_t t5 = 1383409701719LL;

	t5 = (x21^((x22==x23)*x24));

	if (t5 != 18LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 1U;
	int64_t x27 = INT64_MIN;
	static uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 33483327408262828LLU;

	t6 = (x25^((x26==x27)*x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -686820;
	int16_t x30 = INT16_MAX;
	int16_t x31 = 1;

	t7 = (x29^((x30==x31)*x32));

	if (t7 != -686820LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = -1614728;
	static int32_t x36 = 2;
	int32_t t8 = INT32_MIN;

	t8 = (x33^((x34==x35)*x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 37U;
	static volatile int16_t x38 = INT16_MAX;
	uint8_t x39 = 0U;
	volatile uint32_t x40 = 19994484U;
	static volatile uint32_t t9 = 55058233U;

	t9 = (x37^((x38==x39)*x40));

	if (t9 != 37U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int8_t x43 = INT8_MAX;

	t10 = (x41^((x42==x43)*x44));

	if (t10 != -2147483521) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 2U;
	int8_t x47 = -2;
	volatile int16_t x48 = -1;
	volatile int32_t t11 = -1;

	t11 = (x45^((x46==x47)*x48));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -61;
	int16_t x50 = 81;
	int32_t x52 = -8;
	volatile int32_t t12 = 1;

	t12 = (x49^((x50==x51)*x52));

	if (t12 != -61) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x53 = 16U;
	int64_t x54 = INT64_MIN;
	uint32_t x55 = UINT32_MAX;
	uint8_t x56 = 3U;
	volatile int32_t t13 = -7736662;

	t13 = (x53^((x54==x55)*x56));

	if (t13 != 16) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 311131079U;
	volatile uint32_t x58 = UINT32_MAX;
	uint64_t x59 = UINT64_MAX;

	t14 = (x57^((x58==x59)*x60));

	if (t14 != 311131079LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x61 = INT64_MIN;
	uint64_t x62 = 221LLU;
	static int64_t x63 = INT64_MIN;
	static uint16_t x64 = 118U;
	volatile int64_t t15 = INT64_MIN;

	t15 = (x61^((x62==x63)*x64));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x66 = 697161;
	uint64_t x67 = 0LLU;
	int16_t x68 = -1972;

	t16 = (x65^((x66==x67)*x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 0U;
	int32_t x71 = INT32_MIN;
	int32_t x72 = 2790;
	int32_t t17 = 44;

	t17 = (x69^((x70==x71)*x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = 77U;
	volatile int64_t x74 = 542911975134453LL;
	int8_t x75 = INT8_MIN;
	uint64_t x76 = 404441175036LLU;
	uint64_t t18 = 8LLU;

	t18 = (x73^((x74==x75)*x76));

	if (t18 != 77LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 84289683LLU;
	uint16_t x79 = 659U;
	volatile int8_t x80 = INT8_MAX;
	uint64_t t19 = 391420484548293879LLU;

	t19 = (x77^((x78==x79)*x80));

	if (t19 != 84289683LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x82 = 74U;
	static int32_t x83 = -1925564;
	volatile uint32_t x84 = 86U;
	uint32_t t20 = 19U;

	t20 = (x81^((x82==x83)*x84));

	if (t20 != 2147483648U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = UINT16_MAX;
	static int64_t x87 = INT64_MIN;
	volatile int64_t x88 = -146845149502973744LL;
	volatile int64_t t21 = 94666872LL;

	t21 = (x85^((x86==x87)*x88));

	if (t21 != 65535LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x90 = -1;
	int16_t x91 = INT16_MIN;
	int64_t x92 = 32767646824LL;
	static int64_t t22 = -30298670589649407LL;

	t22 = (x89^((x90==x91)*x92));

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 6U;
	int64_t x94 = INT64_MIN;
	static volatile uint16_t x95 = 473U;
	static uint16_t x96 = 0U;

	t23 = (x93^((x94==x95)*x96));

	if (t23 != 6) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 0U;
	static int16_t x99 = -1;
	static int16_t x100 = INT16_MAX;
	int32_t t24 = -223;

	t24 = (x97^((x98==x99)*x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 6U;
	uint16_t x102 = 136U;
	uint64_t x103 = 1701942LLU;
	int16_t x104 = 0;
	int32_t t25 = -22;

	t25 = (x101^((x102==x103)*x104));

	if (t25 != 6) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	static int8_t x106 = 5;
	int8_t x107 = INT8_MAX;
	static volatile int64_t t26 = -2414780183881LL;

	t26 = (x105^((x106==x107)*x108));

	if (t26 != 32767LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MAX;
	uint64_t x112 = 929LLU;
	volatile uint64_t t27 = 1015LLU;

	t27 = (x109^((x110==x111)*x112));

	if (t27 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int16_t x116 = INT16_MIN;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x113^((x114==x115)*x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static uint16_t x118 = 1U;
	int64_t x119 = INT64_MAX;
	volatile int32_t x120 = 183;

	t29 = (x117^((x118==x119)*x120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t t30 = UINT64_MAX;

	t30 = (x121^((x122==x123)*x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 1629205U;
	volatile int16_t x128 = 8;

	t31 = (x125^((x126==x127)*x128));

	if (t31 != 1629205U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = 483123453LL;
	static int8_t x130 = INT8_MIN;
	static uint16_t x132 = UINT16_MAX;
	volatile int64_t t32 = -8LL;

	t32 = (x129^((x130==x131)*x132));

	if (t32 != 483123453LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 12U;
	volatile int32_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	volatile int8_t x136 = INT8_MIN;

	t33 = (x133^((x134==x135)*x136));

	if (t33 != -116) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MAX;
	uint16_t x139 = 48U;
	int64_t x140 = -1206180029038LL;
	volatile int64_t t34 = 163381066328LL;

	t34 = (x137^((x138==x139)*x140));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = -983201520854LL;
	int16_t x142 = INT16_MIN;
	static uint16_t x143 = 16985U;
	int16_t x144 = INT16_MAX;
	volatile int64_t t35 = -7864018LL;

	t35 = (x141^((x142==x143)*x144));

	if (t35 != -983201520854LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static int16_t x146 = INT16_MAX;
	int32_t x147 = INT32_MIN;
	static uint32_t x148 = 139149U;
	uint32_t t36 = 361344U;

	t36 = (x145^((x146==x147)*x148));

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	int32_t x150 = 0;
	static uint32_t x151 = 574192659U;
	static volatile int8_t x152 = INT8_MAX;
	volatile int32_t t37 = 54573;

	t37 = (x149^((x150==x151)*x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static int32_t x155 = 15795;
	volatile int8_t x156 = -1;
	int64_t t38 = -58395315000LL;

	t38 = (x153^((x154==x155)*x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 862215U;
	volatile int64_t x159 = -64347557136173LL;
	uint32_t t39 = 1252194652U;

	t39 = (x157^((x158==x159)*x160));

	if (t39 != 862215U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -28;
	volatile int8_t x164 = INT8_MAX;
	int32_t t40 = 1;

	t40 = (x161^((x162==x163)*x164));

	if (t40 != -28) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	static uint32_t x166 = 0U;
	uint64_t x168 = 139963536611978LLU;
	static uint64_t t41 = UINT64_MAX;

	t41 = (x165^((x166==x167)*x168));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 2772U;
	uint64_t x170 = 889895445583032885LLU;
	uint64_t x171 = 21644173233456746LLU;
	volatile uint8_t x172 = 30U;
	volatile int32_t t42 = 102008961;

	t42 = (x169^((x170==x171)*x172));

	if (t42 != 2772) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 0U;
	uint32_t x174 = 788815U;
	int16_t x175 = -1;
	static int8_t x176 = -61;

	t43 = (x173^((x174==x175)*x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x177 = -6325550;
	volatile int64_t x178 = -1039LL;
	int16_t x179 = -17;
	int8_t x180 = -1;
	volatile int32_t t44 = -182983;

	t44 = (x177^((x178==x179)*x180));

	if (t44 != -6325550) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = INT64_MIN;
	int16_t x184 = 67;
	int32_t t45 = -32932804;

	t45 = (x181^((x182==x183)*x184));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 12778U;
	uint8_t x186 = 0U;
	int8_t x188 = -36;
	uint32_t t46 = 151821755U;

	t46 = (x185^((x186==x187)*x188));

	if (t46 != 12778U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x190 = 761823U;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = INT64_MIN;
	int64_t t47 = -452758330197759LL;

	t47 = (x189^((x190==x191)*x192));

	if (t47 != 255LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 148655691U;
	static int8_t x194 = INT8_MAX;
	volatile uint32_t t48 = 1818089U;

	t48 = (x193^((x194==x195)*x196));

	if (t48 != 148655691U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	static volatile int32_t x198 = 58340;
	uint32_t x199 = 2708U;
	int64_t x200 = 13848021323710804LL;
	volatile int64_t t49 = 3342337534LL;

	t49 = (x197^((x198==x199)*x200));

	if (t49 != -32768LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = UINT8_MAX;
	int64_t x202 = INT64_MAX;
	int16_t x204 = 7443;
	int32_t t50 = -66031;

	t50 = (x201^((x202==x203)*x204));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x205 = UINT64_MAX;
	static uint16_t x206 = UINT16_MAX;
	uint8_t x207 = 14U;
	static int8_t x208 = INT8_MIN;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x205^((x206==x207)*x208));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -837809LL;
	static uint64_t x210 = 21139673040062081LLU;
	int32_t x211 = 70;
	int8_t x212 = INT8_MIN;

	t52 = (x209^((x210==x211)*x212));

	if (t52 != -837809LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = -6118;
	static int16_t x216 = -11;
	int32_t t53 = 1569;

	t53 = (x213^((x214==x215)*x216));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	static int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 66326;

	t54 = (x217^((x218==x219)*x220));

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 0;
	static int8_t x222 = INT8_MIN;
	uint8_t x223 = UINT8_MAX;
	volatile int32_t t55 = -3801;

	t55 = (x221^((x222==x223)*x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MAX;
	static volatile uint64_t x226 = UINT64_MAX;
	uint16_t x227 = 4U;
	int32_t x228 = INT32_MIN;
	volatile int32_t t56 = -39;

	t56 = (x225^((x226==x227)*x228));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 64560468512563216LLU;
	int8_t x230 = -3;
	volatile uint32_t x232 = UINT32_MAX;
	volatile uint64_t t57 = 108971LLU;

	t57 = (x229^((x230==x231)*x232));

	if (t57 != 64560468512563216LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 10;
	int64_t x234 = INT64_MIN;
	volatile int8_t x235 = 11;
	volatile uint32_t t58 = 227U;

	t58 = (x233^((x234==x235)*x236));

	if (t58 != 10U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 95U;
	int8_t x239 = INT8_MIN;
	volatile uint64_t t59 = 222137403345500LLU;

	t59 = (x237^((x238==x239)*x240));

	if (t59 != 95LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MAX;
	static uint64_t t60 = 2120780786443536910LLU;

	t60 = (x241^((x242==x243)*x244));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 53U;
	volatile int64_t x246 = -1LL;
	static int32_t x247 = INT32_MIN;
	int64_t x248 = INT64_MIN;
	volatile int64_t t61 = -834375003476LL;

	t61 = (x245^((x246==x247)*x248));

	if (t61 != 53LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 168083841LL;
	static uint64_t x250 = 1976335381241872LLU;
	uint64_t x251 = 483591558LLU;
	int8_t x252 = INT8_MIN;
	volatile int64_t t62 = 109836673221674LL;

	t62 = (x249^((x250==x251)*x252));

	if (t62 != 168083841LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x254 = INT32_MIN;
	static int8_t x255 = INT8_MAX;
	int16_t x256 = INT16_MIN;
	volatile int64_t t63 = INT64_MAX;

	t63 = (x253^((x254==x255)*x256));

	if (t63 != INT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x258 = 0U;
	volatile int64_t t64 = -22LL;

	t64 = (x257^((x258==x259)*x260));

	if (t64 != -128LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MIN;
	int32_t x262 = -8273655;
	static int8_t x263 = 7;
	static uint32_t t65 = 121907U;

	t65 = (x261^((x262==x263)*x264));

	if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int8_t x266 = -1;
	uint64_t x267 = 236837LLU;
	static uint32_t x268 = UINT32_MAX;
	volatile uint32_t t66 = 283975U;

	t66 = (x265^((x266==x267)*x268));

	if (t66 != 2147483648U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MAX;
	int32_t x270 = 3951982;
	uint16_t x272 = 3794U;
	static volatile int32_t t67 = 126954467;

	t67 = (x269^((x270==x271)*x272));

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 351U;
	uint64_t x275 = UINT64_MAX;
	static int8_t x276 = INT8_MAX;
	int32_t t68 = -49475173;

	t68 = (x273^((x274==x275)*x276));

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int16_t x278 = -2;
	static int32_t t69 = 89;

	t69 = (x277^((x278==x279)*x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x281 = 480;
	static volatile int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = UINT32_MAX;
	uint32_t t70 = 1293U;

	t70 = (x281^((x282==x283)*x284));

	if (t70 != 480U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = 76U;
	uint8_t x287 = 5U;
	static volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = 72811542;

	t71 = (x285^((x286==x287)*x288));

	if (t71 != 54) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MIN;
	uint16_t x291 = 204U;
	uint8_t x292 = 97U;

	t72 = (x289^((x290==x291)*x292));

	if (t72 != 255) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x293 = INT16_MIN;
	uint32_t x294 = 137U;
	int16_t x295 = INT16_MAX;
	static uint32_t x296 = 56625U;
	uint32_t t73 = 12600U;

	t73 = (x293^((x294==x295)*x296));

	if (t73 != 4294934528U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 10555441LL;
	int16_t x299 = INT16_MIN;
	uint64_t x300 = 53939091834LLU;
	uint64_t t74 = 27937456025948LLU;

	t74 = (x297^((x298==x299)*x300));

	if (t74 != 10555441LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 2860611140491LLU;
	int64_t x302 = -223853434081909LL;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	static volatile uint64_t t75 = 27LLU;

	t75 = (x301^((x302==x303)*x304));

	if (t75 != 2860611140491LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MAX;
	int32_t x306 = -1;
	int8_t x307 = -24;
	int64_t t76 = INT64_MAX;

	t76 = (x305^((x306==x307)*x308));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -1;
	static uint32_t x310 = 344252531U;
	uint16_t x311 = 117U;
	int64_t x312 = INT64_MIN;
	int64_t t77 = -343053695759768LL;

	t77 = (x309^((x310==x311)*x312));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -29032599;
	int16_t x314 = INT16_MIN;
	volatile int32_t x315 = INT32_MAX;
	int64_t x316 = INT64_MIN;
	int64_t t78 = 1LL;

	t78 = (x313^((x314==x315)*x316));

	if (t78 != -29032599LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x319 = UINT16_MAX;
	int32_t x320 = INT32_MIN;
	static int32_t t79 = 7246675;

	t79 = (x317^((x318==x319)*x320));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = 648331525;
	static uint16_t x324 = 1661U;
	int64_t t80 = INT64_MIN;

	t80 = (x321^((x322==x323)*x324));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x325 = 0;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	volatile int16_t x328 = -1;
	volatile int32_t t81 = -1;

	t81 = (x325^((x326==x327)*x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 1U;
	int32_t x332 = INT32_MIN;
	volatile int32_t t82 = 1;

	t82 = (x329^((x330==x331)*x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x333 = 11U;
	int8_t x334 = -51;
	int64_t x335 = -1LL;
	static volatile uint8_t x336 = 3U;
	volatile int32_t t83 = 113550966;

	t83 = (x333^((x334==x335)*x336));

	if (t83 != 11) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MAX;
	volatile int64_t x338 = INT64_MIN;
	int32_t x339 = INT32_MIN;
	uint64_t x340 = 2450LLU;
	static volatile uint64_t t84 = 10LLU;

	t84 = (x337^((x338==x339)*x340));

	if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x341 = 0;
	int16_t x343 = INT16_MIN;
	int16_t x344 = INT16_MAX;
	int32_t t85 = -2;

	t85 = (x341^((x342==x343)*x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	int64_t x346 = INT64_MAX;
	int32_t x347 = -233443173;
	uint32_t x348 = 72U;
	uint32_t t86 = 1506U;

	t86 = (x345^((x346==x347)*x348));

	if (t86 != 4294967168U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = INT16_MAX;
	int64_t x351 = -1LL;
	volatile int64_t x352 = -1LL;
	int64_t t87 = 184197177534790LL;

	t87 = (x349^((x350==x351)*x352));

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	int32_t x354 = 8645;
	uint32_t x355 = 14496321U;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 484783064;

	t88 = (x353^((x354==x355)*x356));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int64_t x358 = -11219996921LL;
	static volatile int64_t x359 = INT64_MIN;
	volatile int16_t x360 = 1;

	t89 = (x357^((x358==x359)*x360));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = -1;
	uint32_t x363 = 60641U;
	uint32_t x364 = UINT32_MAX;
	static int64_t t90 = 704650483147LL;

	t90 = (x361^((x362==x363)*x364));

	if (t90 != 9873338267LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = UINT16_MAX;
	volatile uint32_t x366 = 52U;
	uint64_t x367 = 133539218524509LLU;
	uint16_t x368 = 0U;
	volatile int32_t t91 = 5539038;

	t91 = (x365^((x366==x367)*x368));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = UINT32_MAX;
	uint64_t x372 = 13023527118424810LLU;

	t92 = (x369^((x370==x371)*x372));

	if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x373 = UINT16_MAX;
	int8_t x374 = INT8_MIN;
	int64_t x376 = INT64_MAX;
	static int64_t t93 = -836602484116LL;

	t93 = (x373^((x374==x375)*x376));

	if (t93 != 65535LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = 1;
	uint8_t x379 = 101U;
	static uint16_t x380 = 919U;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (x377^((x378==x379)*x380));

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = -1;
	int32_t x382 = -42665;
	int8_t x383 = -1;
	volatile int16_t x384 = 2577;

	t95 = (x381^((x382==x383)*x384));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 64411708U;
	int32_t x386 = 7887068;
	int32_t x387 = -1144130;
	volatile int64_t x388 = -4992821787LL;
	static volatile int64_t t96 = -1783LL;

	t96 = (x385^((x386==x387)*x388));

	if (t96 != 64411708LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x390 = 204U;
	static int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t97 = -1798;

	t97 = (x389^((x390==x391)*x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = -7;
	int32_t x394 = 396712;
	int8_t x395 = 19;
	int8_t x396 = INT8_MAX;
	static int32_t t98 = -22;

	t98 = (x393^((x394==x395)*x396));

	if (t98 != -7) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x398 = UINT32_MAX;
	int8_t x400 = INT8_MIN;

	t99 = (x397^((x398==x399)*x400));

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

