#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 18U;
volatile uint64_t t1 = 2LLU;
static int8_t x15 = 42;
static int16_t x16 = INT16_MAX;
int32_t x23 = INT32_MIN;
int32_t x28 = -1;
static uint16_t x41 = 2684U;
int16_t x45 = INT16_MIN;
static volatile uint32_t t15 = 12816U;
int64_t t17 = 124663178932646242LL;
int32_t t18 = 68935;
int8_t x77 = -6;
int16_t x81 = INT16_MIN;
uint8_t x82 = 5U;
volatile int64_t x92 = 1684532LL;
int64_t x95 = 94936983LL;
uint16_t x96 = 175U;
static int64_t x98 = INT64_MAX;
int64_t x109 = -165247887483LL;
int32_t x112 = INT32_MAX;
uint16_t x116 = 8014U;
volatile uint64_t t28 = 17318975436240934LLU;
static int32_t t30 = 166;
int16_t x125 = 10392;
int32_t x126 = INT32_MIN;
volatile uint32_t t31 = 680869615U;
static int8_t x131 = INT8_MAX;
int16_t x134 = 1;
volatile int16_t x146 = INT16_MIN;
volatile uint16_t x149 = UINT16_MAX;
uint8_t x150 = UINT8_MAX;
int32_t t37 = 11312;
static uint16_t x154 = UINT16_MAX;
int64_t t38 = -391780LL;
volatile int64_t x162 = INT64_MAX;
int8_t x164 = INT8_MAX;
int8_t x165 = INT8_MAX;
volatile uint8_t x169 = 27U;
static volatile int64_t t43 = 276586469670488568LL;
int8_t x177 = INT8_MAX;
int32_t x187 = INT32_MIN;
static volatile uint64_t t46 = 833734051LLU;
static int32_t x189 = -8;
int64_t x195 = 416835LL;
int64_t x197 = -1LL;
int32_t x199 = -1;
volatile int32_t x219 = INT32_MIN;
int32_t t53 = 2495;
int8_t x229 = 0;
int64_t t56 = 4032665451149284180LL;
int8_t x233 = 1;
uint64_t x235 = 23215722029LLU;
int16_t x240 = -1;
uint32_t x242 = 57083879U;
int8_t x244 = INT8_MIN;
volatile uint32_t t59 = 30651U;
int64_t x248 = INT64_MAX;
int64_t t60 = -268LL;
int64_t t61 = -7778185LL;
int8_t x264 = -1;
uint64_t x265 = 130663682LLU;
int8_t x269 = 13;
uint8_t x290 = 6U;
int16_t x291 = INT16_MAX;
int8_t x292 = INT8_MIN;
int32_t x297 = -993705;
int8_t x300 = -28;
int32_t t73 = 803;
static uint32_t x304 = 128374U;
volatile int32_t x324 = -2777;
volatile int64_t t79 = 12554315LL;
uint8_t x326 = UINT8_MAX;
uint64_t x330 = UINT64_MAX;
static int32_t x331 = -1;
volatile int16_t x333 = -1;
volatile int64_t x334 = INT64_MAX;
volatile uint64_t t83 = 1255900585354LLU;
static uint16_t x345 = 302U;
int32_t x347 = 392168733;
int64_t x350 = INT64_MAX;
uint64_t x354 = UINT64_MAX;
int16_t x356 = INT16_MIN;
int64_t x357 = -1LL;
volatile uint32_t x360 = UINT32_MAX;
int32_t x367 = INT32_MIN;
uint64_t t90 = 1065719802LLU;
uint64_t x370 = 10198288700LLU;
int8_t x372 = INT8_MAX;
int64_t x389 = INT64_MIN;
int8_t x391 = -3;
static volatile int32_t x399 = -1;
static uint64_t t99 = 23212LLU;


void f0(void) {
	int8_t x1 = -8;
	uint32_t x2 = UINT32_MAX;
	int32_t x4 = 201;
	uint32_t t0 = 8495749U;

	t0 = (x1/(x2|(x3^x4)));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 523LL;
	uint64_t x6 = 72LLU;
	int32_t x7 = INT32_MAX;
	static volatile int64_t x8 = INT64_MAX;

	t1 = (x5/(x6|(x7^x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	uint16_t x10 = UINT16_MAX;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = 126U;
	int64_t t2 = -111796829093568831LL;

	t2 = (x9/(x10|(x11^x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = -1;
	int32_t t3 = 7472094;

	t3 = (x13/(x14|(x15^x16)));

	if (t3 != 32768) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	int8_t x18 = INT8_MIN;
	int8_t x19 = 1;
	uint64_t x20 = 94789733856655304LLU;
	volatile uint64_t t4 = 4091286013978LLU;

	t4 = (x17/(x18|(x19^x20)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 1U;
	uint8_t x22 = 23U;
	int32_t x24 = -1;
	volatile int32_t t5 = -123107;

	t5 = (x21/(x22|(x23^x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 573140860805144LLU;
	int64_t x26 = INT64_MAX;
	uint8_t x27 = 85U;
	volatile uint64_t t6 = 299348LLU;

	t6 = (x25/(x26|(x27^x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -2996457;
	int32_t x30 = INT32_MIN;
	uint64_t x31 = 1071111886040303377LLU;
	int64_t x32 = INT64_MIN;
	volatile uint64_t t7 = 255396150534073LLU;

	t7 = (x29/(x30|(x31^x32)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 21813011820363LLU;
	uint16_t x34 = 31484U;
	static int64_t x35 = INT64_MAX;
	int8_t x36 = INT8_MAX;
	volatile uint64_t t8 = 15541926641643734LLU;

	t8 = (x33/(x34|(x35^x36)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int8_t x38 = INT8_MAX;
	int32_t x39 = INT32_MAX;
	int32_t x40 = INT32_MAX;
	int32_t t9 = 147483;

	t9 = (x37/(x38|(x39^x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	int32_t x43 = -1;
	uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 786750412;

	t10 = (x41/(x42|(x43^x44)));

	if (t10 != -2684) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = 1266U;
	uint16_t x47 = UINT16_MAX;
	int64_t x48 = INT64_MAX;
	volatile int64_t t11 = -112LL;

	t11 = (x45/(x46|(x47^x48)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	uint32_t x50 = 26272U;
	static uint16_t x51 = 2478U;
	uint16_t x52 = UINT16_MAX;
	uint32_t t12 = 173U;

	t12 = (x49/(x50|(x51^x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	volatile int64_t x54 = -1LL;
	uint64_t x55 = 668443389LLU;
	uint8_t x56 = 4U;
	uint64_t t13 = 0LLU;

	t13 = (x53/(x54|(x55^x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	static int8_t x58 = -1;
	uint32_t x59 = 214707425U;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 118806792623347LL;

	t14 = (x57/(x58|(x59^x60)));

	if (t14 != -32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = UINT32_MAX;
	uint16_t x62 = 7U;
	static volatile int16_t x63 = INT16_MIN;
	static int16_t x64 = 22;

	t15 = (x61/(x62|(x63^x64)));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = 4;
	static int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MIN;
	int64_t x68 = INT64_MAX;
	static int64_t t16 = 28LL;

	t16 = (x65/(x66|(x67^x68)));

	if (t16 != -4LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -49;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	int64_t x72 = -129LL;

	t17 = (x69/(x70|(x71^x72)));

	if (t17 != 49LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = 4U;
	static int16_t x75 = INT16_MAX;
	int16_t x76 = -261;

	t18 = (x73/(x74|(x75^x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	static int8_t x79 = -1;
	uint8_t x80 = 108U;
	volatile int64_t t19 = 22799LL;

	t19 = (x77/(x78|(x79^x80)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x83 = 3U;
	static int32_t x84 = INT32_MAX;
	volatile int32_t t20 = 11516103;

	t20 = (x81/(x82|(x83^x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MAX;
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	uint8_t x88 = 0U;
	int32_t t21 = 146;

	t21 = (x85/(x86|(x87^x88)));

	if (t21 != -255) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = 150;
	static int64_t x90 = INT64_MAX;
	volatile int8_t x91 = -1;
	static int64_t t22 = 232992807849811319LL;

	t22 = (x89/(x90|(x91^x92)));

	if (t22 != -150LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x94 = INT32_MIN;
	volatile int64_t t23 = -643404791952170896LL;

	t23 = (x93/(x94|(x95^x96)));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	static int8_t x99 = INT8_MIN;
	volatile int8_t x100 = -18;
	static int64_t t24 = -47LL;

	t24 = (x97/(x98|(x99^x100)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -6823148786131406LL;
	volatile uint32_t x102 = 14068426U;
	uint64_t x103 = 54780033536LLU;
	static volatile int64_t x104 = INT64_MAX;
	static uint64_t t25 = 195471940523408410LLU;

	t25 = (x101/(x102|(x103^x104)));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x105 = 1978137LLU;
	int16_t x106 = INT16_MIN;
	static uint16_t x107 = 16U;
	volatile int16_t x108 = -1;
	static volatile uint64_t t26 = 85650393904388526LLU;

	t26 = (x105/(x106|(x107^x108)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x110 = -1;
	uint32_t x111 = UINT32_MAX;
	int64_t t27 = 55269026234306LL;

	t27 = (x109/(x110|(x111^x112)));

	if (t27 != -38LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -850340099;
	uint64_t x114 = UINT64_MAX;
	int16_t x115 = INT16_MIN;

	t28 = (x113/(x114|(x115^x116)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MAX;
	uint16_t x118 = 513U;
	volatile uint8_t x119 = 63U;
	static int16_t x120 = INT16_MAX;
	static int32_t t29 = -370;

	t29 = (x117/(x118|(x119^x120)));

	if (t29 != 65662) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -5;
	int16_t x122 = -16019;
	int32_t x123 = -1;
	int8_t x124 = INT8_MAX;

	t30 = (x121/(x122|(x123^x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x127 = 489347U;
	int16_t x128 = 1;

	t31 = (x125/(x126|(x127^x128)));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 1;
	int8_t x130 = -1;
	volatile uint32_t x132 = 185087U;
	volatile uint32_t t32 = 11025181U;

	t32 = (x129/(x130|(x131^x132)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	int16_t x135 = 0;
	static uint8_t x136 = 30U;
	volatile int32_t t33 = 1;

	t33 = (x133/(x134|(x135^x136)));

	if (t33 != 2114) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x137 = INT64_MAX;
	static int8_t x138 = INT8_MAX;
	uint16_t x139 = 1019U;
	static int16_t x140 = INT16_MIN;
	volatile int64_t t34 = 196417355876LL;

	t34 = (x137/(x138|(x139^x140)));

	if (t34 != -290545661894937LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = -1;
	static uint16_t x142 = 3U;
	static int8_t x143 = INT8_MAX;
	static uint64_t x144 = UINT64_MAX;
	uint64_t t35 = 9297637906204LLU;

	t35 = (x141/(x142|(x143^x144)));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	uint16_t x147 = 6U;
	int32_t x148 = INT32_MAX;
	volatile int32_t t36 = -1826987;

	t36 = (x145/(x146|(x147^x148)));

	if (t36 != -18) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x151 = 536U;
	int16_t x152 = INT16_MIN;

	t37 = (x149/(x150|(x151^x152)));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	uint8_t x155 = UINT8_MAX;
	int64_t x156 = 1213147546027LL;

	t38 = (x153/(x154|(x155^x156)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = -1;
	uint64_t x158 = 1LLU;
	static int64_t x159 = INT64_MIN;
	static volatile int32_t x160 = INT32_MIN;
	uint64_t t39 = 59697370954811907LLU;

	t39 = (x157/(x158|(x159^x160)));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x163 = INT8_MIN;
	volatile int64_t t40 = -13996797LL;

	t40 = (x161/(x162|(x163^x164)));

	if (t40 != -65535LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x166 = -1;
	volatile int8_t x167 = 1;
	int32_t x168 = -1;
	volatile int32_t t41 = 0;

	t41 = (x165/(x166|(x167^x168)));

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MAX;
	volatile uint16_t x171 = 4009U;
	volatile int8_t x172 = -15;
	int32_t t42 = 1;

	t42 = (x169/(x170|(x171^x172)));

	if (t42 != -27) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 122U;
	uint32_t x174 = UINT32_MAX;
	uint16_t x175 = 2U;
	int64_t x176 = INT64_MIN;

	t43 = (x173/(x174|(x175^x176)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x178 = UINT32_MAX;
	int64_t x179 = INT64_MIN;
	uint16_t x180 = 34U;
	int64_t t44 = 33369036105520798LL;

	t44 = (x177/(x178|(x179^x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -990165582LL;
	int64_t x182 = -1LL;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	int64_t t45 = 3711365LL;

	t45 = (x181/(x182|(x183^x184)));

	if (t45 != 990165582LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 1365U;
	static uint16_t x186 = 7U;
	static uint64_t x188 = UINT64_MAX;

	t46 = (x185/(x186|(x187^x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = INT32_MAX;
	int8_t x191 = -1;
	int64_t x192 = -992602630563249768LL;
	volatile int64_t t47 = -296237331LL;

	t47 = (x189/(x190|(x191^x192)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = UINT8_MAX;
	volatile uint64_t x194 = UINT64_MAX;
	static uint32_t x196 = UINT32_MAX;
	static volatile uint64_t t48 = 1225739987344LLU;

	t48 = (x193/(x194|(x195^x196)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = 1;
	uint64_t x200 = 123LLU;
	static uint64_t t49 = 99LLU;

	t49 = (x197/(x198|(x199^x200)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int8_t x205 = 1;
	int16_t x206 = -1;
	int16_t x207 = INT16_MAX;
	int32_t x208 = 5;
	static volatile int32_t t50 = -1;

	t50 = (x205/(x206|(x207^x208)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x209 = -1LL;
	uint8_t x210 = 0U;
	static int16_t x211 = INT16_MAX;
	uint8_t x212 = 1U;
	volatile int64_t t51 = -4134388202LL;

	t51 = (x209/(x210|(x211^x212)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MAX;
	int8_t x215 = -4;
	int16_t x216 = -1;
	int64_t t52 = -3212094LL;

	t52 = (x213/(x214|(x215^x216)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x217 = -2;
	static int32_t x218 = -5;
	uint16_t x220 = UINT16_MAX;

	t53 = (x217/(x218|(x219^x220)));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	uint32_t x222 = 8U;
	static int8_t x223 = 6;
	int16_t x224 = 143;
	volatile uint32_t t54 = 2211U;

	t54 = (x221/(x222|(x223^x224)));

	if (t54 != 15675063U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MIN;
	uint32_t x226 = UINT32_MAX;
	uint64_t x227 = UINT64_MAX;
	uint8_t x228 = 2U;
	volatile uint64_t t55 = 211628084865746645LLU;

	t55 = (x225/(x226|(x227^x228)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x230 = -1;
	int64_t x231 = -1596560LL;
	uint32_t x232 = 254992U;

	t56 = (x229/(x230|(x231^x232)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x234 = INT16_MIN;
	volatile int8_t x236 = INT8_MIN;
	volatile uint64_t t57 = 467LLU;

	t57 = (x233/(x234|(x235^x236)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	static int64_t x238 = -1LL;
	int64_t x239 = INT64_MIN;
	int64_t t58 = 1326377LL;

	t58 = (x237/(x238|(x239^x240)));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MIN;
	volatile uint8_t x243 = 1U;

	t59 = (x241/(x242|(x243^x244)));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = -1LL;
	static int16_t x246 = -1;
	volatile int32_t x247 = INT32_MIN;

	t60 = (x245/(x246|(x247^x248)));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x249 = UINT16_MAX;
	static int8_t x250 = INT8_MIN;
	int64_t x251 = 88709LL;
	int64_t x252 = -1LL;

	t61 = (x249/(x250|(x251^x252)));

	if (t61 != -10922LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = -9;
	uint32_t x254 = UINT32_MAX;
	uint64_t x255 = 218632LLU;
	uint32_t x256 = 18818807U;
	uint64_t t62 = 86516667990LLU;

	t62 = (x253/(x254|(x255^x256)));

	if (t62 != 4294967296LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	uint8_t x258 = 21U;
	int64_t x259 = 290384449858711351LL;
	static volatile int16_t x260 = INT16_MIN;
	int64_t t63 = 411057363LL;

	t63 = (x257/(x258|(x259^x260)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MAX;
	uint8_t x262 = UINT8_MAX;
	uint32_t x263 = 2551237U;
	int64_t t64 = 4LL;

	t64 = (x261/(x262|(x263^x264)));

	if (t64 != 2148759926LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x266 = INT64_MIN;
	uint16_t x267 = 192U;
	static int8_t x268 = INT8_MIN;
	uint64_t t65 = 1560LLU;

	t65 = (x265/(x266|(x267^x268)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x270 = 1U;
	volatile int16_t x271 = INT16_MIN;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t66 = 1956397367549755216LLU;

	t66 = (x269/(x270|(x271^x272)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x273 = 1375U;
	uint32_t x274 = 304U;
	volatile uint32_t x275 = 686202U;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t67 = 91LLU;

	t67 = (x273/(x274|(x275^x276)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = 0U;
	uint32_t x278 = UINT32_MAX;
	int8_t x279 = 18;
	int16_t x280 = 30;
	volatile uint32_t t68 = 328U;

	t68 = (x277/(x278|(x279^x280)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = UINT32_MAX;
	int16_t x282 = INT16_MAX;
	static int32_t x283 = INT32_MIN;
	int32_t x284 = -13502095;
	volatile uint32_t t69 = 302531446U;

	t69 = (x281/(x282|(x283^x284)));

	if (t69 != 2U) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x285 = INT16_MIN;
	uint8_t x286 = UINT8_MAX;
	uint16_t x287 = 18U;
	static int64_t x288 = INT64_MIN;
	int64_t t70 = -125504029903LL;

	t70 = (x285/(x286|(x287^x288)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	volatile int32_t t71 = -8;

	t71 = (x289/(x290|(x291^x292)));

	if (t71 != -65790) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x293 = UINT8_MAX;
	static uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 1321606380LLU;
	int32_t x296 = INT32_MAX;
	volatile uint64_t t72 = 1134579LLU;

	t72 = (x293/(x294|(x295^x296)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x298 = 3U;
	volatile uint16_t x299 = UINT16_MAX;

	t73 = (x297/(x298|(x299^x300)));

	if (t73 != 15) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = UINT64_MAX;
	static int32_t x302 = INT32_MAX;
	uint32_t x303 = 109U;
	uint64_t t74 = 3LLU;

	t74 = (x301/(x302|(x303^x304)));

	if (t74 != 8589934596LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x305 = 30801763LLU;
	uint8_t x306 = 10U;
	volatile int32_t x307 = -14;
	static int8_t x308 = INT8_MIN;
	static volatile uint64_t t75 = 15716540909423106LLU;

	t75 = (x305/(x306|(x307^x308)));

	if (t75 != 252473LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x309 = INT64_MIN;
	volatile uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MIN;
	int32_t x312 = INT32_MIN;
	volatile int64_t t76 = -69LL;

	t76 = (x309/(x310|(x311^x312)));

	if (t76 != -4295032322LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t77 = -458645149;

	t77 = (x313/(x314|(x315^x316)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x317 = -1767;
	volatile uint8_t x318 = UINT8_MAX;
	static volatile int16_t x319 = -1;
	uint32_t x320 = UINT32_MAX;
	volatile uint32_t t78 = 9696U;

	t78 = (x317/(x318|(x319^x320)));

	if (t78 != 16843002U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = 4896;
	int32_t x322 = -1;
	int64_t x323 = -1LL;

	t79 = (x321/(x322|(x323^x324)));

	if (t79 != -4896LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x325 = 825624323LLU;
	int16_t x327 = INT16_MAX;
	uint8_t x328 = 0U;
	uint64_t t80 = 30052855954407340LLU;

	t80 = (x325/(x326|(x327^x328)));

	if (t80 != 25196LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = INT64_MIN;
	volatile int8_t x332 = INT8_MIN;
	uint64_t t81 = 62781277999LLU;

	t81 = (x329/(x330|(x331^x332)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x335 = INT16_MAX;
	int8_t x336 = 1;
	int64_t t82 = 116982605063LL;

	t82 = (x333/(x334|(x335^x336)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x337 = 1307184316957LLU;
	uint32_t x338 = 3658U;
	uint16_t x339 = UINT16_MAX;
	int16_t x340 = INT16_MIN;

	t83 = (x337/(x338|(x339^x340)));

	if (t83 != 304LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = -54;
	static int32_t x342 = INT32_MIN;
	volatile int64_t x343 = -3892039LL;
	uint64_t x344 = 4116526LLU;
	volatile uint64_t t84 = 357LLU;

	t84 = (x341/(x342|(x343^x344)));

	if (t84 != 1LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x346 = INT64_MIN;
	uint32_t x348 = UINT32_MAX;
	int64_t t85 = 7508884702102664LL;

	t85 = (x345/(x346|(x347^x348)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x349 = INT8_MIN;
	int64_t x351 = -12139832LL;
	int32_t x352 = 0;
	int64_t t86 = -823530431LL;

	t86 = (x349/(x350|(x351^x352)));

	if (t86 != 128LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x353 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	volatile uint64_t t87 = 66467LLU;

	t87 = (x353/(x354|(x355^x356)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x358 = -1;
	static uint64_t x359 = 0LLU;
	volatile uint64_t t88 = 7227215481LLU;

	t88 = (x357/(x358|(x359^x360)));

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = 122;
	static uint16_t x364 = 3U;
	int32_t t89 = 406210;

	t89 = (x361/(x362|(x363^x364)));

	if (t89 != -65538) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	volatile uint64_t x368 = 44701917429186LLU;

	t90 = (x365/(x366|(x367^x368)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 10U;
	int8_t x371 = INT8_MIN;
	volatile uint64_t t91 = 684582926LLU;

	t91 = (x369/(x370|(x371^x372)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x373 = 5;
	int16_t x374 = INT16_MIN;
	volatile int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MIN;
	volatile int64_t t92 = 504191236404183LL;

	t92 = (x373/(x374|(x375^x376)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x377 = INT16_MIN;
	int32_t x378 = INT32_MIN;
	int32_t x379 = -201515;
	int32_t x380 = INT32_MAX;
	static volatile int32_t t93 = -25;

	t93 = (x377/(x378|(x379^x380)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x381 = INT16_MIN;
	static int16_t x382 = 0;
	int64_t x383 = INT64_MIN;
	int32_t x384 = 62471878;
	static int64_t t94 = 2310460837LL;

	t94 = (x381/(x382|(x383^x384)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x385 = 13;
	int64_t x386 = -1LL;
	uint64_t x387 = UINT64_MAX;
	uint32_t x388 = UINT32_MAX;
	uint64_t t95 = 476439071401LLU;

	t95 = (x385/(x386|(x387^x388)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x390 = INT8_MIN;
	uint8_t x392 = 10U;
	volatile int64_t t96 = -121281293692078LL;

	t96 = (x389/(x390|(x391^x392)));

	if (t96 != 1024819115206086200LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x393 = INT32_MAX;
	int8_t x394 = -1;
	static int8_t x395 = 1;
	uint8_t x396 = 109U;
	volatile int32_t t97 = -446624;

	t97 = (x393/(x394|(x395^x396)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = -1LL;
	static uint8_t x398 = 14U;
	int16_t x400 = -1;
	int64_t t98 = 17LL;

	t98 = (x397/(x398|(x399^x400)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x401 = 8483291215885189LLU;
	int32_t x402 = 172;
	int8_t x403 = INT8_MAX;
	int16_t x404 = 0;

	t99 = (x401/(x402|(x403^x404)));

	if (t99 != 33267808689745LLU) { NG(); } else { ; }
	
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

