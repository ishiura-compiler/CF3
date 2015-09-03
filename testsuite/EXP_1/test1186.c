#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
uint64_t x7 = UINT64_MAX;
volatile uint64_t x8 = UINT64_MAX;
uint32_t t2 = 126U;
int64_t x13 = 26839470087LL;
uint64_t x14 = 20LLU;
volatile uint32_t x22 = UINT32_MAX;
int8_t x26 = INT8_MAX;
volatile int32_t t6 = 120041;
uint8_t x30 = 57U;
int32_t x34 = INT32_MIN;
int32_t x35 = INT32_MAX;
uint16_t x39 = 5856U;
static int32_t x44 = INT32_MIN;
int16_t x46 = -1;
int16_t x47 = 3769;
static int8_t x51 = -53;
int32_t t12 = 886573250;
static int16_t x53 = 7505;
static volatile int32_t x58 = -1151;
int16_t x65 = -1;
static int32_t x66 = INT32_MIN;
int64_t x70 = 1LL;
uint32_t x80 = 15787545U;
static volatile int16_t x86 = -1;
uint32_t x91 = 465457U;
int8_t x93 = 1;
static int32_t x105 = INT32_MIN;
int32_t x106 = -764843459;
uint8_t x107 = 0U;
uint32_t t26 = 110316U;
uint32_t x128 = UINT32_MAX;
volatile uint32_t t27 = 1918836U;
volatile uint64_t t28 = 11522320560LLU;
int32_t t32 = -75283100;
int64_t x149 = INT64_MIN;
int32_t x152 = INT32_MIN;
int64_t x153 = INT64_MIN;
int32_t x154 = -239016555;
int16_t x156 = 0;
volatile int64_t t35 = 21512854397LL;
volatile int64_t x162 = INT64_MAX;
int16_t x163 = INT16_MIN;
uint16_t x169 = UINT16_MAX;
uint8_t x173 = 24U;
int64_t x183 = INT64_MAX;
int32_t x185 = -1;
static int16_t x189 = INT16_MAX;
static int16_t x192 = -1;
volatile uint16_t x193 = UINT16_MAX;
int32_t x201 = -1;
static int16_t x202 = INT16_MAX;
int16_t x208 = INT16_MIN;
volatile int32_t x217 = INT32_MIN;
int8_t x220 = INT8_MIN;
int32_t x221 = -1;
static int32_t t47 = 4840458;
static int64_t x228 = 0LL;
static volatile int8_t x229 = INT8_MAX;
int16_t x238 = INT16_MIN;
int16_t x239 = INT16_MAX;
int64_t x243 = 24LL;
int8_t x247 = -10;
volatile int32_t t54 = 2805397;
volatile int32_t x264 = -1;
int32_t t55 = 6;
uint64_t x265 = 1576986854LLU;
int8_t x267 = INT8_MAX;
volatile uint64_t x268 = 1460000594LLU;
volatile uint64_t t56 = 291028239398552571LLU;
uint64_t x275 = UINT64_MAX;
uint64_t t57 = 79348897757407677LLU;
static int32_t t60 = 8353109;
uint32_t x297 = 759595U;
int32_t x303 = -1;
static int8_t x306 = INT8_MIN;
static int64_t x307 = INT64_MIN;
int16_t x309 = INT16_MIN;
static volatile int8_t x312 = -1;
uint32_t x313 = 60U;
int16_t x321 = INT16_MIN;
int16_t x344 = -1;
static int64_t x358 = INT64_MAX;
volatile int64_t t73 = -5610871LL;
static volatile uint8_t x368 = 2U;
volatile int8_t x370 = -1;
static uint32_t x371 = 6958000U;
volatile int8_t x384 = INT8_MIN;
int16_t x385 = -1;
volatile int32_t x386 = -225041;
static int8_t x387 = INT8_MAX;
int64_t x389 = INT64_MIN;
int8_t x391 = 0;
int64_t x392 = INT64_MIN;
uint8_t x396 = 4U;
volatile uint64_t t81 = 23903801056905014LLU;
volatile uint16_t x426 = UINT16_MAX;
static uint8_t x430 = UINT8_MAX;
uint8_t x433 = 6U;
static int8_t x435 = -1;
static volatile int32_t t88 = 6;
volatile int64_t t89 = 323841373LL;
int32_t x441 = -246;
uint8_t x443 = 22U;
volatile int8_t x444 = -2;
int32_t t90 = -479913635;
uint32_t x447 = UINT32_MAX;
uint64_t x448 = 1719619564857496366LLU;
uint16_t x454 = UINT16_MAX;
volatile uint32_t t92 = 2U;
volatile uint16_t x459 = UINT16_MAX;
int64_t x465 = -1LL;
volatile int8_t x473 = -5;
volatile int64_t x478 = -27468LL;
uint64_t x479 = 111293246832LLU;
volatile uint64_t t98 = 334LLU;


void f0(void) {
	int8_t x2 = 55;
	static uint32_t x3 = UINT32_MAX;
	int32_t x4 = -1;
	uint32_t t0 = 146U;

	t0 = (((x1==x2)+x3)*x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -18;
	volatile int16_t x6 = INT16_MAX;
	uint64_t t1 = 196104LLU;

	t1 = (((x5==x6)+x7)*x8);

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int16_t x10 = INT16_MIN;
	static int32_t x11 = -1;
	uint32_t x12 = 50U;

	t2 = (((x9==x10)+x11)*x12);

	if (t2 != 4294967246U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = INT16_MAX;
	int8_t x16 = INT8_MIN;
	volatile int32_t t3 = -686;

	t3 = (((x13==x14)+x15)*x16);

	if (t3 != -4194176) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MIN;
	int64_t x19 = INT64_MAX;
	int32_t x20 = -1;
	int64_t t4 = -46431928606941475LL;

	t4 = (((x17==x18)+x19)*x20);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	static int8_t x23 = INT8_MIN;
	volatile int8_t x24 = -47;
	static int32_t t5 = 2665;

	t5 = (((x21==x22)+x23)*x24);

	if (t5 != 6016) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int16_t x27 = 5;
	int8_t x28 = INT8_MIN;

	t6 = (((x25==x26)+x27)*x28);

	if (t6 != -640) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	static int16_t x31 = INT16_MIN;
	uint64_t x32 = 220108183400088407LLU;
	uint64_t t7 = 15287LLU;

	t7 = (((x29==x30)+x31)*x32);

	if (t7 != 171979166337761280LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MAX;
	static uint64_t x36 = 63250689LLU;
	volatile uint64_t t8 = 1931905812215LLU;

	t8 = (((x33==x34)+x35)*x36);

	if (t8 != 135829820288982783LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -520;
	uint64_t x38 = 13882268LLU;
	int8_t x40 = 0;
	volatile int32_t t9 = -58150;

	t9 = (((x37==x38)+x39)*x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 4U;
	uint32_t x42 = 30761U;
	static uint32_t x43 = 24468U;
	uint32_t t10 = 3U;

	t10 = (((x41==x42)+x43)*x44);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -391;
	static uint32_t x48 = 770958052U;
	volatile uint32_t t11 = 537694U;

	t11 = (((x45==x46)+x47)*x48);

	if (t11 != 2343005892U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 3U;
	int16_t x50 = 0;
	static int16_t x52 = -1;

	t12 = (((x49==x50)+x51)*x52);

	if (t12 != 53) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x54 = 788469086U;
	uint8_t x55 = UINT8_MAX;
	static uint32_t x56 = 1700U;
	uint32_t t13 = 19793U;

	t13 = (((x53==x54)+x55)*x56);

	if (t13 != 433500U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -7662218568167LL;
	static uint8_t x59 = UINT8_MAX;
	uint64_t x60 = UINT64_MAX;
	static volatile uint64_t t14 = 19209608120026LLU;

	t14 = (((x57==x58)+x59)*x60);

	if (t14 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x67 = -1;
	int16_t x68 = -1;
	static volatile int32_t t15 = 15;

	t15 = (((x65==x66)+x67)*x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x69 = 1186381863U;
	volatile uint16_t x71 = 1U;
	int32_t x72 = INT32_MAX;
	volatile int32_t t16 = INT32_MAX;

	t16 = (((x69==x70)+x71)*x72);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 395165518U;
	volatile int32_t x74 = INT32_MAX;
	static int64_t x75 = -1LL;
	int8_t x76 = -1;
	volatile int64_t t17 = -220581LL;

	t17 = (((x73==x74)+x75)*x76);

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x77 = INT8_MIN;
	static int64_t x78 = INT64_MIN;
	int64_t x79 = -1LL;
	volatile int64_t t18 = -251672575919139948LL;

	t18 = (((x77==x78)+x79)*x80);

	if (t18 != -15787545LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x81 = -1;
	int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	static volatile int32_t t19 = 1165;

	t19 = (((x81==x82)+x83)*x84);

	if (t19 != -4161536) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = INT8_MAX;
	uint64_t x87 = 4008613325857LLU;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t20 = 4443136658279009LLU;

	t20 = (((x85==x86)+x87)*x88);

	if (t20 != 18315389832247869440LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	static int8_t x90 = INT8_MIN;
	static uint16_t x92 = UINT16_MAX;
	volatile uint32_t t21 = 3U;

	t21 = (((x89==x90)+x91)*x92);

	if (t21 != 438953423U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x94 = -20;
	uint8_t x95 = 0U;
	uint64_t x96 = UINT64_MAX;
	uint64_t t22 = 2LLU;

	t22 = (((x93==x94)+x95)*x96);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x101 = 104U;
	uint8_t x102 = 84U;
	int32_t x103 = -193176507;
	int64_t x104 = 2589369LL;
	static volatile int64_t t23 = 57392312697LL;

	t23 = (((x101==x102)+x103)*x104);

	if (t23 != -500205258754083LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x108 = UINT8_MAX;
	volatile int32_t t24 = -87199776;

	t24 = (((x105==x106)+x107)*x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = 0U;
	static int8_t x110 = INT8_MAX;
	static volatile int8_t x111 = -1;
	volatile int8_t x112 = INT8_MAX;
	static int32_t t25 = -7;

	t25 = (((x109==x110)+x111)*x112);

	if (t25 != -127) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MAX;
	volatile uint32_t x123 = 13289U;
	uint8_t x124 = UINT8_MAX;

	t26 = (((x121==x122)+x123)*x124);

	if (t26 != 3388695U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x125 = INT32_MIN;
	volatile uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MAX;

	t27 = (((x125==x126)+x127)*x128);

	if (t27 != 4294967169U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x129 = 4201093950LLU;
	int8_t x130 = -15;
	int64_t x131 = INT64_MIN;
	uint64_t x132 = UINT64_MAX;

	t28 = (((x129==x130)+x131)*x132);

	if (t28 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = INT64_MAX;
	int64_t x134 = INT64_MIN;
	volatile int16_t x135 = -442;
	uint64_t x136 = 3576253151074458349LLU;
	volatile uint64_t t29 = 185309503LLU;

	t29 = (((x133==x134)+x135)*x136);

	if (t29 != 5716097564110848718LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x137 = INT64_MIN;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = 7;
	volatile uint8_t x140 = 47U;
	volatile int32_t t30 = -254230581;

	t30 = (((x137==x138)+x139)*x140);

	if (t30 != 329) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MAX;
	int8_t x143 = -1;
	uint16_t x144 = UINT16_MAX;
	volatile int32_t t31 = -563;

	t31 = (((x141==x142)+x143)*x144);

	if (t31 != -65535) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x145 = INT8_MIN;
	static uint16_t x146 = 13U;
	int8_t x147 = INT8_MIN;
	int8_t x148 = INT8_MIN;

	t32 = (((x145==x146)+x147)*x148);

	if (t32 != 16384) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x150 = -1LL;
	volatile uint64_t x151 = 17920556364655598LLU;
	static volatile uint64_t t33 = 25187LLU;

	t33 = (((x149==x150)+x151)*x152);

	if (t33 != 12239246708592082944LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x155 = -792;
	volatile int32_t t34 = 8733;

	t34 = (((x153==x154)+x155)*x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = UINT64_MAX;
	int16_t x158 = INT16_MIN;
	int64_t x159 = -1LL;
	volatile uint8_t x160 = 12U;

	t35 = (((x157==x158)+x159)*x160);

	if (t35 != -12LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -24568912487LL;
	static int8_t x164 = 13;
	int32_t t36 = 30567949;

	t36 = (((x161==x162)+x163)*x164);

	if (t36 != -425984) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	uint32_t x166 = 117U;
	int8_t x167 = -1;
	static int32_t x168 = 16158884;
	int32_t t37 = 5470633;

	t37 = (((x165==x166)+x167)*x168);

	if (t37 != -16158884) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x170 = INT16_MIN;
	int64_t x171 = -309LL;
	int32_t x172 = 7508;
	int64_t t38 = 49593141710LL;

	t38 = (((x169==x170)+x171)*x172);

	if (t38 != -2319972LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = INT64_MAX;
	int8_t x175 = -1;
	volatile int8_t x176 = INT8_MAX;
	volatile int32_t t39 = 15;

	t39 = (((x173==x174)+x175)*x176);

	if (t39 != -127) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = 19;
	volatile int64_t x182 = INT64_MIN;
	volatile uint64_t x184 = 16641641966666LLU;
	volatile uint64_t t40 = 7470156626750LLU;

	t40 = (((x181==x182)+x183)*x184);

	if (t40 != 18446727432067584950LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x186 = 1138216LL;
	volatile int16_t x187 = -1;
	int16_t x188 = -307;
	int32_t t41 = 115389198;

	t41 = (((x185==x186)+x187)*x188);

	if (t41 != 307) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x190 = 403LLU;
	uint16_t x191 = UINT16_MAX;
	static volatile int32_t t42 = -3284;

	t42 = (((x189==x190)+x191)*x192);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x194 = INT32_MAX;
	volatile int64_t x195 = -1247554445651521LL;
	int8_t x196 = 0;
	static volatile int64_t t43 = -1223LL;

	t43 = (((x193==x194)+x195)*x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x203 = -1;
	int8_t x204 = -1;
	volatile int32_t t44 = -1671;

	t44 = (((x201==x202)+x203)*x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x205 = INT32_MAX;
	int64_t x206 = -4394LL;
	int16_t x207 = INT16_MIN;
	volatile int32_t t45 = 799749;

	t45 = (((x205==x206)+x207)*x208);

	if (t45 != 1073741824) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x218 = INT64_MIN;
	uint32_t x219 = UINT32_MAX;
	volatile uint32_t t46 = 63865U;

	t46 = (((x217==x218)+x219)*x220);

	if (t46 != 128U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x222 = UINT16_MAX;
	volatile int16_t x223 = INT16_MIN;
	volatile int32_t x224 = -1;

	t47 = (((x221==x222)+x223)*x224);

	if (t47 != 32768) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	int16_t x226 = 209;
	static int8_t x227 = -1;
	int64_t t48 = -680150LL;

	t48 = (((x225==x226)+x227)*x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x230 = INT8_MAX;
	static uint64_t x231 = UINT64_MAX;
	static int8_t x232 = INT8_MAX;
	volatile uint64_t t49 = 0LLU;

	t49 = (((x229==x230)+x231)*x232);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x237 = INT32_MIN;
	static int32_t x240 = -206;
	int32_t t50 = 10;

	t50 = (((x237==x238)+x239)*x240);

	if (t50 != -6750002) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = -1;
	int64_t x244 = -1LL;
	volatile int64_t t51 = -536062374866316912LL;

	t51 = (((x241==x242)+x243)*x244);

	if (t51 != -24LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x245 = INT16_MAX;
	static int64_t x246 = -1LL;
	int16_t x248 = -178;
	static int32_t t52 = -31847;

	t52 = (((x245==x246)+x247)*x248);

	if (t52 != 1780) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x249 = 11826;
	uint32_t x250 = 910335U;
	static uint8_t x251 = UINT8_MAX;
	int64_t x252 = -1924349001LL;
	int64_t t53 = -8LL;

	t53 = (((x249==x250)+x251)*x252);

	if (t53 != -490708995255LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MIN;
	volatile int8_t x254 = -1;
	int32_t x255 = 14062341;
	int16_t x256 = -1;

	t54 = (((x253==x254)+x255)*x256);

	if (t54 != -14062341) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x261 = -1;
	volatile int32_t x262 = INT32_MIN;
	int16_t x263 = -1;

	t55 = (((x261==x262)+x263)*x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x266 = -1206670216473185LL;

	t56 = (((x265==x266)+x267)*x268);

	if (t56 != 185420075438LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x273 = -1;
	volatile int8_t x274 = -1;
	static volatile uint64_t x276 = 4884820685LLU;

	t57 = (((x273==x274)+x275)*x276);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x281 = INT32_MIN;
	static int16_t x282 = INT16_MIN;
	uint8_t x283 = UINT8_MAX;
	static uint8_t x284 = 91U;
	int32_t t58 = 6;

	t58 = (((x281==x282)+x283)*x284);

	if (t58 != 23205) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x285 = -3233;
	int64_t x286 = INT64_MIN;
	int8_t x287 = INT8_MAX;
	int16_t x288 = 9;
	int32_t t59 = 108;

	t59 = (((x285==x286)+x287)*x288);

	if (t59 != 1143) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x293 = INT16_MIN;
	static volatile int8_t x294 = INT8_MAX;
	uint8_t x295 = 11U;
	volatile uint16_t x296 = 16U;

	t60 = (((x293==x294)+x295)*x296);

	if (t60 != 176) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x298 = INT16_MIN;
	static int64_t x299 = -1LL;
	static uint64_t x300 = 11861591778880491LLU;
	uint64_t t61 = 1107259888716720061LLU;

	t61 = (((x297==x298)+x299)*x300);

	if (t61 != 18434882481930671125LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	int32_t x304 = INT32_MAX;
	volatile int32_t t62 = 2;

	t62 = (((x301==x302)+x303)*x304);

	if (t62 != -2147483647) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x305 = INT8_MAX;
	int16_t x308 = 1;
	volatile int64_t t63 = INT64_MIN;

	t63 = (((x305==x306)+x307)*x308);

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x310 = INT32_MIN;
	volatile int64_t x311 = -2600LL;
	volatile int64_t t64 = 69706727892309868LL;

	t64 = (((x309==x310)+x311)*x312);

	if (t64 != 2600LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x314 = -3;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = 3963U;
	uint32_t t65 = 150524U;

	t65 = (((x313==x314)+x315)*x316);

	if (t65 != 503301U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = 143289LL;
	int8_t x318 = -1;
	volatile uint8_t x319 = 0U;
	int64_t x320 = INT64_MIN;
	int64_t t66 = -28875184287698LL;

	t66 = (((x317==x318)+x319)*x320);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x322 = -860418129;
	int8_t x323 = INT8_MIN;
	static volatile uint64_t x324 = 130480247390777LLU;
	static volatile uint64_t t67 = 450239241126999945LLU;

	t67 = (((x321==x322)+x323)*x324);

	if (t67 != 18430042602043532160LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x329 = 1U;
	static uint16_t x330 = 2U;
	uint32_t x331 = 493326060U;
	volatile uint16_t x332 = 8U;
	uint32_t t68 = 7833U;

	t68 = (((x329==x330)+x331)*x332);

	if (t68 != 3946608480U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x333 = 15429U;
	volatile int8_t x334 = INT8_MIN;
	int16_t x335 = -6;
	volatile int16_t x336 = -559;
	volatile int32_t t69 = -53;

	t69 = (((x333==x334)+x335)*x336);

	if (t69 != 3354) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x337 = -43;
	static int32_t x338 = 6208694;
	int32_t x339 = 55;
	uint16_t x340 = 18U;
	volatile int32_t t70 = 195396;

	t70 = (((x337==x338)+x339)*x340);

	if (t70 != 990) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x341 = INT64_MIN;
	volatile int16_t x342 = INT16_MIN;
	int16_t x343 = -2260;
	volatile int32_t t71 = 20172;

	t71 = (((x341==x342)+x343)*x344);

	if (t71 != 2260) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x349 = 43U;
	int16_t x350 = INT16_MIN;
	uint16_t x351 = 13069U;
	uint32_t x352 = 334136U;
	volatile uint32_t t72 = 7697U;

	t72 = (((x349==x350)+x351)*x352);

	if (t72 != 71856088U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x357 = INT16_MAX;
	volatile int64_t x359 = 3273342LL;
	uint16_t x360 = UINT16_MAX;

	t73 = (((x357==x358)+x359)*x360);

	if (t73 != 214518467970LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x365 = 42099466971541LLU;
	int8_t x366 = INT8_MIN;
	int16_t x367 = -1;
	int32_t t74 = -27;

	t74 = (((x365==x366)+x367)*x368);

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x369 = 418587U;
	static int8_t x372 = INT8_MIN;
	volatile uint32_t t75 = 1089U;

	t75 = (((x369==x370)+x371)*x372);

	if (t75 != 3404343296U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x381 = INT32_MAX;
	static int32_t x382 = -184615497;
	int8_t x383 = INT8_MAX;
	volatile int32_t t76 = -497558889;

	t76 = (((x381==x382)+x383)*x384);

	if (t76 != -16256) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x388 = UINT32_MAX;
	volatile uint32_t t77 = 4952U;

	t77 = (((x385==x386)+x387)*x388);

	if (t77 != 4294967169U) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x390 = 72739941370137265LLU;
	int64_t t78 = -46308146780595642LL;

	t78 = (((x389==x390)+x391)*x392);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x393 = 1;
	volatile uint8_t x394 = 30U;
	static int16_t x395 = -1;
	int32_t t79 = 8394;

	t79 = (((x393==x394)+x395)*x396);

	if (t79 != -4) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint64_t x397 = UINT64_MAX;
	static volatile int16_t x398 = 10181;
	uint8_t x399 = UINT8_MAX;
	int8_t x400 = INT8_MAX;
	volatile int32_t t80 = 22306444;

	t80 = (((x397==x398)+x399)*x400);

	if (t80 != 32385) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x401 = 1;
	volatile int8_t x402 = 1;
	uint32_t x403 = 7U;
	static volatile uint64_t x404 = 76433829488LLU;

	t81 = (((x401==x402)+x403)*x404);

	if (t81 != 611470635904LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x405 = -603;
	static uint16_t x406 = 1740U;
	static int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	uint64_t t82 = 54187LLU;

	t82 = (((x405==x406)+x407)*x408);

	if (t82 != 128LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x409 = UINT16_MAX;
	volatile int16_t x410 = 46;
	static int64_t x411 = -1LL;
	static volatile uint32_t x412 = UINT32_MAX;
	volatile int64_t t83 = 0LL;

	t83 = (((x409==x410)+x411)*x412);

	if (t83 != -4294967295LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = -1LL;
	uint32_t x414 = 218473U;
	int8_t x415 = INT8_MAX;
	static int64_t x416 = -1LL;
	volatile int64_t t84 = 12806380291LL;

	t84 = (((x413==x414)+x415)*x416);

	if (t84 != -127LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x421 = 733427U;
	int16_t x422 = INT16_MAX;
	uint16_t x423 = 7956U;
	uint8_t x424 = 4U;
	volatile int32_t t85 = 0;

	t85 = (((x421==x422)+x423)*x424);

	if (t85 != 31824) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x425 = 11;
	uint64_t x427 = 3402858469LLU;
	int64_t x428 = -1LL;
	volatile uint64_t t86 = 5393LLU;

	t86 = (((x425==x426)+x427)*x428);

	if (t86 != 18446744070306693147LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x429 = 7032287870724LLU;
	int8_t x431 = INT8_MAX;
	volatile int32_t x432 = -3218;
	int32_t t87 = -47906;

	t87 = (((x429==x430)+x431)*x432);

	if (t87 != -408686) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x434 = UINT64_MAX;
	uint8_t x436 = 86U;

	t88 = (((x433==x434)+x435)*x436);

	if (t88 != -86) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x437 = -1LL;
	static int8_t x438 = INT8_MAX;
	static int64_t x439 = -1LL;
	int32_t x440 = INT32_MIN;

	t89 = (((x437==x438)+x439)*x440);

	if (t89 != 2147483648LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x442 = -1;

	t90 = (((x441==x442)+x443)*x444);

	if (t90 != -44) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x445 = UINT8_MAX;
	static int8_t x446 = INT8_MIN;
	volatile uint64_t t91 = 63093LLU;

	t91 = (((x445==x446)+x447)*x448);

	if (t91 != 596518369295559890LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x453 = UINT32_MAX;
	static uint32_t x455 = UINT32_MAX;
	uint16_t x456 = 1780U;

	t92 = (((x453==x454)+x455)*x456);

	if (t92 != 4294965516U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x457 = 0U;
	static volatile uint64_t x458 = 6491237020852LLU;
	uint64_t x460 = 3622272587728LLU;
	uint64_t t93 = 11264442589289705LLU;

	t93 = (((x457==x458)+x459)*x460);

	if (t93 != 237385634036754480LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x461 = INT32_MIN;
	uint16_t x462 = 1061U;
	static int16_t x463 = INT16_MAX;
	uint8_t x464 = 21U;
	volatile int32_t t94 = 2089876;

	t94 = (((x461==x462)+x463)*x464);

	if (t94 != 688107) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x466 = INT32_MIN;
	int16_t x467 = -1;
	int64_t x468 = -664623565428LL;
	static volatile int64_t t95 = 109014874912570755LL;

	t95 = (((x465==x466)+x467)*x468);

	if (t95 != 664623565428LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x469 = INT8_MIN;
	int32_t x470 = INT32_MIN;
	volatile int8_t x471 = 1;
	int16_t x472 = -31;
	static int32_t t96 = 1766357;

	t96 = (((x469==x470)+x471)*x472);

	if (t96 != -31) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x474 = INT16_MIN;
	static volatile uint64_t x475 = 248563LLU;
	volatile uint32_t x476 = 345U;
	volatile uint64_t t97 = 853905787004129LLU;

	t97 = (((x473==x474)+x475)*x476);

	if (t97 != 85754235LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x477 = -7;
	static int8_t x480 = 8;

	t98 = (((x477==x478)+x479)*x480);

	if (t98 != 890345974656LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x481 = -156333728010819586LL;
	static volatile int64_t x482 = -1LL;
	int16_t x483 = INT16_MAX;
	volatile int16_t x484 = INT16_MIN;
	volatile int32_t t99 = 0;

	t99 = (((x481==x482)+x483)*x484);

	if (t99 != -1073709056) { NG(); } else { ; }
	
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

