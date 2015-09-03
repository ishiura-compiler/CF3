#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x4 = 910U;
static uint16_t x6 = 4U;
static volatile int64_t t1 = -392198088020544668LL;
static uint64_t x10 = 918987158759LLU;
volatile int16_t x12 = INT16_MAX;
static int32_t x15 = INT32_MIN;
uint32_t x20 = UINT32_MAX;
static int32_t x21 = INT32_MAX;
int32_t x26 = INT32_MIN;
int8_t x28 = INT8_MAX;
static int32_t x29 = INT32_MIN;
int32_t x30 = INT32_MIN;
uint8_t x33 = 1U;
static int32_t x34 = -889;
static int64_t t11 = -27363LL;
int8_t x52 = INT8_MIN;
volatile int32_t t12 = 4;
volatile int64_t x59 = -1LL;
int32_t x67 = 64210;
int32_t t16 = 2568;
volatile int16_t x81 = INT16_MIN;
uint32_t x87 = 187282U;
uint8_t x93 = 3U;
uint32_t x96 = 32099572U;
int32_t x98 = INT32_MAX;
static uint64_t x107 = UINT64_MAX;
int32_t x108 = INT32_MIN;
volatile int16_t x113 = INT16_MAX;
int32_t t27 = -3307287;
uint16_t x134 = 1181U;
int32_t t31 = 620;
static int8_t x138 = -1;
int16_t x144 = INT16_MIN;
volatile int32_t t34 = -1641;
int32_t x159 = -30132;
static uint32_t x160 = 2140904298U;
static int16_t x162 = -1;
static int32_t t37 = -196006;
static int16_t x166 = -1;
volatile int8_t x177 = 0;
int16_t x179 = INT16_MAX;
volatile int32_t x181 = 146696329;
volatile uint64_t x190 = UINT64_MAX;
static int64_t x191 = -443119221569552LL;
uint16_t x193 = 440U;
volatile uint32_t x195 = UINT32_MAX;
int32_t x203 = -1;
volatile int8_t x207 = 1;
int32_t t51 = -50027983;
int16_t x224 = 0;
int8_t x225 = INT8_MIN;
volatile int32_t x228 = -96844478;
int32_t t53 = -492939470;
static int64_t x241 = -1LL;
int16_t x242 = -1;
uint32_t x248 = 0U;
uint8_t x253 = 14U;
volatile uint16_t x258 = 2510U;
int16_t x260 = -3;
volatile int32_t t62 = -8615;
uint64_t x273 = UINT64_MAX;
int64_t t66 = -5789366512746904LL;
int64_t x287 = -1LL;
uint32_t x312 = UINT32_MAX;
uint64_t t72 = 30877LLU;
int8_t x326 = INT8_MIN;
volatile int32_t x327 = INT32_MIN;
volatile uint64_t x338 = UINT64_MAX;
int32_t x339 = INT32_MIN;
static int32_t x341 = INT32_MIN;
int64_t x343 = INT64_MIN;
static int32_t x345 = -230284;
uint16_t x347 = UINT16_MAX;
uint64_t x350 = UINT64_MAX;
uint16_t x351 = UINT16_MAX;
uint64_t t82 = 102464842094810268LLU;
int64_t x364 = -241615697858628LL;
int64_t t84 = -64LL;
volatile uint64_t t88 = 110600LLU;
int16_t x402 = INT16_MAX;
static int16_t x405 = INT16_MIN;
static int16_t x411 = INT16_MAX;
static uint8_t x413 = 6U;
uint8_t x422 = 0U;
int16_t x426 = INT16_MAX;
static volatile uint64_t t98 = 9838893LLU;
volatile int64_t t99 = 4LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MIN;
	static int64_t x3 = -1LL;
	int64_t t0 = -96338457LL;

	t0 = (((x1^x2)/x3)-x4);

	if (t0 != -9223372034707293070LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int64_t x7 = -2279507086581930077LL;
	int16_t x8 = INT16_MAX;

	t1 = (((x5^x6)/x7)-x8);

	if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	static uint64_t t2 = 17517087391437209LLU;

	t2 = (((x9^x10)/x11)-x12);

	if (t2 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	static volatile int32_t x14 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 231789124;

	t3 = (((x13^x14)/x15)-x16);

	if (t3 != 128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -6310LL;
	int32_t x18 = INT32_MAX;
	int32_t x19 = INT32_MAX;
	int64_t t4 = 11408637534156LL;

	t4 = (((x17^x18)/x19)-x20);

	if (t4 != -4294967295LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x22 = UINT64_MAX;
	int32_t x23 = -1;
	int32_t x24 = -5737718;
	uint64_t t5 = 3783570363399441LLU;

	t5 = (((x21^x22)/x23)-x24);

	if (t5 != 5737718LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 73U;
	volatile int16_t x27 = -1;
	volatile int32_t t6 = 2;

	t6 = (((x25^x26)/x27)-x28);

	if (t6 != 2147483448) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x31 = -1LL;
	int16_t x32 = INT16_MIN;
	static volatile int64_t t7 = -7854460057168326LL;

	t7 = (((x29^x30)/x31)-x32);

	if (t7 != 32768LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x35 = INT64_MAX;
	volatile int32_t x36 = INT32_MAX;
	int64_t t8 = 7LL;

	t8 = (((x33^x34)/x35)-x36);

	if (t8 != -2147483647LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 703U;
	int32_t x38 = INT32_MAX;
	int8_t x39 = INT8_MIN;
	volatile int16_t x40 = -1;
	volatile int32_t t9 = -591857;

	t9 = (((x37^x38)/x39)-x40);

	if (t9 != -16777209) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = INT16_MAX;
	static int64_t x42 = -1LL;
	static int16_t x43 = -1;
	uint16_t x44 = 173U;
	volatile int64_t t10 = -2664188633125759LL;

	t10 = (((x41^x42)/x43)-x44);

	if (t10 != 32595LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = 0;
	int32_t x46 = INT32_MIN;
	int64_t x47 = INT64_MIN;
	static uint16_t x48 = UINT16_MAX;

	t11 = (((x45^x46)/x47)-x48);

	if (t11 != -65535LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = -92661;
	int16_t x50 = -1;
	int32_t x51 = 7;

	t12 = (((x49^x50)/x51)-x52);

	if (t12 != 13365) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int32_t x54 = -2016;
	int32_t x55 = -3653;
	uint64_t x56 = 0LLU;
	static uint64_t t13 = 281695080202LLU;

	t13 = (((x53^x54)/x55)-x56);

	if (t13 != 587867LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = 2782812386105954720LL;
	int64_t x60 = -1LL;
	volatile int64_t t14 = 1472648174234623LL;

	t14 = (((x57^x58)/x59)-x60);

	if (t14 != 2782812386105978465LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = INT16_MAX;
	int16_t x63 = INT16_MIN;
	static uint32_t x64 = 7U;
	uint32_t t15 = 7U;

	t15 = (((x61^x62)/x63)-x64);

	if (t15 != 4294967289U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x68 = INT8_MIN;

	t16 = (((x65^x66)/x67)-x68);

	if (t16 != 128) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = UINT64_MAX;
	uint16_t x70 = 12221U;
	volatile int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	uint64_t t17 = 445219835973447LLU;

	t17 = (((x69^x70)/x71)-x72);

	if (t17 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x74 = UINT16_MAX;
	uint16_t x75 = UINT16_MAX;
	volatile uint8_t x76 = 10U;
	int32_t t18 = 409;

	t18 = (((x73^x74)/x75)-x76);

	if (t18 != -32777) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = 0;
	int32_t x78 = 213829;
	int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 3688269;

	t19 = (((x77^x78)/x79)-x80);

	if (t19 != 31098) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	uint64_t x83 = 10905LLU;
	static int16_t x84 = INT16_MIN;
	static volatile uint64_t t20 = 13466465121578LLU;

	t20 = (((x81^x82)/x83)-x84);

	if (t20 != 32771LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -3;
	int8_t x86 = INT8_MIN;
	volatile int32_t x88 = -7907621;
	uint32_t t21 = 1U;

	t21 = (((x85^x86)/x87)-x88);

	if (t21 != 7907621U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x94 = 25U;
	int32_t x95 = INT32_MAX;
	volatile uint32_t t22 = 39355593U;

	t22 = (((x93^x94)/x95)-x96);

	if (t22 != 4262867724U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x97 = 1756172465U;
	int64_t x99 = -1LL;
	int16_t x100 = -381;
	volatile int64_t t23 = 18558182LL;

	t23 = (((x97^x98)/x99)-x100);

	if (t23 != -391310801LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x105 = INT64_MIN;
	int32_t x106 = INT32_MAX;
	static uint64_t t24 = 34134839666097LLU;

	t24 = (((x105^x106)/x107)-x108);

	if (t24 != 2147483648LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = -20;
	static int32_t x110 = -1;
	uint16_t x111 = 1U;
	uint16_t x112 = 2U;
	static int32_t t25 = -95310551;

	t25 = (((x109^x110)/x111)-x112);

	if (t25 != 17) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x114 = -1LL;
	volatile int8_t x115 = INT8_MIN;
	int32_t x116 = INT32_MIN;
	int64_t t26 = -1LL;

	t26 = (((x113^x114)/x115)-x116);

	if (t26 != 2147483904LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x117 = -1;
	uint16_t x118 = 572U;
	int16_t x119 = INT16_MAX;
	static int8_t x120 = -1;

	t27 = (((x117^x118)/x119)-x120);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x121 = INT64_MAX;
	static volatile int8_t x122 = -9;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	volatile int64_t t28 = 355289LL;

	t28 = (((x121^x122)/x123)-x124);

	if (t28 != 72057594037928063LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x125 = 1U;
	uint16_t x126 = UINT16_MAX;
	uint64_t x127 = UINT64_MAX;
	int8_t x128 = INT8_MIN;
	volatile uint64_t t29 = 10LLU;

	t29 = (((x125^x126)/x127)-x128);

	if (t29 != 128LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = 3;
	volatile int16_t x130 = 8605;
	volatile int16_t x131 = -11;
	int16_t x132 = -6925;
	static int32_t t30 = 384;

	t30 = (((x129^x130)/x131)-x132);

	if (t30 != 6143) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	int16_t x135 = INT16_MIN;
	volatile int32_t x136 = -1;

	t31 = (((x133^x134)/x135)-x136);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = -1;
	uint32_t x139 = 9U;
	uint64_t x140 = 353028295LLU;
	uint64_t t32 = 474368853LLU;

	t32 = (((x137^x138)/x139)-x140);

	if (t32 != 18446744073356523321LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 28172U;
	int8_t x142 = -22;
	volatile uint64_t x143 = 9190453101805LLU;
	static volatile uint64_t t33 = 860161302173249699LLU;

	t33 = (((x141^x142)/x143)-x144);

	if (t33 != 2039931LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MAX;
	uint8_t x146 = 0U;
	static uint8_t x147 = UINT8_MAX;
	int32_t x148 = -1;

	t34 = (((x145^x146)/x147)-x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x153 = UINT32_MAX;
	int64_t x154 = 649203LL;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MAX;
	int64_t t35 = -861LL;

	t35 = (((x153^x154)/x155)-x156);

	if (t35 != 98289LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x157 = INT16_MIN;
	int8_t x158 = -1;
	uint32_t t36 = 10U;

	t36 = (((x157^x158)/x159)-x160);

	if (t36 != 2154062997U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x161 = 6U;
	static uint8_t x163 = 2U;
	uint16_t x164 = UINT16_MAX;

	t37 = (((x161^x162)/x163)-x164);

	if (t37 != -65538) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -60326111933927LL;
	int16_t x167 = INT16_MAX;
	int32_t x168 = INT32_MAX;
	volatile int64_t t38 = 258870507LL;

	t38 = (((x165^x166)/x167)-x168);

	if (t38 != -306420629LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = 0LL;
	uint32_t x170 = UINT32_MAX;
	uint64_t x171 = 4251146090LLU;
	static int32_t x172 = INT32_MIN;
	uint64_t t39 = 56852135LLU;

	t39 = (((x169^x170)/x171)-x172);

	if (t39 != 2147483649LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = INT64_MIN;
	static uint64_t x174 = UINT64_MAX;
	int16_t x175 = INT16_MAX;
	int32_t x176 = -1;
	uint64_t t40 = 194LLU;

	t40 = (((x173^x174)/x175)-x176);

	if (t40 != 281483566907401LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = -1LL;
	uint16_t x180 = 4U;
	volatile int64_t t41 = -464088601LL;

	t41 = (((x177^x178)/x179)-x180);

	if (t41 != -4LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x182 = INT64_MIN;
	uint16_t x183 = 684U;
	static int8_t x184 = -5;
	int64_t t42 = 1794395LL;

	t42 = (((x181^x182)/x183)-x184);

	if (t42 != -13484462041970871LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 39526U;
	int64_t x186 = INT64_MIN;
	volatile int16_t x187 = INT16_MIN;
	int32_t x188 = -6181848;
	volatile int64_t t43 = -17672902LL;

	t43 = (((x185^x186)/x187)-x188);

	if (t43 != 281474982892502LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = 338102828468651LLU;
	uint32_t x192 = 11942U;
	uint64_t t44 = 181905469228255LLU;

	t44 = (((x189^x190)/x191)-x192);

	if (t44 != 18446744073709539675LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x194 = UINT64_MAX;
	int32_t x196 = INT32_MIN;
	volatile uint64_t t45 = 3069029LLU;

	t45 = (((x193^x194)/x195)-x196);

	if (t45 != 6442450944LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = 0;
	volatile int32_t x198 = INT32_MAX;
	volatile int64_t x199 = 11062357LL;
	int16_t x200 = INT16_MAX;
	volatile int64_t t46 = -30LL;

	t46 = (((x197^x198)/x199)-x200);

	if (t46 != -32573LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = 70027;
	uint16_t x202 = UINT16_MAX;
	static int32_t x204 = INT32_MIN;
	volatile int32_t t47 = -24091;

	t47 = (((x201^x202)/x203)-x204);

	if (t47 != 2147357068) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = 3;
	uint64_t x206 = 965919122LLU;
	static int32_t x208 = INT32_MAX;
	uint64_t t48 = 4186363711476LLU;

	t48 = (((x205^x206)/x207)-x208);

	if (t48 != 18446744072527987090LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x209 = INT8_MIN;
	int64_t x210 = -1LL;
	static int8_t x211 = 1;
	volatile uint16_t x212 = UINT16_MAX;
	int64_t t49 = -11499597244244LL;

	t49 = (((x209^x210)/x211)-x212);

	if (t49 != -65408LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -1;
	uint64_t x214 = UINT64_MAX;
	static int16_t x215 = INT16_MAX;
	int64_t x216 = INT64_MIN;
	uint64_t t50 = 8934188159905591309LLU;

	t50 = (((x213^x214)/x215)-x216);

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x217 = INT8_MIN;
	int8_t x218 = INT8_MIN;
	static int32_t x219 = -14;
	int8_t x220 = INT8_MIN;

	t51 = (((x217^x218)/x219)-x220);

	if (t51 != 128) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -249571;
	int8_t x222 = -1;
	uint8_t x223 = 2U;
	volatile int32_t t52 = -317;

	t52 = (((x221^x222)/x223)-x224);

	if (t52 != 124785) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = -1;
	int8_t x227 = -1;

	t53 = (((x225^x226)/x227)-x228);

	if (t53 != 96844351) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = 126377238U;
	int32_t x230 = INT32_MIN;
	volatile int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MAX;
	static int64_t t54 = -3042716LL;

	t54 = (((x229^x230)/x231)-x232);

	if (t54 != -127LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MIN;
	uint8_t x234 = 81U;
	uint16_t x235 = 998U;
	volatile int32_t x236 = -1;
	volatile int32_t t55 = -21912931;

	t55 = (((x233^x234)/x235)-x236);

	if (t55 != -31) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t56 = 2408492;

	t56 = (((x237^x238)/x239)-x240);

	if (t56 != -16842495) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x243 = INT64_MIN;
	static volatile int16_t x244 = -1;
	volatile int64_t t57 = 522613LL;

	t57 = (((x241^x242)/x243)-x244);

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 48;
	volatile uint32_t x246 = 110052430U;
	static uint16_t x247 = UINT16_MAX;
	volatile uint32_t t58 = 0U;

	t58 = (((x245^x246)/x247)-x248);

	if (t58 != 1679U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x249 = INT32_MAX;
	int64_t x250 = -8504752664594458LL;
	volatile uint32_t x251 = 98225272U;
	int16_t x252 = INT16_MIN;
	volatile int64_t t59 = 3426135LL;

	t59 = (((x249^x250)/x251)-x252);

	if (t59 != -86551410LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x254 = INT64_MIN;
	int8_t x255 = -5;
	volatile uint64_t x256 = 590343621493675749LLU;
	volatile uint64_t t60 = 2034780654LLU;

	t60 = (((x253^x254)/x255)-x256);

	if (t60 != 1254330785877279409LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = 104927475U;
	int32_t x259 = -1;
	uint32_t t61 = 1026U;

	t61 = (((x257^x258)/x259)-x260);

	if (t61 != 3U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = -1;
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = -341361;
	static int32_t x264 = -1;

	t62 = (((x261^x262)/x263)-x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x265 = 884025U;
	int16_t x266 = 1;
	int32_t x267 = 343;
	int64_t x268 = INT64_MAX;
	int64_t t63 = -1LL;

	t63 = (((x265^x266)/x267)-x268);

	if (t63 != -9223372036854773230LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 251467159U;
	int32_t x271 = -1;
	int16_t x272 = 0;
	volatile int64_t t64 = 1LL;

	t64 = (((x269^x270)/x271)-x272);

	if (t64 != 9223372036603308649LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x274 = 4995614977LL;
	static int8_t x275 = -1;
	uint16_t x276 = 8U;
	volatile uint64_t t65 = 1621771LLU;

	t65 = (((x273^x274)/x275)-x276);

	if (t65 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = 0;
	uint32_t x279 = UINT32_MAX;
	volatile int64_t x280 = -1LL;

	t66 = (((x277^x278)/x279)-x280);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = -1;
	int8_t x283 = -7;
	uint32_t x284 = 4620U;
	volatile uint32_t t67 = 28393U;

	t67 = (((x281^x282)/x283)-x284);

	if (t67 != 4294962658U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = 86U;
	volatile int32_t x286 = INT32_MIN;
	uint64_t x288 = 3034712422LLU;
	uint64_t t68 = 61515342755962LLU;

	t68 = (((x285^x286)/x287)-x288);

	if (t68 != 18446744072822322756LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = -46;
	uint64_t x290 = UINT64_MAX;
	static volatile int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	uint64_t t69 = 43657184LLU;

	t69 = (((x289^x290)/x291)-x292);

	if (t69 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x297 = INT16_MAX;
	static int64_t x298 = INT64_MAX;
	uint8_t x299 = 14U;
	int64_t x300 = 3LL;
	int64_t t70 = 62LL;

	t70 = (((x297^x298)/x299)-x300);

	if (t70 != 658812288346767357LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x301 = 414;
	int32_t x302 = INT32_MIN;
	volatile int8_t x303 = INT8_MAX;
	int8_t x304 = -1;
	int32_t t71 = 3;

	t71 = (((x301^x302)/x303)-x304);

	if (t71 != -16909315) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x309 = 22420107278520945LLU;
	int16_t x310 = -1;
	int32_t x311 = INT32_MIN;

	t72 = (((x309^x310)/x311)-x312);

	if (t72 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = INT64_MAX;
	int32_t x314 = INT32_MIN;
	static int64_t x315 = 441748251086322LL;
	static volatile int16_t x316 = 13;
	volatile int64_t t73 = -3989547667093LL;

	t73 = (((x313^x314)/x315)-x316);

	if (t73 != -20892LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x317 = INT8_MIN;
	int32_t x318 = 676020344;
	static int32_t x319 = -6;
	volatile uint16_t x320 = 69U;
	static volatile int32_t t74 = 737036;

	t74 = (((x317^x318)/x319)-x320);

	if (t74 != 112669969) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	uint8_t x322 = UINT8_MAX;
	static uint64_t x323 = 16LLU;
	uint32_t x324 = 211049606U;
	volatile uint64_t t75 = 2599511584LLU;

	t75 = (((x321^x322)/x323)-x324);

	if (t75 != 576460752092373897LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = 25;
	static uint16_t x328 = 3U;
	volatile int32_t t76 = -132;

	t76 = (((x325^x326)/x327)-x328);

	if (t76 != -3) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x329 = UINT8_MAX;
	uint32_t x330 = UINT32_MAX;
	int8_t x331 = INT8_MIN;
	static uint16_t x332 = 4354U;
	uint32_t t77 = 1244600756U;

	t77 = (((x329^x330)/x331)-x332);

	if (t77 != 4294962942U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x333 = INT32_MIN;
	int8_t x334 = INT8_MAX;
	uint16_t x335 = 245U;
	int16_t x336 = -1;
	volatile int32_t t78 = -443988446;

	t78 = (((x333^x334)/x335)-x336);

	if (t78 != -8765237) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MAX;
	int64_t x340 = 58265258006404LL;
	volatile uint64_t t79 = 393321108657475LLU;

	t79 = (((x337^x338)/x339)-x340);

	if (t79 != 18446685808451545213LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x342 = -13;
	volatile int64_t x344 = 1364LL;
	int64_t t80 = 42488719LL;

	t80 = (((x341^x342)/x343)-x344);

	if (t80 != -1364LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x346 = -23;
	int16_t x348 = 2;
	volatile int32_t t81 = -5844497;

	t81 = (((x345^x346)/x347)-x348);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x349 = 222712U;
	uint8_t x352 = 29U;

	t82 = (((x349^x350)/x351)-x352);

	if (t82 != 281479271743456LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x353 = INT32_MAX;
	volatile uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = 4;
	volatile int16_t x356 = INT16_MAX;
	static int32_t t83 = 46099;

	t83 = (((x353^x354)/x355)-x356);

	if (t83 != 536821761) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = 2479408863206LL;
	static int64_t x362 = INT64_MIN;
	int8_t x363 = INT8_MAX;

	t84 = (((x361^x362)/x363)-x364);

	if (t84 != -72383341447384778LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = -1LL;
	int32_t x367 = INT32_MIN;
	volatile int16_t x368 = -1;
	volatile int64_t t85 = -640LL;

	t85 = (((x365^x366)/x367)-x368);

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = -1;
	int64_t x378 = -134561128952324LL;
	volatile int16_t x379 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t86 = 359877752657929513LLU;

	t86 = (((x377^x378)/x379)-x380);

	if (t86 != 18446744069603071852LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = 689;
	int64_t x382 = 91405951LL;
	volatile int32_t x383 = -1;
	int8_t x384 = INT8_MIN;
	static volatile int64_t t87 = 4232LL;

	t87 = (((x381^x382)/x383)-x384);

	if (t87 != -91405390LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	volatile int8_t x386 = -1;
	static int16_t x387 = INT16_MIN;
	uint64_t x388 = 30767343LLU;

	t88 = (((x385^x386)/x387)-x388);

	if (t88 != 18446744073678784273LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -1;
	uint32_t x390 = 3U;
	int64_t x391 = INT64_MIN;
	int16_t x392 = INT16_MIN;
	int64_t t89 = -3169LL;

	t89 = (((x389^x390)/x391)-x392);

	if (t89 != 32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x393 = 274031481034LLU;
	static volatile int64_t x394 = -1LL;
	volatile int64_t x395 = INT64_MIN;
	int16_t x396 = INT16_MIN;
	uint64_t t90 = 104688585900103LLU;

	t90 = (((x393^x394)/x395)-x396);

	if (t90 != 32769LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x397 = -624;
	uint8_t x398 = 32U;
	int64_t x399 = -1LL;
	static uint64_t x400 = 12LLU;
	volatile uint64_t t91 = 720786144LLU;

	t91 = (((x397^x398)/x399)-x400);

	if (t91 != 580LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x401 = UINT32_MAX;
	volatile int8_t x403 = INT8_MAX;
	int16_t x404 = -1;
	volatile uint32_t t92 = 86068U;

	t92 = (((x401^x402)/x403)-x404);

	if (t92 != 33818383U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x406 = 174;
	uint64_t x407 = 57248841455394LLU;
	uint32_t x408 = UINT32_MAX;
	volatile uint64_t t93 = 1908052329080925LLU;

	t93 = (((x405^x406)/x407)-x408);

	if (t93 != 18446744069414906541LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	static int32_t x410 = -1;
	static uint64_t x412 = 15062LLU;
	uint64_t t94 = 22LLU;

	t94 = (((x409^x410)/x411)-x412);

	if (t94 != 281483566892338LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x414 = INT8_MIN;
	uint8_t x415 = UINT8_MAX;
	volatile int32_t x416 = INT32_MAX;
	int32_t t95 = 21;

	t95 = (((x413^x414)/x415)-x416);

	if (t95 != -2147483647) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x417 = INT32_MIN;
	static volatile int64_t x418 = INT64_MIN;
	static volatile int16_t x419 = -2244;
	int64_t x420 = INT64_MIN;
	int64_t t96 = 3LL;

	t96 = (((x417^x418)/x419)-x420);

	if (t96 != 9219261799762660259LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = -1LL;
	uint64_t x423 = 1367LLU;
	static int16_t x424 = INT16_MIN;
	uint64_t t97 = 118181592659LLU;

	t97 = (((x421^x422)/x423)-x424);

	if (t97 != 13494326315840779LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x425 = 2880951721049901LLU;
	uint16_t x427 = 1U;
	int64_t x428 = INT64_MIN;

	t98 = (((x425^x426)/x427)-x428);

	if (t98 != 9226252988575826130LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = INT64_MAX;
	static int8_t x430 = -3;
	static uint32_t x431 = UINT32_MAX;
	static int8_t x432 = 9;

	t99 = (((x429^x430)/x431)-x432);

	if (t99 != -2147483657LL) { NG(); } else { ; }
	
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

